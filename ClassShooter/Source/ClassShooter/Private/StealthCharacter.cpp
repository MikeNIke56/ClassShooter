// Fill out your copyright notice in the Description page of Project Settings.


#include "StealthCharacter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"


void AStealthCharacter::BeginPlay()
{
	Super::BeginPlay();
	cameraUltLerp = false;
	cameraUltLerpBack = false;
	targetUltPos = originalCamPos;
	targetUltPos.X -= 250;
	targetUltPos.Z += 50;
}

void AStealthCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AStealthCharacter, ultWeaponWorldObj);
	DOREPLIFETIME(AStealthCharacter, knifeObj);
	DOREPLIFETIME(AStealthCharacter, invisTimer);
	DOREPLIFETIME(AStealthCharacter, invisCooldownTimer);
	DOREPLIFETIME(AStealthCharacter, invisMat);
	DOREPLIFETIME(AStealthCharacter, baseBodyMat);
	DOREPLIFETIME(AStealthCharacter, decoyObj);
	DOREPLIFETIME(AStealthCharacter, decoyTimer);
	DOREPLIFETIME(AStealthCharacter, decoyCooldownTimer);
	DOREPLIFETIME(AStealthCharacter, decoyComp);
	DOREPLIFETIME(AStealthCharacter, decoyFloatiesVFX);
	DOREPLIFETIME(AStealthCharacter, ultimateMat);
	DOREPLIFETIME(AStealthCharacter, decoyDodge);
	DOREPLIFETIME(AStealthCharacter, ultTimer);
	DOREPLIFETIME(AStealthCharacter, ultLength);
	DOREPLIFETIME(AStealthCharacter, cameraUltLerp);
	DOREPLIFETIME(AStealthCharacter, cameraUltLerpBack);
	DOREPLIFETIME(AStealthCharacter, targetUltPos);
	DOREPLIFETIME(AStealthCharacter, swingUltLaunch);
	DOREPLIFETIME(AStealthCharacter, invisRemainingTime);
	DOREPLIFETIME(AStealthCharacter, decoyRemainingTime);
	DOREPLIFETIME(AStealthCharacter, ultRemainingTime);
	DOREPLIFETIME(AStealthCharacter, decoyVFX);
	DOREPLIFETIME(AStealthCharacter, invisVFX);
	DOREPLIFETIME(AStealthCharacter, isClone);
	DOREPLIFETIME(AStealthCharacter, clone);
}


void AStealthCharacter::Tick(float deltaTime)
{
	Super::Tick(deltaTime);

	if (GetWorld()->GetTimerManager().IsTimerActive(ultTimer) == true)
		currentStates.AddUnique(PlayerGameState::Ultimate);

	if (cameraUltLerp == true)
	{
		FVector curLocation = GetFirstPersonCameraComponent()->GetRelativeLocation();
		FVector newLocation = FMath::VInterpTo(curLocation, targetUltPos,
			deltaTime, 5);
		GetFirstPersonCameraComponent()->SetRelativeLocation(newLocation);

		if (FVector::Dist(targetUltPos, newLocation) <= .05f)
		{
			cameraUltLerp = false;
			cameraUltLerpBack = true;
			movementComponent->GravityScale = baseGravity;
		}
	}
	if (cameraUltLerpBack == true)
	{
		FVector curLocation = GetFirstPersonCameraComponent()->GetRelativeLocation();
		FVector newLocation = FMath::VInterpTo(curLocation, originalCamPos,
			deltaTime, 12);
		GetFirstPersonCameraComponent()->SetRelativeLocation(newLocation);

		if (FVector::Dist(originalCamPos, newLocation) <= .05)
		{
			cameraUltLerpBack = false;
			SpawnUltWeapon();
		}
	}

	UpdateCooldownValues();
}


