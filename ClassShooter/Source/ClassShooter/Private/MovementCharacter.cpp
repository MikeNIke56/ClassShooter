// Fill out your copyright notice in the Description page of Project Settings.


#include "MovementCharacter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

AMovementCharacter::AMovementCharacter()
	:AClassShooterCharacter()
{
	cableComponent = CreateDefaultSubobject<UCableComponent>(TEXT("CableComponent"));
	cableComponent->SetupAttachment(GetFirstPersonCameraComponent());
	cableComponent->SetVisibility(false);
}


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

	wallRunGravity = false;
	isWallRunning = false;
	isWallRunningR = false;
	isWallRunningL = false;
	canWallRun = true;
	cameraRotateLerp = false;

	isGrappleAtkHBOn = false;
	grappleAtkHitDetected = false;

	baseGrappleCooldown = grappleCooldown;

	canSetRecallPos = true;
	canDash = true;

	FTimerHandle DelayTimerHandle;
	GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle, FTimerDelegate::CreateLambda([this]()
		{
			WallRunUpdate();
		}), .02f, true);
}

void AMovementCharacter::Tick(float deltaTime)
{
	Super::Tick(deltaTime);

	if (GetWorld()->GetTimerManager().IsTimerActive(ultTimer) == true)
		currentStates.AddUnique(PlayerGameState::Ultimate);

	if(this && canWallRun == true)
		WallRunUpdate();

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

		}
	}
	if (cameraRotateLerp == true)
	{
		if (IsValid(this) && GetWorld())
		{
			if (isWallRunning)
			{
				float curRoll = FRotator::NormalizeAxis(GetController()->GetControlRotation().Roll);
				float newRoll = FMath::FInterpTo(curRoll, FRotator::NormalizeAxis(targetRoll),
					deltaTime, 10);

				FRotator resultRotation = GetController()->GetControlRotation();
				resultRotation.Roll = FRotator::NormalizeAxis(newRoll);
				GetController()->SetControlRotation(resultRotation);

				if (FMath::Abs(targetRoll - newRoll) < .05f)
					cameraRotateLerp = false;
			}
			else
			{
				float curRoll = FRotator::NormalizeAxis(GetController()->GetControlRotation().Roll);
				float newRoll = FMath::FInterpTo(curRoll, FRotator::NormalizeAxis(baseRoll),
					deltaTime, 10);

				FRotator resultRotation = GetController()->GetControlRotation();
				resultRotation.Roll = FRotator::NormalizeAxis(newRoll);
				GetController()->SetControlRotation(resultRotation);

				if (FMath::Abs(baseRoll - newRoll) < .05f)
					cameraRotateLerp = false;
			}
		}
	}
	if (dashingLerp == true)
	{
		FVector curLocation = GetActorLocation();
		FVector newLocation = FMath::VInterpConstantTo(curLocation, targetDashLocation,
			deltaTime, 2400);
		SetActorLocation(newLocation, true);

		movementComponent->Velocity = FVector::ZeroVector;

		if (FVector::Dist(targetDashLocation, newLocation) <= 5)
		{
			dashingLerp = false;
			GetController()->SetIgnoreMoveInput(false);
			currentStates.Remove(PlayerGameState::Dashing);
			movementComponent->SetMovementMode(prevMoveMode);
		}
	}
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
			GetController()->SetIgnoreMoveInput(false);
			currentStates.Remove(PlayerGameState::Grappling);
			movementComponent->SetMovementMode(prevMoveMode);
		}
	}

	grappleRemainingTime = GetWorld()->
		GetTimerManager().GetTimerRemaining(grappleCooldownTimer);
	ultRemainingTime = GetWorld()->
		GetTimerManager().GetTimerRemaining(ultTimer);	
}

void AMovementCharacter::StartShooting()
{
	if (canGrapple == false)
	{
		if (currentStates.Contains(PlayerGameState::Grappling) && didGrappleAtk == false)
			GrappleAttack();
		else
			Super::StartShooting();
	}
	else
		Super::StartShooting();
}

