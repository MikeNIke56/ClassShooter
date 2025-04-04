// Fill out your copyright notice in the Description page of Project Settings.


#include "Shotgun.h"

void AShotgun::Fire()
{
	if (isReloading == false && canFire == true && curAmmo > 0)
	{
		canFire = false;

		// starts fireTimer
		GetWorldTimerManager().SetTimer(fireTimer, this,
			&AWeaponBase::CanFireAgain, fireRate, false);

		weaponMesh->PlayAnimation(fireAnim, false);

		for (int i = 0; i < maxAmmo; i++)
		{
			// fire offset values
			FVector fireOffsetForwardVector = fireOffset->GetForwardVector();
			FVector fireOffsetLocation = fireOffset->GetComponentLocation();

			FRotator bulletSpread = BulletSpread(fireOffsetForwardVector, curBulletCone);

			FVector fireEndLocation = fireOffsetLocation + (bulletSpread.Vector() * range);

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
		}

		curAmmo -= 1;
		curAmmo = FMath::Clamp(curAmmo, 0, maxAmmo);
		shotTimer = 0.0;
		ammoToRefill++;
		recoilDel.Broadcast();
	}
}