void AStealthCharacter::UpdateCooldownValues()
{
	if (HasAuthority())
	{
		invisRemainingTime = GetWorld()->
			GetTimerManager().GetTimerRemaining(invisTimer);
		decoyRemainingTime = GetWorld()->
			GetTimerManager().GetTimerRemaining(decoyTimer);
		ultRemainingTime = GetWorld()->
			GetTimerManager().GetTimerRemaining(ultTimer);
	}
	else
		Server_UpdateCooldownValues();
}
bool AStealthCharacter::Server_UpdateCooldownValues_Validate()
{
	return true;
}
void AStealthCharacter::Server_UpdateCooldownValues_Implementation()
{
	invisRemainingTime = GetWorld()->
		GetTimerManager().GetTimerRemaining(invisTimer);
	decoyRemainingTime = GetWorld()->
		GetTimerManager().GetTimerRemaining(decoyTimer);
	ultRemainingTime = GetWorld()->
		GetTimerManager().GetTimerRemaining(ultTimer);
}


void AStealthCharacter::StartShooting()
{
	Super::StartShooting();
	
	if (HasAuthority())
		UltimateMelee();
	else
		Server_UltimateMelee();
}

void AStealthCharacter::UltimateMelee()
{
	if (swingUltLaunch == false && currentStates.Contains(PlayerGameState::Ultimate))
	{
		swingUltLaunch = true;
		movementComponent->GroundFriction = 0.0;
		movementComponent->BrakingDecelerationWalking = 700;
		movementComponent->AddImpulse(GetActorForwardVector() * 1200, true);

		FTimerHandle DelayTimerHandle;
		GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle, FTimerDelegate::CreateLambda([this]()
			{
				movementComponent->GroundFriction = baseGroundFriction;
				movementComponent->BrakingDecelerationWalking = baseBrakingDeceleration;
				swingUltLaunch = false;
			}), .75f, false);
	}
}
bool AStealthCharacter::Server_UltimateMelee_Validate()
{
	return true;
}
void AStealthCharacter::Server_UltimateMelee_Implementation()
{
	if (swingUltLaunch == false && currentStates.Contains(PlayerGameState::Ultimate))
	{
		swingUltLaunch = true;
		movementComponent->GroundFriction = 0.0;
		movementComponent->BrakingDecelerationWalking = 700;
		movementComponent->AddImpulse(GetActorForwardVector() * 1200, true);

		FTimerHandle DelayTimerHandle;
		GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle, FTimerDelegate::CreateLambda([this]()
			{
				movementComponent->GroundFriction = baseGroundFriction;
				movementComponent->BrakingDecelerationWalking = baseBrakingDeceleration;
				swingUltLaunch = false;
			}), .75f, false);
	}
}

void AStealthCharacter::StartAbility1()
{
	if (HasAuthority())
	{
		if (GetWorld()->GetTimerManager().IsTimerActive(invisTimer) == false &&
			GetWorld()->GetTimerManager().IsTimerActive(invisCooldownTimer) == false)
		{
			GetWorldTimerManager().SetTimer(invisTimer, this,
				&AStealthCharacter::StopAbility1, invisLength, false);

			UGameplayStatics::SpawnEmitterAtLocation(
				GetWorld(),
				invisVFX,
				GetActorLocation(),
				GetActorRotation(),
				true  // Auto destroy
			);

			Multi_Invis(true);

			FTimerHandle DelayTimerHandle;
			GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle, FTimerDelegate::CreateLambda([this]()
				{
					bodyMesh->SetMaterial(0, invisMat);
				}), .05f, false);
		}
		else
			UE_LOG(LogTemp, Warning, TEXT("ability not available"));
	}
	else
		Server_StartAbility1();   
}
void AStealthCharacter::Server_StartAbility1_Implementation()
{
	if (GetWorld()->GetTimerManager().IsTimerActive(invisTimer) == false &&
		GetWorld()->GetTimerManager().IsTimerActive(invisCooldownTimer) == false)
	{
		GetWorldTimerManager().SetTimer(invisTimer, this,
			&AStealthCharacter::Server_StopAbility1, invisLength, false);

		Multi_Invis(true);

		FTimerHandle DelayTimerHandle;
		GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle, FTimerDelegate::CreateLambda([this]()
			{
				bodyMesh->SetMaterial(0, invisMat);
			}), .05f, false);
	}
	else
		UE_LOG(LogTemp, Warning, TEXT("ability not available"));
}