void AMovementCharacter::StartAbility1()
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
void AMovementCharacter::StopAbility1()
{
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
void AMovementCharacter::GrappleAttack()
{
	currentStates.AddUnique(PlayerGameState::Dashing);
	didGrappleAtk = true;
	isGrappleAtkHBOn = true;
	movementVector = FVector2D::ZeroVector;
	movementComponent->StopMovementImmediately();


	currentStates.AddUnique(PlayerGameState::Grappling);
	FVector fireStartLocation = GetActorLocation();
	FVector fireEndLocation = fireStartLocation + (GetFirstPersonCameraComponent()->GetForwardVector()
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
	DrawDebugLine(GetWorld(), fireStartLocation, fireEndLocation, FColor::Red, false, 5.0f, 0, 2.0f);

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

	movementComponent->StopMovementImmediately(); // prevents old velocity fighting your lerp
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
		}), 1.0f, false);
}
void AMovementCharacter::Grapple()
{
	cableComponent->bAttachEnd = true;

	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;
	SpawnParams.Instigator = GetInstigator();

	FVector spawnStartLoc = GetFirstPersonCameraComponent()->GetComponentLocation();

	FRotator spawnRot = GetFirstPersonCameraComponent()->GetComponentRotation();
	FVector spawnRotForwardVec = spawnRot.Vector();

	FVector spawnLoc = spawnStartLoc + (spawnRotForwardVec * 1000);

	AActor* grapplePointCopy = GetWorld()->SpawnActor<AActor>(grappleObj, spawnLoc,
		spawnRot, SpawnParams);

	movementComponent->StopMovementImmediately();

	cableComponent->SetAttachEndToComponent(grapplePointCopy->FindComponentByClass<UStaticMeshComponent>(),
		FName("GrapplePoint.Sphere Sphere"));

	FTimerHandle DelayTimerHandle1;
	GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle1, FTimerDelegate::CreateLambda([this, spawnRotForwardVec]()
		{
			movementComponent->GroundFriction = 0.0;
			movementComponent->BrakingDecelerationWalking = 1400;
			movementComponent->AddImpulse(spawnRotForwardVec * grappleSpd, true);
		}), .25f, false);
	FTimerHandle DelayTimerHandle2;
	GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle2, FTimerDelegate::CreateLambda([this]()
		{
			movementComponent->GroundFriction = baseGroundFriction;
			movementComponent->BrakingDecelerationWalking = baseBrakingDeceleration;
		}), 1.5f, false);
	FTimerHandle DelayTimerHandle3;
	GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle3, FTimerDelegate::CreateLambda([this, grapplePointCopy]()
		{
			cableComponent->bAttachEnd = false;
			grapplePointCopy->Destroy();
		}), 1.25f, false);
}

void AMovementCharacter::StartAbility2()
{
	Dash();
	/*
	* if (GetWorld()->GetTimerManager().IsTimerActive(dashTimer) == false &&
		!currentStates.Contains(PlayerGameState::Dashing) &&
		!currentStates.Contains(PlayerGameState::Wallrunning) &&
		canDash == true)
	{
		GetWorldTimerManager().SetTimer(dashTimer, this,
			&AMovementCharacter::StopAbility1, dashTime, false);

		Dash();
	}
	*/
}
void AMovementCharacter::StopAbility2()
{
	GetWorld()->GetTimerManager().ClearTimer(dashCooldownTimer);
	GetWorld()->GetTimerManager().SetTimer(dashCooldownTimer, FTimerDelegate::CreateLambda([this]()
		{
			currentStates.Remove(PlayerGameState::Dashing);
		}), .01f, false);
}
void AMovementCharacter::Dash()
{
	currentStates.AddUnique(PlayerGameState::Dashing);
	FVector fireStartLocation = GetActorLocation();
	FVector fireEndLocation = fireStartLocation + (GetActorForwardVector() * dashDist);

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
	DrawDebugLine(GetWorld(), fireStartLocation, fireEndLocation, FColor::Red, false, 5.0f, 0, 2.0f);

	AActor* hitActor = hitResult.GetActor();
	// Check if we hit something
	if (bHit)
	{
		UE_LOG(LogTemp, Warning, TEXT("hit smth"));
		float bufferDist = hitResult.Distance - 10;
		targetDashLocation = fireStartLocation + (GetActorForwardVector() * bufferDist);
	}
	else
		targetDashLocation = fireEndLocation;

	movementComponent->StopMovementImmediately(); // prevents old velocity fighting your lerp
	prevMoveMode = movementComponent->MovementMode;
	movementComponent->SetMovementMode(EMovementMode::MOVE_Flying);
	GetController()->SetIgnoreMoveInput(true);
	dashingLerp = true;
}

