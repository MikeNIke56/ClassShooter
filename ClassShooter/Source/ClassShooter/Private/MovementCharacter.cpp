// Fill out your copyright notice in the Description page of Project Settings.


#include "MovementCharacter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

/*
* AMovementCharacter
*/
AMovementCharacter::AMovementCharacter()
	:AClassShooterCharacter()
{
	cableComponent = CreateDefaultSubobject<UCableComponent>(TEXT("CableComponent"));
	cableComponent->SetupAttachment(GetFirstPersonCameraComponent());
	cableComponent->SetVisibility(false);
}

/*
* Replicated variables
*/
void AMovementCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AMovementCharacter, canGrapple);
	DOREPLIFETIME(AMovementCharacter, grappleTimer);
	DOREPLIFETIME(AMovementCharacter, didGrappleAtk);
	DOREPLIFETIME(AMovementCharacter, cableComponent);
	DOREPLIFETIME(AMovementCharacter, dashTimer);
	DOREPLIFETIME(AMovementCharacter, dashTime);
	DOREPLIFETIME(AMovementCharacter, ultTimer);
	DOREPLIFETIME(AMovementCharacter, grappleAtkHitDetected);
	DOREPLIFETIME(AMovementCharacter, dashingLerp);
	DOREPLIFETIME(AMovementCharacter, grappleAtkLerp);
	DOREPLIFETIME(AMovementCharacter, grappleCooldownTimer);
	DOREPLIFETIME(AMovementCharacter, dashCooldownTimer);
	DOREPLIFETIME(AMovementCharacter, baseDashCooldown);
	DOREPLIFETIME(AMovementCharacter, ultCooldownTimer);
	DOREPLIFETIME(AMovementCharacter, isGrappleAtkHBOn);
	DOREPLIFETIME(AMovementCharacter, movementVector);
	DOREPLIFETIME(AMovementCharacter, targetGrappleAtkLocation);
	DOREPLIFETIME(AMovementCharacter, targetDashLocation);
	DOREPLIFETIME(AMovementCharacter, curDashCooldown);
	DOREPLIFETIME(AMovementCharacter, grappleSpd);
	DOREPLIFETIME(AMovementCharacter, grappleAtkDist);
	DOREPLIFETIME(AMovementCharacter, grappleCooldown);
	DOREPLIFETIME(AMovementCharacter, isWallRunning);
	DOREPLIFETIME(AMovementCharacter, isWallRunningL);
	DOREPLIFETIME(AMovementCharacter, isWallRunningR);
	DOREPLIFETIME(AMovementCharacter, canWallRun);
	DOREPLIFETIME(AMovementCharacter, cameraRotateLerp);
	DOREPLIFETIME(AMovementCharacter, wallRunDelay);
	DOREPLIFETIME(AMovementCharacter, canDash);
	DOREPLIFETIME(AMovementCharacter, wallRunNormal);
	DOREPLIFETIME(AMovementCharacter, wallRunGravity);
	DOREPLIFETIME(AMovementCharacter, targetRoll);
	DOREPLIFETIME(AMovementCharacter, wallRunSpd);
	DOREPLIFETIME(AMovementCharacter, wallRunJumpHeight);
	DOREPLIFETIME(AMovementCharacter, wallRunJumpDist);
	DOREPLIFETIME(AMovementCharacter, targetWallRunGrav);
	DOREPLIFETIME(AMovementCharacter, dashRemainingTime);
	DOREPLIFETIME(AMovementCharacter, ultRemainingTime);
	DOREPLIFETIME(AMovementCharacter, grappleRemainingTime);
}

/*
* Begin Play
*/
void AMovementCharacter::BeginPlay()
{
	Super::BeginPlay();
	cameraUltLerp = false;
	cameraUltLerpBack = false;
	targetUltPos = originalCamPos;
	targetUltPos.X -= 250;
	targetUltPos.Z += 50;

	didGrappleAtk = false;
	canGrapple = true;

	cableComponent->CableLength = 100.f;
	cableComponent->NumSegments = 1;
	cableComponent->CableWidth = 4.0f;

	isGrappleAtkHBOn = false;
	grappleAtkHitDetected = false;

	baseGrappleCooldown = grappleCooldown;
	baseDashCooldown = curDashCooldown;

	canDash = true;
}

