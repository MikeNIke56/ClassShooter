// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WeaponBase.h"
#include "ClassShooter/ClassShooterCharacter.h"
#include "Shield.generated.h"

/**
 * 
 */
UCLASS()
class CLASSSHOOTER_API AShield : public AWeaponBase
{
	GENERATED_BODY()

public:
	//the owner of this object
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Shield Variables")
	AActor* source;

	//the amount of knockback to apply to the hit enemy
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Shield Variables")
	float knockbackAmnt = 1000;
};
