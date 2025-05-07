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
	UPROPERTY(EditAnywhere,  BlueprintReadWrite)
	TSubclassOf<AShield> shieldWorldObj;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AShield> shieldThrowWorldObj;

	
	AShield* shieldCopy;
	AShield* shieldThrowCopy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shield Class Base Values")
	FTimerHandle shieldBashTimer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shield Class Base Values")
	float shieldBashDist;
	UPROPERTY(EditAnywhere,  BlueprintReadWrite, Category = "Shield Class Base Values")
	float shieldBashCooldown;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shield Class Base Values")
	float baseShieldBashCooldown;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shield Class Base Values")
	float baseShieldBashRemainingTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shield Class Base Values")
	FTimerHandle shieldThrowTimer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shield Class Base Values")
	float shieldThrowPow;
	UPROPERTY(EditAnywhere,  BlueprintReadWrite, Category = "Shield Class Base Values")
	float shieldThrowCooldown;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shield Class Base Values")
	float baseShieldThrowCooldown;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shield Class Base Values")
	float baseShieldThrowRemainingTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shield Class Base Values")
	FTimerHandle ultTimer;
	UPROPERTY(EditAnywhere,  BlueprintReadWrite, Category = "Shield Class Base Values")
	float ultLength;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shield Class Base Values")
	FTimerHandle ultCooldownTimer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shield Class Base Values")
	float ultCooldown;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shield Class Base Values")
	float ultRemainingTime;


	UPROPERTY(EditAnywhere,  BlueprintReadWrite, Category = "Shield Class Base Values")
	UParticleSystem* shieldBashVFX;
	UPROPERTY(EditAnywhere,  BlueprintReadWrite, Category = "Shield Class Base Values")
	UMaterialInterface* baseBodyMat;
	UPROPERTY(EditAnywhere,  BlueprintReadWrite, Category = "Shield Class Base Values")
	UMaterialInterface* ultimateMat;

	bool cameraUltLerp;
	bool cameraUltLerpBack;
	FVector targetUltPos;
	bool swingUltLaunch;
	bool shieldADSLerp;
	bool shieldUnADSLerp;

	UPROPERTY(EditAnywhere,  BlueprintReadWrite, Category = "Shield Class Base Values")
	UArrowComponent* shieldLocation;
	FVector unADSshieldLocation;
	FVector ADSshieldLocation;

	UPROPERTY(EditAnywhere,  BlueprintReadWrite, Category = "Shield Class Base Values")
	bool hasShield;

	UPROPERTY(EditAnywhere,  BlueprintReadWrite, Category = "Class Base Values")
	bool isShieldBashHBOn;
	UPROPERTY(EditAnywhere,  BlueprintReadWrite, Category = "Class Base Values")
	bool shieldBashHitDetected;

public:
	AShieldCharacter();

protected:
	virtual void Tick(float deltaTime) override;
	virtual void BeginPlay() override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


	virtual void HandleStartShooting() override;
	virtual void HandleADS() override;
	virtual bool PickupWeapon(AWeaponBase* weapon) override;
	virtual void DropWeapon() override;
	virtual void HandleStopADS() override;

	UFUNCTION(BlueprintCallable, Category = "Shield Functions")
	void Block(); 
	UFUNCTION(BlueprintCallable, Category = "Shield Functions")
	void StopBlocking();
	UFUNCTION(BlueprintCallable, Category = "Shield Functions")
	void ShieldBash();
	UFUNCTION(BlueprintCallable, Category = "Shield Functions")
	void ShieldThrow();

	UFUNCTION(BlueprintCallable, Category = "Shield Functions")
	virtual void HandleStartAbility1() override;
	virtual void HandleStopAbility1() override;

	UFUNCTION(BlueprintCallable, Category = "Shield Functions")
	virtual void HandleStartAbility2() override;
	virtual void HandleStopAbility2() override;

	UFUNCTION(BlueprintCallable, Category = "Shield Functions")
	virtual void HandleStartUltimate() override;
	virtual void HandleStopUltimate() override;
};
