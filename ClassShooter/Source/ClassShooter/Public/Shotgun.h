// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WeaponBase.h"
#include "Shotgun.generated.h"

/**
 * 
 */
UCLASS()
class CLASSSHOOTER_API AShotgun : public AWeaponBase
{
	GENERATED_BODY()

public:
	virtual void HandleFire() override;
	
};
