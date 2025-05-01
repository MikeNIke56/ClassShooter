// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystem.h"
#include "ClassShooter/ClassShooterCharacter.h"
#include <Shield.h>
#include "ShieldCharacter.generated.h"

/**
 * 
 */
UCLASS()
class CLASSSHOOTER_API AShieldCharacter : public AClassShooterCharacter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AShield> shieldWorldObj;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AShield> shieldThrowWorldObj;

	AShield* shieldCopy;
	AShield* shieldThrowCopy;

	FTimerHandle shieldBashTimer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shield Class Base Values")
	float shieldBashDist;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shield Class Base Values")
	float shieldBashCooldown;
	float baseShieldBashCooldown;

	FTimerHandle shieldThrowTimer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shield Class Base Values")
	float shieldThrowPow;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shield Class Base Values")
	float shieldThrowCooldown;
	float baseShieldThrowCooldown;

	FTimerHandle ultTimer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shield Class Base Values")
	float ultLength;
	FTimerHandle ultCooldownTimer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shield Class Base Values")
	float ultCooldown;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shield Class Base Values")
	UParticleSystem* shieldBashVFX;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shield Class Base Values")
	UMaterialInterface* baseBodyMat;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shield Class Base Values")
	UMaterialInterface* ultimateMat;

	bool cameraUltLerp;
	bool cameraUltLerpBack;
	FVector targetUltPos;
	bool swingUltLaunch;
	bool shieldADSLerp;
	bool shieldUnADSLerp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shield Class Base Values")
	UArrowComponent* shieldLocation;
	FVector unADSshieldLocation;
	FVector ADSshieldLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shield Class Base Values")
	bool hasShield;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class Base Values")
	bool isShieldBashHBOn;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class Base Values")
	bool shieldBashHitDetected;

public:
	AShieldCharacter();

protected:
	virtual void Tick(float deltaTime) override;
	virtual void BeginPlay() override;

	virtual void StartShooting() override;
	virtual void ADS() override;
	virtual bool PickupWeapon(AWeaponBase* weapon) override;
	virtual void DropWeapon() override;
	virtual void StopADS() override;

	UFUNCTION(BlueprintCallable, Category = "Shield Functions")
	void Block(); 
	UFUNCTION(BlueprintCallable, Category = "Shield Functions")
	void StopBlocking();
	UFUNCTION(BlueprintCallable, Category = "Shield Functions")
	void ShieldBash();
	UFUNCTION(BlueprintCallable, Category = "Shield Functions")
	void ShieldThrow();

	UFUNCTION(BlueprintCallable, Category = "Shield Functions")
	virtual void StartAbility1() override;
	virtual void StopAbility1() override;

	UFUNCTION(BlueprintCallable, Category = "Shield Functions")
	virtual void StartAbility2() override;
	virtual void StopAbility2() override;

	UFUNCTION(BlueprintCallable, Category = "Shield Functions")
	virtual void StartUltimate() override;
	virtual void StopUltimate() override;
};
