// Copyright Epic Games, Inc. All Rights Reserved.

#include "ClassShooterCharacter.h"
#include "ClassShooterProjectile.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include "Engine/LocalPlayer.h"
#include "Components/StaticMeshComponent.h"
#include "Knife.h"
#include "GameFramework/CharacterMovementComponent.h"



DEFINE_LOG_CATEGORY(LogTemplateCharacter);


/*
* AClassShooterCharacter
*/
AClassShooterCharacter::AClassShooterCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);
		
	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-10.f, 0.f, 60.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	Mesh1P->SetRelativeLocation(FVector(-30.f, 0.f, -150.f));

	bodyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Body Mesh"));
	bodyMesh->SetupAttachment(RootComponent);

	weaponLocation = CreateDefaultSubobject<UArrowComponent>("Weapon Position");
	weaponLocation->SetupAttachment(FirstPersonCameraComponent);

	baseFov = FirstPersonCameraComponent->FieldOfView;
	isMeleeHBOn = false;
	knifeHitDetected = false;
	baseBodyLocation = bodyMesh->GetRelativeLocation();

	weaponArray.Init(nullptr, 3); // 3 inventory slots
	backupWeaponArray.Init(nullptr, 3); // 3 inventory slots
}


/*
* Begin Play
*/
void AClassShooterCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	//setting initial values
	slashSpeed = 10;
	curHealth = maxHealth;
	movementComponent = GetCharacterMovement();
	baseSpeed = movementComponent->MaxWalkSpeed;
	curSpeed = baseSpeed;
	curSpeedMulti = baseSpeedMulti;

	ADSLerp = false;
	startFovChange = false;
	deathTriggered = false;

	isLeftSwing = true;
	meleeLerp = false;

	baseGroundFriction = movementComponent->GroundFriction;
	baseBrakingDeceleration = movementComponent->BrakingDecelerationWalking;
	movementComponent->GravityScale = 2.0f;
	movementComponent->JumpZVelocity = 420.0f;
	baseGravity = movementComponent->GravityScale;
	originalCamPos = GetFirstPersonCameraComponent()->GetRelativeLocation();
	originalBodyScale = GetCapsuleComponent()->GetComponentScale();

	ultimateTriggered = false;


	defaultCameraLocation = GetFirstPersonCameraComponent()->GetRelativeLocation();
	UE_LOG(LogTemp, Warning, TEXT("Character is locally controlled: %d"), IsLocallyControlled());
}

/*
* Replicated variables
*/
void AClassShooterCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AClassShooterCharacter, curWeapon);
	DOREPLIFETIME(AClassShooterCharacter, weaponArray);
	DOREPLIFETIME(AClassShooterCharacter, backupWeaponArray);
	DOREPLIFETIME(AClassShooterCharacter, weaponCopy);
	DOREPLIFETIME(AClassShooterCharacter, targetLocation);
	DOREPLIFETIME(AClassShooterCharacter, targetRotation);
	DOREPLIFETIME(AClassShooterCharacter, weaponLocation);
	DOREPLIFETIME(AClassShooterCharacter, curHealth);
	DOREPLIFETIME(AClassShooterCharacter, weaponWorldObj);
	DOREPLIFETIME(AClassShooterCharacter, isADSing);
	DOREPLIFETIME(AClassShooterCharacter, currentStates);
	DOREPLIFETIME(AClassShooterCharacter, jumpAllowed);
	DOREPLIFETIME(AClassShooterCharacter, jumpPow);
	DOREPLIFETIME(AClassShooterCharacter, slidePow);
	DOREPLIFETIME(AClassShooterCharacter, movementComponent);
	DOREPLIFETIME(AClassShooterCharacter, isSprinting);
	DOREPLIFETIME(AClassShooterCharacter, curSpeed);
	DOREPLIFETIME(AClassShooterCharacter, curSpeedMulti);
	DOREPLIFETIME(AClassShooterCharacter, baseSpeed);
	DOREPLIFETIME(AClassShooterCharacter, baseSpeedMulti);
	DOREPLIFETIME(AClassShooterCharacter, originalBodyScale);
	DOREPLIFETIME(AClassShooterCharacter, meleeLerp);
	DOREPLIFETIME(AClassShooterCharacter, isMeleeHBOn);
	DOREPLIFETIME(AClassShooterCharacter, knifeHitDetected);
	DOREPLIFETIME(AClassShooterCharacter, knifeSwingLocations);
	DOREPLIFETIME(AClassShooterCharacter, isLeftSwing);
	DOREPLIFETIME(AClassShooterCharacter, slashSpeed);
	DOREPLIFETIME(AClassShooterCharacter, ultimateTriggered);
	DOREPLIFETIME(AClassShooterCharacter, bodyMesh);
	DOREPLIFETIME(AClassShooterCharacter, originalCamPos);
	DOREPLIFETIME(AClassShooterCharacter, baseGroundFriction);
	DOREPLIFETIME(AClassShooterCharacter, baseBrakingDeceleration);
	DOREPLIFETIME(AClassShooterCharacter, targetFov);
	DOREPLIFETIME(AClassShooterCharacter, startFovChange);
	DOREPLIFETIME(AClassShooterCharacter, movementVector);
	DOREPLIFETIME(AClassShooterCharacter, deathExplosionVFX);
	DOREPLIFETIME(AClassShooterCharacter, deathTriggered);
	DOREPLIFETIME(AClassShooterCharacter, didGetKill);
	DOREPLIFETIME(AClassShooterCharacter, triggerScreenDmgEffect);
	DOREPLIFETIME(AClassShooterCharacter, didCauseDmg);
	DOREPLIFETIME(AClassShooterCharacter, playerWhoDamagedMe);
	DOREPLIFETIME(AClassShooterCharacter, xSens);
	DOREPLIFETIME(AClassShooterCharacter, ySens);
}

/*
* OnRep functions
*/
void AClassShooterCharacter::OnRep_weaponArray()
{
	
}
void AClassShooterCharacter::OnRep_curWeapon(AWeaponBase* weapon)
{
	ShowCurWeapon(curWeapon);
}
void AClassShooterCharacter::OnRep_targetLocation()
{
	if (curWeapon)
	{
		//attaches equipped weapon to weaponLocation
		curWeapon->SetOwner(this);
		FAttachmentTransformRules AttachRules(EAttachmentRule::SnapToTarget, true);
		curWeapon->AttachToComponent(weaponLocation, AttachRules);
		curWeapon->SetActorRotation(weaponLocation->GetComponentRotation());
		ADSLerp = true;
	}
}
void AClassShooterCharacter::OnRep_deathTriggered()
{
}

