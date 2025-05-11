// Fill out your copyright notice in the Description page of Project Settings.


#include "ShieldCharacter.h"
#include "Camera/CameraComponent.h"
#include "Net/UnrealNetwork.h"
#include "GameFramework/CharacterMovementComponent.h"


AShieldCharacter::AShieldCharacter()
	:AClassShooterCharacter()
{
	shieldLocation = CreateDefaultSubobject<UArrowComponent>("Shield Position");
	shieldLocation->SetupAttachment(GetFirstPersonCameraComponent());
}

void AShieldCharacter::BeginPlay()
{
	Super::BeginPlay();
	cameraUltLerp = false;
	cameraUltLerpBack = false;
	targetUltPos = originalCamPos;
	targetUltPos.X -= 250;
	targetUltPos.Z += 50;
	shieldADSLerp = false;
	shieldUnADSLerp = false;

	baseShieldBashCooldown = shieldBashCooldown;
	baseShieldThrowCooldown = shieldThrowCooldown;

	hasShield = true;
	shieldBashHitDetected = false;
	isShieldBashHBOn = false;

	if (HasAuthority() && !shieldCopy)
	{
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;
		SpawnParams.Instigator = GetInstigator();


		FVector spawnLoc = GetActorLocation();
		FRotator spawnRot = GetActorRotation();

		shieldCopy = GetWorld()->SpawnActor<AShield>(shieldWorldObj, spawnLoc,
			spawnRot, SpawnParams);

		FAttachmentTransformRules AttachRules(
			EAttachmentRule::SnapToTarget,   // Location
			EAttachmentRule::KeepWorld,      // Rotation
			EAttachmentRule::KeepWorld,      // Scale
			true                             // Weld Simulated Bodies
		);
		shieldCopy->AttachToComponent(shieldLocation, AttachRules);
		shieldCopy->SetActorRotation(shieldLocation->GetComponentRotation());
	}

	unADSshieldLocation = shieldLocation->GetRelativeLocation();
	ADSshieldLocation = unADSshieldLocation;
	ADSshieldLocation.Y -= 40;
	ADSshieldLocation.Z -= 20;

}

void AShieldCharacter::Tick(float deltaTime)
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
			StopAbility2();
			cameraUltLerpBack = false;
		}
	}
	if (shieldADSLerp == true)
	{
		FVector curLocation = shieldLocation->GetRelativeLocation();
		FVector newLocation = FMath::VInterpTo(curLocation, ADSshieldLocation,
			deltaTime, 10);
		shieldLocation->SetRelativeLocation(newLocation);

		if (FVector::Dist(ADSshieldLocation, newLocation) <= .05)
			shieldADSLerp = false;
	}
	if (shieldUnADSLerp == true)
	{
		FVector curLocation = shieldLocation->GetRelativeLocation();
		FVector newLocation = FMath::VInterpTo(curLocation, unADSshieldLocation,
			deltaTime, 10);
		shieldLocation->SetRelativeLocation(newLocation);

		if (FVector::Dist(unADSshieldLocation, newLocation) <= .05)
			shieldUnADSLerp = false;
	}

	baseShieldBashRemainingTime = GetWorld()->
		GetTimerManager().GetTimerRemaining(shieldBashTimer);
	baseShieldThrowRemainingTime = GetWorld()->
		GetTimerManager().GetTimerRemaining(shieldThrowTimer);
	ultRemainingTime = GetWorld()->
		GetTimerManager().GetTimerRemaining(ultCooldownTimer);
}

void AShieldCharacter::StartShooting()
{
	if (isInUltimate == true)
		ShieldThrow();
	else
		Super::StartShooting();
}

void AShieldCharacter::PickupWeapon(AWeaponBase* weapon)
{
	weapon->shield = shieldCopy;
	Super::PickupWeapon(weapon);
}
void AShieldCharacter::DropWeapon()
{
	if(curWeapon)
		curWeapon->shield = nullptr;
	Super::DropWeapon();
}


void AShieldCharacter::ADS()
{
	StopBlocking();
	Super::ADS();
}
void AShieldCharacter::StopADS()
{
	Block();
	Super::StopADS();
}
void AShieldCharacter::Block()
{
	shieldADSLerp = false;
	shieldUnADSLerp = true;
}
void AShieldCharacter::StopBlocking()
{
	shieldUnADSLerp = false;
	shieldADSLerp = true;
}


