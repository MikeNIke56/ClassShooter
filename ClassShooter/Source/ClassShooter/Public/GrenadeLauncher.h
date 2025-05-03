// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WeaponBase.h"
#include "GrenadeLauncher.generated.h"

/**
 * 
 */
UCLASS()
class CLASSSHOOTER_API AGrenadeLauncher : public AWeaponBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Variables")
	TSubclassOf<AActor> projectile;

public:
	virtual void HandleFire() override;
	
};
