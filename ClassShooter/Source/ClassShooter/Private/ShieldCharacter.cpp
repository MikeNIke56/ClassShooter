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

/*
* Begin Play
*/
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

	//spawn in and equip character's shield
	if (HasAuthority() && !equippedShield)
	{
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;
		SpawnParams.Instigator = GetInstigator();


		FVector spawnLoc = GetActorLocation();
		FRotator spawnRot = GetActorRotation();

		equippedShield = GetWorld()->SpawnActor<AShield>(shieldWorldObj, spawnLoc,
			spawnRot, SpawnParams);

		FAttachmentTransformRules AttachRules(
			EAttachmentRule::SnapToTarget,   // Location
			EAttachmentRule::KeepWorld,      // Rotation
			EAttachmentRule::KeepWorld,      // Scale
			true                             // Weld Simulated Bodies
		);
		equippedShield->AttachToComponent(shieldLocation, AttachRules);
		equippedShield->SetActorRotation(shieldLocation->GetComponentRotation());
		originalShieldLoc = equippedShield->GetActorLocation();
	}

	unADSshieldLocation = shieldLocation->GetRelativeLocation();
	ADSshieldLocation = unADSshieldLocation;
	ADSshieldLocation.Y -= 40;
	ADSshieldLocation.Z -= 20;
}

/*
* Tick
*/
void AShieldCharacter::Tick(float deltaTime)
{
	if (IsValid(this))
	{
		Super::Tick(deltaTime);

		if (GetWorld()->GetTimerManager().IsTimerActive(ultTimer) == true)
			currentStates.AddUnique(PlayerGameState::Ultimate);

		//handles shield location when blocking 
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

		//lerps character from point A to point B within given time
		if (shieldBashLerp == true)
		{
			FVector curLocation = GetActorLocation();
			FVector newLocation = FMath::VInterpConstantTo(curLocation, targetShieldBashLocation,
				deltaTime, 2400);
			SetActorLocation(newLocation, true);

			movementComponent->Velocity = FVector::ZeroVector;

			if (FVector::Dist(targetShieldBashLocation, newLocation) <= 5)
			{
				shieldBashLerp = false;
				if (IsLocallyControlled())
					GetController()->SetIgnoreMoveInput(false);
				currentStates.Remove(PlayerGameState::ShieldBashing);
				movementComponent->SetMovementMode(prevMoveMode);
			}
		}

		UpdateCooldownValues();
	}
}

/*
* Replicated variables
*/
void AShieldCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AShieldCharacter, shieldADSLerp);
	DOREPLIFETIME(AShieldCharacter, shieldUnADSLerp);
	DOREPLIFETIME(AShieldCharacter, shieldBashLerp);
	DOREPLIFETIME(AShieldCharacter, unADSshieldLocation);
	DOREPLIFETIME(AShieldCharacter, shieldLocation);
	DOREPLIFETIME(AShieldCharacter, targetShieldBashLocation);
	DOREPLIFETIME(AShieldCharacter, shieldBashTimer);
	DOREPLIFETIME(AShieldCharacter, hasShield);
	DOREPLIFETIME(AShieldCharacter, isShieldBashHBOn);
	DOREPLIFETIME(AShieldCharacter, shieldBashVFX);
	DOREPLIFETIME(AShieldCharacter, shieldBashDist);
	DOREPLIFETIME(AShieldCharacter, equippedShield);
	DOREPLIFETIME(AShieldCharacter, shieldBashHitDetected);
	DOREPLIFETIME(AShieldCharacter, shieldThrowTimer);
	DOREPLIFETIME(AShieldCharacter, thrownShield);
	DOREPLIFETIME(AShieldCharacter, shieldThrowWorldObj);
	DOREPLIFETIME(AShieldCharacter, shieldThrowLoc);
	DOREPLIFETIME(AShieldCharacter, ultTimer);
	DOREPLIFETIME(AShieldCharacter, ultCooldownTimer);
	DOREPLIFETIME(AShieldCharacter, ultimateMat);
	DOREPLIFETIME(AShieldCharacter, originalShieldLoc);
	DOREPLIFETIME(AShieldCharacter, ultCooldown);
	DOREPLIFETIME(AShieldCharacter, ultRemainingTime);
	DOREPLIFETIME(AShieldCharacter, ultLength);
	DOREPLIFETIME(AShieldCharacter, shieldThrowCooldown);
	DOREPLIFETIME(AShieldCharacter, baseShieldThrowCooldown);
	DOREPLIFETIME(AShieldCharacter, baseShieldBashRemainingTime);
	DOREPLIFETIME(AShieldCharacter, shieldBashCooldown);
	DOREPLIFETIME(AShieldCharacter, baseShieldThrowRemainingTime);
}