/*
* Tick
*/
void AClassShooterCharacter::Tick(float deltaTime)
{
	if (IsValid(this))
	{
		Super::Tick(deltaTime);
		jumpAllowed = IsGrounded();
		isSprinting = IsStillSprinting();
		movementComponent->MaxWalkSpeed = curSpeed;
		
		if (ADSLerp == true)
		{
			//weapon lerps between unADS and ADS locations within given time
			FVector curLocation = weaponLocation->GetRelativeLocation();
			FVector newLocation = FMath::VInterpTo(curLocation, targetLocation,
				deltaTime, 10);
			weaponLocation->SetRelativeLocation(newLocation);

			if (FVector::Dist(targetLocation, newLocation) <= .05)
			{
				ADSLerp = false;

				if (curWeapon)
					curWeapon->weaponMesh->SetRelativeRotation(FRotator(0, 0, 0));
			}

		}
		if (startFovChange == true)
		{
			//FOV lerps between the current FOV and the target FOV within given time
			float curFov = FirstPersonCameraComponent->FieldOfView;
			float newFov = FMath::FInterpTo(curFov, targetFov, deltaTime, 10);
			FirstPersonCameraComponent->SetFieldOfView(newFov);

			if (FMath::Abs(targetFov - newFov) <= .001)
				startFovChange = false;
		}
		if (meleeLerp == true)
		{
			//knife lerps between knife melee locations within given time
			FVector newLocation = weaponLocation->GetRelativeLocation();
			FRotator newRotation = weaponLocation->GetRelativeRotation();

			if (isLeftSwing == true)
			{
				newLocation = FMath::VInterpTo(newLocation,
					knifeSwingLocations[1]->GetRelativeLocation(),
					deltaTime, slashSpeed);

				newRotation = FMath::RInterpTo(newRotation,
					knifeSwingLocations[1]->GetRelativeRotation(),
					deltaTime, slashSpeed);
			}
			else
			{
				newLocation = FMath::VInterpTo(newLocation,
					knifeSwingLocations[3]->GetRelativeLocation(),
					deltaTime, slashSpeed);

				newRotation = FMath::RInterpTo(newRotation,
					knifeSwingLocations[3]->GetRelativeRotation(),
					deltaTime, slashSpeed);
			}

			weaponLocation->SetRelativeLocation(newLocation);
			weaponLocation->SetRelativeRotation(newRotation);

			if (isLeftSwing == true)
			{
				if (FVector::Dist(knifeSwingLocations[1]->
					GetRelativeLocation(), newLocation) <= 2)
				{
					meleeLerp = false;
					isLeftSwing = false;
					targetLocation = FVector(70.0, -14.0, -30.0);
					FRotator resetRot(0, -90, 0);
					weaponLocation->SetRelativeLocation(targetLocation);
					weaponLocation->SetRelativeRotation(resetRot);
					isMeleeHBOn = false;
					knifeHitDetected = false;
				}
			}
			else
			{
				if (FVector::Dist(knifeSwingLocations[3]->
					GetRelativeLocation(), newLocation) <= 2)
				{
					meleeLerp = false;
					isLeftSwing = true;
					targetLocation = FVector(70.0, -14.0, -30.0);
					FRotator resetRot(0, -90, 0);
					weaponLocation->SetRelativeLocation(targetLocation);
					weaponLocation->SetRelativeRotation(resetRot);
					isMeleeHBOn = false;
					knifeHitDetected = false;
				}
			}
		}

		if (curWeapon)
		{
			//sets curCamLoc and curCamRot of the equipped weapon for shooting 
			curWeapon->curCamLoc = FirstPersonCameraComponent->GetComponentLocation();
			curWeapon->curCamRot = GetBaseAimRotation();
		}

		//applies headbob to camera when player is walking or running
		if (movementComponent->Velocity.Length() > 0.1f)
		{
			if (curSpeed > baseSpeed && IsGrounded() == true)
			{
				float newBobAmount = bobAmount * 1.5;
				float newBobSpd = bobSpeed * 1.5;
				float newAmplitude = amplitude * 1.5;
				bobTimer += deltaTime * newBobSpd;
				float OffsetZ = FMath::Sin(bobTimer * amplitude) * newBobAmount;
				float OffsetY = FMath::Sin(bobTimer * (newBobAmount / amplitude));

				FVector NewLocation = defaultCameraLocation + FVector(0.0f, OffsetY, OffsetZ);
				FirstPersonCameraComponent->SetRelativeLocation(NewLocation);
			}
			else if (curSpeed == baseSpeed && IsGrounded() == true)
			{
				if (!currentStates.Contains(PlayerGameState::Sliding))
					currentStates.AddUnique(PlayerGameState::Walking);

				bobTimer += deltaTime * bobSpeed;
				float OffsetZ = FMath::Sin(bobTimer * amplitude) * bobAmount;
				float OffsetY = FMath::Sin(bobTimer * (bobAmount / amplitude));

				FVector NewLocation = defaultCameraLocation + FVector(0.0f, OffsetY, OffsetZ);
				FirstPersonCameraComponent->SetRelativeLocation(NewLocation);
				curSpeed = baseSpeed;
			}
		}
		else
		{
			// Reset bob
			bobTimer = 0.0f;
			FirstPersonCameraComponent->SetRelativeLocation(FMath::VInterpTo(
				FirstPersonCameraComponent->GetRelativeLocation(),
				defaultCameraLocation,
				deltaTime,
				5.0f
			));
			curSpeed = baseSpeed;
			currentStates.Remove(PlayerGameState::Walking);
		}
	}	
}

//////////////////////////////////////////////////////////////////////////// Input

void AClassShooterCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{	
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		// Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Triggered, this, &ACharacter::Jump);

		// Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AClassShooterCharacter::Move);

		// Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AClassShooterCharacter::Look);

		// Sprinting
		EnhancedInputComponent->BindAction(SprintAction, ETriggerEvent::Started, this, &AClassShooterCharacter::Sprint);
		EnhancedInputComponent->BindAction(SprintAction, ETriggerEvent::Completed, this, &AClassShooterCharacter::StopSprinting);
		EnhancedInputComponent->BindAction(ShootingAction, ETriggerEvent::Canceled, this, &AClassShooterCharacter::StopSprinting);

		// ADSing
		EnhancedInputComponent->BindAction(ADSAction, ETriggerEvent::Started, this, &AClassShooterCharacter::ADS);
		EnhancedInputComponent->BindAction(ADSAction, ETriggerEvent::Completed, this, &AClassShooterCharacter::StopADS);

		// Shooting
		EnhancedInputComponent->BindAction(ShootingAction, ETriggerEvent::Started, this, &AClassShooterCharacter::StartShooting);
		EnhancedInputComponent->BindAction(ShootingAction, ETriggerEvent::Completed, this, &AClassShooterCharacter::StopShooting);
		EnhancedInputComponent->BindAction(ShootingAction, ETriggerEvent::Canceled, this, &AClassShooterCharacter::StopShooting);

		// Switch Weapons
		EnhancedInputComponent->BindAction(SwitchWeaponAction, ETriggerEvent::Triggered, this, &AClassShooterCharacter::SwitchWeapon);
		
		// Reload
		EnhancedInputComponent->BindAction(ReloadWeaponAction, ETriggerEvent::Triggered, this, &AClassShooterCharacter::Reload);

		// Crouch
		EnhancedInputComponent->BindAction(CrouchAction, ETriggerEvent::Triggered, this, &AClassShooterCharacter::StartCrouch);

		// Ability1
		EnhancedInputComponent->BindAction(Ability1Action, ETriggerEvent::Triggered, this, &AClassShooterCharacter::StartAbility1);
		// Ability2
		EnhancedInputComponent->BindAction(Ability2Action, ETriggerEvent::Triggered, this, &AClassShooterCharacter::StartAbility2);
		
		// Ultimate
		EnhancedInputComponent->BindAction(UltimateAction, ETriggerEvent::Triggered, this, &AClassShooterCharacter::StartUltimate);
	}
	else
	{
		UE_LOG(LogTemplateCharacter, Error, TEXT("'%s' Failed to find an Enhanced Input Component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
}


/*
* Move
*/
void AClassShooterCharacter::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	movementVector = Value.Get<FVector2D>();

	if (Controller != nullptr && 
		FMath::Abs(movementVector.Y) > .1f ||
		FMath::Abs(movementVector.X) > .1f)
	{
		// add movement 
		AddMovementInput(GetActorForwardVector() * movementComponent->MaxWalkSpeed, 
			movementVector.Y);
		AddMovementInput(GetActorRightVector() * movementComponent->MaxWalkSpeed, 
			movementVector.X);
	}
}

/*
* Jump
*/
void AClassShooterCharacter::Jump()
{
	if (HasAuthority())
	{
		if (jumpAllowed == true)
		{
			currentStates.AddUnique(PlayerGameState::Jumping);
			float newJumpPow = jumpPow;

			//add impulse to character
			if (GetWorld()->GetTimerManager().IsTimerActive(slideTimer) == true)
				newJumpPow /= 2;
			movementComponent->AddImpulse(GetActorUpVector() * newJumpPow, true);
		}
	}
	else
		Server_Jump();
}
bool AClassShooterCharacter::Server_Jump_Validate()
{
	return true;
}
void AClassShooterCharacter::Server_Jump_Implementation()
{
	if (jumpAllowed == true)
	{
		currentStates.AddUnique(PlayerGameState::Jumping);
		float newJumpPow = jumpPow;

		//add impulse to character
		if (GetWorld()->GetTimerManager().IsTimerActive(slideTimer) == true)
			newJumpPow /= 2;
		movementComponent->AddImpulse(GetActorUpVector() * newJumpPow, true);
	}
}

/*
* Stop Jumping
*/
void AClassShooterCharacter::StopJumping()
{
	if (HasAuthority())
	{
		currentStates.Remove(PlayerGameState::Jumping);
		Super::StopJumping();
	}
	else
		Server_StopJumping();
}
bool AClassShooterCharacter::Server_StopJumping_Validate()
{
	return true;
}
void AClassShooterCharacter::Server_StopJumping_Implementation()
{
	currentStates.Remove(PlayerGameState::Jumping);
	Super::StopJumping();
}

/*
* Finds if player is currently on the ground
*/
bool AClassShooterCharacter::IsGrounded()
{
	// Get the start location (from the pawn's camera or actor position)
	FVector startLocation = GetActorLocation();

	// Get the end location (down direction, 75 units away)
	FVector downVector = GetActorUpVector();
	FVector endLocation = startLocation + (downVector * -110.0f);

	// Line trace settings
	FHitResult hitResult;
	FCollisionQueryParams collisionParams;
	collisionParams.AddIgnoredActor(this); // Ignore self

	// Perform the trace
	bool bHit = GetWorld()->LineTraceSingleByChannel(
		hitResult, startLocation, endLocation, ECC_Visibility, collisionParams);

	// Draw debug line (visible for 1 second)
	//DrawDebugLine(GetWorld(), startLocation, endLocation, FColor::Red, false, 1.0f, 0, 2.0f);

	// Check if we hit something
	if (bHit)
	{
		return true;
	}

	return false;
}

/*
* Look
*/
void AClassShooterCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		if (isADSing == true)
		{
			AddControllerYawInput((LookAxisVector.X * xSens * GetWorld()->GetDeltaSeconds()) / 2);
			AddControllerPitchInput((LookAxisVector.Y * ySens * GetWorld()->GetDeltaSeconds()) / 2);
		}
		else
		{
			AddControllerYawInput(LookAxisVector.X * xSens * GetWorld()->GetDeltaSeconds());
			AddControllerPitchInput(LookAxisVector.Y * ySens * GetWorld()->GetDeltaSeconds());
		}
	}
}


