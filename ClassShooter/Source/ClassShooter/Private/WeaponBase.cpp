// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponBase.h"
#include "Net/UnrealNetwork.h"
//#include "../Math/UnrealMathUtility.h"


// Sets default values
AWeaponBase::AWeaponBase()
{
	bReplicates = true;
	SetReplicates(true);

 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	weaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon Mesh"); // Initialize the pointer
	fireOffset = CreateDefaultSubobject<UArrowComponent>("Fire Offset");
	fireOffset->SetupAttachment(weaponMesh); // Attach to the mesh
	interactBox = CreateDefaultSubobject<UCapsuleComponent>("Interaction Hitbox");
	interactBox->SetupAttachment(weaponMesh);
	canFire = true;
	isShield = false;

	//sets the animation mode to only play a single animation at a time
	weaponMesh->SetAnimationMode(EAnimationMode::AnimationSingleNode);
	state = WeaponState::OutOfInventory;
}

void AWeaponBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	//DOREPLIFETIME(AClassShooterCharacter, curHealth);
	//DOREPLIFETIME(AClassShooterCharacter, maxHealth);
	//DOREPLIFETIME(AClassShooterCharacter, weaponMesh);
	//DOREPLIFETIME(AClassShooterCharacter, fireAnim);
	//DOREPLIFETIME(AClassShooterCharacter, reloadAnim);
	//DOREPLIFETIME(AClassShooterCharacter, fireTimer);
	//DOREPLIFETIME(AClassShooterCharacter, fireTimer);
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
void AWeaponBase::HandleFire()
{
	if (HasAuthority())
	{
		Fire(); // We're already on the server
	}
	else
	{
		ServerFire(); // Ask the server to run DropWeapon()
	}
}
void AWeaponBase::ServerFire_Implementation()
{
	Fire();
}
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
					&AWeaponBase::HandleCanFireAgain, fireRate, false);
			}


			weaponMesh->PlayAnimation(fireAnim, false);

			// fire offset values
			FVector fireOffsetForwardVector = curCamRot.Vector();
			FVector fireStartLocation = curCamLoc;


			FRotator bulletSpread = BulletSpread(fireOffsetForwardVector, curBulletCone);

			FVector fireEndLocation = fireStartLocation + (bulletSpread.Vector() * range);

			// Line trace settings
			FHitResult hitResult;
			FCollisionQueryParams collisionParams;
			collisionParams.AddIgnoredActor(this); // Ignore self
			collisionParams.AddIgnoredActor(GetAttachParentActor());

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

				if (hitActor && hitActor->GetName().Contains("Character"))
				{
					if (hitActor->GetClass()->ImplementsInterface(UDamageable::StaticClass()))
					{
						IDamageable* Damageable = Cast<IDamageable>(hitActor);
						if (Damageable)
							Damageable->HandleTakeCustomDamage_Implementation(damage);
					}
				}
			}

			curAmmo -= 1;
			curAmmo = FMath::Clamp(curAmmo, 0, maxAmmo);
			shotTimer = 0.0;
			ammoToRefill++;
			recoilDel.Broadcast();
		}
	}
}

void AWeaponBase::HandleAutoFire()
{
	if (HasAuthority())
	{
		AutoFire(); // We're already on the server
	}
	else
	{
		ServerAutoFire(); // Ask the server to run DropWeapon()
	}
}
void AWeaponBase::ServerAutoFire_Implementation()
{
	AutoFire();
}
void AWeaponBase::AutoFire()
{
	HandleFire();
	GetWorldTimerManager().SetTimer(fireTimer, this,
		&AWeaponBase::HandleFire, fireRate, true);
}

void AWeaponBase::HandleReload()
{
	if (HasAuthority())
	{
		Reload(); // We're already on the server
	}
	else
	{
		ServerReload(); // Ask the server to run DropWeapon()
	}
}
void AWeaponBase::ServerReload_Implementation()
{
	Reload();
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
				weaponMesh->PlayAnimation(reloadAnim, false);

				// starts fireTimer
				GetWorldTimerManager().SetTimer(reloadTimer, this, &AWeaponBase::HandleFinishReloading, reloadTime, false);
			}
		}
	}
}

void AWeaponBase::HandleCanFireAgain()
{
	if (HasAuthority())
	{
		CanFireAgain(); // We're already on the server
	}
	else
	{
		ServerCanFireAgain(); // Ask the server to run DropWeapon()
	}
}
void AWeaponBase::ServerCanFireAgain_Implementation()
{
	CanFireAgain();
}
void AWeaponBase::CanFireAgain()
{
	canFire = true;
	isReloading = false;
	UE_LOG(LogTemp, Warning, TEXT("can fire again"));
}

void AWeaponBase::HandleFinishReloading()
{
	if (HasAuthority())
	{
		FinishReloading(); // We're already on the server
	}
	else
	{
		ServerFinishReloading(); // Ask the server to run DropWeapon()
	}
}
void AWeaponBase::ServerFinishReloading_Implementation()
{
	FinishReloading();
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

void AWeaponBase::HandleSetUpWeapon(AWeaponBase* weapon)
{
	if (HasAuthority())
	{
		SetUpWeapon(weapon); // We're already on the server
	}
	else
	{
		ServerSetUpWeapon(weapon); // Ask the server to run DropWeapon()
	}
}
void AWeaponBase::ServerSetUpWeapon_Implementation(AWeaponBase* weapon)
{
	SetUpWeapon(weapon);
}
void AWeaponBase::SetUpWeapon(AWeaponBase* weapon)
{
	curAmmo = weapon->curAmmo;
	ammoToRefill = weapon->ammoToRefill;
	ammoReserves = weapon->ammoReserves;
}

// The bullet cone of the weapon
FRotator AWeaponBase::BulletSpread(const FVector& muzzDir, const float maxAngle)
{
	FVector randInCone = FMath::VRandCone(muzzDir, maxAngle);
	return FRotationMatrix::MakeFromX(randInCone).Rotator();
}

