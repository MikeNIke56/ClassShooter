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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shield Class Base Values")
	float shieldBashDist;

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

public:
	AShieldCharacter();

protected:
	virtual void Tick(float deltaTime) override;
	virtual void BeginPlay() override;

	virtual void StartShooting() override;
	virtual void ADS() override;
	virtual void StopADS() override;

	UFUNCTION(BlueprintCallable, Category = "Shield Functions")
	void Block(); 
	UFUNCTION(BlueprintCallable, Category = "Shield Functions")
	void ShieldBash(FVector2D dir);
	UFUNCTION(BlueprintCallable, Category = "Shield Functions")
	void ShieldThrow();


	UFUNCTION(BlueprintCallable, Category = "Shield Functions")
	virtual void StartUltimate() override;
	virtual void StopUltimate() override;
};