/*
* Sprint
*/
void AClassShooterCharacter::Sprint()
{
	if (HasAuthority())
	{
		//apply speed multi to current speed
		curSpeed = baseSpeed * curSpeedMulti;
		currentStates.Remove(PlayerGameState::Walking);
		currentStates.AddUnique(PlayerGameState::Sprinting);
	}
	else
		Server_Sprint();
}
bool AClassShooterCharacter::Server_Sprint_Validate()
{
	return true;
}
void AClassShooterCharacter::Server_Sprint_Implementation()
{
	//apply speed multi to current speed
	curSpeed = baseSpeed * curSpeedMulti;
	currentStates.Remove(PlayerGameState::Walking);
	currentStates.AddUnique(PlayerGameState::Sprinting);
}

/*
* Stop Sprinting
*/
void AClassShooterCharacter::StopSprinting()
{
	if (HasAuthority())
	{
		//reset speed
		curSpeed = baseSpeed;
		currentStates.Remove(PlayerGameState::Sprinting);
	}
	else
		Server_StopSprinting();
}
bool AClassShooterCharacter::Server_StopSprinting_Validate()
{
	return true;
}
void AClassShooterCharacter::Server_StopSprinting_Implementation()
{
	//reset speed
	curSpeed = baseSpeed;
	currentStates.Remove(PlayerGameState::Sprinting);
}

/*
* Finds if player is currently sprinting
*/
bool AClassShooterCharacter::IsStillSprinting()
{
	//is the player holding sprint while moving on the ground?
	if (movementVector.Y > 0.0 && curSpeed > baseSpeed
		&& IsGrounded() == true)
		return true;
	else
		return false;
}


/*
* Starts player crouch
*/
void AClassShooterCharacter::StartCrouch()
{
	if (HasAuthority())
	{
		//when we press crouch, are we sprinting, then slide
		if (currentStates.Contains(PlayerGameState::Sprinting))
			Slide();
		else
		{
			//when we press crouch, are we standing still, then crouch
			if (!currentStates.Contains(PlayerGameState::Crouching))
				Crouch();

			//when we press crouch, are we already crouched, then uncrouch
			else
				StopCrouching();
		}
	}
	else
		Server_StartCrouch();
}
bool AClassShooterCharacter::Server_StartCrouch_Validate()
{
	return true;
}
void AClassShooterCharacter::Server_StartCrouch_Implementation()
{
	//when we press crouch, are we sprinting, then slide
	if (currentStates.Contains(PlayerGameState::Sprinting))
		Server_Slide();
	else
	{
		//when we press crouch, are we standing still, then crouch
		if (!currentStates.Contains(PlayerGameState::Crouching))
			Server_Crouch();

		//when we press crouch, are we already crouched, then uncrouch
		else
			Server_StopCrouching();
	}
}

/*
* Starts Crouch
*/
void AClassShooterCharacter::Crouch()
{
	if (HasAuthority())
	{
		//make character smaller and reduce their speed
		GetCapsuleComponent()->SetWorldScale3D(originalBodyScale / 2);
		movementComponent->MaxWalkSpeed = baseSpeed / 3;
		currentStates.AddUnique(PlayerGameState::Crouching);

		//adjusts the weapon location while crouched
		if (curWeapon && isADSing)
		{
			targetLocation = curWeapon->weaponADSCrouchedLocation;
			ADSLerp = true;
		}
	}
	else
		Server_Crouch();
}
bool AClassShooterCharacter::Server_Crouch_Validate()
{
	return true;
}
void AClassShooterCharacter::Server_Crouch_Implementation()
{
	//make character smaller and reduce their speed
	GetCapsuleComponent()->SetWorldScale3D(originalBodyScale / 2);
	movementComponent->MaxWalkSpeed = baseSpeed / 3;
	currentStates.AddUnique(PlayerGameState::Crouching);

	//adjusts the weapon location while crouched
	if (curWeapon && isADSing)
	{
		targetLocation = curWeapon->weaponADSCrouchedLocation;
		ADSLerp = true;
	}
}

/*
* Stops Crouch
*/
void AClassShooterCharacter::StopCrouching()
{
	if (HasAuthority())
	{
		//reset character scale, speed, and weapon location
		GetCapsuleComponent()->SetWorldScale3D(originalBodyScale);

		if (!isSprinting)
			movementComponent->MaxWalkSpeed = baseSpeed;

		if (curWeapon && isADSing)
		{
			targetLocation = curWeapon->weaponADSStandingLocation;
			ADSLerp = true;
		}

		ResetMovement();
	}
	else
		Server_StopCrouching();
}
bool AClassShooterCharacter::Server_StopCrouching_Validate()
{
	return true;
}
void AClassShooterCharacter::Server_StopCrouching_Implementation()
{
	//reset character scale, speed, and weapon location
	GetCapsuleComponent()->SetWorldScale3D(originalBodyScale);

	if (!isSprinting)
		movementComponent->MaxWalkSpeed = baseSpeed;

	if (curWeapon && isADSing)
	{
		targetLocation = curWeapon->weaponADSStandingLocation;
		ADSLerp = true;
	}

	Server_ResetMovement();
}