/*
* Updates character ability timers
*/
void AShieldCharacter::UpdateCooldownValues()
{
	if (HasAuthority())
	{
		baseShieldBashRemainingTime = GetWorld()->
			GetTimerManager().GetTimerRemaining(shieldBashTimer);
		baseShieldThrowRemainingTime = GetWorld()->
			GetTimerManager().GetTimerRemaining(shieldThrowTimer);
		ultRemainingTime = GetWorld()->
			GetTimerManager().GetTimerRemaining(ultTimer);
	}
	else
		Server_UpdateCooldownValues();
}
bool AShieldCharacter::Server_UpdateCooldownValues_Validate()
{
	return true;
}
void AShieldCharacter::Server_UpdateCooldownValues_Implementation()
{
	baseShieldBashRemainingTime = GetWorld()->
		GetTimerManager().GetTimerRemaining(shieldBashTimer);
	baseShieldThrowRemainingTime = GetWorld()->
		GetTimerManager().GetTimerRemaining(shieldThrowTimer);
	ultRemainingTime = GetWorld()->
		GetTimerManager().GetTimerRemaining(ultTimer);
}

/*
* Start firing currently equipped weapon
*/
void AShieldCharacter::StartShooting()
{
	Super::StartShooting();
}


/*
* ADS
*/
void AShieldCharacter::ADS()
{
	if (HasAuthority())
	{
		StopBlocking();
		Super::ADS();
	}
	else
		Server_ShieldADS();
}
bool AShieldCharacter::Server_ShieldADS_Validate()
{
	return true;
}
void AShieldCharacter::Server_ShieldADS_Implementation()
{
	Server_StopBlocking();
	Super::Server_ADS();
}

/*
* Stop ADS
*/
void AShieldCharacter::StopADS()
{
	if (HasAuthority())
	{
		Block();
		Super::StopADS();
	}
	else
		Server_ShieldStopADS();
}
bool AShieldCharacter::Server_ShieldStopADS_Validate()
{
	return true;
}
void AShieldCharacter::Server_ShieldStopADS_Implementation()
{
	Server_Block();
	Super::StopADS();
}

/*
* Blocks with shield
*/
void AShieldCharacter::Block()
{
	if (HasAuthority())
	{
		shieldADSLerp = false;
		shieldUnADSLerp = true;
	}
	else
		Server_Block();
}
bool AShieldCharacter::Server_Block_Validate()
{
	return true;
}
void AShieldCharacter::Server_Block_Implementation()
{
	shieldADSLerp = false;
	shieldUnADSLerp = true;
}

/*
* Stops blocking with shield
*/
void AShieldCharacter::StopBlocking()
{
	if (HasAuthority())
	{
		shieldUnADSLerp = false;
		shieldADSLerp = true;
	}
	else
		Server_StopBlocking();
}
bool AShieldCharacter::Server_StopBlocking_Validate()
{
	return true;
}
void AShieldCharacter::Server_StopBlocking_Implementation()
{
	shieldUnADSLerp = false;
	shieldADSLerp = true;
}

/*
* Start Ability 1
*/
void AShieldCharacter::StartAbility1()
{
	if (HasAuthority())
	{
		if (GetWorld()->GetTimerManager().IsTimerActive(shieldBashTimer) == false
			&& hasShield == true)
		{
			//character charges forward while blocking
			GetWorldTimerManager().SetTimer(shieldBashTimer, this,
				&AShieldCharacter::StopAbility1, shieldBashCooldown, false);
			ShieldBash();
		}
	}
	else
		Server_StartAbility1();
}
void AShieldCharacter::Server_StartAbility1_Implementation()
{
	if (GetWorld()->GetTimerManager().IsTimerActive(shieldBashTimer) == false
		&& hasShield == true)
	{
		//character charges forward while blocking
		GetWorldTimerManager().SetTimer(shieldBashTimer, this,
			&AShieldCharacter::Server_StopAbility1, shieldBashCooldown, false);
		Server_ShieldBash();
	}
}


/*
* Stop Ability 1
*/
void AShieldCharacter::StopAbility1()
{
	
}
void AShieldCharacter::Server_StopAbility1_Implementation()
{

}

