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
	baseDashCooldown = curDashCooldown;

	canSetRecallPos = true;
	canDash = true;

	/*
	FTimerHandle DelayTimerHandle;
	GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle, FTimerDelegate::CreateLambda([this]()
		{
			if(IsLocallyControlled())
				WallRunUpdate();
			//else
			//	Server_WallRunUpdate();
		}), .02f, true);
	*/
}

void AMovementCharacter::Tick(float deltaTime)
{
	Super::Tick(deltaTime);

	if (GetWorld()->GetTimerManager().IsTimerActive(ultTimer) == true)
		currentStates.AddUnique(PlayerGameState::Ultimate);


	//if (IsLocallyControlled() && canWallRun == true)
		//WallRunUpdate();

	if (cameraRotateLerp == true)
	{
		if (IsValid(this) && GetWorld())
		{
			if (isWallRunning)
			{
				float curRoll = FRotator::NormalizeAxis(GetBaseAimRotation().Roll);
				float newRoll = FMath::FInterpTo(curRoll, FRotator::NormalizeAxis(targetRoll),
					deltaTime, 10);

				FRotator resultRotation = GetBaseAimRotation();
				resultRotation.Roll = FRotator::NormalizeAxis(newRoll);

				if (IsLocallyControlled())
					GetController()->SetControlRotation(resultRotation);

				if (FMath::Abs(targetRoll - newRoll) < .05f)
					cameraRotateLerp = false;
			}
			else
			{
				float curRoll = FRotator::NormalizeAxis(GetBaseAimRotation().Roll);
				float newRoll = FMath::FInterpTo(curRoll, FRotator::NormalizeAxis(baseRoll),
					deltaTime, 10);

				FRotator resultRotation = GetBaseAimRotation();
				resultRotation.Roll = FRotator::NormalizeAxis(newRoll);

				if (IsLocallyControlled())
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

			if (IsLocallyControlled())
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

			if(IsLocallyControlled())
				GetController()->SetIgnoreMoveInput(false);

			currentStates.Remove(PlayerGameState::Grappling);
			movementComponent->SetMovementMode(prevMoveMode);
		}
	}

	UpdateCooldownValues();
}

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

void AMovementCharacter::StopAbility1()
{
	if (HasAuthority())
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
}
void AMovementCharacter::Server_StopAbility1_Implementation()
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
	if (HasAuthority())
	{
		currentStates.AddUnique(PlayerGameState::Dashing);
		didGrappleAtk = true;
		isGrappleAtkHBOn = true;
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
			currentStates.Remove(PlayerGameState::Dashing);
		}), 1.0f, false);
}

void AMovementCharacter::Grapple()
{
	if (HasAuthority())
	{
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
	else
		Server_Grapple();
}
bool AMovementCharacter::Server_Grapple_Validate()
{
	return true;
}
void AMovementCharacter::Server_Grapple_Implementation()
{
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

void AMovementCharacter::Dash()
{
	if (HasAuthority())
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
		//DrawDebugLine(GetWorld(), fireStartLocation, fireEndLocation, FColor::Red, false, 5.0f, 0, 2.0f);

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
	//DrawDebugLine(GetWorld(), fireStartLocation, fireEndLocation, FColor::Red, false, 5.0f, 0, 2.0f);

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
	if (HasAuthority())
	{
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
	else
		Server_StartUltimate();
}
void AMovementCharacter::Server_StartUltimate_Implementation()
{
	if (GetWorld()->GetTimerManager().IsTimerActive(ultTimer) == false &&
		GetWorld()->GetTimerManager().IsTimerActive(ultCooldownTimer) == false)
	{
		currentStates.AddUnique(PlayerGameState::Ultimate);
		curDashCooldown = 1;
		grappleCooldown = 1;
		curSpeedMulti = 2.5f;
		ultimateTriggered = true;
		Server_SaveCurWeapons();

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
					&AMovementCharacter::Server_StopUltimate, ultLength, false);
			}), .5f, false);
	}
}

void AMovementCharacter::StopUltimate()
{
	if (HasAuthority())
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
	else
		Server_StopUltimate();
}
void AMovementCharacter::Server_StopUltimate_Implementation()
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
	if (HasAuthority())
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
	else
		Server_WallRunUpdate();
}
bool AMovementCharacter::Server_WallRunUpdate_Validate()
{
	return true;
}
void AMovementCharacter::Server_WallRunUpdate_Implementation()
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
	if (HasAuthority())
	{
		canWallRun = false;

		FTimerHandle DelayTimerHandle;
		GetWorld()->GetTimerManager().ClearTimer(DelayTimerHandle);
		GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle, FTimerDelegate::CreateLambda([this]()
			{
				canWallRun = true;
			}), wallRunDelay, false);
	}
	else
		Server_BlockWallRun();
}
bool AMovementCharacter::Server_BlockWallRun_Validate()
{
	return true;
}
void AMovementCharacter::Server_BlockWallRun_Implementation()
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
	if (HasAuthority())
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
	else
		Server_ResetMovement();
}
void AMovementCharacter::Server_ResetMovement_Implementation()
{
	Super::ResetMovement();
	isWallRunning = false;
	isWallRunningR = false;
	isWallRunningL = false;
	cameraRotateLerp = true;
	Server_BlockWallRun();
	currentStates.Remove(PlayerGameState::Wallrunning);
	currentStates.Remove(PlayerGameState::Grappling);
}


void AMovementCharacter::Jump()
{
	if (currentStates.Contains(PlayerGameState::Wallrunning))
	{
		wallRunDelay = .25f;

		if(HasAuthority())
			ResetMovement();
		else
			Server_ResetMovement();

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
	if (HasAuthority())
	{
		wallRunDelay = .05f;
		ResetMovement();
		canWallRun = true;
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
	wallRunDelay = .05f;
	Server_ResetMovement();
	canWallRun = true;
}