/*
* Slide
*/
void AClassShooterCharacter::Slide()
{
	if (HasAuthority())
	{
		//if the slide timer is not active
		if (GetWorld()->GetTimerManager().IsTimerActive(slideTimer) == false)
		{
			GetWorld()->GetTimerManager().ClearTimer(slideTimer);
			GetCapsuleComponent()->SetWorldScale3D(originalBodyScale / 2);

			if (IsGrounded())
				currentStates.AddUnique(PlayerGameState::Sliding);
			else
				currentStates.AddUnique(PlayerGameState::Diving);

			//adjust movement components to allow for sliding
			movementComponent->GroundFriction = 0.0;
			movementComponent->BrakingDecelerationWalking = 1400;

			//normalize velocity vector
			FVector velocity = GetCharacterMovement()->Velocity;
			velocity.Normalize();

			//constrain slide along appropriate axis
			movementComponent->SetPlaneConstraintFromVectors(velocity, GetActorUpVector());
			movementComponent->SetPlaneConstraintEnabled(true);

			FVector slideVec = FindSlideVector();

			//apply impulse to character
			if (slideVec.Z <= .02 || IsGrounded() == true)
			{
				movementComponent->AddImpulse(GetActorForwardVector() * slidePow, true);
				GetWorld()->GetTimerManager().SetTimer(slideTimer, this,
					&AClassShooterCharacter::StopSliding, 1.0f, false);
			}
		}
	}
	else
		Server_Slide();
}
bool AClassShooterCharacter::Server_Slide_Validate()
{
	return true;
}
void AClassShooterCharacter::Server_Slide_Implementation()
{
	//if the slide timer is not active
	if (GetWorld()->GetTimerManager().IsTimerActive(slideTimer) == false)
	{
		GetWorld()->GetTimerManager().ClearTimer(slideTimer);
		GetCapsuleComponent()->SetWorldScale3D(originalBodyScale / 2);

		if (IsGrounded())
			currentStates.AddUnique(PlayerGameState::Sliding);
		else
			currentStates.AddUnique(PlayerGameState::Diving);

		//adjust movement components to allow for sliding
		movementComponent->GroundFriction = 0.0;
		movementComponent->BrakingDecelerationWalking = 1400;

		//normalize velocity vector
		FVector velocity = GetCharacterMovement()->Velocity;
		velocity.Normalize();

		//constrain slide along appropriate axis
		movementComponent->SetPlaneConstraintFromVectors(velocity, GetActorUpVector());
		movementComponent->SetPlaneConstraintEnabled(true);

		FVector slideVec = FindSlideVector();

		//apply impulse to character
		if (slideVec.Z <= .02 || IsGrounded() == true)
		{
			movementComponent->AddImpulse(GetActorForwardVector() * slidePow, true);
			GetWorld()->GetTimerManager().SetTimer(slideTimer, this,
				&AClassShooterCharacter::Server_StopSliding, 1.0f, false);
		}
	}
}

/*
* Stops Slide
*/
void AClassShooterCharacter::StopSliding()
{
	if (HasAuthority())
	{
		//resets player movement
		ResetMovement();
	}
	else
		Server_StopSliding();
}
bool AClassShooterCharacter::Server_StopSliding_Validate()
{
	return true;
}
void AClassShooterCharacter::Server_StopSliding_Implementation()
{
	//resets player movement
	Server_ResetMovement();
}

/*
* Finds slide vector depending on character's current location
*/
FVector AClassShooterCharacter::FindSlideVector()
{
	// Get the start location (from the pawn's camera or actor position)
	FVector startLocation = GetActorLocation();

	// Get the end location (down direction, 75 units away)
	FVector downVector = GetActorUpVector();
	FVector endLocation = (downVector * -200) + startLocation;

	// Line trace settings
	FHitResult hitResult;
	FCollisionQueryParams collisionParams;
	collisionParams.AddIgnoredActor(this); // Ignore self

	// Perform the trace
	bool bHit = GetWorld()->LineTraceSingleByChannel(
		hitResult, startLocation, endLocation, ECC_Visibility, collisionParams);

	FVector crossProdVec = FVector::CrossProduct(hitResult.ImpactPoint, GetActorRightVector());

	// Draw debug line (visible for 1 second)
	DrawDebugLine(GetWorld(), startLocation, endLocation, FColor::Red, false, 1.0f, 0, 2.0f);

	crossProdVec *= -1;
	return crossProdVec;

}

/*
* Resets player's movement component to normal
*/
void AClassShooterCharacter::ResetMovement()
{
	if (HasAuthority())
	{
		currentStates.Empty();

		//reset scale if crouched previously
		GetCapsuleComponent()->SetWorldScale3D(originalBodyScale);

		movementComponent->GravityScale = baseGravity;

		if (!isSprinting)
			movementComponent->MaxWalkSpeed = baseSpeed;
		else
			currentStates.AddUnique(PlayerGameState::Sprinting);

		//resets movement component values
		movementComponent->GroundFriction = baseGroundFriction;
		movementComponent->BrakingDecelerationWalking = baseBrakingDeceleration;
		movementComponent->SetPlaneConstraintEnabled(false);
	}
	else
		Server_ResetMovement();
}
bool AClassShooterCharacter::Server_ResetMovement_Validate()
{
	return true;
}
void AClassShooterCharacter::Server_ResetMovement_Implementation()
{
	currentStates.Empty();

	//reset scale if crouched previously
	GetCapsuleComponent()->SetWorldScale3D(originalBodyScale);

	movementComponent->GravityScale = baseGravity;

	if (!isSprinting)
		movementComponent->MaxWalkSpeed = baseSpeed;
	else
		currentStates.AddUnique(PlayerGameState::Sprinting);

	//resets movement component values
	movementComponent->GroundFriction = baseGroundFriction;
	movementComponent->BrakingDecelerationWalking = baseBrakingDeceleration;
	movementComponent->SetPlaneConstraintEnabled(false);
}


/*
* ADS equipped weapon
*/
void AClassShooterCharacter::ADS()
{
	if (HasAuthority())
	{
		//change FOV, move weapon mesh to target ADS location, and reduce bullet cone 
		//and recoil
		if (curWeapon && curWeapon->name != "Knife" &&
			curWeapon->name != "GL" && curWeapon->name != "RPG")
		{
			isADSing = true;
			curWeapon->recoilAmnt = curWeapon->recoilAmnt / 4;

			if (curWeapon->name != "Sniper")
				curWeapon->curBulletCone = curWeapon->baseBulletCone / 5;
			else
				curWeapon->curBulletCone = 0;

			curWeapon->weaponMesh->SetRelativeRotation(FRotator(0, 0, 0));

			if (currentStates.Contains(PlayerGameState::Crouching))
				targetLocation = curWeapon->weaponADSCrouchedLocation;
			else
				targetLocation = curWeapon->weaponADSStandingLocation;

			ADSLerp = true;
			UE_LOG(LogTemp, Warning, TEXT("ADSing"));

			targetFov = curWeapon->weaponADSFOV;
			startFovChange = true;
		}
	}
	else
		Server_ADS();
}
bool AClassShooterCharacter::Server_ADS_Validate()
{
	return true;
}
void AClassShooterCharacter::Server_ADS_Implementation()
{
	//change FOV, move weapon mesh to target ADS location, and reduce bullet cone 
	//and recoil
	if (curWeapon && curWeapon->name != "Knife" &&
		curWeapon->name != "GL" && curWeapon->name != "RPG")
	{
		isADSing = true;
		curWeapon->recoilAmnt = curWeapon->recoilAmnt / 4;

		if (curWeapon->name != "Sniper")
			curWeapon->curBulletCone = curWeapon->baseBulletCone / 5;
		else
			curWeapon->curBulletCone = 0;

		curWeapon->weaponMesh->SetRelativeRotation(FRotator(0, 0, 0));

		if (currentStates.Contains(PlayerGameState::Crouching))
			targetLocation = curWeapon->weaponADSCrouchedLocation;
		else
			targetLocation = curWeapon->weaponADSStandingLocation;

		ADSLerp = true;
		UE_LOG(LogTemp, Warning, TEXT("ADSing"));

		targetFov = curWeapon->weaponADSFOV;
		startFovChange = true;
	}
}

