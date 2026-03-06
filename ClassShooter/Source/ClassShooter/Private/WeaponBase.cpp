// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponBase.h"


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
	isShield = false;
	isWeaponDrop = false;

	//sets the animation mode to only play a single animation at a time
	weaponMesh->SetAnimationMode(EAnimationMode::AnimationSingleNode);
	state = WeaponState::OutOfInventory;
	maxAmmoReserves = ammoReserves;
	bReplicates = true;
}


// Called when the game starts or when spawned
void AWeaponBase::BeginPlay()
{
	Super::BeginPlay();
	curBulletCone = baseBulletCone;
	recoilAmnt = baseRecoilAmnt;
}

void AWeaponBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AWeaponBase, state);
	DOREPLIFETIME(AWeaponBase, weaponMesh);
	DOREPLIFETIME(AWeaponBase, weaponADSCrouchedLocation);
	DOREPLIFETIME(AWeaponBase, weaponADSStandingLocation);
	DOREPLIFETIME(AWeaponBase, weaponUnADSLocation);
	DOREPLIFETIME(AWeaponBase, interactBox);
	DOREPLIFETIME(AWeaponBase, curAmmo);
	DOREPLIFETIME(AWeaponBase, canFire);
	DOREPLIFETIME(AWeaponBase, ammoToRefill);
	DOREPLIFETIME(AWeaponBase, isReloading);
	DOREPLIFETIME(AWeaponBase, isFiring);
	DOREPLIFETIME(AWeaponBase, ammoReserves);
	DOREPLIFETIME(AWeaponBase, fireTimer);
	DOREPLIFETIME(AWeaponBase, reloadTimer);
	DOREPLIFETIME(AWeaponBase, curCamLoc);
	DOREPLIFETIME(AWeaponBase, curCamRot);
	DOREPLIFETIME(AWeaponBase, curBulletCone);
	DOREPLIFETIME(AWeaponBase, range);
	DOREPLIFETIME(AWeaponBase, recoilAmnt);
	DOREPLIFETIME(AWeaponBase, muzzleFlashVFX);
	DOREPLIFETIME(AWeaponBase, weaponAtkSound);
	DOREPLIFETIME(AWeaponBase, weaponReloadSound);
	DOREPLIFETIME(AWeaponBase, muzzleFlashLocation);
}

// Called every frame
void AWeaponBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//isReloading = GetWorld()->GetTimerManager().IsTimerActive(reloadTimer);
}

void AWeaponBase::OnRep_weaponState(WeaponState lastState)
{
	lastState = state;
}
void AWeaponBase::OnRep_curAmmo()
{
	curAmmo -= 1;
	curAmmo = FMath::Clamp(curAmmo, 0, maxAmmo);
}

