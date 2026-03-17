// Fill out your copyright notice in the Description page of Project Settings.


#include "Shotgun.h"

void AShotgun::Fire()
{
	APawn* owner = Cast<APawn>(GetOwner());
	if (owner->HasAuthority())
	{
		if (isReloading == false && canFire == true && curAmmo > 0)
		{
			canFire = false;

			// starts fireTimer
			GetWorldTimerManager().SetTimer(fireTimer, this,
				&AWeaponBase::CanFireAgain, fireRate, false);

			for (int i = 0; i < maxAmmo; i++)
			{
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
				//DrawDebugLine(GetWorld(), fireStartLocation, fireEndLocation, FColor::Red, false, 1.0f, 0, 2.0f);

				if (muzzleFlashVFX)
				{
					UGameplayStatics::SpawnEmitterAtLocation(
						GetWorld(),
						muzzleFlashVFX,
						muzzleFlashLocation,
						FRotator(90, 0, 0)
					);
					Multi_MuzzleFlash();
				}

				if (weaponAtkSound)
				{
					UGameplayStatics::PlaySoundAtLocation(this, weaponAtkSound, GetActorLocation());
					Multi_FireSoundSFX();
				}

				AActor* hitActor = hitResult.GetActor();
				// Check if we hit something
				if (bHit)
				{
					UGameplayStatics::SpawnEmitterAtLocation(
						GetWorld(),
						bulletImpactVFX,
						hitResult.Location,
						FRotator(0, 0, 0)
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
			}

			curAmmo -= 1;
			curAmmo = FMath::Clamp(curAmmo, 0, maxAmmo);
			shotTimer = 0.0;
			ammoToRefill++;
		}
	}
	else
		Server_ShotgunFire();
}
bool AShotgun::Server_ShotgunFire_Validate()
{
	return true;
}
void AShotgun::Server_ShotgunFire_Implementation()
{
	if (isReloading == false && canFire == true && curAmmo > 0)
	{
		canFire = false;

		// starts fireTimer
		GetWorldTimerManager().SetTimer(fireTimer, this,
			&AWeaponBase::CanFireAgain, fireRate, false);

		for (int i = 0; i < maxAmmo; i++)
		{
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

			if (muzzleFlashVFX)
				Multi_MuzzleFlash();

			if (weaponAtkSound)
				Multi_FireSoundSFX();

			// Draw debug line (visible for 1 second)
			//DrawDebugLine(GetWorld(), fireStartLocation, fireEndLocation, FColor::Red, false, 1.0f, 0, 2.0f);

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
		}

		curAmmo -= 1;
		curAmmo = FMath::Clamp(curAmmo, 0, maxAmmo);
		shotTimer = 0.0;
		ammoToRefill++;
	}
}
