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

	//grapple variables
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
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Class Base Values")
	FTimerHandle grappleTimer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Class Base Values")
	float grappleSpd;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Class Base Values")
	bool didGrappleAtk;
	bool grappleAtkLerp;
	FVector targetGrappleAtkLocation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Class Base Values")
	float grappleRemainingTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Class Base Values")
	float grappleAtkDist;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Class Base Values")
	float grappleAtkKnockbackAmnt = 1000;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AActor> grappleObj;

	//dash variables
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Class Base Values")
	FTimerHandle dashCooldownTimer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Class Base Values")
	float curDashCooldown;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Class Base Values")
	float baseDashCooldown;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Class Base Values")
	float dashDist;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Class Base Values")
	float dashTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Class Base Values")
	FVector targetDashLocation;
	bool dashingLerp;
	bool canDash;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Class Base Values")
	FTimerHandle dashTimer;



	FTimerHandle ultTimer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Class Base Values")
	float ultLength;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Class Base Values")
	float ultRemainingTime;

	FTimerHandle ultCooldownTimer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Class Base Values")
	float ultCooldown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Class Base Values")
	TArray<FTransform> recallPositions;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Class Base Values")
	bool canSetRecallPos;

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

	virtual void Jump() override;

	void WallRunUpdate();
	TArray<FVector> WallRunEndVectors();
	bool IsValidWallRunVector(FVector inVec);
	bool WallRunMovement(FVector start, FVector end, float wallRunDir);
	void LandEvent();
	void BlockWallRun();
	virtual void ResetMovement() override;


	UFUNCTION(BlueprintCallable, Category = "Movement Functions")
	virtual void StartAbility1() override;
	virtual void StopAbility1() override;
	void Grapple();
	void GrappleAttack();

	UFUNCTION(BlueprintCallable, Category = "Stealth Functions")
	virtual void StartAbility2() override;
	virtual void StopAbility2() override;
	void Dash();


	UFUNCTION(BlueprintCallable, Category = "Movement Functions")
	virtual void StartUltimate() override;
	virtual void StopUltimate() override;
	virtual void StartShooting() override;
};
