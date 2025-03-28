// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Animation/AnimationAsset.h"
#include "Components/ArrowComponent.h"
#include "WeaponBase.generated.h"


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
	float bulletCone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Variables")
	FTimerHandle fireTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Variables")
	FTimerHandle reloadTimer;

	
public:	
	// Sets default values for this actor's properties
	AWeaponBase();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "Weapon Functions")
	virtual void Fire();

	UFUNCTION(BlueprintCallable, Category = "Weapon Functions")
	virtual void Reload();

	void CanFireAgain();
	void FinishReloading();

	UFUNCTION(BlueprintPure, Category = "Weapon Functions")
	virtual FRotator BulletSpread(const FVector& muzzDir, const float maxAngle);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