/*
* Tick
*/
void AMovementCharacter::Tick(float deltaTime)
{
	if (IsValid(this))
	{
		Super::Tick(deltaTime);

		if (GetWorld()->GetTimerManager().IsTimerActive(ultTimer) == true)
			currentStates.AddUnique(PlayerGameState::Ultimate);

		//moves character from point A to point B
		if (grappleAtkLerp == true)
		{
			FVector curLocation = GetActorLocation();
			FVector newLocation = FMath::VInterpConstantTo(curLocation, targetGrappleAtkLocation,
				deltaTime, 1900);
			SetActorLocation(newLocation);

			movementComponent->Velocity = FVector::ZeroVector;

			if (FVector::Dist(targetGrappleAtkLocation, newLocation) <= 5)
			{
				grappleAtkLerp = false;

				if (IsLocallyControlled())
					GetController()->SetIgnoreMoveInput(false);

				currentStates.Remove(PlayerGameState::Grappling);
				movementComponent->SetMovementMode(prevMoveMode);
			}
		}

		UpdateCooldownValues();
	}
}

/*
* Updates character ability timers
*/
void AMovementCharacter::UpdateCooldownValues()
{
	if (HasAuthority())
	{
		grappleRemainingTime = GetWorld()->
			GetTimerManager().GetTimerRemaining(grappleCooldownTimer);
		dashRemainingTime = GetWorld()->
			GetTimerManager().GetTimerRemaining(dashCooldownTimer);
		ultRemainingTime = GetWorld()->
			GetTimerManager().GetTimerRemaining(ultTimer);
	}
	else
		Server_UpdateCooldownValues();
}
bool AMovementCharacter::Server_UpdateCooldownValues_Validate()
{
	return true;
}
void AMovementCharacter::Server_UpdateCooldownValues_Implementation()
{
	grappleRemainingTime = GetWorld()->
		GetTimerManager().GetTimerRemaining(grappleCooldownTimer);
	dashRemainingTime = GetWorld()->
		GetTimerManager().GetTimerRemaining(dashCooldownTimer);
	ultRemainingTime = GetWorld()->
		GetTimerManager().GetTimerRemaining(ultTimer);
}

/*
* Start shooting
*/
void AMovementCharacter::StartShooting()
{
	if (canGrapple == false)
	{
		//if triggered while grappling, grapple attack
		if (currentStates.Contains(PlayerGameState::Grappling) && didGrappleAtk == false)
			GrappleAttack();

		//if not, fire weapon
		else
			Super::StartShooting();
	}
	else
		Super::StartShooting();
}

/*
* Start Ability 1
*/
void AMovementCharacter::StartAbility1()
{
	if (HasAuthority())
	{
		if (GetWorld()->GetTimerManager().IsTimerActive(grappleTimer) == false &&
			canGrapple == true)
		{
			canGrapple = false;
			currentStates.AddUnique(PlayerGameState::Grappling);
			cableComponent->SetVisibility(true);

			GetWorldTimerManager().SetTimer(grappleTimer, this,
				&AMovementCharacter::StopAbility1, grappleTime, false);

			Grapple();
		}
		else
			UE_LOG(LogTemp, Warning, TEXT("ability not available"));
	}
	else
		Server_StartAbility1();
}
void AMovementCharacter::Server_StartAbility1_Implementation()
{
	if (GetWorld()->GetTimerManager().IsTimerActive(grappleTimer) == false &&
		canGrapple == true)
	{
		canGrapple = false;
		currentStates.AddUnique(PlayerGameState::Grappling);
		cableComponent->SetVisibility(true);

		GetWorldTimerManager().SetTimer(grappleTimer, this,
			&AMovementCharacter::Server_StopAbility1, grappleTime, false);

		Server_Grapple();
	}
	else
		UE_LOG(LogTemp, Warning, TEXT("ability not available"));
}