/*
* unADS equipped weapon
*/
void AClassShooterCharacter::StopADS()
{
	if (HasAuthority())
	{
		//change FOV, move weapon mesh to target unADS location, and reset bullet cone 
		//and recoil
		if (curWeapon)
		{
			isADSing = false;
			curWeapon->curBulletCone = curWeapon->baseBulletCone;
			curWeapon->recoilAmnt = curWeapon->baseRecoilAmnt;

			targetLocation = curWeapon->weaponUnADSLocation;

			ADSLerp = true;
			UE_LOG(LogTemp, Warning, TEXT("stop ADSing"));

			targetFov = baseFov;
			startFovChange = true;
		}
	}
	else
		Server_StopADS();
}
bool AClassShooterCharacter::Server_StopADS_Validate()
{
	return true;
}
void AClassShooterCharacter::Server_StopADS_Implementation()
{
	if (curWeapon)
	{
		//change FOV, move weapon mesh to target unADS location, and reset bullet cone 
		//and recoil
		isADSing = false;
		curWeapon->curBulletCone = curWeapon->baseBulletCone;
		curWeapon->recoilAmnt = curWeapon->baseRecoilAmnt;

		targetLocation = curWeapon->weaponUnADSLocation;

		ADSLerp = true;
		UE_LOG(LogTemp, Warning, TEXT("stop ADSing"));

		targetFov = baseFov;
		startFovChange = true;
	}
}

/*
* Start Firing
*/
void AClassShooterCharacter::StartShooting()
{
	if (HasAuthority())
	{
		//fires the equipped weapon
		if (curWeapon && curWeapon->state == WeaponState::Equipped)
		{
			if (curWeapon->name == "Knife")
				Melee();
			else
				Shoot();
		}
	}
	else
		Server_StartShooting();
			
}
bool AClassShooterCharacter::Server_StartShooting_Validate()
{
	return true;
}
void AClassShooterCharacter::Server_StartShooting_Implementation()
{
	//fires the equipped weapon
	if (curWeapon && curWeapon->state == WeaponState::Equipped)
	{
		if (curWeapon->name == "Knife")
			Server_Melee();
		else
			Server_Shoot();
	}
}

/*
* Stop Firing
*/
void AClassShooterCharacter::StopShooting()
{
	if (HasAuthority())
	{
		if (curWeapon && curWeapon->isAutomatic)
		{
			GetWorldTimerManager().ClearTimer(curWeapon->fireTimer);
			curWeapon->isFiring = false;
		}
	}
	else
		Server_StopShooting();
	
}
bool AClassShooterCharacter::Server_StopShooting_Validate()
{
	return true;
}
void AClassShooterCharacter::Server_StopShooting_Implementation()
{
	if (curWeapon && curWeapon->isAutomatic)
	{
		GetWorldTimerManager().ClearTimer(curWeapon->fireTimer);
		curWeapon->isFiring = false;
	}
}

/*
* Fire
*/
void AClassShooterCharacter::Shoot()
{
	//on client

	if (HasAuthority())
	{
		// Server can call implementation directly
		if (curWeapon->isAutomatic == true)
			curWeapon->AutoFire();
		else
			curWeapon->Fire();
	}
	else
		Server_Shoot();
}
bool AClassShooterCharacter::Server_Shoot_Validate()
{
	return true;
}
void AClassShooterCharacter::Server_Shoot_Implementation()
{
	if (curWeapon->isAutomatic == true)
		curWeapon->Server_AutoFire();
	else
		curWeapon->Server_Fire();
}




/*
* Equipping weapons
*/
void AClassShooterCharacter::EquipWeapon(AWeaponBase* weapon, bool shouldCreateNewWeaponObj, bool isUlt)
{
	if (HasAuthority())
	{
		if (weapon != nullptr)
		{
			bool isInInventory = false;

			//if player is currently ulting
			if (isUlt == true)
			{
				//show current weapon
				weaponCopy = weapon;
				weaponCopy->state = WeaponState::Equipped;
				curWeapon = weaponCopy;
				ShowCurWeapon(weaponCopy);

				UE_LOG(LogTemp, Warning, TEXT("Equipped weapon: %s"), *weapon->name.ToString());

				weaponArray[0] = weaponCopy;
				return;
			}
			else
			{
				//check if weapon is already in inventory
				for (int i = 0; i < weaponArray.Num(); i++)
				{
					if (weaponArray[i] && weaponArray[i]->name == weapon->name)
					{
						isInInventory = true;
						UE_LOG(LogTemp, Warning, TEXT("weapon is already in inventory"));
						i = 3;
					}

				}

				if (weapon->state == WeaponState::OutOfInventory && isInInventory == false)
				{
					for (int i = 0; i < weaponArray.Num(); i++)
					{
						if (weaponArray[i] == nullptr && !weaponArray.Contains(weapon))
						{
							if (i == 0)
							{
								//spawn in and equip weapon
								if (shouldCreateNewWeaponObj == true)
								{
									FActorSpawnParameters SpawnParams;
									SpawnParams.Owner = this;
									SpawnParams.Instigator = GetInstigator();

									weaponWorldObj = weapon->GetClass();

									weaponCopy = GetWorld()->SpawnActor<AWeaponBase>(weaponWorldObj, targetLocation,
										FRotator(0, 0, 0), SpawnParams);
								}
								else
								{
									weaponCopy = weapon;
								}

								//change weapon state and show weapon
								weaponCopy->state = WeaponState::Equipped;
								curWeapon = weaponCopy;

								ShowCurWeapon(weaponCopy);

								UE_LOG(LogTemp, Warning, TEXT("Equipped weapon: %s"), *weapon->name.ToString());

								weaponArray[i] = weaponCopy;
								return;
							}
							else
							{
								//stow weapon
								StowWeapon(weapon, weapon->name, true, i);
								return;
							}
						}
					}
				}
				else
				{
					UE_LOG(LogTemp, Warning, TEXT("weapon is already in inventory"));
				}
			}
		}
	}
	else
		Server_EquipWeapon(weapon, shouldCreateNewWeaponObj, isUlt);
}
bool AClassShooterCharacter::Server_EquipWeapon_Validate(AWeaponBase* weapon, bool shouldCreateNewWeaponObj, bool isUlt)
{
	return true;
}
void AClassShooterCharacter::Server_EquipWeapon_Implementation(AWeaponBase* weapon, bool shouldCreateNewWeaponObj, bool isUlt)
{
	if (weapon != nullptr)
	{
		bool isInInventory = false;

		//if player is currently ulting
		if (isUlt == true)
			//show current weapon
		{
			weaponCopy = weapon;
			weaponCopy->state = WeaponState::Equipped;
			curWeapon = weaponCopy;
			Server_ShowCurWeapon(weaponCopy);

			UE_LOG(LogTemp, Warning, TEXT("Equipped weapon: %s"), *weapon->name.ToString());

			weaponArray[0] = weaponCopy;
			return;
		}
		else
		{
			//check if weapon is already in inventory
			for (int i = 0; i < weaponArray.Num(); i++)
			{
				if (weaponArray[i] && weaponArray[i]->name == weapon->name)
				{
					isInInventory = true;
					UE_LOG(LogTemp, Warning, TEXT("weapon is already in inventory"));
					i = 3;
				}
			}

			if (weapon->state == WeaponState::OutOfInventory && isInInventory == false)
			{
				for (int i = 0; i < weaponArray.Num(); i++)
				{
					if (weaponArray[i] == nullptr && !weaponArray.Contains(weapon))
					{
						if (i == 0)
						{
							if (shouldCreateNewWeaponObj == true)
							{
								//spawn in and equip weapon
								FActorSpawnParameters SpawnParams;
								SpawnParams.Owner = this;
								SpawnParams.Instigator = GetInstigator();

								weaponWorldObj = weapon->GetClass();

								weaponCopy = GetWorld()->SpawnActor<AWeaponBase>(weaponWorldObj, targetLocation,
									FRotator(0, 0, 0), SpawnParams);
							}
							else
							{
								weaponCopy = weapon;
							}

							//change weapon state and show weapon
							weaponCopy->SetUpWeapon(weapon);

							weaponCopy->state = WeaponState::Equipped;
							curWeapon = weaponCopy;

							Server_ShowCurWeapon(weaponCopy);

							UE_LOG(LogTemp, Warning, TEXT("Equipped weapon: %s"), *weapon->name.ToString());

							if (i >= 0)
								weaponArray[i] = weaponCopy;
							return;
						}
						else
						{
							//stow weapon
							Server_StowWeapon(weapon, weapon->name, true, i);
							return;
						}
					}
				}
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("weapon is already in inventory"));
			}
		}
	}
}


