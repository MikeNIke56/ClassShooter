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

	static ConstructorHelpers::FClassFinder<UUserWidget> SniperFinder(TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/ClassShooterAssets/Blueprints/UI/SniperADSUI.SniperADSUI'"));
	if (SniperFinder.Succeeded())
	{
		sniperWidgetClass = SniperFinder.Class;
	}

	static ConstructorHelpers::FClassFinder<UUserWidget> unADSFinder(TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/ClassShooterAssets/Blueprints/UI/UnADSCrosshairUI.UnADSCrosshairUI'"));
	if (unADSFinder.Succeeded())
	{
		unADSWidgetClass = unADSFinder.Class;
	}
}

void AClassShooterCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();


	curHealth = maxHealth;

	movementComponent = GetCharacterMovement();
	baseSpeed = movementComponent->MaxWalkSpeed;
	curSpeed = baseSpeed;

	ADSLerp = false;
	recoilLerp = false;
	startFovChange = false;

	isLeftSwing = true;
	meleeLerp = false;


	if (sniperWidgetClass)
	{
		sniperWidget = CreateWidget<UUserWidget>(GetWorld(), sniperWidgetClass);
		if (sniperWidget)
		{
			sniperWidget->AddToViewport();
			sniperWidget->SetVisibility(ESlateVisibility::Hidden);
		}
	}

	if (unADSWidgetClass)
	{
		unADSWidget = CreateWidget<UUserWidget>(GetWorld(), unADSWidgetClass);
		if (unADSWidget)
		{
			unADSWidget->AddToViewport();
			unADSWidget->SetVisibility(ESlateVisibility::Visible);
		}
	}

}

