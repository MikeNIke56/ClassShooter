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
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Movement Class Base Values")
	UCableComponent* cableComponent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cable")
	bool bAttachEnd;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Movement Class Base Values")
	FTimerHandle grappleCooldownTimer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Movement Class Base Values")
	float grappleCooldown;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Class Base Values")
	float baseGrappleCooldown;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Class Base Values")
	float grappleTime;
	UPROPERTY(VisibleAnywhere, Replicated)
	bool canGrapple;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Movement Class Base Values")
	FTimerHandle grappleTimer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Movement Class Base Values")
	float grappleSpd;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Movement Class Base Values")
	bool didGrappleAtk;
	UPROPERTY(Replicated)
	bool grappleAtkLerp;
	UPROPERTY(Replicated)
	FVector targetGrappleAtkLocation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Movement Class Base Values")
	float grappleRemainingTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Movement Class Base Values")
	float grappleAtkDist;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Class Base Values")
	float grappleAtkKnockbackAmnt = 1000;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AActor> grappleObj;

	//dash variables
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Movement Class Base Values")
	FTimerHandle dashCooldownTimer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Movement Class Base Values")
	float curDashCooldown;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Movement Class Base Values")
	float baseDashCooldown;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Class Base Values")
	float dashDist;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Movement Class Base Values")
	float dashTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Movement Class Base Values")
	FVector targetDashLocation;
	UPROPERTY(Replicated)
	bool dashingLerp;
	UPROPERTY(VisibleAnywhere, Replicated)
	bool canDash;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Movement Class Base Values")
	FTimerHandle dashTimer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Movement Class Base Values")
	float dashRemainingTime;


	UPROPERTY(Replicated)
	FTimerHandle ultTimer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Class Base Values")
	float ultLength;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Movement Class Base Values")
	float ultRemainingTime;

	UPROPERTY(Replicated)
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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Movement Class Base Values")
	bool cameraRotateLerp;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Movement Class Base Values")
	float targetRoll;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Replicated, Category = "Movement Class Base Values")
	float baseRoll;

	UPROPERTY(Replicated)
	FVector wallRunNormal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Movement Class Base Values")
	float wallRunSpd;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Movement Class Base Values")
	bool wallRunGravity;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Replicated, Category = "Movement Class Base Values")
	bool isWallRunning;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Replicated, Category = "Movement Class Base Values")
	bool isWallRunningR;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Replicated, Category = "Movement Class Base Values")
	bool isWallRunningL;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Movement Class Base Values")
	float targetWallRunGrav;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Replicated, Category = "Movement Class Base Values")
	bool canWallRun;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Movement Class Base Values")
	float wallRunDelay;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Movement Class Base Values")
	float wallRunJumpDist;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Movement Class Base Values")
	float wallRunJumpHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Class Base Values")
	bool isGrappleAtkHBOn;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Class Base Values")
	bool grappleAtkHitDetected;

public:
	AMovementCharacter();

protected:
	virtual void Tick(float deltaTime) override;
	virtual void BeginPlay() override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	void UpdateCooldownValues();
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_UpdateCooldownValues();
	bool Server_UpdateCooldownValues_Validate();
	void Server_UpdateCooldownValues_Implementation();

	virtual void Jump() override;
	//virtual void Server_Jump_Implementation();


	void WallRunUpdate();
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_WallRunUpdate();
	bool Server_WallRunUpdate_Validate();
	void Server_WallRunUpdate_Implementation();


	TArray<FVector> WallRunEndVectors();
	bool IsValidWallRunVector(FVector inVec);
	bool WallRunMovement(FVector start, FVector end, float wallRunDir);


	void LandEvent();
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_LandEvent();
	bool Server_LandEvent_Validate();
	void Server_LandEvent_Implementation();

	void BlockWallRun();
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_BlockWallRun();
	bool Server_BlockWallRun_Validate();
	void Server_BlockWallRun_Implementation();

	virtual void ResetMovement() override;
	virtual void Server_ResetMovement_Implementation();

	UFUNCTION(BlueprintCallable, Category = "Movement Functions")
	virtual void StartAbility1() override;
	virtual void Server_StartAbility1_Implementation() override;

	virtual void StopAbility1() override;
	virtual void Server_StopAbility1_Implementation() override;

	void Grapple();
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_Grapple();
	bool Server_Grapple_Validate();
	void Server_Grapple_Implementation();

	void GrappleAttack();
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_GrappleAttack();
	bool Server_GrappleAttack_Validate();
	void Server_GrappleAttack_Implementation();

	UFUNCTION(BlueprintCallable, Category = "Stealth Functions")
	virtual void StartAbility2() override;
	virtual void Server_StartAbility2_Implementation() override;

	virtual void StopAbility2() override;
	virtual void Server_StopAbility2_Implementation() override;

	void Dash();
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_Dash();
	bool Server_Dash_Validate();
	void Server_Dash_Implementation();


	UFUNCTION(BlueprintCallable, Category = "Movement Functions")
	virtual void StartUltimate() override;
	virtual void Server_StartUltimate_Implementation() override;

	virtual void StopUltimate() override;
	virtual void Server_StopUltimate_Implementation() override;

	virtual void StartShooting() override;
};