/*
* Stop Ability 1
*/
void AMovementCharacter::StopAbility1()
{
	if (HasAuthority())
	{
		//resets movement component values
		movementComponent->GroundFriction = baseGroundFriction;
		movementComponent->BrakingDecelerationWalking = baseBrakingDeceleration;
		cableComponent->SetVisibility(false);

		FTimerHandle DelayTimerHandle1;
		GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle1, FTimerDelegate::CreateLambda([this]()
			{
				cableComponent->SetVisibility(false);
			}), 1.0f, false);

		FTimerHandle DelayTimerHandle2;
		GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle2, FTimerDelegate::CreateLambda([this]()
			{
				currentStates.Remove(PlayerGameState::Grappling);
			}), 1.5f, false);

		GetWorld()->GetTimerManager().SetTimer(grappleCooldownTimer, FTimerDelegate::CreateLambda([this]()
			{
				canGrapple = true;
			}), grappleCooldown, false);
	}
}
void AMovementCharacter::Server_StopAbility1_Implementation()
{
	//resets movement component values
	movementComponent->GroundFriction = baseGroundFriction;
	movementComponent->BrakingDecelerationWalking = baseBrakingDeceleration;
	cableComponent->SetVisibility(false);

	FTimerHandle DelayTimerHandle1;
	GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle1, FTimerDelegate::CreateLambda([this]()
		{
			cableComponent->SetVisibility(false);
		}), 1.0f, false);

	FTimerHandle DelayTimerHandle2;
	GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle2, FTimerDelegate::CreateLambda([this]()
		{
			currentStates.Remove(PlayerGameState::Grappling);
		}), 1.5f, false);

	GetWorld()->GetTimerManager().SetTimer(grappleCooldownTimer, FTimerDelegate::CreateLambda([this]()
		{
			canGrapple = true;
		}), grappleCooldown, false);
}

/*
* Grapple attack
*/
void AMovementCharacter::GrappleAttack()
{
	if (HasAuthority())
	{
		currentStates.AddUnique(PlayerGameState::Dashing);
		didGrappleAtk = true;
		isGrappleAtkHBOn = true;

		//zero out character velocity before applying dash attack impulse
		movementVector = FVector2D::ZeroVector;
		movementComponent->StopMovementImmediately();


		currentStates.AddUnique(PlayerGameState::Grappling);
		FVector fireStartLocation = GetActorLocation();
		FVector fireEndLocation = fireStartLocation + (GetBaseAimRotation().Vector()
			* grappleAtkDist);

		// Line trace settings
		FHitResult hitResult;
		FCollisionQueryParams collisionParams;
		collisionParams.AddIgnoredActor(this); // Ignore self
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
			UE_LOG(LogTemp, Warning, TEXT("Hit Actor: %s"), *hitActor->GetName());
			float bufferDist = hitResult.Distance - 10;
			targetGrappleAtkLocation = fireStartLocation + (GetActorForwardVector() * bufferDist);
		}
		else
			targetGrappleAtkLocation = fireEndLocation;

		// prevents old velocity fighting lerp
		movementComponent->StopMovementImmediately(); 
		prevMoveMode = movementComponent->MovementMode;
		movementComponent->SetMovementMode(EMovementMode::MOVE_Flying);
		GetController()->SetIgnoreMoveInput(true);
		grappleAtkLerp = true;

		FTimerHandle DelayTimerHandle1;
		GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle1, FTimerDelegate::CreateLambda([this]()
			{
				didGrappleAtk = false;
			}), .75f, false);
		FTimerHandle DelayTimerHandle2;
		GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle2, FTimerDelegate::CreateLambda([this]()
			{
				isGrappleAtkHBOn = false;
				grappleAtkHitDetected = false;
				currentStates.Remove(PlayerGameState::Grappling);
				currentStates.Remove(PlayerGameState::Dashing);
			}), 1.0f, false);
	}
	else
		Server_GrappleAttack();
}
bool AMovementCharacter::Server_GrappleAttack_Validate()
{
	return true;
}
void AMovementCharacter::Server_GrappleAttack_Implementation()
{
	currentStates.AddUnique(PlayerGameState::Dashing);
	didGrappleAtk = true;
	isGrappleAtkHBOn = true;

	//zero out character velocity before applying dash attack impulse
	movementVector = FVector2D::ZeroVector;
	movementComponent->StopMovementImmediately();


	currentStates.AddUnique(PlayerGameState::Grappling);
	FVector fireStartLocation = GetActorLocation();
	FVector fireEndLocation = fireStartLocation + (GetBaseAimRotation().Vector()
		* grappleAtkDist);

	// Line trace settings
	FHitResult hitResult;
	FCollisionQueryParams collisionParams;
	collisionParams.AddIgnoredActor(this); // Ignore self
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
		targetGrappleAtkLocation = fireStartLocation + (GetActorForwardVector() * bufferDist);
	}
	else
		targetGrappleAtkLocation = fireEndLocation;

	// prevents old velocity fighting lerp
	movementComponent->StopMovementImmediately();
	prevMoveMode = movementComponent->MovementMode;
	movementComponent->SetMovementMode(EMovementMode::MOVE_Flying);
	GetController()->SetIgnoreMoveInput(true);
	grappleAtkLerp = true;

	FTimerHandle DelayTimerHandle1;
	GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle1, FTimerDelegate::CreateLambda([this]()
		{
			didGrappleAtk = false;
		}), .75f, false);
	FTimerHandle DelayTimerHandle2;
	GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle2, FTimerDelegate::CreateLambda([this]()
		{
			isGrappleAtkHBOn = false;
			grappleAtkHitDetected = false;
			currentStates.Remove(PlayerGameState::Grappling);
			currentStates.Remove(PlayerGameState::Dashing);
		}), 1.0f, false);
}