void AShieldCharacter::StartAbility1()
{
	if (GetWorld()->GetTimerManager().IsTimerActive(shieldBashTimer) == false
		&& hasShield == true)
	{
		GetWorldTimerManager().SetTimer(shieldBashTimer, this,
			&AShieldCharacter::StopAbility1, shieldBashCooldown, false);
		ShieldBash();
	}
}
void AShieldCharacter::StopAbility1()
{
	
}
void AShieldCharacter::ShieldBash()
{
	isShieldBashHBOn = true;
	ADS();
	UGameplayStatics::SpawnEmitterAtLocation(
		GetWorld(),
		shieldBashVFX,
		GetActorLocation(),
		GetActorRotation(),
		true  // Auto destroy
	);

	movementComponent->GroundFriction = 0.0;
	movementComponent->BrakingDecelerationWalking = 1400;

	movementComponent->AddImpulse(GetActorForwardVector() * shieldBashDist, true);

	FTimerHandle DelayTimerHandle1;
	GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle1, FTimerDelegate::CreateLambda([this]()
		{
			StopADS();
			movementComponent->GroundFriction = baseGroundFriction;
			movementComponent->BrakingDecelerationWalking = baseBrakingDeceleration;
		}), .75f, false);
	FTimerHandle DelayTimerHandle2;
	GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle2, FTimerDelegate::CreateLambda([this]()
		{
			isShieldBashHBOn = false;
			shieldBashHitDetected = false;
		}), 1.0f, false);
}

void AShieldCharacter::StartAbility2()
{
	if (GetWorld()->GetTimerManager().IsTimerActive(shieldThrowTimer) == false 
		&& hasShield == true)
	{
		GetWorldTimerManager().SetTimer(shieldThrowTimer, this,
			&AShieldCharacter::StopAbility2, shieldThrowCooldown, false);
		ShieldThrow();
	}
}
void AShieldCharacter::StopAbility2()
{
	shieldCopy->SetActorEnableCollision(true);
	shieldCopy->SetActorHiddenInGame(false);
	shieldCopy->SetActorTickEnabled(true);
	hasShield = true;
}
void AShieldCharacter::ShieldThrow()
{
	shieldCopy->SetActorEnableCollision(false);
	shieldCopy->SetActorHiddenInGame(true);
	shieldCopy->SetActorTickEnabled(false);
	hasShield = false;

	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;
	SpawnParams.Instigator = GetInstigator();


	FVector spawnLoc = GetFirstPersonCameraComponent()->GetComponentLocation();
	spawnLoc.Z -= 50;
	spawnLoc.Y += 50;
	FRotator spawnRot = GetFirstPersonCameraComponent()->GetComponentRotation();

	shieldThrowCopy = GetWorld()->SpawnActor<AShield>(shieldThrowWorldObj, spawnLoc,
		FRotator(90.0f, spawnRot.Pitch, spawnRot.Yaw), SpawnParams);

	shieldThrowCopy->source = this;
	shieldThrowCopy->wasThrown = true;

	shieldThrowCopy->weaponMesh->
		SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	shieldThrowCopy->weaponMesh->SetSimulatePhysics(true);
	shieldThrowCopy->weaponMesh->SetEnableGravity(false);
	shieldThrowCopy->weaponMesh->SetMobility(EComponentMobility::Movable);
	shieldThrowCopy->weaponMesh->
		AddImpulse(GetFirstPersonCameraComponent()->GetForwardVector() 
			* shieldThrowPow, NAME_None, true);
}

void AShieldCharacter::StartUltimate()
{
	if (GetWorld()->GetTimerManager().IsTimerActive(ultTimer) == false &&
		GetWorld()->GetTimerManager().IsTimerActive(ultCooldownTimer) == false)
	{
		shieldBashCooldown = 1;
		shieldThrowCooldown = 1;

		isInUltimate = true;
		ultimateTriggered = true;
		SaveCurWeapons();

		shieldCopy->SetActorEnableCollision(false);
		shieldCopy->SetActorHiddenInGame(true);
		shieldCopy->SetActorTickEnabled(false);
		cameraUltLerp = true;

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
					&AShieldCharacter::StopUltimate, ultLength, false);
			}), .5f, false);
	}
}
void AShieldCharacter::StopUltimate()
{
	bodyMesh->SetMaterial(0, baseBodyMat);
	RestoreCurWeapons();
	shieldBashCooldown = baseShieldBashCooldown;
	shieldThrowCooldown = baseShieldThrowCooldown;

	GetWorld()->GetTimerManager().SetTimer(ultCooldownTimer, FTimerDelegate::CreateLambda([this]()
		{
			ultimateTriggered = false;
		}), .05f, false);
}