void AStealthCharacter::StopAbility1()
{
	if (HasAuthority())
	{
		bodyMesh->SetMaterial(0, baseBodyMat);
		Multi_Invis(false);

		GetWorld()->GetTimerManager().ClearTimer(invisCooldownTimer);
		GetWorld()->GetTimerManager().SetTimer(invisCooldownTimer, FTimerDelegate::CreateLambda([this]()
			{

			}), .01f, false);
	}
	else
		Server_StopAbility1();
}
void AStealthCharacter::Server_StopAbility1_Implementation()
{
	bodyMesh->SetMaterial(0, baseBodyMat);
	Multi_Invis(false);

	GetWorld()->GetTimerManager().ClearTimer(invisCooldownTimer);
	GetWorld()->GetTimerManager().SetTimer(invisCooldownTimer, FTimerDelegate::CreateLambda([this]()
		{

		}), .01f, false);
}

bool AStealthCharacter::Multi_Invis_Validate(bool isOn)
{
	return true;
}
void AStealthCharacter::Multi_Invis_Implementation(bool isOn)
{
	if (isOn)
	{
		UGameplayStatics::SpawnEmitterAtLocation(
			GetWorld(),
			invisVFX,
			GetActorLocation(),
			GetActorRotation(),
			true  // Auto destroy
		);

		FTimerHandle DelayTimerHandle;
		GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle, FTimerDelegate::CreateLambda([this]()
			{
				bodyMesh->SetMaterial(0, invisMat);
			}), .05f, false);
	}
	else
	{
		FTimerHandle DelayTimerHandle;
		GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle, FTimerDelegate::CreateLambda([this]()
			{
				bodyMesh->SetMaterial(0, baseBodyMat);
			}), .05f, false);
	}
	
}

void AStealthCharacter::StartAbility2()
{
	if (HasAuthority())
	{
		if (GetWorld()->GetTimerManager().IsTimerActive(decoyTimer) == false &&
			GetWorld()->GetTimerManager().IsTimerActive(decoyCooldownTimer) == false)
		{
			GetWorldTimerManager().SetTimer(decoyTimer, this,
				&AStealthCharacter::StopAbility2, decoyLength, false);

			FActorSpawnParameters SpawnParams;
			SpawnParams.Owner = this;
			SpawnParams.Instigator = GetInstigator();

			decoyObj = GetClass();

			FVector spawnLoc = GetActorLocation();
			spawnLoc += (GetActorForwardVector() * 100);

			FRotator spawnRot = GetActorRotation();

			AStealthCharacter* decoyCopy = GetWorld()->SpawnActor<AStealthCharacter>(decoyObj, spawnLoc,
				spawnRot, SpawnParams);

			FVector decoySpawnLoc = decoyCopy->GetActorLocation();
			decoySpawnLoc.Z -= 250;

			clone = decoyCopy;
			decoyCopy->isClone = true;
			decoyCopy->GetMesh1P()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
			decoyCopy->GetMesh()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
			decoyCopy->GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
			decoyCopy->bodyMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

			DirectionalDodge(movementVector);
		}
		else
			UE_LOG(LogTemp, Warning, TEXT("ability not available"));
	}
	else
		Server_StartAbility2();
}
void AStealthCharacter::Server_StartAbility2_Implementation()
{
	if (GetWorld()->GetTimerManager().IsTimerActive(decoyTimer) == false &&
		GetWorld()->GetTimerManager().IsTimerActive(decoyCooldownTimer) == false)
	{
		GetWorldTimerManager().SetTimer(decoyTimer, this,
			&AStealthCharacter::Server_StopAbility2, decoyLength, false);

		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;
		SpawnParams.Instigator = GetInstigator();

		decoyObj = GetClass();

		FVector spawnLoc = GetActorLocation();
		spawnLoc += (GetActorForwardVector() * 100);

		FRotator spawnRot = GetActorRotation();

		AStealthCharacter* decoyCopy = GetWorld()->SpawnActor<AStealthCharacter>(decoyObj, spawnLoc,
			spawnRot, SpawnParams);

		FVector decoySpawnLoc = decoyCopy->GetActorLocation();
		decoySpawnLoc.Z -= 250;

		clone = decoyCopy;
		decoyCopy->isClone = true;
		decoyCopy->GetMesh1P()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		decoyCopy->GetMesh()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		decoyCopy->GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		decoyCopy->bodyMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

		Server_DirectionalDodge(movementVector);
	}
	else
		UE_LOG(LogTemp, Warning, TEXT("ability not available"));
}