/*
* Grapple
*/
void AMovementCharacter::Grapple()
{
	if (HasAuthority())
	{
		//spawn cable endpoint object
		cableComponent->bAttachEnd = true;

		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;
		SpawnParams.Instigator = GetInstigator();

		FVector spawnStartLoc = GetFirstPersonCameraComponent()->GetComponentLocation();

		FRotator spawnRot = GetBaseAimRotation();
		FVector spawnRotForwardVec = spawnRot.Vector();

		FVector spawnLoc = spawnStartLoc + (spawnRotForwardVec * 1000);

		AActor* grapplePointCopy = GetWorld()->SpawnActor<AActor>(grappleObj, spawnLoc,
			spawnRot, SpawnParams);

		movementComponent->StopMovementImmediately();

		cableComponent->SetAttachEndToComponent(grapplePointCopy->FindComponentByClass<UStaticMeshComponent>(),
			FName("GrapplePoint.Sphere Sphere"));
		currentStates.Remove(PlayerGameState::Dashing);

		//adjust movement component values to allow for character to be launched up
		FTimerHandle DelayTimerHandle1;
		GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle1, FTimerDelegate::CreateLambda([this, spawnRotForwardVec]()
			{
				movementComponent->GroundFriction = 0.0;
				movementComponent->AddImpulse(spawnRotForwardVec * grappleSpd, true);
			}), .25f, false);

		//reset movement component values
		FTimerHandle DelayTimerHandle2;
		GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle2, FTimerDelegate::CreateLambda([this]()
			{
				movementComponent->GroundFriction = baseGroundFriction;
			}), 1.5f, false);
		FTimerHandle DelayTimerHandle3;
		GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle3, FTimerDelegate::CreateLambda([this, grapplePointCopy]()
			{
				cableComponent->bAttachEnd = false;
				grapplePointCopy->Destroy();
			}), 1.25f, false);
	}
	else
		Server_Grapple();
}
bool AMovementCharacter::Server_Grapple_Validate()
{
	return true;
}
void AMovementCharacter::Server_Grapple_Implementation()
{
	//spawn cable endpoint object
	cableComponent->bAttachEnd = true;

	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;
	SpawnParams.Instigator = GetInstigator();

	FVector spawnStartLoc = GetFirstPersonCameraComponent()->GetComponentLocation();

	FRotator spawnRot = GetBaseAimRotation();
	FVector spawnRotForwardVec = spawnRot.Vector();

	FVector spawnLoc = spawnStartLoc + (spawnRotForwardVec * 1000);

	AActor* grapplePointCopy = GetWorld()->SpawnActor<AActor>(grappleObj, spawnLoc,
		spawnRot, SpawnParams);

	movementComponent->StopMovementImmediately();

	cableComponent->SetAttachEndToComponent(grapplePointCopy->FindComponentByClass<UStaticMeshComponent>(),
		FName("GrapplePoint.Sphere Sphere"));
	currentStates.Remove(PlayerGameState::Dashing);

	//adjust movement component values to allow for character to be launched up
	FTimerHandle DelayTimerHandle1;
	GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle1, FTimerDelegate::CreateLambda([this, spawnRotForwardVec]()
		{
			movementComponent->GroundFriction = 0.0;
			movementComponent->AddImpulse(spawnRotForwardVec * grappleSpd, true);
		}), .25f, false);

	//reset movement component values
	FTimerHandle DelayTimerHandle2;
	GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle2, FTimerDelegate::CreateLambda([this]()
		{
			movementComponent->GroundFriction = baseGroundFriction;
		}), 1.5f, false);
	FTimerHandle DelayTimerHandle3;
	GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle3, FTimerDelegate::CreateLambda([this, grapplePointCopy]()
		{
			cableComponent->bAttachEnd = false;
			grapplePointCopy->Destroy();
		}), 1.25f, false);
}