void AMovementCharacter::StartUltimate()
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
		currentStates.AddUnique(PlayerGameState::Ultimate);
		curDashCooldown = 1;
		grappleCooldown = 1;
		curSpeedMulti = 2.5f;
		ultimateTriggered = true;
		SaveCurWeapons();

		FTimerHandle DelayTimerHandle1;
		GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle1, FTimerDelegate::CreateLambda([this]()
			{
				cameraUltLerp = true;
			}), .15f, false);

		FTimerHandle DelayTimerHandle2;
		GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle2, FTimerDelegate::CreateLambda([this]()
			{
				bodyMesh->SetMaterial(0, ultimateMat);

				GetWorldTimerManager().SetTimer(ultTimer, this,
					&AMovementCharacter::StopUltimate, ultLength, false);
			}), .5f, false);
	}
}
void AMovementCharacter::StopUltimate()
{
	bodyMesh->SetMaterial(0, baseBodyMat);
	RestoreCurWeapons();
	curSpeedMulti = baseSpeedMulti;
	curDashCooldown = baseDashCooldown;
	grappleCooldown = baseGrappleCooldown;

	GetWorld()->GetTimerManager().SetTimer(ultCooldownTimer, FTimerDelegate::CreateLambda([this]()
		{
			ultimateTriggered = false;
			currentStates.Remove(PlayerGameState::Ultimate);
		}), .05f, false);
}