/*
* Shield Bash
*/
void AShieldCharacter::ShieldBash()
{
	if (HasAuthority())
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

		Multi_ShieldBash();

		currentStates.AddUnique(PlayerGameState::ShieldBashing);
		FVector fireStartLocation = GetActorLocation();
		FVector fireEndLocation = fireStartLocation + (GetActorForwardVector() * shieldBashDist);

		// Line trace settings
		FHitResult hitResult;
		FCollisionQueryParams collisionParams;
		collisionParams.AddIgnoredActor(this); // Ignore self
		collisionParams.AddIgnoredActor(equippedShield); //ignore shield
		if (APawn* OwnerPawn = Cast<APawn>(GetOwner()))
		{
			collisionParams.AddIgnoredActor(OwnerPawn);
		}

		// Define Object Types to Trace (e.g., Physics Bodies)
		FCollisionObjectQueryParams ObjectQueryParams;
		ObjectQueryParams.AddObjectTypesToQuery(ECC_PhysicsBody);
		ObjectQueryParams.AddObjectTypesToQuery(ECC_WorldStatic);
		ObjectQueryParams.AddObjectTypesToQuery(ECC_WorldDynamic);
		ObjectQueryParams.AddObjectTypesToQuery(ECC_Pawn);

		// Perform the trace
		bool bHit = GetWorld()->LineTraceSingleByObjectType(
			hitResult, fireStartLocation, fireEndLocation, ObjectQueryParams, collisionParams);

		// Draw debug line (visible for 1 second)
		//DrawDebugLine(GetWorld(), fireStartLocation, fireEndLocation, FColor::Red, false, 5.0f, 0, 2.0f);

		AActor* hitActor = hitResult.GetActor();
		// Check if we hit something
		if (bHit)
		{
			UE_LOG(LogTemp, Warning, TEXT("hit smth"));
			float bufferDist = hitResult.Distance - 10;
			targetShieldBashLocation = fireStartLocation + (GetActorForwardVector() * bufferDist);
		}
		else
			targetShieldBashLocation = fireEndLocation;

		// prevents old velocity fighting location lerp
		movementComponent->StopMovementImmediately(); 
		prevMoveMode = movementComponent->MovementMode;
		movementComponent->SetMovementMode(EMovementMode::MOVE_Flying);

		if (IsLocallyControlled())
			GetController()->SetIgnoreMoveInput(true);


		shieldBashLerp = true;

		//stop ADSing and reset movement component values
		FTimerHandle DelayTimerHandle1;
		GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle1, FTimerDelegate::CreateLambda([this]()
			{
				StopADS();
				movementComponent->GroundFriction = baseGroundFriction;
				movementComponent->BrakingDecelerationWalking = baseBrakingDeceleration;
			}), .5f, false);

		//turn off shield hitbox
		FTimerHandle DelayTimerHandle2;
		GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle2, FTimerDelegate::CreateLambda([this]()
			{
				isShieldBashHBOn = false;
				shieldBashHitDetected = false;
			}), .75f, false);
	}
	else
		Server_ShieldBash();
}
bool AShieldCharacter::Server_ShieldBash_Validate()
{
	return true;
}
void AShieldCharacter::Server_ShieldBash_Implementation()
{
	isShieldBashHBOn = true;
	Server_ADS();
	Multi_ShieldBash();

	currentStates.AddUnique(PlayerGameState::ShieldBashing);
	FVector fireStartLocation = GetActorLocation();
	FVector fireEndLocation = fireStartLocation + (GetActorForwardVector() * shieldBashDist);

	// Line trace settings
	FHitResult hitResult;
	FCollisionQueryParams collisionParams;
	collisionParams.AddIgnoredActor(this); // Ignore self
	collisionParams.AddIgnoredActor(equippedShield); //ignore shield
	if (APawn* OwnerPawn = Cast<APawn>(GetOwner()))
	{
		collisionParams.AddIgnoredActor(OwnerPawn);
	}

	// Define Object Types to Trace (e.g., Physics Bodies)
	FCollisionObjectQueryParams ObjectQueryParams;
	ObjectQueryParams.AddObjectTypesToQuery(ECC_PhysicsBody);
	ObjectQueryParams.AddObjectTypesToQuery(ECC_WorldStatic);
	ObjectQueryParams.AddObjectTypesToQuery(ECC_WorldDynamic);
	ObjectQueryParams.AddObjectTypesToQuery(ECC_Pawn);

	// Perform the trace
	bool bHit = GetWorld()->LineTraceSingleByObjectType(
		hitResult, fireStartLocation, fireEndLocation, ObjectQueryParams, collisionParams);

	// Draw debug line (visible for 1 second)
	//DrawDebugLine(GetWorld(), fireStartLocation, fireEndLocation, FColor::Red, false, 5.0f, 0, 2.0f);

	AActor* hitActor = hitResult.GetActor();
	// Check if we hit something
	if (bHit)
	{
		UE_LOG(LogTemp, Warning, TEXT("hit smth"));
		float bufferDist = hitResult.Distance - 10;
		targetShieldBashLocation = fireStartLocation + (GetActorForwardVector() * bufferDist);
	}
	else
		targetShieldBashLocation = fireEndLocation;

	// prevents old velocity fighting location lerp
	movementComponent->StopMovementImmediately();
	prevMoveMode = movementComponent->MovementMode;
	movementComponent->SetMovementMode(EMovementMode::MOVE_Flying);

	if(IsLocallyControlled())
		GetController()->SetIgnoreMoveInput(true);

	shieldBashLerp = true;

	//stop ADSing and reset movement component values
	FTimerHandle DelayTimerHandle1;
	GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle1, FTimerDelegate::CreateLambda([this]()
		{
			Server_StopADS();
			movementComponent->GroundFriction = baseGroundFriction;
			movementComponent->BrakingDecelerationWalking = baseBrakingDeceleration;
		}), .5f, false);

	//turn off shield hitbox
	FTimerHandle DelayTimerHandle2;
	GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle2, FTimerDelegate::CreateLambda([this]()
		{
			isShieldBashHBOn = false;
			shieldBashHitDetected = false;
		}), .75f, false);
}