/*
* Start Ability 2
*/
void AMovementCharacter::StartAbility2()
{
	if (HasAuthority())
	{
		if (GetWorld()->GetTimerManager().IsTimerActive(dashTimer) == false &&
			!currentStates.Contains(PlayerGameState::Dashing) &&
			!currentStates.Contains(PlayerGameState::Wallrunning) &&
			canDash == true)
		{
			canDash = false;
			GetWorldTimerManager().SetTimer(dashTimer, this,
				&AMovementCharacter::StopAbility2, dashTime, false);

			Dash();
		}
	}
	else
		Server_StartAbility2();
}
void AMovementCharacter::Server_StartAbility2_Implementation()
{
	if (GetWorld()->GetTimerManager().IsTimerActive(dashTimer) == false &&
		!currentStates.Contains(PlayerGameState::Dashing) &&
		!currentStates.Contains(PlayerGameState::Wallrunning) &&
		canDash == true)
	{
		canDash = false;
		GetWorldTimerManager().SetTimer(dashTimer, this,
			&AMovementCharacter::Server_StopAbility2, dashTime, false);

		Server_Dash();
	}
}

/*
* Stop Ability 2
*/
void AMovementCharacter::StopAbility2()
{
	if (HasAuthority())
	{
		GetWorld()->GetTimerManager().SetTimer(dashCooldownTimer, FTimerDelegate::CreateLambda([this]()
			{
				currentStates.Remove(PlayerGameState::Dashing);
				canDash = true;
			}), curDashCooldown, false);
	}
	else
		Server_StopAbility2();
}
void AMovementCharacter::Server_StopAbility2_Implementation()
{
	GetWorld()->GetTimerManager().SetTimer(dashCooldownTimer, FTimerDelegate::CreateLambda([this]()
		{
			currentStates.Remove(PlayerGameState::Dashing);
			canDash = true;
		}), curDashCooldown, false);
}

/*
* Dash
*/
void AMovementCharacter::Dash()
{
	if (HasAuthority())
	{
		currentStates.AddUnique(PlayerGameState::Dashing);

		//character dashes in actor forward vector
		FRotator spawnRot = GetBaseAimRotation();
		FVector spawnRotForwardVec = spawnRot.Vector();

		movementComponent->GroundFriction = 0.0;
		movementComponent->AddImpulse(spawnRotForwardVec * dashDist, true);

		FTimerHandle DelayTimerHandle1;
		GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle1, FTimerDelegate::CreateLambda([this]()
			{
				movementComponent->GroundFriction = baseGroundFriction;
				movementComponent->BrakingDecelerationWalking = baseBrakingDeceleration;
				currentStates.Remove(PlayerGameState::Dashing);
			}), .25f, false);
	}
	else
		Server_Dash();
}
bool AMovementCharacter::Server_Dash_Validate()
{
	return true;
}
void AMovementCharacter::Server_Dash_Implementation()
{
	currentStates.AddUnique(PlayerGameState::Dashing);

	//character dashes in actor forward vector
	FRotator spawnRot = GetBaseAimRotation();
	FVector spawnRotForwardVec = spawnRot.Vector();

	movementComponent->GroundFriction = 0.0;
	movementComponent->AddImpulse(spawnRotForwardVec * dashDist, true);

	FTimerHandle DelayTimerHandle1;
	GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle1, FTimerDelegate::CreateLambda([this]()
		{
			movementComponent->GroundFriction = baseGroundFriction;
			movementComponent->BrakingDecelerationWalking = baseBrakingDeceleration;
			currentStates.Remove(PlayerGameState::Dashing);
		}), .25f, false);
}

