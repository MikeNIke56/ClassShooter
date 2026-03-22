// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Animation/AnimationAsset.h"
#include "Components/ArrowComponent.h"
#include "Components/CapsuleComponent.h"
#include "Particles/ParticleSystem.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraSystem.h"
#include "Kismet/GameplayStatics.h"
#include <Damageable.h>
#include "Net/UnrealNetwork.h" 
#include <Sound/SoundCue.h>
#include "WeaponBase.generated.h"


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
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Mesh")
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
	bool isProjectile;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Variables")
	bool isShield;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Variables")
	float fireRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Variables")
	float shotTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Variables")
	float reloadTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Weapon Variables")
	float range;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_curAmmo, Category = "Weapon Variables")
	int curAmmo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Variables")
	int maxAmmo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Weapon Variables")
	int ammoToRefill;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Weapon Variables")
	int ammoReserves;

	int maxAmmoReserves;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Weapon Variables")
	bool canFire;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Weapon Variables")
	bool isReloading;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Weapon Variables")
	bool isFiring;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Weapon Variables")
	float curBulletCone;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Variables")
	float baseBulletCone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Weapon Variables")
	float recoilAmnt;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Variables")
	float baseRecoilAmnt;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Weapon Variables")
	FTimerHandle fireTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Weapon Variables")
	FTimerHandle reloadTimer;

	// Capsule Component
	UPROPERTY(VisibleAnywhere, Replicated, BlueprintReadOnly, Category = "Components")
	UCapsuleComponent* interactBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_weaponState, Category = "Weapon")
	WeaponState state;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Variables")
	FVector shotLocation;

	UPROPERTY(EditAnywhere, Replicated, Category = "Weapon Variables")
	UParticleSystem* bulletImpactVFX;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Replicated, Category = "Weapon Variables")
	FVector curCamLoc;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Replicated, Category = "Weapon Variables")
	FRotator curCamRot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_shield, Category = "Weapon Variables")
	AWeaponBase* shield;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Variables")
	float damage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Variables")
	bool isWeaponDrop;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Weapon Variables")
	FVector weaponUnADSLocation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Weapon Variables")
	FVector weaponADSStandingLocation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Weapon Variables")
	FVector weaponADSCrouchedLocation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Variables")
	float weaponADSFOV;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Weapon Variables")
	FVector muzzleFlashLocation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Weapon Variables")
	UParticleSystem* muzzleFlashVFX;

	//audio
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Audio")
	USoundBase* weaponAtkSound;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Audio")
	USoundBase* weaponReloadSound;
	
public:	
	// Sets default values for this actor's properties
	AWeaponBase();

	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UFUNCTION()
	void OnRep_weaponState(WeaponState lastState);
	UFUNCTION()
	void OnRep_curAmmo();
	UFUNCTION()
	void OnRep_shield();

	UFUNCTION(BlueprintCallable, Category = "Weapon Functions")
	virtual void Fire();
	UFUNCTION(Server, Reliable, WithValidation)
	virtual void Server_Fire();
	bool Server_Fire_Validate();
	void Server_Fire_Implementation();

	UFUNCTION(BlueprintCallable, Category = "Weapon Functions")
	virtual void AutoFire();
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_AutoFire();
	bool Server_AutoFire_Validate();
	void Server_AutoFire_Implementation();

	UFUNCTION(NetMulticast, Reliable, WithValidation)
	void Multi_Fire(FHitResult hitResult);
	bool Multi_Fire_Validate(FHitResult hitResult);
	void Multi_Fire_Implementation(FHitResult hitResult);

	UFUNCTION(NetMulticast, Reliable, WithValidation)
	virtual void Multi_MuzzleFlash();
	virtual bool Multi_MuzzleFlash_Validate();
	virtual void Multi_MuzzleFlash_Implementation();

	UFUNCTION(NetMulticast, Reliable, WithValidation)
	virtual void Multi_FireSoundSFX();
	virtual bool Multi_FireSoundSFX_Validate();
	virtual void Multi_FireSoundSFX_Implementation();

	UFUNCTION(BlueprintCallable, Category = "Weapon Functions")
	virtual void Reload();
	UFUNCTION(Server, Reliable, WithValidation)
	virtual void Server_Reload();
	virtual bool Server_Reload_Validate();
	virtual void Server_Reload_Implementation();

	void FinishReloading();
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_FinishReloading();
	bool Server_FinishReloading_Validate();
	void Server_FinishReloading_Implementation();

	UFUNCTION(NetMulticast, Reliable, WithValidation)
	void Multi_ReloadSFX();
	bool Multi_ReloadSFX_Validate();
	void Multi_ReloadSFX_Implementation();

	void CanFireAgain();


	void SetUpWeapon(AWeaponBase* weapon);

	UFUNCTION(BlueprintCallable, Category = "Weapon Functions")
	void RestoreWeaponDefaults();

	virtual FRotator BulletSpread(const FVector& muzzDir, const float maxAngle);

	float CalcDamageFalloff(const float impactDist);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
