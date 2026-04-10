// Fill out your copyright notice in the Description page of Project Settings.


#include "Shotgun.h"

/*
* Shotgun's unique fire logic
*/
void AShotgun::Fire()
{
	APawn* owner = Cast<APawn>(GetOwner());
	if (owner->HasAuthority())
	{
		//can shotgun fire
		if (isReloading == false && canFire == true && curAmmo > 0)
		{
			canFire = false;

			// starts fireTimer
			GetWorldTimerManager().SetTimer(fireTimer, this,
				&AWeaponBase::CanFireAgain, fireRate, false);

			//fires certain number of line traces 
			for (int i = 0; i < maxAmmo; i++)
			{
				// fire offset values
				FVector fireOffsetForwardVector = curCamRot.Vector();
				FVector fireStartLocation = curCamLoc;

				//calculate bullet trajectory of each trace
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
				DrawDebugLine(GetWorld(), fireStartLocation, fireEndLocation, 
					FColor::Red, false, 1.0f, 0, 2.0f);

				//muzzle flash and shoot sfx
				if (muzzleFlashVFX)
					Multi_MuzzleFlash();

				if (weaponAtkSound)
					Multi_FireSoundSFX();

				AActor* hitActor = hitResult.GetActor();
				// Check if we hit something
				if (bHit)
				{
					//spawn niagara
					UGameplayStatics::SpawnEmitterAtLocation(
						GetWorld(),
						bulletImpactVFX,
						hitResult.Location,
						FRotator(0, 0, 0)
					);
					Multi_Fire(hitResult);


					//if we hit a player, apply damage
					if (hitActor && hitActor->GetName().Contains("Character"))
					{
						if (hitActor->GetClass()->ImplementsInterface(UDamageable::StaticClass()))
						{
							IDamageable* Damageable = Cast<IDamageable>(hitActor);

							if (Damageable)
							{
								if (!isProjectile)
								{
									//apply damage falloff
									float dmg = CalcDamageFalloff(hitResult.Distance);
									Damageable->HandleTakeCustomDamage_Implementation(dmg, GetOwner());
								}
							}
						}
					}
				}
			}

			//subtract from current ammo
			curAmmo -= 1;
			curAmmo = FMath::Clamp(curAmmo, 0, maxAmmo);
			shotTimer = 0.0;
			ammoToRefill++;
		}
	}
	else
		Server_Fire();
}
void AShotgun::Server_Fire()
{
	Server_ShotgunFire();
}
bool AShotgun::Server_ShotgunFire_Validate()
{
	return true;
}
void AShotgun::Server_ShotgunFire_Implementation()
{
	//can shotgun fire
	if (isReloading == false && canFire == true && curAmmo > 0)
	{
		canFire = false;

		// starts fireTimer
		GetWorldTimerManager().SetTimer(fireTimer, this,
			&AWeaponBase::CanFireAgain, fireRate, false);

		//fires certain number of line traces 
		for (int i = 0; i < maxAmmo; i++)
		{
			// fire offset values
			FVector fireOffsetForwardVector = curCamRot.Vector();
			FVector fireStartLocation = curCamLoc;

			//calculate bullet trajectory of each trace
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
			DrawDebugLine(GetWorld(), fireStartLocation, fireEndLocation,
				FColor::Red, false, 1.0f, 0, 2.0f);

			//muzzle flash and shoot sfx
			if (muzzleFlashVFX)
				Multi_MuzzleFlash();

			if (weaponAtkSound)
				Multi_FireSoundSFX();

			AActor* hitActor = hitResult.GetActor();
			// Check if we hit something
			if (bHit)
			{
				Multi_Fire(hitResult);

				//if we hit a player, apply damage
				if (hitActor && hitActor->GetName().Contains("Character"))
				{
					if (hitActor->GetClass()->ImplementsInterface(UDamageable::StaticClass()))
					{
						IDamageable* Damageable = Cast<IDamageable>(hitActor);

						if (Damageable)
						{
							if (!isProjectile)
							{
								//apply damage falloff
								float dmg = CalcDamageFalloff(hitResult.Distance);
								Damageable->HandleTakeCustomDamage_Implementation(dmg, GetOwner());
							}
						}
					}
				}
			}
		}

		//subtract from current ammo
		curAmmo -= 1;
		curAmmo = FMath::Clamp(curAmmo, 0, maxAmmo);
		shotTimer = 0.0;
		ammoToRefill++;
	}
}
