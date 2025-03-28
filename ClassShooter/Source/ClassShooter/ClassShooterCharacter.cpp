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
	//Mesh1P->SetRelativeRotation(FRotator(0.9f, -19.19f, 5.2f));
	Mesh1P->SetRelativeLocation(FVector(-30.f, 0.f, -150.f));
}

void AClassShooterCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();


	curHealth = maxHealth;

	movementComponent = GetCharacterMovement();
	baseSpeed = movementComponent->MaxWalkSpeed;
	curSpeed = baseSpeed;
}

void AClassShooterCharacter::Tick(float deltaTime)
{
	Super::Tick(deltaTime);
	jumpAllowed = CheckCanJump();
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
		EnhancedInputComponent->BindAction(ShootingAction, ETriggerEvent::Triggered, this, &AClassShooterCharacter::Shoot);

		// Throw Grenade
		EnhancedInputComponent->BindAction(GrenadeAction, ETriggerEvent::Started, this, &AClassShooterCharacter::ReadyGrenade);
		EnhancedInputComponent->BindAction(GrenadeAction, ETriggerEvent::Completed, this, &AClassShooterCharacter::ThrowGrenade);

		// Melee
		EnhancedInputComponent->BindAction(MeleeAction, ETriggerEvent::Triggered, this, &AClassShooterCharacter::Melee);
	}
	else
	{
		UE_LOG(LogTemplateCharacter, Error, TEXT("'%s' Failed to find an Enhanced Input Component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
}


void AClassShooterCharacter::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add movement 
		//MovementVector.Normalize();
		AddMovementInput(GetActorForwardVector() * curSpeed, MovementVector.Y);
		AddMovementInput(GetActorRightVector() * curSpeed, MovementVector.X);
	}
}

void AClassShooterCharacter::Jump()
{
	if (jumpAllowed == true)
	{
		LaunchCharacter(GetActorUpVector() * jumpPow, false, false);
	}
}
void AClassShooterCharacter::StopJumping()
{
	Super::StopJumping(); // Call parent function
}

bool AClassShooterCharacter::CheckCanJump()
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
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}

void AClassShooterCharacter::Sprint()
{
	movementComponent->MaxWalkSpeed *= speedMulti;
}
void AClassShooterCharacter::StopSprinting()
{
	movementComponent->MaxWalkSpeed = baseSpeed;
}

void AClassShooterCharacter::ADS()
{
	UE_LOG(LogTemp, Warning, TEXT("ADSing"));
}
void AClassShooterCharacter::StopADS()
{
	UE_LOG(LogTemp, Warning, TEXT("stop ADSing"));
}

void AClassShooterCharacter::Shoot()
{
	UE_LOG(LogTemp, Warning, TEXT("shooting"));
}

void AClassShooterCharacter::ReadyGrenade()
{
	UE_LOG(LogTemp, Warning, TEXT("readying grenade"));
}
void AClassShooterCharacter::ThrowGrenade()
{
	UE_LOG(LogTemp, Warning, TEXT("throwing grenade"));
}

void AClassShooterCharacter::Melee()
{
	UE_LOG(LogTemp, Warning, TEXT("melee"));
}

void AClassShooterCharacter::EquipWeapon()
{
	UE_LOG(LogTemp, Warning, TEXT("equip"));
}

void AClassShooterCharacter::Reload()
{
	UE_LOG(LogTemp, Warning, TEXT("reload"));
}

void AClassShooterCharacter::Die()
{
	UE_LOG(LogTemp, Warning, TEXT("die"));
}