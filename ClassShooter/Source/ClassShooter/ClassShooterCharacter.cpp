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

//////////////////////////////////////////////////////////////////////////
// AClassShooterCharacter

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

	static ConstructorHelpers::FClassFinder<UUserWidget> SniperFinder(TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/ClassShooterAssets/Blueprints/UI/SniperADSUI.SniperADSUI_C'"));
	if (SniperFinder.Succeeded())
	{
		sniperWidgetClass = SniperFinder.Class;
	}

	static ConstructorHelpers::FClassFinder<UUserWidget> unADSFinder(TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/ClassShooterAssets/Blueprints/UI/UnADSCrosshairUI.UnADSCrosshairUI_C'"));
	if (unADSFinder.Succeeded())
	{
		unADSWidgetClass = unADSFinder.Class;
	}
}


void AClassShooterCharacter::BeginPlay()
{
	int index = 0;
	APlayerController* PC;
	if (GetName().Contains("0"))
		index = 0;
	else
		index = 1;

	PC = UGameplayStatics::GetPlayerController(this, index);

	// Call the base class  
	Super::BeginPlay();

	if (PC)
	{
		PC->bShowMouseCursor = false;
		PC->SetInputMode(FInputModeGameOnly());
	}

	slashSpeed = 10;
	curHealth = maxHealth;

	movementComponent = GetCharacterMovement();
	baseSpeed = movementComponent->MaxWalkSpeed;
	curSpeed = baseSpeed;
	sprintSpeed = baseSpeed * speedMulti;

	ADSLerp = false;
	recoilLerp = false;
	startFovChange = false;
	isSwitchingAfterPickup = false;
	isDead = false;
	deathTriggered = false;

	isLeftSwing = true;
	meleeLerp = false;

	isSliding = false;
	isCrouching = false;
	isSprinting = false;
	baseGroundFriction = movementComponent->GroundFriction;
	baseBrakingDeceleration = movementComponent->BrakingDecelerationWalking;
	baseGravity = movementComponent->GravityScale;
	originalCamPos = GetFirstPersonCameraComponent()->GetRelativeLocation();
	originalBodyScale = GetCapsuleComponent()->GetComponentScale();

	isInUltimate = false;
	ultimateTriggered = false;


	if (sniperWidgetClass)
	{
		sniperWidget = CreateWidget<UUserWidget>(GetWorld(), sniperWidgetClass);
		if (sniperWidget)
		{
			sniperWidget->SetOwningPlayer(PC);
			sniperWidget->AddToPlayerScreen();
			sniperWidget->SetVisibility(ESlateVisibility::Hidden);
		}
	}
	if (unADSWidgetClass)
	{
		unADSWidget = CreateWidget<UUserWidget>(GetWorld(), unADSWidgetClass);
		if (unADSWidget)
		{
			unADSWidget->SetOwningPlayer(PC);
			unADSWidget->AddToPlayerScreen();
			unADSWidget->SetVisibility(ESlateVisibility::Visible);
		}
	}

	defaultCameraLocation = GetFirstPersonCameraComponent()->GetRelativeLocation();
	UE_LOG(LogTemp, Warning, TEXT("Character is locally controlled: %d"), IsLocallyControlled());
}

void AClassShooterCharacter::Tick(float deltaTime)
{
	Super::Tick(deltaTime);
	jumpAllowed = IsGrounded();
	curSpeed = movementComponent->MaxWalkSpeed;
	isSprinting = IsStillSprinting();

	if (ADSLerp == true)
	{
		FVector curLocation = weaponLocation->GetRelativeLocation();
		FVector newLocation = FMath::VInterpTo(curLocation, targetLocation, 
			deltaTime, 10);
		weaponLocation->SetRelativeLocation(newLocation);

		if (FVector::Dist(targetLocation, newLocation) <= .05)
			ADSLerp = false;
	}

	if (recoilLerp == true)
	{
		FRotator curRotation = GetController()->GetControlRotation();
		FRotator newRotation = FMath::RInterpTo(curRotation, targetRotation,
			deltaTime, 20);
		GetController()->SetControlRotation((newRotation));

		if (newRotation.Equals(targetRotation, .05))
			recoilLerp = false;
	}

	if (startFovChange == true)
	{
		float curFov = FirstPersonCameraComponent->FieldOfView;
		float newFov = FMath::FInterpTo(curFov, targetFov, deltaTime, 10);
		FirstPersonCameraComponent->SetFieldOfView(newFov);

		if (FMath::Abs(targetFov - newFov) <= .001)
			startFovChange = false;
	}

	if (meleeLerp == true)
	{
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

	curCamLocation = FirstPersonCameraComponent->GetComponentLocation();
	curCamRotation = FirstPersonCameraComponent->GetComponentRotation();

	if (movementComponent->Velocity.Length() > 0.1f)
	{
		if (curSpeed == sprintSpeed && IsGrounded() == true)
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
			bobTimer += deltaTime * bobSpeed;
			float OffsetZ = FMath::Sin(bobTimer * amplitude) * bobAmount;
			float OffsetY = FMath::Sin(bobTimer * (bobAmount / amplitude));

			FVector NewLocation = defaultCameraLocation + FVector(0.0f, OffsetY, OffsetZ);
			FirstPersonCameraComponent->SetRelativeLocation(NewLocation);
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

		// Drop weapon
		EnhancedInputComponent->BindAction(DropWeaponAction, ETriggerEvent::Triggered, this, &AClassShooterCharacter::DropWeapon);

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

//movement fucntions
void AClassShooterCharacter::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	movementVector = Value.Get<FVector2D>();

	if (Controller != nullptr && 
		FMath::Abs(movementVector.Y) > .1f ||
		FMath::Abs(movementVector.X) > .1f)
	{
		// add movement 
		//MovementVector.Normalize();
		AddMovementInput(GetActorForwardVector() * curSpeed, movementVector.Y);
		AddMovementInput(GetActorRightVector() * curSpeed, movementVector.X);
	}
}
void AClassShooterCharacter::Jump()
{
	if (jumpAllowed == true)
	{
		float newJumpPow = jumpPow;

		if (GetWorld()->GetTimerManager().IsTimerActive(slideTimer) == true)
			newJumpPow /= 2;
		movementComponent->AddImpulse(GetActorUpVector() * newJumpPow, true);
	}
}


void AClassShooterCharacter::StopJumping()
{
	isJumping = false;
	Super::StopJumping();
}
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
void AClassShooterCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		if (isADSing == true)
		{
			AddControllerYawInput(LookAxisVector.X * (xSens / 2));
			AddControllerPitchInput(LookAxisVector.Y * (ySens / 2));
		}
		else
		{
			AddControllerYawInput(LookAxisVector.X * xSens);
			AddControllerPitchInput(LookAxisVector.Y * ySens);
		}
	}
}
void AClassShooterCharacter::Sprint()
{
	isSliding = false;
	isCrouching = false;

	movementComponent->MaxWalkSpeed = sprintSpeed;
}
void AClassShooterCharacter::StopSprinting()
{
	movementComponent->MaxWalkSpeed = baseSpeed;
	isSprinting = false;
}
bool AClassShooterCharacter::IsStillSprinting()
{
	if (movementVector.Y > 0.0 && movementComponent->MaxWalkSpeed > baseSpeed
		&& IsGrounded() == true)
		return true;
	return false;
}
void AClassShooterCharacter::StartCrouch()
{
	if (isSprinting == true)
		Slide();
	else
	{
		if (isCrouching == false)
			Crouch();
		else
			StopCrouching();
	}
}
void AClassShooterCharacter::Crouch()
{
	GetCapsuleComponent()->SetWorldScale3D(originalBodyScale / 2);
	movementComponent->MaxWalkSpeed = baseSpeed / 3;
	isCrouching = true;
}
void AClassShooterCharacter::StopCrouching()
{
	GetCapsuleComponent()->SetWorldScale3D(originalBodyScale);

	if (isSprinting == false)
		movementComponent->MaxWalkSpeed = baseSpeed;

	isCrouching = false;
	ResetMovement();
}
void AClassShooterCharacter::Slide()
{
	if (GetWorld()->GetTimerManager().IsTimerActive(slideTimer) == false)
	{
		GetWorld()->GetTimerManager().ClearTimer(slideTimer);
		GetCapsuleComponent()->SetWorldScale3D(originalBodyScale / 2);

		isSliding = true;

		movementComponent->GroundFriction = 0.0;
		movementComponent->BrakingDecelerationWalking = 1400;
		FVector velocity = GetCharacterMovement()->Velocity;
		velocity.Normalize();
		movementComponent->SetPlaneConstraintFromVectors(velocity, GetActorUpVector());
		movementComponent->SetPlaneConstraintEnabled(true);

		FVector slideVec = FindSlideVector();
		if (slideVec.Z <= .02 || IsGrounded() == true)
		{
			movementComponent->AddImpulse(GetActorForwardVector() * slidePow, true);
			GetWorld()->GetTimerManager().SetTimer(slideTimer, this, 
				&AClassShooterCharacter::StopSliding, 1.0f, false);
		}
	}
}
void AClassShooterCharacter::StopSliding()
{
	ResetMovement();
}
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
void AClassShooterCharacter::ResetMovement()
{
	isSliding = false;
	GetCapsuleComponent()->SetWorldScale3D(originalBodyScale);
	movementComponent->GravityScale = baseGravity;

	if (isSprinting == false)
		movementComponent->MaxWalkSpeed = baseSpeed;

	movementComponent->GroundFriction = baseGroundFriction;
	movementComponent->BrakingDecelerationWalking = baseBrakingDeceleration;
	movementComponent->SetPlaneConstraintEnabled(false);
}


//gun related functions

void AClassShooterCharacter::ADS()
{
	if (curWeapon)
	{
		isADSing = true;
		curWeapon->curBulletCone = curWeapon->baseBulletCone / 4;
		ADSCurWeapon(curWeapon);
		ADSLerp = true;
		UE_LOG(LogTemp, Warning, TEXT("ADSing"));

		if (curWeapon->name == "Sniper")
		{
			if (sniperWidget->IsVisible() == false)
			{
				int index = 0;
				APlayerController* PC;
				if (GetName().Contains("0"))
					index = 0;
				else
					index = 1;

				PC = UGameplayStatics::GetPlayerController(this, index);

				FTimerHandle DelayTimerHandle;
				GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle, FTimerDelegate::CreateLambda([this, PC]()
					{
						sniperWidget->SetOwningPlayer(PC);
						sniperWidget->AddToPlayerScreen();
						unADSWidget->SetVisibility(ESlateVisibility::Hidden);
						sniperWidget->SetVisibility(ESlateVisibility::Visible);
						curWeapon->weaponMesh->SetVisibility(false, true);
					}), .25f, false);
			}
		}

		if (curWeapon->name == "Pistol")
		{
			targetFov = 75;
			startFovChange = true;
		}
		else if (curWeapon->name == "Shotgun")
		{
			targetFov = 80;
			startFovChange = true;
		}
		else if (curWeapon->name == "AR")
		{
			targetFov = 50;
			startFovChange = true;
		}
		else if (curWeapon->name == "Sniper")
		{
			targetFov = 30;
			startFovChange = true;
		}
		else if (curWeapon->name == "GL")
		{
			targetFov = baseFov;
			startFovChange = true;
		}
		else if (curWeapon->name == "RPG")
		{
			targetFov = baseFov;
			startFovChange = true;
		}
		else
			UE_LOG(LogTemp, Warning, TEXT("invalid weapon"));
	}
}
void AClassShooterCharacter::StopADS()
{
	if (curWeapon)
	{
		isADSing = false;
		curWeapon->curBulletCone = curWeapon->baseBulletCone;
		ShowCurWeapon(curWeapon);
		ADSLerp = true;
		UE_LOG(LogTemp, Warning, TEXT("stop ADSing"));

		if (curWeapon->name == "Sniper")
		{
			if (sniperWidget->IsVisible() == true)
			{
				APlayerController* PC = GetWorld()->GetFirstPlayerController();
				sniperWidget->SetOwningPlayer(PC);
				unADSWidget->SetVisibility(ESlateVisibility::Visible);
				sniperWidget->SetVisibility(ESlateVisibility::Hidden);
				sniperWidget->RemoveFromParent();
				curWeapon->weaponMesh->SetVisibility(true, true);
			}
		}

		targetFov = baseFov;
		startFovChange = true;
	}
}
void AClassShooterCharacter::StartShooting()
{
	if (curWeapon && curWeapon->state == WeaponState::Equipped)
	{
		curWeapon->curCamLoc = curCamLocation;
		curWeapon->curCamRot = curCamRotation;

		if (curWeapon->name == "Knife")
			Melee();
		else
			Shoot();
	}			
}
void AClassShooterCharacter::StopShooting()
{
	if (curWeapon && curWeapon->isAutomatic)
		GetWorldTimerManager().ClearTimer(curWeapon->fireTimer);
}
void AClassShooterCharacter::Shoot()
{
	if (curWeapon->isAutomatic == true)
		curWeapon->AutoFire();
	else
		curWeapon->Fire();
}