void AClassShooterCharacter::Tick(float deltaTime)
{
	Super::Tick(deltaTime);
	jumpAllowed = CheckCanJump();

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
			}
		}
	}

	curCamLocation = FirstPersonCameraComponent->GetComponentLocation();
	curCamRotation = FirstPersonCameraComponent->GetComponentRotation();
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

		// Throw Grenade
		EnhancedInputComponent->BindAction(GrenadeAction, ETriggerEvent::Started, this, &AClassShooterCharacter::ReadyGrenade);
		EnhancedInputComponent->BindAction(GrenadeAction, ETriggerEvent::Completed, this, &AClassShooterCharacter::ThrowGrenade);

		// Switch Weapons
		EnhancedInputComponent->BindAction(SwitchWeaponAction, ETriggerEvent::Triggered, this, &AClassShooterCharacter::SwitchWeapon);
		
		// Reload
		EnhancedInputComponent->BindAction(ReloadWeaponAction, ETriggerEvent::Triggered, this, &AClassShooterCharacter::Reload);

		// Drop weapon
		EnhancedInputComponent->BindAction(DropWeaponAction, ETriggerEvent::Triggered, this, &AClassShooterCharacter::DropWeapon);
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
	if (curWeapon)
	{
		curWeapon->curBulletCone = curWeapon->baseBulletCone / 4;
		ADSCurWeapon(curWeapon);
		ADSLerp = true;
		UE_LOG(LogTemp, Warning, TEXT("ADSing"));

		if (curWeapon->name == "Sniper")
		{
			if (sniperWidget->IsVisible() == false)
			{
				FTimerHandle DelayTimerHandle;
				GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle, FTimerDelegate::CreateLambda([this]()
					{
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
		curWeapon->curBulletCone = curWeapon->baseBulletCone;
		ShowCurWeapon(curWeapon);
		ADSLerp = true;
		UE_LOG(LogTemp, Warning, TEXT("stop ADSing"));

		if (curWeapon->name == "Sniper")
		{
			if (sniperWidget->IsVisible() == true)
			{
				unADSWidget->SetVisibility(ESlateVisibility::Visible);
				sniperWidget->SetVisibility(ESlateVisibility::Hidden);
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

void AClassShooterCharacter::Shoot()
{
	if (curWeapon->isAutomatic == true)
		curWeapon->AutoFire();
	else
		curWeapon->Fire();
}

void AClassShooterCharacter::StopShooting()
{
	if (curWeapon && curWeapon->isAutomatic)
		GetWorldTimerManager().ClearTimer(curWeapon->fireTimer);
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
	if (isLeftSwing == true)
	{
		FVector location(knifeSwingLocations[0]->GetRelativeLocation());
		FRotator rotation(knifeSwingLocations[0]->GetRelativeRotation());
		FVector scale(1.f, 1.f, 1.f);
		FTransform transform(rotation, location, scale);

		weaponLocation->SetRelativeTransform(transform);


		meleeLerp = true;
	}
	else
	{
		FVector location(knifeSwingLocations[2]->GetRelativeLocation());
		FRotator rotation(knifeSwingLocations[2]->GetRelativeRotation());
		FVector scale(1.f, 1.f, 1.f);
		FTransform transform(rotation, location, scale);

		weaponLocation->SetRelativeTransform(transform);


		meleeLerp = true;
	}
	curWeapon->Fire();
}

void AClassShooterCharacter::EquipWeapon(AWeaponBase* weapon)
{
	weapon->state = WeaponState::Equipped;
	curWeapon = weapon;
	ShowCurWeapon(weapon);
	UE_LOG(LogTemp, Warning, TEXT("Equipped weapon: %s"), *weapon->name.ToString());
	StopADS();

	BindDelegate();
}
void AClassShooterCharacter::ShowCurWeapon(AWeaponBase* weapon)
{
	if (weapon)
	{
		meleeLerp = false;
		//weaponLocation->SetRelativeLocation(FVector(52, -14, -30));
		//weaponLocation->SetRelativeRotation(FRotator(0, 0, -90));

		if (weapon->name == "Pistol")
		{
			targetLocation = FVector(52.0, -14.0, -30.0);
		}
		else if (weapon->name == "Shotgun")
		{
			targetLocation = FVector(35.0, -14.0, -30.0);
		}
		else if (weapon->name == "AR")
		{
			targetLocation = FVector(35.0, -14.0, -30.0);
		}
		else if (weapon->name == "Sniper")
		{
			targetLocation = FVector(30.0, -14.0, -30.0);
		}
		else if (weapon->name == "GL")
		{
			targetLocation = FVector(35.0, -14.0, -30.0);
		}
		else if (weapon->name == "RPG")
		{
			targetLocation = FVector(30.0, -14.0, -30.0);
		}
		else if (weapon->name == "Knife")
		{
			targetLocation = FVector(70.0, -14.0, -30.0);
		}
		else
			UE_LOG(LogTemp, Warning, TEXT("invalid weapon"));

		FAttachmentTransformRules AttachRules(EAttachmentRule::SnapToTarget, true);
		weapon->AttachToComponent(weaponLocation, AttachRules);
		weapon->SetActorRotation(weaponLocation->GetComponentRotation());
	}
	else
		UE_LOG(LogTemp, Warning, TEXT("no such weapon"));
}
void AClassShooterCharacter::ADSCurWeapon(AWeaponBase* weapon)
{
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
		UE_LOG(LogTemp, Warning, TEXT("no such weapon"));
}

bool AClassShooterCharacter::PickupWeapon(AWeaponBase* weapon)
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
				if (weaponArray[i] == nullptr)
				{
					weaponArray[i] = weapon;

					if (i == 0)
						EquipWeapon(weapon);
					else
						StowWeapon(weapon, weapon->name);

					return true;
				}
			}
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("weapon is already in inventory"));
			return false;
		}
		return false;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("no such weapon"));
		return false;
	}
}

void AClassShooterCharacter::SwitchWeapon(const FInputActionValue& Value)
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
		StowWeapon(weaponArray[pos], weaponArray[pos]->name);

		if (Value.GetMagnitude() > 0.0)
		{
			if(pos == numWeapons-1)
				EquipWeapon(weaponArray[0]);
			else
				EquipWeapon(weaponArray[pos+=1]);

			//UE_LOG(LogTemp, Warning, TEXT("%d"), pos);
		}
		else if (Value.GetMagnitude() < 0.0)
		{
			if (pos == 0)
				EquipWeapon(weaponArray[numWeapons-=1]);
			else
				EquipWeapon(weaponArray[pos-=1]);

			//UE_LOG(LogTemp, Warning, TEXT("%d"), pos);
		}
	}

}
void AClassShooterCharacter::StowWeapon(AWeaponBase* weapon, const FName& socketName)
{	
	if (bodyMesh->DoesSocketExist(socketName))
	{
		weapon->state = WeaponState::Stowed;

		FAttachmentTransformRules AttachRules(EAttachmentRule::SnapToTarget, true);
		weapon->AttachToComponent(bodyMesh, AttachRules, socketName);
		UE_LOG(LogTemp, Warning, TEXT("Stowed weapon: %s"), *weapon->name.ToString());
	}
	else
		UE_LOG(LogTemp, Warning, TEXT("fail"));
}

void AClassShooterCharacter::Reload()
{
	UE_LOG(LogTemp, Warning, TEXT("reload"));
	curWeapon->Reload();
}

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

void AClassShooterCharacter::BindDelegate()
{
	//bind delegate event 
	if (curWeapon)
		curWeapon->recoilDel.AddDynamic(this, &AClassShooterCharacter::Recoil);
}

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

		AWeaponBase* weaponCopy = GetWorld()->SpawnActor<AWeaponBase>(weaponWorldObj, spawnLoc,
			spawnRot, SpawnParams);

		weaponCopy->SetUpWeapon(*curWeapon);

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
			if(pos + 1 < weaponArray.Num())
				weaponArray[pos] = weaponArray[pos + 1];
		}

		if(weaponArray[0])
			EquipWeapon(weaponArray[0]);
	}
}

void AClassShooterCharacter::Die()
{
	UE_LOG(LogTemp, Warning, TEXT("die"));
}

