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
	//fire functions
	virtual void Fire() override;
	virtual void Server_Fire() override;
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_ShotgunFire();
	bool Server_ShotgunFire_Validate();
	void Server_ShotgunFire_Implementation();
};
