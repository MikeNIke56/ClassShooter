// Fill out your copyright notice in the Description page of Project Settings.


#include "GrenadeLauncher.h"


void AGrenadeLauncher::Fire()
{
	if (isReloading == false && canFire == true && curAmmo > 0)
	{
		if (projectile)
		{
			canFire = false;

			// starts fireTimer
			GetWorldTimerManager().SetTimer(fireTimer, this,
				&AWeaponBase::CanFireAgain, fireRate, false);

			//weaponMesh->PlayAnimation(fireAnim, false);

			FActorSpawnParameters SpawnParams;
			SpawnParams.Owner = this;
			SpawnParams.Instigator = GetInstigator();


			// fire offset values
			FVector fireOffsetForwardVector = fireOffset->GetForwardVector();
			FVector fireOffsetLocation = fireOffset->GetComponentLocation();

			AActor* projectileCopy = GetWorld()->SpawnActor<AActor>(projectile, fireOffsetLocation,
				fireOffset->GetRelativeRotation(), SpawnParams);

			curAmmo -= 1;
			curAmmo = FMath::Clamp(curAmmo, 0, maxAmmo);
			shotTimer = 0.0;
			ammoToRefill++;
		}
	}
}