// Fires the weapon
void AWeaponBase::Fire()
{
	if (isShield == false)
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

			isFiring = true;

			// fire offset values
			FVector fireOffsetForwardVector = curCamRot.Vector();
			FVector fireStartLocation = curCamLoc;


			FRotator bulletSpread = BulletSpread(fireOffsetForwardVector, curBulletCone);

			FVector fireEndLocation = fireStartLocation + (bulletSpread.Vector() * range);

			// Line trace settings
			FHitResult hitResult;
			FCollisionQueryParams collisionParams;
			collisionParams.AddIgnoredActor(this); // Ignore self
			if (APawn* OwnerPawn = Cast<APawn>(GetOwner()))
			{
				collisionParams.AddIgnoredActor(OwnerPawn);
			}

			if(shield != nullptr)
				collisionParams.AddIgnoredActor(shield);

			// Define Object Types to Trace (e.g., Physics Bodies)
			FCollisionObjectQueryParams ObjectQueryParams;
			ObjectQueryParams.AddObjectTypesToQuery(ECC_PhysicsBody);
			ObjectQueryParams.AddObjectTypesToQuery(ECC_WorldStatic);
			ObjectQueryParams.AddObjectTypesToQuery(ECC_WorldDynamic);
			ObjectQueryParams.AddObjectTypesToQuery(ECC_Pawn);

			// Perform the trace
			bool bHit = GetWorld()->LineTraceSingleByObjectType(
				hitResult, fireStartLocation, fireEndLocation, ObjectQueryParams, collisionParams);

			if (muzzleFlashVFX)
			{
				UGameplayStatics::SpawnEmitterAtLocation(
					GetWorld(),
					muzzleFlashVFX,
					muzzleFlashLocation,
					GetActorRotation()
				);
				Multi_MuzzleFlash();
			}
			
			if (weaponAtkSound)
			{
				UGameplayStatics::PlaySoundAtLocation(this, weaponAtkSound, GetActorLocation());
				Multi_FireSoundSFX();
			}


			// Draw debug line (visible for 1 second)
			//DrawDebugLine(GetWorld(), fireStartLocation, fireEndLocation, FColor::Red, false, 5.0f, 0, 2.0f);

			AActor* hitActor = hitResult.GetActor();
			// Check if we hit something
			if (bHit)
			{
				UGameplayStatics::SpawnEmitterAtLocation(
					GetWorld(),
					bulletImpactVFX,
					hitResult.Location,
					GetActorRotation()
				);
				Multi_Fire(hitResult);

				if (hitActor && hitActor->GetName().Contains("Character"))
				{
					if (hitActor->GetClass()->ImplementsInterface(UDamageable::StaticClass()))
					{
						IDamageable* Damageable = Cast<IDamageable>(hitActor);

						if (Damageable)
						{
							if (!isProjectile)
							{
								float dmg = CalcDamageFalloff(hitResult.Distance);
								Damageable->HandleTakeCustomDamage_Implementation(dmg, GetOwner());
							}
						}	
					}
				}
			}

			curAmmo -= 1;
			curAmmo = FMath::Clamp(curAmmo, 0, maxAmmo);
			shotTimer = 0.0;
			ammoToRefill++;
		}
	}
}
bool AWeaponBase::Server_Fire_Validate()
{
	return true;
}
void AWeaponBase::Server_Fire_Implementation()
{
	if (isShield == false)
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

			isFiring = true;

			// fire offset values
			FVector fireOffsetForwardVector = curCamRot.Vector();
			FVector fireStartLocation = curCamLoc;


			FRotator bulletSpread = BulletSpread(fireOffsetForwardVector, curBulletCone);

			FVector fireEndLocation = fireStartLocation + (bulletSpread.Vector() * range);

			// Line trace settings
			FHitResult hitResult;
			FCollisionQueryParams collisionParams;
			collisionParams.AddIgnoredActor(this); // Ignore self
			if (APawn* OwnerPawn = Cast<APawn>(GetOwner()))
			{
				collisionParams.AddIgnoredActor(OwnerPawn);
			}

			if (shield != nullptr)
				collisionParams.AddIgnoredActor(shield);

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

			if(muzzleFlashVFX)
				Multi_MuzzleFlash();

			if(weaponAtkSound)
				Multi_FireSoundSFX();

			AActor* hitActor = hitResult.GetActor();
			// Check if we hit something
			if (bHit)
			{
				Multi_Fire(hitResult);

				if (hitActor && hitActor->GetName().Contains("Character"))
				{
					if (hitActor->GetClass()->ImplementsInterface(UDamageable::StaticClass()))
					{
						IDamageable* Damageable = Cast<IDamageable>(hitActor);

						if (Damageable)
						{
							if (!isProjectile)
							{
								float dmg = CalcDamageFalloff(hitResult.Distance);
								Damageable->HandleTakeCustomDamage_Implementation(dmg, GetOwner());
							}
						}
					}
				}
			}

			curAmmo -= 1;
			curAmmo = FMath::Clamp(curAmmo, 0, maxAmmo);
			shotTimer = 0.0;
			ammoToRefill++;
		}
	}
}


void AWeaponBase::AutoFire()
{
	Fire();
	GetWorldTimerManager().SetTimer(fireTimer, this,
		&AWeaponBase::Fire, fireRate, true);
}
bool AWeaponBase::Server_AutoFire_Validate()
{
	return true;
}
void AWeaponBase::Server_AutoFire_Implementation()
{
	Server_Fire();
	GetWorldTimerManager().SetTimer(fireTimer, this,
		&AWeaponBase::Server_Fire, fireRate, true);
}