/*
* Show equipped weapon mesh
*/
void AClassShooterCharacter::ShowCurWeapon(AWeaponBase* weapon)
{
	if (HasAuthority())
	{
		if (weapon)
		{
			//determines where to set weapon mesh location
			if (isADSing)
			{
				if (currentStates.Contains(PlayerGameState::Crouching))
					targetLocation = weapon->weaponADSCrouchedLocation;
				else
					targetLocation = weapon->weaponADSStandingLocation;
			}
			else
				targetLocation = weapon->weaponUnADSLocation;

			//attach weapon
			weapon->SetOwner(this);
			FAttachmentTransformRules AttachRules(EAttachmentRule::SnapToTarget, true);
			weapon->AttachToComponent(weaponLocation, AttachRules);
			weapon->SetActorRotation(weaponLocation->GetComponentRotation());
			ADSLerp = true;
		}
	}
	else
		Server_ShowCurWeapon(weapon);
	
}
bool AClassShooterCharacter::Server_ShowCurWeapon_Validate(AWeaponBase* weapon)
{
	return true;
}
void AClassShooterCharacter::Server_ShowCurWeapon_Implementation(AWeaponBase* weapon)
{
	if (weapon)
	{
		//determines where to set weapon mesh location
		if (isADSing)
		{
			if (currentStates.Contains(PlayerGameState::Crouching))
				targetLocation = weapon->weaponADSCrouchedLocation;
			else
				targetLocation = weapon->weaponADSStandingLocation;
		}
		else
			targetLocation = weapon->weaponUnADSLocation;

		//attach weapon
		weapon->SetOwner(this);
		FAttachmentTransformRules AttachRules(EAttachmentRule::SnapToTarget, true);
		weapon->AttachToComponent(weaponLocation, AttachRules);
		weapon->SetActorRotation(weaponLocation->GetComponentRotation());
		ADSLerp = true;
	}
}


/*
* ADS equipped weapon
*/
void AClassShooterCharacter::ADSCurWeapon(AWeaponBase* weapon)
{
	if (!weaponArray.Contains(weapon)) return;

	if (weapon)
	{
		//set equipped weapon mesh to target location
		if (weapon->name != "Knife" && weapon->name != "GL")
		{
			if(currentStates.Contains(PlayerGameState::Crouching))
				targetLocation = weapon->weaponADSCrouchedLocation;
			else
				targetLocation = weapon->weaponADSStandingLocation;
		}
	}
	else
		UE_LOG(LogTemp, Warning, TEXT("no such weapon"));;
}


/*
* Switching weapons
*/
void AClassShooterCharacter::SwitchWeapon(const FInputActionValue& Value)
{
	if (HasAuthority())
	{
		if (meleeLerp == false)
		{
			int numWeapons = 0;
			int pos = 0;

			//checks how many weapons are currently in player's inventory
			for (int i = 0; i < weaponArray.Num(); i++)
			{
				if (weaponArray[i])
				{
					numWeapons++;

					if (weaponArray[i]->state == WeaponState::Equipped)
						pos = i;
				}
			}

			//swaps and stows weapons 
			if (numWeapons > 1)
			{
				int origPos = pos;

				weaponCopy = weaponArray[origPos];

				if (pos == numWeapons - 1)
					SwapWeaponOver(weaponArray[0], -1);
				else
					SwapWeaponOver(weaponArray[pos += 1], -1);

				StowWeapon(weaponArray[origPos], weaponArray[origPos]->name, false, -1);
			}
		}
	}
	else
		Server_SwitchWeapon(Value);

}
bool AClassShooterCharacter::Server_SwitchWeapon_Validate(const FInputActionValue& Value)
{
	return true;
}
void AClassShooterCharacter::Server_SwitchWeapon_Implementation(const FInputActionValue& Value)
{
	if (meleeLerp == false)
	{
		int numWeapons = 0;
		int pos = 0;

		//checks how many weapons are currently in player's inventory
		for (int i = 0; i < weaponArray.Num(); i++)
		{
			if (weaponArray[i])
			{
				numWeapons++;

				if (weaponArray[i]->state == WeaponState::Equipped)
					pos = i;
			}
		}

		//swaps and stows weapons 
		if (numWeapons > 1)
		{
			int origPos = pos;

			weaponCopy = weaponArray[origPos];

			if (pos == numWeapons - 1)
				Server_SwapWeaponOver(weaponArray[0], -1);
			else
				Server_SwapWeaponOver(weaponArray[pos += 1], -1);

			Server_StowWeapon(weaponArray[origPos], weaponArray[origPos]->name, false, -1);
		}
	}
}


/*
* Stowing weapons
*/
void AClassShooterCharacter::StowWeapon(AWeaponBase* weapon, const FName& socketName, bool shouldCreateNew, int pos)
{	
	if (HasAuthority())
	{
		//attaches stowed weapon object to sockets on the character model
		if (bodyMesh->DoesSocketExist(socketName))
		{
			if (shouldCreateNew == true)
			{
				FActorSpawnParameters SpawnParams;
				SpawnParams.Owner = this;
				SpawnParams.Instigator = GetInstigator();

				weaponWorldObj = weapon->GetClass();

				weaponCopy = GetWorld()->SpawnActor<AWeaponBase>(weaponWorldObj, targetLocation,
					FRotator(0, 0, 0), SpawnParams);

				weaponCopy->SetUpWeapon(weapon);

				FAttachmentTransformRules AttachRules(EAttachmentRule::SnapToTarget, true);
				weaponCopy->AttachToComponent(bodyMesh, AttachRules, socketName);
				UE_LOG(LogTemp, Warning, TEXT("Stowed weapon: %s"), *weaponCopy->name.ToString());
			}
			else
			{
				FAttachmentTransformRules AttachRules(EAttachmentRule::SnapToTarget, true);
				weapon->AttachToComponent(bodyMesh, AttachRules, socketName);
				UE_LOG(LogTemp, Warning, TEXT("Stowed weapon: %s"), *weaponCopy->name.ToString());
				weaponCopy->SetUpWeapon(weapon);
			}

			weaponCopy->state = WeaponState::Stowed;

			if (pos >= 0)
				weaponArray[pos] = weaponCopy;
		}
		else
			UE_LOG(LogTemp, Warning, TEXT("no existing socket"));
	}
	else
		Server_StowWeapon(weapon, socketName, shouldCreateNew, pos);
}
bool AClassShooterCharacter::Server_StowWeapon_Validate(AWeaponBase* weapon, const FName& socketName, bool shouldCreateNew, int pos)
{
	return true;
}
void AClassShooterCharacter::Server_StowWeapon_Implementation(AWeaponBase* weapon, const FName& socketName, bool shouldCreateNew, int pos)
{
	//attaches stowed weapon object to sockets on the character model
	if (bodyMesh->DoesSocketExist(socketName))
	{
		if (shouldCreateNew == true)
		{
			FActorSpawnParameters SpawnParams;
			SpawnParams.Owner = this;
			SpawnParams.Instigator = GetInstigator();

			weaponWorldObj = weapon->GetClass();

			weaponCopy = GetWorld()->SpawnActor<AWeaponBase>(weaponWorldObj, targetLocation,
				FRotator(0, 0, 0), SpawnParams);

			weaponCopy->SetUpWeapon(weapon);

			FAttachmentTransformRules AttachRules(EAttachmentRule::SnapToTarget, true);
			weaponCopy->AttachToComponent(bodyMesh, AttachRules, socketName);
			UE_LOG(LogTemp, Warning, TEXT("Stowed weapon: %s"), *weaponCopy->name.ToString());
		}
		else
		{
			FAttachmentTransformRules AttachRules(EAttachmentRule::SnapToTarget, true);
			weapon->AttachToComponent(bodyMesh, AttachRules, socketName);
			UE_LOG(LogTemp, Warning, TEXT("Stowed weapon: %s"), *weaponCopy->name.ToString());
			weaponCopy->SetUpWeapon(weapon);
		}

		weaponCopy->state = WeaponState::Stowed;

		if (pos >= 0)
			weaponArray[pos] = weaponCopy;
	}
	else
		UE_LOG(LogTemp, Warning, TEXT("no existing socket"));
}


