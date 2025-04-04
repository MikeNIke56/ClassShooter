// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponBase.h"
#include "Math/UnrealMathUtility.h"

// Sets default values
AWeaponBase::AWeaponBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	weaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon Mesh"); // Initialize the pointer
	fireOffset = CreateDefaultSubobject<UArrowComponent>("Fire Offset");
	fireOffset->SetupAttachment(weaponMesh); // Attach to the mesh
	interactBox = CreateDefaultSubobject<UCapsuleComponent>("Interaction Hitbox");
	interactBox->SetupAttachment(weaponMesh);
	canFire = true;

	//sets the animation mode to only play a single animation at a time
	weaponMesh->SetAnimationMode(EAnimationMode::AnimationSingleNode);
	state = WeaponState::OutOfInventory;
}

// Called when the game starts or when spawned
void AWeaponBase::BeginPlay()
{
	Super::BeginPlay();
	curBulletCone = baseBulletCone;
}

// Called every frame
void AWeaponBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	isReloading = GetWorld()->GetTimerManager().IsTimerActive(reloadTimer);
}

// Fires the weapon
void AWeaponBase::Fire()
{
	if (isReloading == false && canFire == true && curAmmo > 0)
	{
		if (isAutomatic == false)
		{
			canFire = false;

			// starts fireTimer
			GetWorldTimerManager().SetTimer(fireTimer, this, 
				&AWeaponBase::CanFireAgain, fireRate, false);
		}


		weaponMesh->PlayAnimation(fireAnim, false);

		// fire offset values
		FVector fireOffsetForwardVector = fireOffset->GetForwardVector();
		FVector fireOffsetLocation = fireOffset->GetComponentLocation();


		FRotator bulletSpread = BulletSpread(fireOffsetForwardVector, curBulletCone);
		bulletSpread.Pitch += 4;
		bulletSpread.Yaw += 3;

		FVector fireEndLocation = shotLocation + (bulletSpread.Vector() * range);

		// Line trace settings
		FHitResult hitResult;
		FCollisionQueryParams collisionParams;
		collisionParams.AddIgnoredActor(this); // Ignore self

		// Define Object Types to Trace (e.g., Physics Bodies)
		FCollisionObjectQueryParams ObjectQueryParams;
		ObjectQueryParams.AddObjectTypesToQuery(ECC_PhysicsBody);
		ObjectQueryParams.AddObjectTypesToQuery(ECC_WorldDynamic);
		ObjectQueryParams.AddObjectTypesToQuery(ECC_Pawn);

		// Perform the trace
		bool bHit = GetWorld()->LineTraceSingleByObjectType(
			hitResult, fireOffsetLocation, fireEndLocation, ECC_Visibility, collisionParams);

		// Draw debug line (visible for 1 second)
		DrawDebugLine(GetWorld(), fireOffsetLocation, fireEndLocation, FColor::Red, false, 1.0f, 0, 2.0f);

		AActor* hitActor = hitResult.GetActor();
		// Check if we hit something
		if (bHit)
		{
			UE_LOG(LogTemp, Warning, TEXT("Hit!"));
			/*if (hitActor->IsA(ClassShooterCharacter::StaticClass()))
			{
				UE_LOG(LogTemp, Warning, TEXT("Hit an AMyTargetClass!"));
			}*/
		}
		//UE_LOG(LogTemp, Warning, TEXT("fire"));

		curAmmo -= 1;
		curAmmo = FMath::Clamp(curAmmo, 0, maxAmmo);
		shotTimer = 0.0;
		ammoToRefill++;
		recoilDel.Broadcast();
	}

}

void AWeaponBase::AutoFire()
{
	Fire();
	GetWorldTimerManager().SetTimer(fireTimer, this,
		&AWeaponBase::Fire, fireRate, true);
}

void AWeaponBase::Reload()
{
	if (isReloading == false && curAmmo < maxAmmo)
	{
		if (ammoReserves > 0)
		{
			canFire = false;
			isReloading = true;
			weaponMesh->PlayAnimation(reloadAnim, false);

			// starts fireTimer
			GetWorldTimerManager().SetTimer(reloadTimer, this, &AWeaponBase::FinishReloading, reloadTime, false);
		}
	}
}

void AWeaponBase::CanFireAgain()
{
	canFire = true;
	isReloading = false;
	UE_LOG(LogTemp, Warning, TEXT("can fire again"));
}

void AWeaponBase::FinishReloading()
{
	curAmmo += ammoToRefill;
	curAmmo = FMath::Clamp(curAmmo, 1, maxAmmo);

	ammoReserves -= ammoToRefill;
	ammoReserves = FMath::Clamp(ammoReserves, 0, ammoReserves);

	ammoToRefill = 0;

	FTimerHandle DelayTimerHandle;
	GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle, FTimerDelegate::CreateLambda([this]()
	{
			GetWorld()->GetTimerManager().ClearTimer(reloadTimer);
			canFire = true;
			isReloading = false;
			UE_LOG(LogTemp, Warning, TEXT("reloaded"));
	}), .75f, false);
}

// The bullet cone of the weapon
FRotator AWeaponBase::BulletSpread(const FVector& muzzDir, const float maxAngle)
{
	FVector randInCone = FMath::VRandCone(muzzDir, maxAngle);
	return FRotationMatrix::MakeFromX(randInCone).Rotator();
}

