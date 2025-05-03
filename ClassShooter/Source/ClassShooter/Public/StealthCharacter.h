// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystem.h"
#include "ClassShooter/ClassShooterCharacter.h"
#include <Knife.h>
#include "StealthCharacter.generated.h"

/**
 * 
 */
UCLASS()
class CLASSSHOOTER_API AStealthCharacter : public AClassShooterCharacter
{
	GENERATED_BODY()

public:
	FTimerHandle invisTimer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stealth Class Base Values")
	float invisLength;

	FTimerHandle invisCooldownTimer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stealth Class Base Values")
	float invisCooldown;

	FTimerHandle decoyTimer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stealth Class Base Values")
	float decoyLength;

	FTimerHandle decoyCooldownTimer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stealth Class Base Values")
	float decoyCooldown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stealth Class Base Values")
	float decoyDodge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AStealthCharacter> decoyObj;

	FTimerHandle ultTimer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stealth Class Base Values")
	float ultLength;

	FTimerHandle ultCooldownTimer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stealth Class Base Values")
	float ultCooldown;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stealth Class Base Values")
	UParticleSystem* invisVFX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stealth Class Base Values")
	UParticleSystem* decoyVFX;
	UParticleSystemComponent* decoyComp;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stealth Class Base Values")
	UParticleSystem* decoyFloatiesVFX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stealth Class Base Values")
	UMaterialInterface* baseBodyMat;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stealth Class Base Values")
	UMaterialInterface* invisMat;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stealth Class Base Values")
	UMaterialInterface* ultimateMat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AWeaponBase> ultWeaponWorldObj;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AKnife> knifeObj;

	bool cameraUltLerp;
	bool cameraUltLerpBack;
	FVector targetUltPos;
	bool swingUltLaunch;

protected:
	virtual void Tick(float deltaTime) override;
	virtual void BeginPlay() override;


	UFUNCTION(BlueprintCallable, Category = "Stealth Functions")
	virtual void HandleStartAbility1() override;
	virtual void HandleStopAbility1() override;

	UFUNCTION(BlueprintCallable, Category = "Stealth Functions")
	virtual void HandleStartAbility2() override;
	virtual void HandleStopAbility2() override;
	void DirectionalDodge(FVector2D dir);

	UFUNCTION(BlueprintCallable, Category = "Stealth Functions")
	virtual void HandleStartUltimate() override;
	virtual void HandleStopUltimate() override;
	void SpawnUltWeapon();
	virtual void HandleStartShooting() override;
};
