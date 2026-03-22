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
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
	TSubclassOf<AActor> shieldThrowWorldObj;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Replicated, Category = "Shield Class Base Values")
	AShield* equippedShield;
	UPROPERTY(Replicated)
	AActor* thrownShield;
	UPROPERTY(Replicated)
	FVector originalShieldLoc;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Shield Class Base Values")
	UArrowComponent* shieldThrowLoc;

	//shield bash variables
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Shield Class Base Values")
	FTimerHandle shieldBashTimer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Shield Class Base Values")
	float shieldBashDist;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Shield Class Base Values")
	float shieldBashCooldown;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Shield Class Base Values")
	float baseShieldBashCooldown;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Shield Class Base Values")
	float baseShieldBashRemainingTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Shield Class Base Values")
	FVector targetShieldBashLocation;
	UPROPERTY(Replicated)
	bool shieldBashLerp;

	//shield throw variables
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Shield Class Base Values")
	FTimerHandle shieldThrowTimer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shield Class Base Values")
	float shieldThrowPow;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Shield Class Base Values")
	float shieldThrowCooldown;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Shield Class Base Values")
	float baseShieldThrowCooldown;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Shield Class Base Values")
	float baseShieldThrowRemainingTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Shield Class Base Values")
	FTimerHandle ultTimer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Shield Class Base Values")
	float ultLength;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Shield Class Base Values")
	FTimerHandle ultCooldownTimer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Shield Class Base Values")
	float ultCooldown;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Shield Class Base Values")
	float ultRemainingTime;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Shield Class Base Values")
	UParticleSystem* shieldBashVFX;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shield Class Base Values")
	UMaterialInterface* baseBodyMat;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Shield Class Base Values")
	UMaterialInterface* ultimateMat;

	bool cameraUltLerp;
	bool cameraUltLerpBack;
	FVector targetUltPos;
	bool swingUltLaunch;
	UPROPERTY(Replicated)
	bool shieldADSLerp;
	UPROPERTY(Replicated)
	bool shieldUnADSLerp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Shield Class Base Values")
	UArrowComponent* shieldLocation;
	UPROPERTY(Replicated)
	FVector unADSshieldLocation;
	UPROPERTY(Replicated)
	FVector ADSshieldLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Shield Class Base Values")
	bool hasShield;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Class Base Values")
	bool isShieldBashHBOn;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Class Base Values")
	bool shieldBashHitDetected;

public:
	AShieldCharacter();

protected:
	virtual void Tick(float deltaTime) override;
	virtual void BeginPlay() override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


	void UpdateCooldownValues();
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_UpdateCooldownValues();
	bool Server_UpdateCooldownValues_Validate();
	void Server_UpdateCooldownValues_Implementation();


	virtual void StartShooting() override;


	UFUNCTION(BlueprintCallable, Category = "Shield Functions")
	virtual void ADS() override;
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_ShieldADS();
	bool Server_ShieldADS_Validate();
	void Server_ShieldADS_Implementation();

	UFUNCTION(BlueprintCallable, Category = "Shield Functions")
	virtual void StopADS() override;
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_ShieldStopADS();
	bool Server_ShieldStopADS_Validate();
	void Server_ShieldStopADS_Implementation();


	UFUNCTION(BlueprintCallable, Category = "Shield Functions")
	void Block(); 
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_Block();
	bool Server_Block_Validate();
	void Server_Block_Implementation();

	UFUNCTION(BlueprintCallable, Category = "Shield Functions")
	void StopBlocking();
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_StopBlocking();
	bool Server_StopBlocking_Validate();
	void Server_StopBlocking_Implementation();


	UFUNCTION(BlueprintCallable, Category = "Shield Functions")
	void ShieldBash();
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_ShieldBash();
	bool Server_ShieldBash_Validate();
	void Server_ShieldBash_Implementation();

	UFUNCTION(NetMulticast, Reliable, WithValidation)
	void Multi_ShieldBash();
	bool Multi_ShieldBash_Validate();
	void Multi_ShieldBash_Implementation();


	UFUNCTION(BlueprintCallable, Category = "Shield Functions")
	void ShieldThrow();
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_ShieldThrow();
	bool Server_ShieldThrow_Validate();
	void Server_ShieldThrow_Implementation();


	UFUNCTION(BlueprintCallable, Category = "Shield Functions")
	virtual void StartAbility1() override;
	virtual void Server_StartAbility1_Implementation() override;

	virtual void StopAbility1() override;
	virtual void Server_StopAbility1_Implementation() override;

	UFUNCTION(BlueprintCallable, Category = "Shield Functions")
	virtual void StartAbility2() override;
	virtual void Server_StartAbility2_Implementation() override;

	virtual void StopAbility2() override;
	virtual void Server_StopAbility2_Implementation() override;

	UFUNCTION(BlueprintCallable, Category = "Shield Functions")
	virtual void StartUltimate() override;
	virtual void Server_StartUltimate_Implementation() override;

	virtual void StopUltimate() override;
	virtual void Server_StopUltimate_Implementation() override;

	virtual void Multi_StartUlt_Implementation(UStaticMeshComponent* multiMesh) override;
	virtual void Multi_StopUlt_Implementation(UStaticMeshComponent* multiMesh) override;
};
