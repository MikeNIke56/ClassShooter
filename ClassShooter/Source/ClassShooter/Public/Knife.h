// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WeaponBase.h"
#include "Knife.generated.h"

/**
 * 
 */
UCLASS()
class CLASSSHOOTER_API AKnife : public AWeaponBase
{
	GENERATED_BODY()

public:
	virtual void Fire() override;
	void Swing();
	void StopSwing();
	
protected:
	void Tick(float deltaTime);
};