//Picking up and equipping weapons
void AClassShooterCharacter::EquipWeapon(AWeaponBase* weapon, int pos)
{
	if (weapon != nullptr)
	{
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;
		SpawnParams.Instigator = GetInstigator();

		weaponWorldObj = weapon->GetClass();

		weaponCopy = GetWorld()->SpawnActor<AWeaponBase>(weaponWorldObj, targetLocation,
			FRotator(0, 0, 0), SpawnParams);

		weaponCopy->SetUpWeapon(weapon);

		weaponCopy->state = WeaponState::Equipped;
		curWeapon = weaponCopy;
		ShowCurWeapon(weaponCopy);
		UE_LOG(LogTemp, Warning, TEXT("Equipped weapon: %s"), *weapon->name.ToString());
		StopADS();
		weaponCopy->SetOwner(this);

		if(pos >= 0)
			weaponArray[pos] = weaponCopy;

		BindDelegate();

		if (weapon->isWeaponDrop == true)
		{
			weapon->Destroy();
			weapon = nullptr;
			free(weapon);
		}
	}
	
}
void AClassShooterCharacter::ShowCurWeapon(AWeaponBase* weapon)
{
	if (weapon)
	{
		if (weapon->name == "Pistol")
		{
			targetLocation = FVector(100.0, -14.0, -30.0);
		}
		else if (weapon->name == "Shotgun")
		{
			targetLocation = FVector(85.0, -14.0, -30.0);
		}
		else if (weapon->name == "AR")
		{
			targetLocation = FVector(65.0, -14.0, -30.0);
		}
		else if (weapon->name == "Sniper")
		{
			targetLocation = FVector(60.0, -14.0, -30.0);
		}
		else if (weapon->name == "GL")
		{
			targetLocation = FVector(70.0, -14.0, -30.0);
		}
		else if (weapon->name == "RPG")
		{
			targetLocation = FVector(50.0, -14.0, -30.0);
		}
		else if (weapon->name == "Knife")
		{
			targetLocation = FVector(80.0, -14.0, -30.0);
		}
		else
			UE_LOG(LogTemp, Warning, TEXT("invalid weapon"));

		FAttachmentTransformRules AttachRules(EAttachmentRule::SnapToTarget, true);
		weapon->AttachToComponent(weaponLocation, AttachRules);
		weapon->SetActorRotation(weaponLocation->GetComponentRotation());

		TArray<UActorComponent*> Hitboxes = weapon->GetComponentsByTag(UCapsuleComponent::StaticClass(), FName("DisableMe"));
		for (UActorComponent* Comp : Hitboxes)
		{
			UCapsuleComponent* capsule = Cast<UCapsuleComponent>(Comp);
			if (capsule)
			{
				capsule->SetCollisionEnabled(ECollisionEnabled::NoCollision);
			}
		}
	}
	else
		UE_LOG(LogTemp, Warning, TEXT("no such weapon"));
}
void AClassShooterCharacter::ADSCurWeapon(AWeaponBase* weapon)
{
	if (!weaponArray.Contains(weapon)) return;

	if (weapon)
	{
		FVector newWeaponPos;

		if (weapon->name == "Pistol")
		{
			targetLocation = FVector(25.0, 0.0, -19.5);
		}
		else if (weapon->name == "Shotgun")
		{
			targetLocation = FVector(0.0, 0.0, -19.5);
		}
		else if (weapon->name == "AR")
		{
			targetLocation = FVector(20.0, 0.0, -19.5);
		}
		else if (weapon->name == "Sniper")
		{
			targetLocation = FVector(12.7, 0.0, -21.5);
		}
		else if (weapon->name == "GL")
		{
			targetLocation = FVector(12.7, 0.0, -23.5);
		}
		else if (weapon->name == "RPG")
		{
			targetLocation = FVector(33.2, 0.0, -25.5);
		}
		else if (weapon->name == "Knife")
		{
			targetLocation = targetLocation;
		}
		else
			UE_LOG(LogTemp, Warning, TEXT("invalid weapon"));
	}
	else
		UE_LOG(LogTemp, Warning, TEXT("no such weapon"));;
}