/*
* Start Ultimate
*/
void AMovementCharacter::StartUltimate()
{
	if (HasAuthority())
	{
		if (GetWorld()->GetTimerManager().IsTimerActive(ultTimer) == false &&
			GetWorld()->GetTimerManager().IsTimerActive(ultCooldownTimer) == false)
		{
			currentStates.AddUnique(PlayerGameState::Ultimate);
			curSpeedMulti = 2.5f;
			ultimateTriggered = true;

			FTimerHandle DelayTimerHandle1;
			GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle1, FTimerDelegate::CreateLambda([this]()
				{
					cameraUltLerp = true;
				}), .15f, false);

			FTimerHandle DelayTimerHandle2;
			GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle2, FTimerDelegate::CreateLambda([this]()
				{
					Multi_StartUlt(bodyMesh);

					GetWorldTimerManager().SetTimer(ultTimer, this,
						&AMovementCharacter::StopUltimate, ultLength, false);
				}), .5f, false);
		}
	}
	else
		Server_StartUltimate();
}
void AMovementCharacter::Server_StartUltimate_Implementation()
{
	if (GetWorld()->GetTimerManager().IsTimerActive(ultTimer) == false &&
		GetWorld()->GetTimerManager().IsTimerActive(ultCooldownTimer) == false)
	{
		currentStates.AddUnique(PlayerGameState::Ultimate);
		curSpeedMulti = 2.5f;
		ultimateTriggered = true;

		FTimerHandle DelayTimerHandle1;
		GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle1, FTimerDelegate::CreateLambda([this]()
			{
				cameraUltLerp = true;
			}), .15f, false);

		FTimerHandle DelayTimerHandle2;
		GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle2, FTimerDelegate::CreateLambda([this]()
			{
				Multi_StartUlt(bodyMesh);

				GetWorldTimerManager().SetTimer(ultTimer, this,
					&AMovementCharacter::Server_StopUltimate, ultLength, false);
			}), .5f, false);
	}
}

/*
* Stop Ultimate
*/
void AMovementCharacter::StopUltimate()
{
	if (HasAuthority())
	{
		Multi_StopUlt(bodyMesh);

		//reset speed and cooldowns
		curSpeedMulti = baseSpeedMulti;
		curDashCooldown = baseDashCooldown;
		grappleCooldown = baseGrappleCooldown;

		GetWorld()->GetTimerManager().SetTimer(ultCooldownTimer, FTimerDelegate::CreateLambda([this]()
			{
				ultimateTriggered = false;
				currentStates.Remove(PlayerGameState::Ultimate);
			}), .05f, false);
	}
	else
		Server_StopUltimate();
}
void AMovementCharacter::Server_StopUltimate_Implementation()
{
	Multi_StopUlt(bodyMesh);

	//reset speed and cooldowns
	curSpeedMulti = baseSpeedMulti;
	curDashCooldown = baseDashCooldown;
	grappleCooldown = baseGrappleCooldown;

	GetWorld()->GetTimerManager().SetTimer(ultCooldownTimer, FTimerDelegate::CreateLambda([this]()
		{
			ultimateTriggered = false;
			currentStates.Remove(PlayerGameState::Ultimate);
		}), .05f, false);
}

/*
* Multicast for character's material set
*/
void AMovementCharacter::Multi_StartUlt_Implementation(UStaticMeshComponent* multiMesh)
{
	if (multiMesh)
		multiMesh->SetMaterial(0, ultimateMat);
}
void AMovementCharacter::Multi_StopUlt_Implementation(UStaticMeshComponent* multiMesh)
{
	if (multiMesh)
		multiMesh->SetMaterial(0, baseBodyMat);
}

/*
* Resets character's movement component and current states
*/
void AMovementCharacter::ResetMovement()
{
	if (HasAuthority())
	{
		Super::ResetMovement();
		currentStates.Remove(PlayerGameState::Wallrunning);
		currentStates.Remove(PlayerGameState::Grappling);
	}
	else
		Server_ResetMovement();
}
void AMovementCharacter::Server_ResetMovement_Implementation()
{
	Super::ResetMovement();
	currentStates.Remove(PlayerGameState::Wallrunning);
	currentStates.Remove(PlayerGameState::Grappling);
}


/*
* Jump
*/
void AMovementCharacter::Jump()
{
	if (currentStates.Contains(PlayerGameState::Wallrunning))
	{
		if(HasAuthority())
			ResetMovement();
		else
			Server_ResetMovement();
	}
	else
		Super::Jump();
}

/*
* Land
*/
void AMovementCharacter::LandEvent()
{
	if (HasAuthority())
	{
		ResetMovement();
	}
	else
		Server_LandEvent();
}
bool AMovementCharacter::Server_LandEvent_Validate()
{
	return true;
}
void AMovementCharacter::Server_LandEvent_Implementation()
{
	Server_ResetMovement();
}

