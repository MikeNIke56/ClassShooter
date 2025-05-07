// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystem.h"
#include "CableComponent.h"
#include "ClassShooter/ClassShooterCharacter.h"
#include "MovementCharacter.generated.h"

/**
 * 
 */
UCLASS()
class CLASSSHOOTER_API AMovementCharacter : public AClassShooterCharacter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Class Base Values")
	UCableComponent* cableComponent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cable")
	bool bAttachEnd;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Class Base Values")
	FTimerHandle grappleCooldownTimer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Class Base Values")
	float grappleCooldown;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Class Base Values")
	float baseGrappleCooldown;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Class Base Values")
	float grappleTime;
	bool canGrapple;
	bool isGrappling;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Class Base Values")
	FTimerHandle grappleTimer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Class Base Values")
	float grappleSpd;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Class Base Values")
	bool didGrappleAtk;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Class Base Values")
	float grappleRemainingTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AActor> grappleObj;

	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Class Base Values")
	float grappleAtkDist;

	FTimerHandle ultTimer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Class Base Values")
	float ultLength;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Class Base Values")
	float ultRemainingTime;

	FTimerHandle ultCooldownTimer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Class Base Values")
	float ultCooldown;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Class Base Values")
	UParticleSystem* movementVFX;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Class Base Values")
	UMaterialInterface* baseBodyMat;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Class Base Values")
	UMaterialInterface* ultimateMat;



	bool cameraUltLerp;
	bool cameraUltLerpBack;
	FVector targetUltPos;
	bool swingUltLaunch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Class Base Values")
	bool cameraRotateLerp;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Class Base Values")
	float targetRoll;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement Class Base Values")
	float baseRoll;

	FVector wallRunNormal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Class Base Values")
	float wallRunSpd;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Class Base Values")
	bool wallRunGravity;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement Class Base Values")
	bool isWallRunning;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement Class Base Values")
	bool isWallRunningR;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement Class Base Values")
	bool isWallRunningL;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Class Base Values")
	float targetWallRunGrav;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement Class Base Values")
	bool canWallRun;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Class Base Values")
	float wallRunDelay;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Class Base Values")
	float wallRunJumpDist;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Class Base Values")
	float wallRunJumpHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class Base Values")
	bool isGrappleAtkHBOn;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class Base Values")
	bool grappleAtkHitDetected;

public:
	AMovementCharacter();

protected:
	virtual void Tick(float deltaTime) override;
	virtual void BeginPlay() override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	virtual void Jump() override;

	void WallRunUpdate();
	TArray<FVector> WallRunEndVectors();
	bool IsValidWallRunVector(FVector inVec);
	bool WallRunMovement(FVector start, FVector end, float wallRunDir);
	void LandEvent();
	void BlockWallRun();
	virtual void HandleResetMovement() override;


	UFUNCTION(BlueprintCallable, Category = "Movement Functions")
	virtual void HandleStartAbility1() override;
	virtual void HandleStopAbility1() override;
	void Grapple();
	void GrappleAttack(FVector2D dir);


	UFUNCTION(BlueprintCallable, Category = "Movement Functions")
	virtual void HandleStartUltimate() override;
	virtual void HandleStopUltimate() override;
	virtual void HandleStartShooting() override;
	
};
