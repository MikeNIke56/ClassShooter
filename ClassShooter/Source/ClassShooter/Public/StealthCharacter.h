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
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stealth Class Base Values")
	FTimerHandle invisTimer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stealth Class Base Values")
	float invisLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stealth Class Base Values")
	FTimerHandle invisCooldownTimer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stealth Class Base Values")
	float invisCooldown;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stealth Class Base Values")
	float invisRemainingTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stealth Class Base Values")
	FTimerHandle decoyTimer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stealth Class Base Values")
	float decoyLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stealth Class Base Values")
	FTimerHandle decoyCooldownTimer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stealth Class Base Values")
	float decoyCooldown;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stealth Class Base Values")
	float decoyRemainingTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stealth Class Base Values")
	float decoyDodge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AStealthCharacter> decoyObj;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stealth Class Base Values")
	FTimerHandle ultTimer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stealth Class Base Values")
	float ultLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stealth Class Base Values")
	FTimerHandle ultCooldownTimer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stealth Class Base Values")
	float ultCooldown;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stealth Class Base Values")
	float ultRemainingTime;


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
	virtual void StartAbility1() override;
	virtual void StopAbility1() override;

	UFUNCTION(BlueprintCallable, Category = "Stealth Functions")
	virtual void StartAbility2() override;
	virtual void StopAbility2() override;
	void DirectionalDodge(FVector2D dir);

	UFUNCTION(BlueprintCallable, Category = "Stealth Functions")
	virtual void StartUltimate() override;
	virtual void StopUltimate() override;
	void SpawnUltWeapon();
	virtual void StartShooting() override;
};
