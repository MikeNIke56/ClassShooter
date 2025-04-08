// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Animation/AnimationAsset.h"
#include "Components/ArrowComponent.h"
#include "Components/CapsuleComponent.h"
#include "Particles/ParticleSystem.h"
#include "Kismet/GameplayStatics.h"
#include "WeaponBase.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRecoilDelegate);

UENUM(BlueprintType)
enum class WeaponState : uint8
{
	Equipped, Stowed, OutOfInventory
};

UCLASS(Blueprintable)
class CLASSSHOOTER_API AWeaponBase : public AActor
{
	GENERATED_BODY()

public:
	// Skeletal Mesh Component
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh")
	USkeletalMeshComponent* weaponMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	UAnimMontage* fireAnim;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	UAnimMontage* reloadAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	UArrowComponent* fireOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Variables")
	FName name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Variables")
	bool isAutomatic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Variables")
	float fireRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Variables")
	float shotTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Variables")
	float reloadTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Variables")
	float range;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Variables")
	int curAmmo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Variables")
	int maxAmmo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Variables")
	int ammoToRefill;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Variables")
	int ammoReserves;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Variables")
	bool canFire;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Variables")
	bool isReloading;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Variables")
	float curBulletCone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Variables")
	float baseBulletCone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Variables")
	float minVertRecoilAmnt;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Variables")
	float maxVertRecoilAmnt;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Variables")
	float minHorRecoilAmnt;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Variables")
	float maxHorRecoilAmnt;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Variables")
	FTimerHandle fireTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Variables")
	FTimerHandle reloadTimer;

	// Capsule Component
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UCapsuleComponent* interactBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
	WeaponState state;

	UPROPERTY(BlueprintCallable, BlueprintAssignable)
	FRecoilDelegate recoilDel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Variables")
	FVector shotLocation;

	UPROPERTY(EditAnywhere, Category = "Weapon Variables")
	UParticleSystem* bulletImpactVFX;

	FVector curCamLoc;
	FRotator curCamRot;
	
public:	
	// Sets default values for this actor's properties
	AWeaponBase();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "Weapon Functions")
	virtual void Fire();

	UFUNCTION(BlueprintCallable, Category = "Weapon Functions")
	virtual void AutoFire();

	UFUNCTION(BlueprintCallable, Category = "Weapon Functions")
	virtual void Reload();

	void CanFireAgain();
	void FinishReloading();

	void SetUpWeapon(const AWeaponBase& weapon);

	UFUNCTION(BlueprintPure, Category = "Weapon Functions")
	virtual FRotator BulletSpread(const FVector& muzzDir, const float maxAngle);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