/*
* Multicast for shield bash vfx
*/
bool AShieldCharacter::Multi_ShieldBash_Validate()
{
	return true;
}
void AShieldCharacter::Multi_ShieldBash_Implementation()
{
	UGameplayStatics::SpawnEmitterAtLocation(
		GetWorld(),
		shieldBashVFX,
		GetActorLocation(),
		GetActorRotation(),
		true  // Auto destroy
	);
}


/*
* Start Ability 2
*/
void AShieldCharacter::StartAbility2()
{
	if (HasAuthority())
	{
		if (GetWorld()->GetTimerManager().IsTimerActive(shieldThrowTimer) == false
			&& hasShield == true && !currentStates.Contains(PlayerGameState::Ultimate))
		{
			//launch shield in camera's forward vector
			GetWorldTimerManager().SetTimer(shieldThrowTimer, this,
				&AShieldCharacter::StopAbility2, shieldThrowCooldown, false);
			ShieldThrow();
		}
	}
	else
		Server_StartAbility2();
}
void AShieldCharacter::Server_StartAbility2_Implementation()
{
	if (GetWorld()->GetTimerManager().IsTimerActive(shieldThrowTimer) == false
		&& hasShield == true && !currentStates.Contains(PlayerGameState::Ultimate))
	{
		//launch shield in camera's forward vector
		GetWorldTimerManager().SetTimer(shieldThrowTimer, this,
			&AShieldCharacter::Server_StopAbility2, shieldThrowCooldown, false);
		Server_ShieldThrow();
	}
}

/*
* Stop Ability 2
*/
void AShieldCharacter::StopAbility2()
{
	if (HasAuthority())
	{
		//re-equip shield
		equippedShield->SetActorEnableCollision(true);
		equippedShield->SetActorHiddenInGame(false);
		equippedShield->SetActorTickEnabled(true);
		hasShield = true;
	}
	else
		Server_StopAbility2();
}
void AShieldCharacter::Server_StopAbility2_Implementation()
{
	//re-equip shield
	equippedShield->SetActorEnableCollision(true);
	equippedShield->SetActorHiddenInGame(false);
	equippedShield->SetActorTickEnabled(true);
	hasShield = true;
}

/*
* Launch shield in camera's forward vector
*/
void AShieldCharacter::ShieldThrow()
{
	if (HasAuthority())
	{
		equippedShield->SetActorEnableCollision(false);
		equippedShield->SetActorHiddenInGame(true);
		equippedShield->SetActorTickEnabled(false);
		hasShield = false;

		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;
		SpawnParams.Instigator = GetInstigator();


		thrownShield = GetWorld()->SpawnActor<AActor>(shieldThrowWorldObj,
			shieldThrowLoc->GetComponentLocation(),
			shieldThrowLoc->GetComponentRotation(), SpawnParams);

		//thrownShield->source = this;
	}
	else
		Server_ShieldThrow();
}
bool AShieldCharacter::Server_ShieldThrow_Validate()
{
	return true;
}
void AShieldCharacter::Server_ShieldThrow_Implementation()
{
	equippedShield->SetActorEnableCollision(false);
	equippedShield->SetActorHiddenInGame(true);
	equippedShield->SetActorTickEnabled(false);
	hasShield = false;

	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;
	SpawnParams.Instigator = GetInstigator();


	thrownShield = GetWorld()->SpawnActor<AActor>(shieldThrowWorldObj,
		shieldThrowLoc->GetComponentLocation(),
		shieldThrowLoc->GetComponentRotation(), SpawnParams);

	//thrownShield->source = this;
}

