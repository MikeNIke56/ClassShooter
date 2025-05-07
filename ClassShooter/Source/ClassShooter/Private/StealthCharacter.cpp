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

	// Add replication lines for your shield-specific variables
	// Example:
	// DOREPLIFETIME(AShieldCharacter, bIsShieldActive);
}

void AStealthCharacter::Tick(float deltaTime)
{
	Super::Tick(deltaTime);

	if (GetWorld()->GetTimerManager().IsTimerActive(ultTimer) == true)
		isInUltimate = true;
	else if (GetWorld()->GetTimerManager().IsTimerActive(ultTimer) == false &&
		GetWorld()->GetTimerManager().IsTimerActive(ultCooldownTimer) == false)
		isInUltimate = false;

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

	invisRemainingTime = GetWorld()->
		GetTimerManager().GetTimerRemaining(invisTimer);
	decoyRemainingTime = GetWorld()->
		GetTimerManager().GetTimerRemaining(decoyTimer);
	ultRemainingTime = GetWorld()->
		GetTimerManager().GetTimerRemaining(ultTimer);
}

void AStealthCharacter::HandleStartShooting()
{
	Super::HandleStartShooting();
	
	if (swingUltLaunch == false && isInUltimate == true)
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

void AStealthCharacter::HandleStartAbility1()
{
	if (GetWorld()->GetTimerManager().IsTimerActive(invisTimer) == false &&
		GetWorld()->GetTimerManager().IsTimerActive(invisCooldownTimer) == false)
	{
		GetWorldTimerManager().SetTimer(invisTimer, this,
			&AStealthCharacter::HandleStopAbility1, invisLength, false);

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
			}), .15f, false);
	}else
		UE_LOG(LogTemp, Warning, TEXT("ability not available"));
    
}
void AStealthCharacter::HandleStopAbility1()
{
	bodyMesh->SetMaterial(0, baseBodyMat);

	GetWorld()->GetTimerManager().ClearTimer(invisCooldownTimer);
	GetWorld()->GetTimerManager().SetTimer(invisCooldownTimer, FTimerDelegate::CreateLambda([this]()
		{

		}), .01f, false);
}


void AStealthCharacter::HandleStartAbility2()
{
	if (GetWorld()->GetTimerManager().IsTimerActive(decoyTimer) == false &&
		GetWorld()->GetTimerManager().IsTimerActive(decoyCooldownTimer) == false)
	{
		GetWorldTimerManager().SetTimer(decoyTimer, this,
			&AStealthCharacter::HandleStopAbility2, decoyLength, false);

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

		decoyComp = UGameplayStatics::SpawnEmitterAtLocation(
			GetWorld(),
			decoyFloatiesVFX,
			decoySpawnLoc,
			decoyCopy->GetActorRotation(),
			false  // Auto destroy
		);

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
void AStealthCharacter::HandleStopAbility2()
{
	GetWorld()->GetTimerManager().ClearTimer(decoyCooldownTimer);
	GetWorld()->GetTimerManager().SetTimer(decoyCooldownTimer, FTimerDelegate::CreateLambda([this]()
		{
			TArray<AStealthCharacter*> FoundActors;
			UGameplayStatics::GetAllActorsOfClass(GetWorld(),
				AStealthCharacter::StaticClass(), reinterpret_cast<TArray<AActor*>&>(FoundActors));

			for (AStealthCharacter* stealthChar : FoundActors)
			{
				if (stealthChar->isClone == true)
					stealthChar->Destroy();
			}
			decoyObj = nullptr;

		}), .05f, false);

	TWeakObjectPtr<UParticleSystemComponent> weakParticlePtr = decoyComp;
	FTimerHandle TimerHandle;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, FTimerDelegate::CreateLambda([weakParticlePtr]()
		{
			if (weakParticlePtr.IsValid())
				weakParticlePtr->Deactivate();
		}), .05f, false);
}
void AStealthCharacter::DirectionalDodge(FVector2D dir)
{
	if (dir.Length() > 0.0)
	{
		UGameplayStatics::SpawnEmitterAtLocation(
			GetWorld(),
			decoyVFX,
			GetActorLocation(),
			GetActorRotation(),
			true  // Auto destroy
		);

		movementComponent->GroundFriction = 0.0;
		movementComponent->BrakingDecelerationWalking = 1400;

		if(dir.X > 0.0)
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


void AStealthCharacter::HandleStartUltimate()
{
	if (GetWorld()->GetTimerManager().IsTimerActive(ultTimer) == false &&
		GetWorld()->GetTimerManager().IsTimerActive(ultCooldownTimer) == false)
	{
		isInUltimate = true;
		ultimateTriggered = true;
		HandleSaveCurWeapons();

		FTimerHandle DelayTimerHandle1;
		GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle1, FTimerDelegate::CreateLambda([this]()
			{
				movementComponent->GravityScale = .5f;
				movementComponent->AddImpulse(GetActorUpVector() * 500, true);
				cameraUltLerp = true;
			}), .15f, false);

		FTimerHandle DelayTimerHandle2;
		GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle2, FTimerDelegate::CreateLambda([this]()
			{
				bodyMesh->SetMaterial(0, ultimateMat);

				GetWorldTimerManager().SetTimer(ultTimer, this,
					&AStealthCharacter::HandleStopUltimate, ultLength, false);
			}), .5f, false);
	}
}
void AStealthCharacter::HandleStopUltimate()
{
	bodyMesh->SetMaterial(0, baseBodyMat);
	HandleRestoreCurWeapons();

	GetWorld()->GetTimerManager().SetTimer(ultCooldownTimer, FTimerDelegate::CreateLambda([this]()
		{
			ultimateTriggered = false;
		}), .05f, false);
}
void AStealthCharacter::SpawnUltWeapon()
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
		PickupWeapon(ultDaggerCopy);
	else
		UE_LOG(LogTemp, Warning, TEXT("no such weapon"));
}