void AMovementCharacter::WallRunUpdate()
{
	if (!WallRunEndVectors().IsEmpty())
	{
		if (WallRunMovement(GetActorLocation(), WallRunEndVectors()[0], -1) == true)
		{
			dashingLerp = false;
			currentStates.Remove(PlayerGameState::Dashing);

			movementComponent->StopMovementImmediately();
			isWallRunning = true;
			isWallRunningR = true;
			isWallRunningL = false;
			targetRoll = -15;
			cameraRotateLerp = true;

			movementComponent->GravityScale = FMath::FInterpTo(movementComponent->GravityScale,
				targetWallRunGrav, GetWorld()->DeltaTimeSeconds, 10.0f);

			if (!currentStates.Contains(PlayerGameState::Wallrunning))
				currentStates.AddUnique(PlayerGameState::Wallrunning);
		}
		else if (isWallRunningR == false)
		{
			if (WallRunMovement(GetActorLocation(), WallRunEndVectors()[1], 1) == true)
			{
				dashingLerp = false;
				currentStates.Remove(PlayerGameState::Dashing);

				movementComponent->StopMovementImmediately();
				isWallRunning = true;
				isWallRunningR = false;
				isWallRunningL = true;
				targetRoll = 15;
				cameraRotateLerp = true;

				movementComponent->GravityScale = FMath::FInterpTo(movementComponent->GravityScale,
					targetWallRunGrav, GetWorld()->DeltaTimeSeconds, 10.0f);

				if (!currentStates.Contains(PlayerGameState::Wallrunning))
					currentStates.AddUnique(PlayerGameState::Wallrunning);
			}
		}		
	}
}
TArray<FVector> AMovementCharacter::WallRunEndVectors()
{
	TArray<FVector> endPoints;

	if (IsValid(this) && GetWorld())
	{
		FVector startLocation = GetActorLocation();

		FVector rightVector = GetActorRightVector();
		FVector endRightLocation = rightVector * 75.0f;

		FVector endLeftLocation = rightVector * -75.0f;

		FVector forwardVector = GetActorForwardVector();
		FVector endForwardLocation = forwardVector * -35.0f;


		FVector rightEndpoint = startLocation + endRightLocation + endForwardLocation;
		FVector leftEndpoint = startLocation + endLeftLocation + endForwardLocation;

		endPoints.Add(rightEndpoint);
		endPoints.Add(leftEndpoint);
	}

	return endPoints;
}
bool AMovementCharacter::WallRunMovement(FVector start, FVector end, float wallRunDir)
{
	FHitResult hitResult;
	FCollisionQueryParams collisionParams;
	collisionParams.AddIgnoredActor(this); // Ignore self

	// Perform the trace
	bool bHit;
	if(IsValid(this) && GetWorld())
		bHit = GetWorld()->LineTraceSingleByChannel(
			hitResult, start, end, ECC_Visibility, collisionParams);

	//Draw debug line (visible for 1 second)
	//DrawDebugLine(GetWorld(), start, end, FColor::Red, false, 1.0f, 0, 2.0f);

	// Check if we hit something
	if (bHit)
	{
		if (IsValidWallRunVector(hitResult.Normal) && movementComponent->MovementMode == MOVE_Falling)
		{
			wallRunNormal = hitResult.Normal;

			FVector lauchDir = wallRunNormal - GetActorLocation();
			FVector launchOutput = lauchDir * wallRunNormal;
			LaunchCharacter(launchOutput, false, false);

			float totalSpd = wallRunSpd * wallRunDir;
			FVector forwardDir = wallRunNormal.Cross(FVector(0, 0, 1)) * totalSpd;
			LaunchCharacter(forwardDir, true, wallRunGravity);

			return true;
		}
		return false;
	}
	return false;
}
bool AMovementCharacter::IsValidWallRunVector(FVector inVec)
{
	if (inVec.Z > -.52 && inVec.Z < .52)
		return true;
	else
		return false;
}
void AMovementCharacter::BlockWallRun()
{
	canWallRun = false;


	FTimerHandle DelayTimerHandle;
	GetWorld()->GetTimerManager().ClearTimer(DelayTimerHandle);
	GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle, FTimerDelegate::CreateLambda([this]()
		{
			canWallRun = true;
		}), wallRunDelay, false);
}
void AMovementCharacter::ResetMovement()
{
	Super::ResetMovement();
	isWallRunning = false;
	isWallRunningR = false;
	isWallRunningL = false;
	cameraRotateLerp = true;
	BlockWallRun();
	currentStates.Remove(PlayerGameState::Wallrunning);
	currentStates.Remove(PlayerGameState::Grappling);
}

void AMovementCharacter::Jump()
{
	if (currentStates.Contains(PlayerGameState::Wallrunning))
	{
		wallRunDelay = .25f;
		ResetMovement();

		isWallRunning = false;
		isWallRunningR = false;
		isWallRunningL = false;
		cameraRotateLerp = true;

		float jumpDistX = wallRunNormal.X * wallRunJumpDist;
		float jumpDistY = wallRunNormal.Y * wallRunJumpDist;
		LaunchCharacter(FVector(jumpDistX, jumpDistY, wallRunJumpHeight), false, true);
	}
	else
		Super::Jump();
}
void AMovementCharacter::LandEvent()
{
	wallRunDelay = .05f;
	ResetMovement();
	canWallRun = true;
}