/*
* Ultimate
*/
void AShieldCharacter::StartUltimate()
{
	if (HasAuthority())
	{
		if (GetWorld()->GetTimerManager().IsTimerActive(ultTimer) == false &&
			GetWorld()->GetTimerManager().IsTimerActive(ultCooldownTimer) == false)
		{
			//increase size of shield
			equippedShield->SetActorEnableCollision(true);
			equippedShield->SetActorHiddenInGame(false);
			equippedShield->SetActorTickEnabled(true);


			hasShield = true;
			shieldBashCooldown = 1;
			shieldThrowCooldown = 1;
			equippedShield->SetActorRelativeScale3D(equippedShield->GetActorScale() * 3);
			curSpeedMulti = 2.5f;

			currentStates.AddUnique(PlayerGameState::Ultimate);
			ultimateTriggered = true;

			FTimerHandle DelayTimerHandle1;
			GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle1, FTimerDelegate::CreateLambda([this]()
				{
					Multi_StartUlt(bodyMesh);

					GetWorldTimerManager().SetTimer(ultTimer, this,
						&AShieldCharacter::StopUltimate, ultLength, false);
				}), .5f, false);
		}
	}
	else
		Server_StartUltimate();
}
void AShieldCharacter::Server_StartUltimate_Implementation()
{
	if (GetWorld()->GetTimerManager().IsTimerActive(ultTimer) == false &&
		GetWorld()->GetTimerManager().IsTimerActive(ultCooldownTimer) == false)
	{
		//increase size of shield
		equippedShield->SetActorEnableCollision(true);
		equippedShield->SetActorHiddenInGame(false);
		equippedShield->SetActorTickEnabled(true);


		hasShield = true;
		shieldBashCooldown = 1;
		shieldThrowCooldown = 1;
		equippedShield->SetActorRelativeScale3D(equippedShield->GetActorScale() * 3);
		curSpeedMulti = 2.5f;

		currentStates.AddUnique(PlayerGameState::Ultimate);
		ultimateTriggered = true;
		//Server_SaveCurWeapons();

		FTimerHandle DelayTimerHandle1;
		GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle1, FTimerDelegate::CreateLambda([this]()
			{
				Multi_StartUlt(bodyMesh);

				GetWorldTimerManager().SetTimer(ultTimer, this,
					&AShieldCharacter::Server_StopUltimate, ultLength, false);
			}), .5f, false);
	}
}

/*
* Stop Ultimate
*/
void AShieldCharacter::StopUltimate()
{
	if (HasAuthority())
	{
		Multi_StopUlt(bodyMesh);

		//reset shield size
		shieldBashCooldown = baseShieldBashCooldown;
		shieldThrowCooldown = baseShieldThrowCooldown;
		curSpeedMulti = baseSpeedMulti;
		equippedShield->SetActorRelativeScale3D(FVector(.01f, .01f, .01f));

		GetWorld()->GetTimerManager().SetTimer(ultCooldownTimer, FTimerDelegate::CreateLambda([this]()
			{
				ultimateTriggered = false;
				currentStates.Remove(PlayerGameState::Ultimate);
			}), .05f, false);
	}
	else
		Server_StopUltimate();
}
void AShieldCharacter::Server_StopUltimate_Implementation()
{
	Multi_StopUlt(bodyMesh);

	//reset shield size
	shieldBashCooldown = baseShieldBashCooldown;
	shieldThrowCooldown = baseShieldThrowCooldown;
	curSpeedMulti = baseSpeedMulti;
	equippedShield->SetActorRelativeScale3D(FVector(.01f, .01f, .01f));

	GetWorld()->GetTimerManager().SetTimer(ultCooldownTimer, FTimerDelegate::CreateLambda([this]()
		{
			ultimateTriggered = false;
			currentStates.Remove(PlayerGameState::Ultimate);
		}), .05f, false);
}


/*
* Multicast for setting character material
*/
void AShieldCharacter::Multi_StartUlt_Implementation(UStaticMeshComponent* multiMesh)
{
	if (multiMesh)
		multiMesh->SetMaterial(0, ultimateMat);
}
void AShieldCharacter::Multi_StopUlt_Implementation(UStaticMeshComponent* multiMesh)
{
	if (multiMesh)
		multiMesh->SetMaterial(0, baseBodyMat);
}

