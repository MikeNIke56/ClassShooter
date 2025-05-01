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
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Entity source")
	AActor* source;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Entity source")
	bool wasThrown;
	

public:
	AShield();
};
