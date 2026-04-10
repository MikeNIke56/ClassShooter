// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Damageable.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI, Blueprintable)
class UDamageable : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class IDamageable
{
	GENERATED_BODY()

public:
	//the take damage function that the characters implement
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Damage")
	void HandleTakeCustomDamage(float Amount, AActor* source);
};
