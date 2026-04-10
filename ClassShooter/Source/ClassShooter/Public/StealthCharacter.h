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
	//invisibility ability variables
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Stealth Class Base Values")
	FTimerHandle invisTimer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stealth Class Base Values")
	float invisLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Stealth Class Base Values")
	FTimerHandle invisCooldownTimer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stealth Class Base Values")
	float invisCooldown;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Stealth Class Base Values")
	float invisRemainingTime;

	//decoy ability variables
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Stealth Class Base Values")
	FTimerHandle decoyTimer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stealth Class Base Values")
	float decoyLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Stealth Class Base Values")
	FTimerHandle decoyCooldownTimer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stealth Class Base Values")
	float decoyCooldown;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Stealth Class Base Values")
	float decoyRemainingTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Stealth Class Base Values")
	float decoyDodge;

	UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite)
	TSubclassOf<AStealthCharacter> decoyObj;

	//ultimate ability variables
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Stealth Class Base Values")
	FTimerHandle ultTimer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Stealth Class Base Values")
	float ultLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Stealth Class Base Values")
	FTimerHandle ultCooldownTimer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stealth Class Base Values")
	float ultCooldown;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Stealth Class Base Values")
	float ultRemainingTime;

	//vfx and materials
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Stealth Class Base Values")
	UParticleSystem* invisVFX;

	UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite, Category = "Stealth Class Base Values")
	UParticleSystem* decoyVFX;
	UPROPERTY(Replicated)
	UParticleSystemComponent* decoyComp;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Stealth Class Base Values")
	UNiagaraSystem* decoyFloatiesVFX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Stealth Class Base Values")
	UMaterialInterface* baseBodyMat;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Stealth Class Base Values")
	UMaterialInterface* invisMat;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Stealth Class Base Values")
	UMaterialInterface* ultimateMat;

	//world objects
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
	TSubclassOf<AWeaponBase> ultWeaponWorldObj;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
	TSubclassOf<AKnife> knifeObj;

	//camera lerps
	UPROPERTY(Replicated)
	bool cameraUltLerp;
	UPROPERTY(Replicated)
	bool cameraUltLerpBack;
	UPROPERTY(Replicated)
	FVector targetUltPos;
	UPROPERTY(Replicated)
	bool swingUltLaunch;

	//decoy clone object
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
	AStealthCharacter* clone;

protected:
	virtual void Tick(float deltaTime) override;
	virtual void BeginPlay() override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	//ability timers
	void UpdateCooldownValues();
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_UpdateCooldownValues();
	bool Server_UpdateCooldownValues_Validate();
	void Server_UpdateCooldownValues_Implementation();

	//ability 1
	UFUNCTION(BlueprintCallable, Category = "Stealth Functions")
	virtual void StartAbility1() override;
	virtual void Server_StartAbility1_Implementation() override;

	virtual void StopAbility1() override;
	virtual void Server_StopAbility1_Implementation() override;

	//multicast invisibility material set
	UFUNCTION(NetMulticast, Reliable, WithValidation)
	void Multi_Invis(bool isOn);
	bool Multi_Invis_Validate(bool isOn);
	void Multi_Invis_Implementation(bool isOn);

	//ability 2
	UFUNCTION(BlueprintCallable, Category = "Stealth Functions")
	virtual void StartAbility2() override;
	virtual void Server_StartAbility2_Implementation() override;

	virtual void StopAbility2() override;
	virtual void Server_StopAbility2_Implementation() override;

	//multicast decoy vfx
	UFUNCTION(NetMulticast, Reliable, WithValidation)
	void Multi_Decoy(FVector loc, FRotator rot);
	bool Multi_Decoy_Validate(FVector loc, FRotator rot);
	void Multi_Decoy_Implementation(FVector loc, FRotator rot);

	//dodge
	void DirectionalDodge(FVector2D dir);
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_DirectionalDodge(FVector2D dir);
	bool Server_DirectionalDodge_Validate(FVector2D dir);
	void Server_DirectionalDodge_Implementation(FVector2D dir);

	//multicast dodge vfx
	UFUNCTION(NetMulticast, Reliable, WithValidation)
	void Multi_Dodge(FVector loc, FRotator rot);
	bool Multi_Dodge_Validate(FVector loc, FRotator rot);
	void Multi_Dodge_Implementation(FVector loc, FRotator rot);

	//start/stop ultimate
	UFUNCTION(BlueprintCallable, Category = "Stealth Functions")
	virtual void StartUltimate() override;
	virtual void Server_StartUltimate_Implementation() override;

	virtual void StopUltimate() override;
	virtual void Server_StopUltimate_Implementation() override;

	//multicast material set
	virtual void Multi_StartUlt_Implementation(UStaticMeshComponent* multiMesh) override;
	virtual void Multi_StopUlt_Implementation(UStaticMeshComponent* multiMesh) override;

	//spawn ultimate weapon
	void SpawnUltWeapon();
	UFUNCTION(Server, Reliable, WithValidation)
	virtual void Server_SpawnUltWeapon();
	virtual bool Server_SpawnUltWeapon_Validate();
	virtual void Server_SpawnUltWeapon_Implementation();

	//start shooting
	virtual void StartShooting() override;

	//ultimate melee
	void UltimateMelee();
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_UltimateMelee();
	bool Server_UltimateMelee_Validate();
	void Server_UltimateMelee_Implementation();
};
