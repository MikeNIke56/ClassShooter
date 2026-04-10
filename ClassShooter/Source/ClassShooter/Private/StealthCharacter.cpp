// Fill out your copyright notice in the Description page of Project Settings.


#include "StealthCharacter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

/*
* Begin Play
*/
void AStealthCharacter::BeginPlay()
{
	//set initial values
	Super::BeginPlay();
	cameraUltLerp = false;
	cameraUltLerpBack = false;
	targetUltPos = originalCamPos;
	targetUltPos.X -= 250;
	targetUltPos.Z += 50;
}

/*
* Replicated variables
*/
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

/*
* Tick
*/
void AStealthCharacter::Tick(float deltaTime)
{
	if (IsValid(this))
	{
		Super::Tick(deltaTime);

		if (GetWorld()->GetTimerManager().IsTimerActive(ultTimer) == true)
			currentStates.AddUnique(PlayerGameState::Ultimate);

		//camera lerp for ulting
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
}


/*
* Updates character ability timers
*/
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

/*
* Start firing currently equipped weapon
*/
void AStealthCharacter::StartShooting()
{
	Super::StartShooting();
	
	if (HasAuthority())
		UltimateMelee();
	else
		Server_UltimateMelee();
}

/*
* Handles ultimate knife swings 
*/
void AStealthCharacter::UltimateMelee()
{
	if (swingUltLaunch == false && currentStates.Contains(PlayerGameState::Ultimate))
	{
		swingUltLaunch = true;

		//decreases character friction and braking deceleration
		movementComponent->GroundFriction = 0.0;
		movementComponent->BrakingDecelerationWalking = 700;

		//adds impulse to character
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

		//decreases character friction and braking deceleration
		movementComponent->GroundFriction = 0.0;
		movementComponent->BrakingDecelerationWalking = 700;

		//adds impulse to character
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


/*
* Start Ability 1
*/
void AStealthCharacter::StartAbility1()
{
	if (HasAuthority())
	{
		if (GetWorld()->GetTimerManager().IsTimerActive(invisTimer) == false &&
			GetWorld()->GetTimerManager().IsTimerActive(invisCooldownTimer) == false)
		{
			GetWorldTimerManager().SetTimer(invisTimer, this,
				&AStealthCharacter::StopAbility1, invisLength, false);

			//spawn niagara vfx
			UGameplayStatics::SpawnEmitterAtLocation(
				GetWorld(),
				invisVFX,
				GetActorLocation(),
				GetActorRotation(),
				true  // Auto destroy
			);

			Multi_Invis(true);

			//set character material to invisible material
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

		//spawn niagara vfx
		Multi_Invis(true);

		//set character material to invisible material
		FTimerHandle DelayTimerHandle;
		GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle, FTimerDelegate::CreateLambda([this]()
			{
				bodyMesh->SetMaterial(0, invisMat);
			}), .05f, false);
	}
	else
		UE_LOG(LogTemp, Warning, TEXT("ability not available"));
}

/*
* Stop Ability 1
*/
void AStealthCharacter::StopAbility1()
{
	if (HasAuthority())
	{
		//reset character material
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
	//reset character material
	bodyMesh->SetMaterial(0, baseBodyMat);
	Multi_Invis(false);

	GetWorld()->GetTimerManager().ClearTimer(invisCooldownTimer);
	GetWorld()->GetTimerManager().SetTimer(invisCooldownTimer, FTimerDelegate::CreateLambda([this]()
		{

		}), .01f, false);
}

/*
* Multicast material change
*/
bool AStealthCharacter::Multi_Invis_Validate(bool isOn)
{
	return true;
}
void AStealthCharacter::Multi_Invis_Implementation(bool isOn)
{
	//applies appropriate material to character model
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

/*
* Start Ability 2
*/
void AStealthCharacter::StartAbility2()
{
	if (HasAuthority())
	{
		if (GetWorld()->GetTimerManager().IsTimerActive(decoyTimer) == false &&
			GetWorld()->GetTimerManager().IsTimerActive(decoyCooldownTimer) == false)
		{
			GetWorldTimerManager().SetTimer(decoyTimer, this,
				&AStealthCharacter::StopAbility2, decoyLength, false);

			//spawns in decoy
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

			//disables collision of decoy object
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

		//spawns in decoy
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

		//disables collision of decoy object
		decoyCopy->GetMesh1P()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		decoyCopy->GetMesh()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		decoyCopy->GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		decoyCopy->bodyMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

		Server_DirectionalDodge(movementVector);
	}
	else
		UE_LOG(LogTemp, Warning, TEXT("ability not available"));
}

/*
* Stop Ability 2
*/
void AStealthCharacter::StopAbility2()
{
	if (HasAuthority())
	{
		GetWorld()->GetTimerManager().ClearTimer(decoyCooldownTimer);
		GetWorld()->GetTimerManager().SetTimer(decoyCooldownTimer, FTimerDelegate::CreateLambda([this]()
			{
				//destroys decoy world object
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
			//destroys decoy world object
			if (clone)
				clone->Destroy();

			if (decoyObj)
				decoyObj = nullptr;
		}), .05f, false);
}

/*
* Multicast decoy niagara vfx
*/
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


/*
* Directional decoy dodge
*/
void AStealthCharacter::DirectionalDodge(FVector2D dir)
{
	if (HasAuthority())
	{
		//character dodges in direction they are moving
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
	//character dodges in direction they are moving
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

/*
* Multicast dodge niagara vfx
*/
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

/*
* Start ultimate
*/
void AStealthCharacter::StartUltimate()
{
	if (HasAuthority())
	{
		if (GetWorld()->GetTimerManager().IsTimerActive(ultTimer) == false &&
			GetWorld()->GetTimerManager().IsTimerActive(ultCooldownTimer) == false)
		{
			//save current weapons, spawn and equip ultimate weapon
			currentStates.AddUnique(PlayerGameState::Ultimate);
			ultimateTriggered = true;
			SaveCurWeapons();
			SpawnUltWeapon();
			curSpeedMulti = 2.5f;

			bodyMesh->SetMaterial(0, ultimateMat);
			Multi_StartUlt(bodyMesh);

			FTimerHandle DelayTimerHandle1;
			GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle1, FTimerDelegate::CreateLambda([this]()
				{
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
		//save current weapons, spawn and equip ultimate weapon
		currentStates.AddUnique(PlayerGameState::Ultimate);
		ultimateTriggered = true;
		Server_SaveCurWeapons();
		Server_SpawnUltWeapon();
		curSpeedMulti = 2.5f;

		Multi_StartUlt(bodyMesh);

		FTimerHandle DelayTimerHandle1;
		GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle1, FTimerDelegate::CreateLambda([this]()
			{
				GetWorldTimerManager().SetTimer(ultTimer, this,
					&AStealthCharacter::Server_StopUltimate, ultLength, false);
			}), .5f, false);
	}
}

/*
* Stops ultimate ability
*/
void AStealthCharacter::StopUltimate()
{
	if (HasAuthority())
	{
		//reset character material, restore saved weapons, reset speed
		bodyMesh->SetMaterial(0, baseBodyMat);
		Multi_StopUlt(bodyMesh);
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
	//reset character material, restore saved weapons, reset speed
	Multi_StopUlt(bodyMesh);
	Server_RestoreCurWeapons();
	curSpeedMulti = baseSpeedMulti;

	GetWorld()->GetTimerManager().SetTimer(ultCooldownTimer, FTimerDelegate::CreateLambda([this]()
		{
			ultimateTriggered = false;
			currentStates.Remove(PlayerGameState::Ultimate);
		}), .05f, false);
}

/*
* Multicast material set
*/
void AStealthCharacter::Multi_StartUlt_Implementation(UStaticMeshComponent* multiMesh)
{
	if(multiMesh)
		multiMesh->SetMaterial(0, ultimateMat);
}
void AStealthCharacter::Multi_StopUlt_Implementation(UStaticMeshComponent* multiMesh)
{
	if (multiMesh)
		multiMesh->SetMaterial(0, baseBodyMat);
}

/*
* Spawns Ultimate weapon
*/
void AStealthCharacter::SpawnUltWeapon()
{
	if (HasAuthority())
	{
		//spawn in and equip ultimate weapon
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;
		SpawnParams.Instigator = GetInstigator();

		weaponWorldObj = knifeObj;

		FVector spawnLoc = GetActorLocation();
		FRotator spawnRot = GetActorRotation();

		AWeaponBase* ultDaggerCopy = GetWorld()->SpawnActor<AWeaponBase>(weaponWorldObj, spawnLoc,
			spawnRot, SpawnParams);

		if (ultDaggerCopy)
			EquipWeapon(ultDaggerCopy, false, true);
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
	//spawn in and equip ultimate weapon
	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;
	SpawnParams.Instigator = GetInstigator();

	weaponWorldObj = knifeObj;

	FVector spawnLoc = GetActorLocation();
	FRotator spawnRot = GetActorRotation();

	AWeaponBase* ultDaggerCopy = GetWorld()->SpawnActor<AWeaponBase>(weaponWorldObj, spawnLoc,
		spawnRot, SpawnParams);

	if (ultDaggerCopy)
		Server_EquipWeapon(ultDaggerCopy, false, true);
	else
		UE_LOG(LogTemp, Warning, TEXT("no such weapon"));
}


