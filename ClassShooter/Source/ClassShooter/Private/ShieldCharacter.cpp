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

	shieldThrowLoc = CreateDefaultSubobject<UArrowComponent>("Shield Throw Position");
	shieldThrowLoc->SetupAttachment(GetFirstPersonCameraComponent());
}

void AShieldCharacter::BeginPlay()
{
	Super::BeginPlay();
	cameraUltLerp = false;
	cameraUltLerpBack = false;
	targetUltPos = originalCamPos;
	shieldADSLerp = false;
	shieldUnADSLerp = false;

	baseShieldBashCooldown = shieldBashCooldown;
	baseShieldThrowCooldown = shieldThrowCooldown;

	hasShield = true;
	shieldBashHitDetected = false;
	isShieldBashHBOn = false;

	if (HasAuthority() && !eqippedShield)
	{
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;
		SpawnParams.Instigator = GetInstigator();


		FVector spawnLoc = GetActorLocation();
		FRotator spawnRot = GetActorRotation();

		eqippedShield = GetWorld()->SpawnActor<AShield>(shieldWorldObj, spawnLoc,
			spawnRot, SpawnParams);

		FAttachmentTransformRules AttachRules(
			EAttachmentRule::SnapToTarget,   // Location
			EAttachmentRule::KeepWorld,      // Rotation
			EAttachmentRule::KeepWorld,      // Scale
			true                             // Weld Simulated Bodies
		);
		eqippedShield->AttachToComponent(shieldLocation, AttachRules);
		eqippedShield->SetActorRotation(shieldLocation->GetComponentRotation());
		originalShieldTrans = eqippedShield->GetActorTransform();
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
		currentStates.AddUnique(PlayerGameState::Ultimate);

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
		GetTimerManager().GetTimerRemaining(ultTimer);
}

void AShieldCharacter::StartShooting()
{
	Super::StartShooting();
}

void AShieldCharacter::PickupWeapon(AWeaponBase* weapon)
{
	weapon->shield = eqippedShield;
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
		}), .5f, false);
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
		&& hasShield == true && !currentStates.Contains(PlayerGameState::Ultimate))
	{
		GetWorldTimerManager().SetTimer(shieldThrowTimer, this,
			&AShieldCharacter::StopAbility2, shieldThrowCooldown, false);
		ShieldThrow();
	}
}
void AShieldCharacter::StopAbility2()
{
	eqippedShield->SetActorEnableCollision(true);
	eqippedShield->SetActorHiddenInGame(false);
	eqippedShield->SetActorTickEnabled(true);
	hasShield = true;
}
void AShieldCharacter::ShieldThrow()
{
	eqippedShield->SetActorEnableCollision(false);
	eqippedShield->SetActorHiddenInGame(true);
	eqippedShield->SetActorTickEnabled(false);
	hasShield = false;

	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;
	SpawnParams.Instigator = GetInstigator();


	thrownShield = GetWorld()->SpawnActor<AActor>(shieldThrowWorldObj,
		shieldThrowLoc->GetComponentLocation(),
		shieldThrowLoc->GetComponentRotation(), SpawnParams);

	//thrownShield->source = this;
}

void AShieldCharacter::StartUltimate()
{
	FString LevelName = GetWorld()->GetMapName();

	// Optional: Strip the prefix (like "UEDPIE_0_")
	LevelName.RemoveFromStart(GetWorld()->StreamingLevelsPrefix);

	// Log it
	UE_LOG(LogTemp, Warning, TEXT("Current Level: %s"), *LevelName);

	if (LevelName == "Lobby")
		return;

	if (GetWorld()->GetTimerManager().IsTimerActive(ultTimer) == false &&
		GetWorld()->GetTimerManager().IsTimerActive(ultCooldownTimer) == false)
	{
		eqippedShield->SetActorEnableCollision(true);
		eqippedShield->SetActorHiddenInGame(false);
		eqippedShield->SetActorTickEnabled(true);
		hasShield = true;
		shieldBashCooldown = 1;
		shieldThrowCooldown = 1;
		eqippedShield->SetActorRelativeScale3D(eqippedShield->GetActorScale() * 3);
		curSpeedMulti = 2.5f;

		currentStates.AddUnique(PlayerGameState::Ultimate);
		ultimateTriggered = true;
		SaveCurWeapons();

		FTimerHandle DelayTimerHandle1;
		GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle1, FTimerDelegate::CreateLambda([this]()
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
	curSpeedMulti = baseSpeedMulti;
	eqippedShield->SetActorTransform(originalShieldTrans);

	GetWorld()->GetTimerManager().SetTimer(ultCooldownTimer, FTimerDelegate::CreateLambda([this]()
		{
			ultimateTriggered = false;
			currentStates.Remove(PlayerGameState::Ultimate);
		}), .05f, false);
}

