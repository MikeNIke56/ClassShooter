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

void AShieldCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	/*DOREPLIFETIME(AShieldCharacter, shieldWorldObj);
	DOREPLIFETIME(AShieldCharacter, shieldCopy);
	DOREPLIFETIME(AShieldCharacter, shieldThrowCopy);
	DOREPLIFETIME(AShieldCharacter, shieldBashCooldown);
	DOREPLIFETIME(AShieldCharacter, shieldThrowPow);
	DOREPLIFETIME(AShieldCharacter, shieldThrowCooldown);
	DOREPLIFETIME(AShieldCharacter, ultLength);
	DOREPLIFETIME(AShieldCharacter, ultCooldown);
	DOREPLIFETIME(AShieldCharacter, shieldBashVFX);
	DOREPLIFETIME(AShieldCharacter, baseBodyMat);
	DOREPLIFETIME(AShieldCharacter, ultimateMat);
	DOREPLIFETIME(AShieldCharacter, shieldLocation);
	DOREPLIFETIME(AShieldCharacter, hasShield);
	DOREPLIFETIME(AShieldCharacter, isShieldBashHBOn);
	DOREPLIFETIME(AShieldCharacter, shieldBashHitDetected);*/
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
			HandleStopAbility2();
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

void AShieldCharacter::HandleStartShooting()
{
	if (isInUltimate == true)
		ShieldThrow();
	else
		Super::HandleStartShooting();
}

bool AShieldCharacter::PickupWeapon(AWeaponBase* weapon)
{
	weapon->shield = shieldCopy;
	return Super::PickupWeapon(weapon);
}
void AShieldCharacter::DropWeapon()
{
	if(curWeapon)
		curWeapon->shield = nullptr;
	Super::DropWeapon();
}


void AShieldCharacter::HandleADS()
{
	StopBlocking();
	Super::HandleADS();
}
void AShieldCharacter::HandleStopADS()
{
	Block();
	Super::HandleStopADS();
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


void AShieldCharacter::HandleStartAbility1()
{
	if (GetWorld()->GetTimerManager().IsTimerActive(shieldBashTimer) == false
		&& hasShield == true)
	{
		GetWorldTimerManager().SetTimer(shieldBashTimer, this,
			&AShieldCharacter::HandleStopAbility1, shieldBashCooldown, false);
		ShieldBash();
	}
}
void AShieldCharacter::HandleStopAbility1()
{
	
}
void AShieldCharacter::ShieldBash()
{
	isShieldBashHBOn = true;
	HandleADS();
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
			HandleStopADS();
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

void AShieldCharacter::HandleStartAbility2()
{
	if (GetWorld()->GetTimerManager().IsTimerActive(shieldThrowTimer) == false 
		&& hasShield == true)
	{
		GetWorldTimerManager().SetTimer(shieldThrowTimer, this,
			&AShieldCharacter::HandleStopAbility2, shieldThrowCooldown, false);
		ShieldThrow();
	}
}
void AShieldCharacter::HandleStopAbility2()
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

void AShieldCharacter::HandleStartUltimate()
{
	if (GetWorld()->GetTimerManager().IsTimerActive(ultTimer) == false &&
		GetWorld()->GetTimerManager().IsTimerActive(ultCooldownTimer) == false)
	{
		shieldBashCooldown = 1;
		shieldThrowCooldown = 1;

		isInUltimate = true;
		ultimateTriggered = true;
		HandleSaveCurWeapons();

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
					&AShieldCharacter::HandleStopUltimate, ultLength, false);
			}), .5f, false);
	}
}
void AShieldCharacter::HandleStopUltimate()
{
	bodyMesh->SetMaterial(0, baseBodyMat);
	HandleRestoreCurWeapons();
	shieldBashCooldown = baseShieldBashCooldown;
	shieldThrowCooldown = baseShieldThrowCooldown;

	GetWorld()->GetTimerManager().SetTimer(ultCooldownTimer, FTimerDelegate::CreateLambda([this]()
		{
			ultimateTriggered = false;
		}), .05f, false);
}