/*
* Reload
*/
void AClassShooterCharacter::Reload()
{
	if (HasAuthority())
	{
		if (curWeapon)
		{
			curWeapon->Reload();
		}
	}
	else
		Server_Reload();
}
bool AClassShooterCharacter::Server_Reload_Validate()
{
	return true;
}
void AClassShooterCharacter::Server_Reload_Implementation()
{
	if (curWeapon)
	{
		curWeapon->Server_Reload();
	}
}

/*
* Procedural Recoil
*/
void AClassShooterCharacter::ProceduralRecoil(float multiplier)
{
	//applies slight locational and rotational offsets, within range, to weapon mesh 
	// model when firing
	FRotator recoilRotation;
	FVector recoilLocation;
	float localMultiplier = multiplier;

	recoilRotation.Roll = localMultiplier * FMath::FRandRange(-2.5f, -5.0f);
	recoilRotation.Pitch = localMultiplier * FMath::FRandRange(-0.8f, 0.8f);
	recoilRotation.Yaw = localMultiplier * FMath::FRandRange(-1.6f, 1.6f);

	recoilTransform.SetRotation(recoilRotation.Quaternion());
	recoilTransform.SetLocation(recoilLocation);

	recoilLocation.X = localMultiplier * FMath::FRandRange(-1.1f, -2.1f);
	recoilLocation.Y = localMultiplier * FMath::FRandRange(-.16f, -16);
	recoilLocation.Z = localMultiplier * FMath::FRandRange(0.0f, 0.0f);

	recoilTransform.SetLocation(recoilLocation);
}


/*
* Swap weapons
*/
void AClassShooterCharacter::SwapWeaponOver(AWeaponBase* weapon, int pos)
{
	if (HasAuthority())
	{
		//changes weapon state and shows weapon mesh
		weapon->state = WeaponState::Equipped;
		curWeapon = weapon;
		ShowCurWeapon(weapon);
		StopADS();
		weapon->SetOwner(this);

		if (pos >= 0)
			weaponArray[pos] = weapon;
	}
	else
		Server_SwapWeaponOver(weapon, pos);
}
bool AClassShooterCharacter::Server_SwapWeaponOver_Validate(AWeaponBase* weapon, int pos)
{
	return true;
}
void AClassShooterCharacter::Server_SwapWeaponOver_Implementation(AWeaponBase* weapon, int pos)
{
	//changes weapon state and shows weapon mesh
	weapon->state = WeaponState::Equipped;
	curWeapon = weapon;
	Server_ShowCurWeapon(weapon);
	UE_LOG(LogTemp, Warning, TEXT("Equipped weapon: %s"), *weapon->name.ToString());
	Server_StopADS();
	weapon->SetOwner(this);

	if (pos >= 0)
		weaponArray[pos] = weapon;
}


/*
* Melee
*/
void AClassShooterCharacter::Melee()
{
	if (HasAuthority())
	{
		currentStates.AddUnique(PlayerGameState::Meleeing);

		//sets knife swing location
		if (isLeftSwing == true)
		{
			FVector location(knifeSwingLocations[0]->GetRelativeLocation());
			FRotator rotation(knifeSwingLocations[0]->GetRelativeRotation());
			FVector scale(1.f, 1.f, 1.f);
			FTransform transform(rotation, location, scale);

			weaponLocation->SetRelativeTransform(transform);
			isMeleeHBOn = true;
			meleeLerp = true;
		}
		else
		{
			FVector location(knifeSwingLocations[2]->GetRelativeLocation());
			FRotator rotation(knifeSwingLocations[2]->GetRelativeRotation());
			FVector scale(1.f, 1.f, 1.f);
			FTransform transform(rotation, location, scale);

			weaponLocation->SetRelativeTransform(transform);
			isMeleeHBOn = true;
			meleeLerp = true;
		}
		curWeapon->Fire();
	}
	else
		Server_Melee();
}
bool AClassShooterCharacter::Server_Melee_Validate()
{
	return true;
}
void AClassShooterCharacter::Server_Melee_Implementation()
{
	currentStates.AddUnique(PlayerGameState::Meleeing);

	//sets knife swing location
	if (isLeftSwing == true)
	{
		FVector location(knifeSwingLocations[0]->GetRelativeLocation());
		FRotator rotation(knifeSwingLocations[0]->GetRelativeRotation());
		FVector scale(1.f, 1.f, 1.f);
		FTransform transform(rotation, location, scale);

		weaponLocation->SetRelativeTransform(transform);
		isMeleeHBOn = true;
		meleeLerp = true;
	}
	else
	{
		FVector location(knifeSwingLocations[2]->GetRelativeLocation());
		FRotator rotation(knifeSwingLocations[2]->GetRelativeRotation());
		FVector scale(1.f, 1.f, 1.f);
		FTransform transform(rotation, location, scale);

		weaponLocation->SetRelativeTransform(transform);
		isMeleeHBOn = true;
		meleeLerp = true;
	}
	curWeapon->Server_Fire();
}


/*
* Abilities
*/
void AClassShooterCharacter::StartAbility1()
{
	
}
bool AClassShooterCharacter::Server_StartAbility1_Validate()
{
	return true;
}
void AClassShooterCharacter::Server_StartAbility1_Implementation()
{

}
void AClassShooterCharacter::StopAbility1()
{

}
bool AClassShooterCharacter::Server_StopAbility1_Validate()
{
	return true;
}
void AClassShooterCharacter::Server_StopAbility1_Implementation()
{

}
void AClassShooterCharacter::StartAbility2()
{

}
bool AClassShooterCharacter::Server_StartAbility2_Validate()
{
	return true;
}
void AClassShooterCharacter::Server_StartAbility2_Implementation()
{

}
void AClassShooterCharacter::StopAbility2()
{

}
bool AClassShooterCharacter::Server_StopAbility2_Validate()
{
	return true;
}
void AClassShooterCharacter::Server_StopAbility2_Implementation()
{

}
void AClassShooterCharacter::StartUltimate()
{
	
}
bool AClassShooterCharacter::Server_StartUltimate_Validate()
{
	return true;
}
void AClassShooterCharacter::Server_StartUltimate_Implementation()
{

}
void AClassShooterCharacter::StopUltimate()
{

}
bool AClassShooterCharacter::Server_StopUltimate_Validate()
{
	return true;
}
void AClassShooterCharacter::Server_StopUltimate_Implementation()
{

}

/*
* Multicast functions
*/
bool AClassShooterCharacter::Multi_StartUlt_Validate(UStaticMeshComponent* multiMesh)
{
	return true;
}
void AClassShooterCharacter::Multi_StartUlt_Implementation(UStaticMeshComponent* multiMesh)
{

}
bool AClassShooterCharacter::Multi_StopUlt_Validate(UStaticMeshComponent* multiMesh)
{
	return true;
}
void AClassShooterCharacter::Multi_StopUlt_Implementation(UStaticMeshComponent* multiMesh)
{
}