bool AWeaponBase::Multi_Fire_Validate(FHitResult hitResult)
{
	return true;
}
void AWeaponBase::Multi_Fire_Implementation(FHitResult hitResult)
{
	UE_LOG(LogTemp, Warning, TEXT("broadcasted"));

	UGameplayStatics::SpawnEmitterAtLocation(
		GetWorld(),
		bulletImpactVFX,
		hitResult.Location,
		GetActorRotation()
	);
}

bool AWeaponBase::Multi_MuzzleFlash_Validate()
{
	return true;
}
void AWeaponBase::Multi_MuzzleFlash_Implementation()
{
	UGameplayStatics::SpawnEmitterAtLocation(
		GetWorld(),
		muzzleFlashVFX,
		muzzleFlashLocation,
		GetActorRotation()
	);
}


bool AWeaponBase::Multi_FireSoundSFX_Validate()
{
	return true;
}
void AWeaponBase::Multi_FireSoundSFX_Implementation()
{
	UGameplayStatics::PlaySoundAtLocation(this, weaponAtkSound, GetActorLocation());
}

void AWeaponBase::Reload()
{
	if (isShield == false)
	{
		if (isReloading == false && curAmmo < maxAmmo)
		{
			if (ammoReserves > 0)
			{
				canFire = false;
				isReloading = true;
				weaponMesh->SetRelativeRotation(FRotator(0,90,0));

				if (weaponReloadSound)
				{
					UGameplayStatics::PlaySoundAtLocation(this, weaponReloadSound, GetActorLocation());
					Multi_ReloadSFX();
				}

				// starts fireTimer
				GetWorldTimerManager().SetTimer(reloadTimer, this, &AWeaponBase::FinishReloading, reloadTime, false);
			}
		}
	}
}
bool AWeaponBase::Server_Reload_Validate()
{
	return true;
}
void AWeaponBase::Server_Reload_Implementation()
{
	if (isShield == false)
	{
		if (isReloading == false && curAmmo < maxAmmo)
		{
			if (ammoReserves > 0)
			{
				canFire = false;
				isReloading = true;
				weaponMesh->SetRelativeRotation(FRotator(0, 90, 0));

				if (weaponReloadSound)
					Multi_ReloadSFX();

				// starts fireTimer
				GetWorldTimerManager().SetTimer(reloadTimer, this, &AWeaponBase::Server_FinishReloading, reloadTime, false);
			}
		}
	}
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
bool AWeaponBase::Server_FinishReloading_Validate()
{
	return true;
}
void AWeaponBase::Server_FinishReloading_Implementation()
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

bool AWeaponBase::Multi_ReloadSFX_Validate()
{
	return true;
}
void AWeaponBase::Multi_ReloadSFX_Implementation()
{
	UGameplayStatics::PlaySoundAtLocation(this, weaponReloadSound, GetActorLocation());
}


void AWeaponBase::CanFireAgain()
{
	canFire = true;
	isReloading = false;
	UE_LOG(LogTemp, Warning, TEXT("can fire again"));
}

void AWeaponBase::SetUpWeapon(AWeaponBase* weapon)
{
	name = weapon->name;
	state = weapon->state;
	curAmmo = weapon->curAmmo;
	ammoToRefill = weapon->ammoToRefill;
	ammoReserves = weapon->ammoReserves;
}

void AWeaponBase::RestoreWeaponDefaults()
{
	if (this)
	{
		curAmmo = maxAmmo;
		ammoReserves = maxAmmoReserves;
		ammoToRefill = 0;
		state = WeaponState::OutOfInventory;
	}
}

// The bullet cone of the weapon
FRotator AWeaponBase::BulletSpread(const FVector& muzzDir, const float maxAngle)
{
	FVector randInCone = FMath::VRandCone(muzzDir, maxAngle);
	return FRotationMatrix::MakeFromX(randInCone).Rotator();
}

float AWeaponBase::CalcDamageFalloff(const float impactDist)
{
	//UE_LOG(LogTemp, Warning, TEXT("%f"), impactDist);
	if (impactDist < range / 2.0f)
		return damage;
	else if (impactDist > range * .75f)
		return damage / 4.0f;
	else if (impactDist > range / 2.0f)
		return damage / 2.0f;
	return damage;
}