void AStealthCharacter::StopAbility2()
{
	if (HasAuthority())
	{
		GetWorld()->GetTimerManager().ClearTimer(decoyCooldownTimer);
		GetWorld()->GetTimerManager().SetTimer(decoyCooldownTimer, FTimerDelegate::CreateLambda([this]()
			{
				if(clone)
					clone->Destroy();

				if(decoyObj)
					decoyObj = nullptr;
			}), .05f, false);
	}
	else
		Server_StopAbility2();
}
void AStealthCharacter::Server_StopAbility2_Implementation()
{
	GetWorld()->GetTimerManager().ClearTimer(decoyCooldownTimer);
	GetWorld()->GetTimerManager().SetTimer(decoyCooldownTimer, FTimerDelegate::CreateLambda([this]()
		{
			if (clone)
				clone->Destroy();

			if (decoyObj)
				decoyObj = nullptr;
		}), .05f, false);
}

bool AStealthCharacter::Multi_Decoy_Validate(FVector loc, FRotator rot)
{
	return true;
}
void AStealthCharacter::Multi_Decoy_Implementation(FVector loc, FRotator rot)
{
	UNiagaraFunctionLibrary::SpawnSystemAtLocation(
		GetWorld(),
		deathExplosionVFX,
		loc,
		rot,
		FVector(1, 1, 1),
		true,
		true
	);
}

void AStealthCharacter::DirectionalDodge(FVector2D dir)
{
	if (HasAuthority())
	{
		if (dir.Length() > 0.0)
		{
			movementComponent->GroundFriction = 0.0;
			movementComponent->BrakingDecelerationWalking = 1400;

			if (dir.X > 0.0)
				movementComponent->AddImpulse(GetActorRightVector() * decoyDodge, true);
			if (dir.X < 0.0)
				movementComponent->AddImpulse(GetActorRightVector() * -decoyDodge, true);
			if (dir.Y > 0.0)
				movementComponent->AddImpulse(GetActorForwardVector() * decoyDodge, true);
			if (dir.Y < 0.0)
				movementComponent->AddImpulse(GetActorForwardVector() * -decoyDodge, true);

			FTimerHandle DelayTimerHandle;
			GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle, FTimerDelegate::CreateLambda([this]()
				{
					movementComponent->GroundFriction = baseGroundFriction;
					movementComponent->BrakingDecelerationWalking = baseBrakingDeceleration;
				}), .75f, false);

		}
	}
	else
		Server_DirectionalDodge(dir);
}
bool AStealthCharacter::Server_DirectionalDodge_Validate(FVector2D dir)
{
	return true;
}
void AStealthCharacter::Server_DirectionalDodge_Implementation(FVector2D dir)
{
	if (dir.Length() > 0.0)
	{
		movementComponent->GroundFriction = 0.0;
		movementComponent->BrakingDecelerationWalking = 1400;

		if (dir.X > 0.0)
			movementComponent->AddImpulse(GetActorRightVector() * decoyDodge, true);
		if (dir.X < 0.0)
			movementComponent->AddImpulse(GetActorRightVector() * -decoyDodge, true);
		if (dir.Y > 0.0)
			movementComponent->AddImpulse(GetActorForwardVector() * decoyDodge, true);
		if (dir.Y < 0.0)
			movementComponent->AddImpulse(GetActorForwardVector() * -decoyDodge, true);

		FTimerHandle DelayTimerHandle;
		GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle, FTimerDelegate::CreateLambda([this]()
			{
				movementComponent->GroundFriction = baseGroundFriction;
				movementComponent->BrakingDecelerationWalking = baseBrakingDeceleration;
			}), .75f, false);

	}
}


bool AStealthCharacter::Multi_Dodge_Validate(FVector loc, FRotator rot)
{
	return true;
}
void AStealthCharacter::Multi_Dodge_Implementation(FVector loc, FRotator rot)
{
	UGameplayStatics::SpawnEmitterAtLocation(
		GetWorld(),
		decoyVFX,
		GetActorLocation(),
		GetActorRotation(),
		true  // Auto destroy
	);
}