void AClassShooterCharacter::PickupWeapon(AWeaponBase* weapon)
{
	if (weapon)
	{
		bool isInInventory = false;

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
						EquipWeapon(weapon, i);
						return;
					}
					else
					{
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
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("no such weapon"));
	}
}


//Switching weapons
void AClassShooterCharacter::SwitchWeapon(const FInputActionValue& Value)
{
	if (meleeLerp == false)
	{
		int numWeapons = 0;
		int pos = 0;
 
		for (int i = 0; i < weaponArray.Num(); i++)
		{
			if (weaponArray[i])
			{
				numWeapons++;

				if (weaponArray[i]->state == WeaponState::Equipped)
					pos = i;
			}
		}

		if (numWeapons > 1)
		{
			if (curWeapon->name == "Sniper")
			{
				sniperWidget->SetVisibility(ESlateVisibility::Hidden);
				curWeapon->weaponMesh->SetVisibility(true, true);
			}

			isSwitchingAfterPickup = true;
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


//Stowing weapons
void AClassShooterCharacter::StowWeapon(AWeaponBase* weapon, const FName& socketName, bool shouldCreateNew, int pos)
{	
	if (bodyMesh->DoesSocketExist(socketName))
	{
		if (shouldCreateNew == false)
		{
			FAttachmentTransformRules AttachRules(EAttachmentRule::SnapToTarget, true);
			weapon->AttachToComponent(bodyMesh, AttachRules, socketName);
			UE_LOG(LogTemp, Warning, TEXT("Stowed weapon: %s"), *weaponCopy->name.ToString());
			weapon->state = WeaponState::Stowed;
		}
		else
		{
			FActorSpawnParameters SpawnParams;
			SpawnParams.Owner = this;
			SpawnParams.Instigator = GetInstigator();

			weaponWorldObj = weapon->GetClass();

			weaponCopy = GetWorld()->SpawnActor<AWeaponBase>(weaponWorldObj, targetLocation,
				FRotator(0, 0, 0), SpawnParams);

			weaponCopy->SetUpWeapon(weapon);

			weaponCopy->state = WeaponState::Stowed;

			FAttachmentTransformRules AttachRules(EAttachmentRule::SnapToTarget, true);
			weaponCopy->AttachToComponent(bodyMesh, AttachRules, socketName);
			UE_LOG(LogTemp, Warning, TEXT("Stowed weapon: %s"), *weaponCopy->name.ToString());
		}

		if (pos >= 0)
			weaponArray[pos] = weaponCopy;

		if (weapon->isWeaponDrop == true)
		{
			weapon->Destroy();
			weapon = nullptr;
			free(weapon);
		}
	}
	else
		UE_LOG(LogTemp, Warning, TEXT("fail"));
}


//Reload and Recoil
void AClassShooterCharacter::Recoil()
{
	FRotator targetRotationCopy = GetControlRotation();

	targetRotationCopy.Yaw += FMath::FRandRange(curWeapon->minHorRecoilAmnt, curWeapon->maxHorRecoilAmnt);
	targetRotationCopy.Pitch += FMath::FRandRange(curWeapon->minVertRecoilAmnt, curWeapon->maxVertRecoilAmnt);
	targetRotation = targetRotationCopy;
	curWeapon->curCamLoc = curCamLocation;
	curWeapon->curCamRot = targetRotation;
	recoilLerp = true;
}
void AClassShooterCharacter::Reload()
{
	if (curWeapon)
	{
		UE_LOG(LogTemp, Warning, TEXT("reload"));
		curWeapon->Reload();
	}
}
void AClassShooterCharacter::BindDelegate()
{
	//bind delegate event 
	if (curWeapon)
		curWeapon->recoilDel.AddDynamic(this, &AClassShooterCharacter::Recoil);
}

//Dropping weapons
void AClassShooterCharacter::DropWeapon()
{
	if (curWeapon)
	{
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;
		SpawnParams.Instigator = GetInstigator();

		weaponWorldObj = curWeapon->GetClass();

		FVector spawnLoc = GetActorLocation();
		spawnLoc += (GetActorForwardVector() * 100);
		spawnLoc.Z -= 30;

		FRotator spawnRot = GetActorRotation();
		spawnRot.Yaw -= 90;

		weaponCopy = GetWorld()->SpawnActor<AWeaponBase>(weaponWorldObj, spawnLoc,
			spawnRot, SpawnParams);

		if(shouldDestroyWeapon == true)
			weaponCopy->Destroy();
		else
			weaponCopy->SetUpWeapon(curWeapon);

		weaponCopy->state = WeaponState::OutOfInventory;
		StopADS();

		int pos;
		for (int i = 0; i < weaponArray.Num(); i++)
		{
			if (weaponArray[i] == curWeapon)
			{
				pos = i;
				weaponArray[i] = NULL;
			}
		}

		curWeapon->Destroy();
		curWeapon = nullptr;

		for (pos; pos < weaponArray.Num(); pos++)
		{
			weaponArray[pos] = NULL;
			if (pos + 1 < weaponArray.Num())
				weaponArray[pos] = weaponArray[pos + 1];
		}

		weaponCopy->isWeaponDrop = true;
		isSwitchingAfterPickup = true;

		if (weaponArray[0])
			SwapWeaponOver(weaponArray[0], 0);

		shouldDestroyWeapon = false;
	}
}

void AClassShooterCharacter::SwapWeaponOver(AWeaponBase* weapon, int pos)
{
	weapon->state = WeaponState::Equipped;
	curWeapon = weapon;
	ShowCurWeapon(weapon);
	UE_LOG(LogTemp, Warning, TEXT("Equipped weapon: %s"), *weapon->name.ToString());
	StopADS();
	weapon->SetOwner(this);

	if (pos >= 0)
		weaponArray[pos] = weapon;
}


//Melee
void AClassShooterCharacter::Melee()
{
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


//Abilities
void AClassShooterCharacter::StartAbility1()
{

}
void AClassShooterCharacter::StopAbility1()
{

}
void AClassShooterCharacter::StartAbility2()
{

}
void AClassShooterCharacter::StopAbility2()
{

}
void AClassShooterCharacter::StartUltimate()
{
	
}
void AClassShooterCharacter::StopUltimate()
{

}
void AClassShooterCharacter::SaveCurWeapons()
{
	for (int i = 0; i < weaponArray.Num(); i++)
	{
		backupWeaponArray[i] = nullptr;
		if (weaponArray[i])
			backupWeaponArray[i] = weaponArray[i];
	}
	for (int i = 0; i < weaponArray.Num(); i++)
	{
		shouldDestroyWeapon = true;
		DropWeapon();
	}
}
void AClassShooterCharacter::RestoreCurWeapons()
{
	for (int i = 0; i < weaponArray.Num(); i++)
	{
		shouldDestroyWeapon = true;
		DropWeapon();
	}
	for (int i = 0; i < backupWeaponArray.Num(); i++)
	{
		if (backupWeaponArray[i])
		{
			/*FActorSpawnParameters SpawnParams;
			SpawnParams.Owner = this;
			SpawnParams.Instigator = GetInstigator();

			weaponWorldObj = backupWeaponArray[i]->GetClass();

			FVector spawnLoc = GetActorLocation();
			FRotator spawnRot = GetActorRotation();

			weaponCopy = GetWorld()->SpawnActor<AWeaponBase>(weaponWorldObj, spawnLoc,
				spawnRot, SpawnParams);*/

			backupWeaponArray[i]->state = WeaponState::OutOfInventory;
			//backupWeaponArray[i]->isWeaponDrop = true;
			PickupWeapon(backupWeaponArray[i]);
			//weaponCopy->state = WeaponState::OutOfInventory;
			//weaponCopy->isWeaponDrop = true;
			//PickupWeapon(weaponCopy);
		}
	}
	for (int i = 0; i < weaponArray.Num(); i++)
	{
		if (weaponArray[i])
		{
			if (i == 0)
				weaponArray[i]->state = WeaponState::Equipped;
			else
				weaponArray[i]->state = WeaponState::Stowed;
		}
	}
}


//Damage and death
void AClassShooterCharacter::HandleTakeCustomDamage_Implementation(float DamageAmount)
{
	TakeCustomDamage(DamageAmount);
}
void AClassShooterCharacter::TakeCustomDamage(float amount)
{
	curHealth -= amount;
	UE_LOG(LogTemp, Warning, TEXT("%f"), curHealth);
	if (curHealth <= 0.0)
	{
		isDead = true;
	}
}