/*
* Save current weapons
*/
void AClassShooterCharacter::SaveCurWeapons()
{
	if (HasAuthority())
	{
		//assigns weapons to backup
		for (int i = 0; i < weaponArray.Num(); i++)
		{
			backupWeaponArray[i] = nullptr;
			if (weaponArray[i])
			{
				backupWeaponArray[i] = weaponArray[i];
				backupWeaponArray[i]->state = WeaponState::OutOfInventory;
			}
		}
		//clears current loadout
		for (int i = 0; i < weaponArray.Num(); i++)
		{
			if (weaponArray[i])
			{
				weaponArray[i]->Destroy();
				weaponArray[i] = nullptr;
			}
		}
	}
	else
		Server_SaveCurWeapons();
}
bool AClassShooterCharacter::Server_SaveCurWeapons_Validate()
{
	return true;
}
void AClassShooterCharacter::Server_SaveCurWeapons_Implementation()
{
	//assigns weapons to backup
	for (int i = 0; i < weaponArray.Num(); i++)
	{
		backupWeaponArray[i] = nullptr;
		if (weaponArray[i])
		{
			backupWeaponArray[i] = weaponArray[i];
			backupWeaponArray[i]->state = WeaponState::OutOfInventory;
		}
	}
	//clears current loadout
	for (int i = 0; i < weaponArray.Num(); i++)
	{
		if (weaponArray[i])
		{
			weaponArray[i]->Destroy();
			weaponArray[i] = nullptr;
		}
	}
}

/*
* Restore weapons
*/
void AClassShooterCharacter::RestoreCurWeapons()
{
	if (HasAuthority())
	{
		//clears current loadout
		for (int i = 0; i < weaponArray.Num(); i++)
		{
			if (weaponArray[i])
			{
				weaponArray[i]->Destroy();
				weaponArray[i] = nullptr;
			}
		}
		//re-assigns weapons from backup
		for (int i = 0; i < backupWeaponArray.Num(); i++)
		{
			if (backupWeaponArray[i])
				EquipWeapon(backupWeaponArray[i], true, false);
		}
	}
	else
		Server_RestoreCurWeapons();
}
bool AClassShooterCharacter::Server_RestoreCurWeapons_Validate()
{
	return true;
}
void AClassShooterCharacter::Server_RestoreCurWeapons_Implementation()
{
	//clears current loadout
	for (int i = 0; i < weaponArray.Num(); i++)
	{
		if (weaponArray[i])
		{
			weaponArray[i]->Destroy();
			weaponArray[i] = nullptr;
		}
	}
	//re-assigns weapons from backup
	for (int i = 0; i < backupWeaponArray.Num(); i++)
	{
		if (backupWeaponArray[i])
			Server_EquipWeapon(backupWeaponArray[i], true, false);
	}
}


/*
* Damage and death
*/
void AClassShooterCharacter::HandleTakeCustomDamage_Implementation(float DamageAmount, AActor* source)
{
	if(HasAuthority())
		TakeCustomDamage(DamageAmount, source);
	else
		Server_TakeCustomDamage(DamageAmount, source);
}
void AClassShooterCharacter::TakeCustomDamage(float DamageAmount, AActor* source)
{
	//if clone, then return
	if (isClone == true) return;

	if (deathTriggered == false)
	{
		curHealth -= DamageAmount;
		UE_LOG(LogTemp, Warning, TEXT("%f"), curHealth);

		//assign player who killed this player
		playerWhoDamagedMe = Cast<AClassShooterCharacter>(source);
		if (curHealth <= 0.0)
		{
			playerWhoDamagedMe->didGetKill = true;

			//clear current player states
			currentStates.Empty();
			currentStates.AddUnique(PlayerGameState::Dying);

			//disable player input
			APlayerController* PC = Cast<APlayerController>(GetController());
			DisableInput(PC);

			//zero out player's movement
			movementComponent->StopMovementImmediately();
			movementComponent->Velocity = FVector(0, 0, 0);
			deathTriggered = true;

			//save current status of weapons
			SaveCurWeapons();

			//stop all active abilities
			StopAbility1();
			StopAbility2();
			StopUltimate();
			
			//spawns niagara at location
			UNiagaraFunctionLibrary::SpawnSystemAtLocation(
				GetWorld(),
				deathExplosionVFX,
				GetActorLocation(),
				GetActorRotation(),
				FVector(1, 1, 1),
				true,
				true
			);

			Multi_Death();

			//death timer that resets player after completing
			FTimerHandle DelayTimerHandle1;
			GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle1, FTimerDelegate::CreateLambda([this]()
				{
					deathTriggered = false;
					APlayerController* PC = Cast<APlayerController>(GetController());
					EnableInput(PC);
					movementComponent->SetMovementMode(EMovementMode::MOVE_Walking);
					currentStates.Remove(PlayerGameState::Dying);
					curHealth = maxHealth;
				}), 3.2f, false);
		}
		else
			playerWhoDamagedMe->didCauseDmg = true;

		//resettable timer that plays screen damage effect 
		triggerScreenDmgEffect = true;
		FTimerHandle DelayTimerHandle2;
		GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle2, FTimerDelegate::CreateLambda([this]()
			{
				triggerScreenDmgEffect = false;
			}), .01f, false);
	}
}
bool AClassShooterCharacter::Server_TakeCustomDamage_Validate(float DamageAmount, AActor* source)
{
	return true;
}
void AClassShooterCharacter::Server_TakeCustomDamage_Implementation(float DamageAmount, AActor* source)
{
	//if clone, then return
	if (isClone == true) return;

	if (deathTriggered == false)
	{
		curHealth -= DamageAmount;
		UE_LOG(LogTemp, Warning, TEXT("%f"), curHealth);

		//assign player who killed this player
		playerWhoDamagedMe = Cast<AClassShooterCharacter>(source);
		if (curHealth <= 0.0)
		{
			playerWhoDamagedMe->didGetKill = true;

			//clear current player states
			currentStates.Empty();
			currentStates.AddUnique(PlayerGameState::Dying);

			//disable player input
			APlayerController* PC = Cast<APlayerController>(GetController());
			DisableInput(PC);

			//zero out player's movement
			movementComponent->StopMovementImmediately();
			movementComponent->Velocity = FVector(0, 0, 0);
			deathTriggered = true;

			//save current status of weapons
			Server_SaveCurWeapons();

			//stop all active abilities
			Server_StopAbility1();
			Server_StopAbility2();
			Server_StopUltimate();

			//spawns niagara at location
			Multi_Death();


			//death timer that resets player after completing
			FTimerHandle DelayTimerHandle1;
			GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle1, FTimerDelegate::CreateLambda([this]()
				{
					deathTriggered = false;
					APlayerController* PC = Cast<APlayerController>(GetController());
					EnableInput(PC);
					movementComponent->SetMovementMode(EMovementMode::MOVE_Walking);
					currentStates.Remove(PlayerGameState::Dying);
					curHealth = maxHealth;
				}), 3.2f, false);
		}
		else
			playerWhoDamagedMe->didCauseDmg = true;


		//resettable timer that plays screen damage effect 
		triggerScreenDmgEffect = true;
		FTimerHandle DelayTimerHandle2;
		GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle2, FTimerDelegate::CreateLambda([this]()
			{
				triggerScreenDmgEffect = false;
			}), .01f, false);
	}
}

/*
* Multicast niagara vfx
*/
bool AClassShooterCharacter::Multi_Death_Validate()
{
	return true;
}
void AClassShooterCharacter::Multi_Death_Implementation()
{
	//spawns niagara at location
	UNiagaraFunctionLibrary::SpawnSystemAtLocation(
		GetWorld(),
		deathExplosionVFX,
		GetActorLocation(),
		GetActorRotation(),
		FVector(1, 1, 1),
		true,
		true
	);
}