void AStealthCharacter::StartUltimate()
{
	if (HasAuthority())
	{
		if (GetWorld()->GetTimerManager().IsTimerActive(ultTimer) == false &&
			GetWorld()->GetTimerManager().IsTimerActive(ultCooldownTimer) == false)
		{
			currentStates.AddUnique(PlayerGameState::Ultimate);
			ultimateTriggered = true;
			SaveCurWeapons();
			SpawnUltWeapon();
			curSpeedMulti = 2.5f;

			FTimerHandle DelayTimerHandle2;
			GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle2, FTimerDelegate::CreateLambda([this]()
				{
					bodyMesh->SetMaterial(0, ultimateMat);

					GetWorldTimerManager().SetTimer(ultTimer, this,
						&AStealthCharacter::StopUltimate, ultLength, false);
				}), .5f, false);
		}
	}
	else
		Server_StartUltimate();
}
void AStealthCharacter::Server_StartUltimate_Implementation()
{
	if (GetWorld()->GetTimerManager().IsTimerActive(ultTimer) == false &&
		GetWorld()->GetTimerManager().IsTimerActive(ultCooldownTimer) == false)
	{
		currentStates.AddUnique(PlayerGameState::Ultimate);
		ultimateTriggered = true;
		Server_SaveCurWeapons();
		Server_SpawnUltWeapon();
		curSpeedMulti = 2.5f;

		FTimerHandle DelayTimerHandle2;
		GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle2, FTimerDelegate::CreateLambda([this]()
			{
				bodyMesh->SetMaterial(0, ultimateMat);

				GetWorldTimerManager().SetTimer(ultTimer, this,
					&AStealthCharacter::Server_StopUltimate, ultLength, false);
			}), .5f, false);
	}
}

void AStealthCharacter::StopUltimate()
{
	if (HasAuthority())
	{
		bodyMesh->SetMaterial(0, baseBodyMat);
		RestoreCurWeapons();
		curSpeedMulti = baseSpeedMulti;

		GetWorld()->GetTimerManager().SetTimer(ultCooldownTimer, FTimerDelegate::CreateLambda([this]()
			{
				ultimateTriggered = false;
				currentStates.Remove(PlayerGameState::Ultimate);
			}), .05f, false);
	}
	else
		Server_StopUltimate();
	
}
void AStealthCharacter::Server_StopUltimate_Implementation()
{
	bodyMesh->SetMaterial(0, baseBodyMat);
	Server_RestoreCurWeapons();
	curSpeedMulti = baseSpeedMulti;

	GetWorld()->GetTimerManager().SetTimer(ultCooldownTimer, FTimerDelegate::CreateLambda([this]()
		{
			ultimateTriggered = false;
			currentStates.Remove(PlayerGameState::Ultimate);
		}), .05f, false);
}


void AStealthCharacter::SpawnUltWeapon()
{
	if (HasAuthority())
	{
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;
		SpawnParams.Instigator = GetInstigator();

		weaponWorldObj = knifeObj;

		FVector spawnLoc = GetActorLocation();
		FRotator spawnRot = GetActorRotation();

		AWeaponBase* ultDaggerCopy = GetWorld()->SpawnActor<AWeaponBase>(weaponWorldObj, spawnLoc,
			spawnRot, SpawnParams);

		if (ultDaggerCopy)
			EquipWeapon(ultDaggerCopy, false);
		else
			UE_LOG(LogTemp, Warning, TEXT("no such weapon"));
	}
	else
		Server_SpawnUltWeapon();
}
bool AStealthCharacter::Server_SpawnUltWeapon_Validate()
{
	return true;
}
void AStealthCharacter::Server_SpawnUltWeapon_Implementation()
{
	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;
	SpawnParams.Instigator = GetInstigator();

	weaponWorldObj = knifeObj;

	FVector spawnLoc = GetActorLocation();
	FRotator spawnRot = GetActorRotation();

	AWeaponBase* ultDaggerCopy = GetWorld()->SpawnActor<AWeaponBase>(weaponWorldObj, spawnLoc,
		spawnRot, SpawnParams);

	if (ultDaggerCopy)
		Server_EquipWeapon(ultDaggerCopy, true);
	else
		UE_LOG(LogTemp, Warning, TEXT("no such weapon"));
}


