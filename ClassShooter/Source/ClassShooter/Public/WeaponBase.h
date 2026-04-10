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
	//weapon's skeletal Mesh Component
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

	//ammo
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

	//bullet cone
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Weapon Variables")
	float curBulletCone;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Variables")
	float baseBulletCone;

	//recoil
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Weapon Variables")
	float recoilAmnt;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Variables")
	float baseRecoilAmnt;

	//timer to determine when weapon can fire again
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Weapon Variables")
	FTimerHandle fireTimer;

	//timer to determine when weapon chas finished reloading
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Weapon Variables")
	FTimerHandle reloadTimer;

	//weapon's current state
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_weaponState, Category = "Weapon")
	WeaponState state;

	//the ending point of the equipped gun's fire trace
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Variables")
	FVector shotLocation;

	//bullet impact vfx
	UPROPERTY(EditAnywhere, Replicated, Category = "Weapon Variables")
	UParticleSystem* bulletImpactVFX;

	//location and rotation to determine where to fire line traces from
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Replicated, Category = "Weapon Variables")
	FVector curCamLoc;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Replicated, Category = "Weapon Variables")
	FRotator curCamRot;

	//sets the variable to the owning character's shield object, if applicable
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_shield, Category = "Weapon Variables")
	AWeaponBase* shield;

	//weapon damage
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Variables")
	float damage;

	//weapon ADS variables
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Weapon Variables")
	FVector weaponUnADSLocation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Weapon Variables")
	FVector weaponADSStandingLocation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Weapon Variables")
	FVector weaponADSCrouchedLocation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Variables")
	float weaponADSFOV;

	//muzzle flash variables
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

	//OnRep functions
	UFUNCTION()
	void OnRep_weaponState(WeaponState lastState);
	UFUNCTION()
	void OnRep_curAmmo();
	UFUNCTION()
	void OnRep_shield();

	//fire
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

	//multicast bullet impact vfx
	UFUNCTION(NetMulticast, Reliable, WithValidation)
	void Multi_Fire(FHitResult hitResult);
	bool Multi_Fire_Validate(FHitResult hitResult);
	void Multi_Fire_Implementation(FHitResult hitResult);

	//multicast muzzle flast vfx
	UFUNCTION(NetMulticast, Reliable, WithValidation)
	virtual void Multi_MuzzleFlash();
	virtual bool Multi_MuzzleFlash_Validate();
	virtual void Multi_MuzzleFlash_Implementation();

	//multicast fire sfx
	UFUNCTION(NetMulticast, Reliable, WithValidation)
	virtual void Multi_FireSoundSFX();
	virtual bool Multi_FireSoundSFX_Validate();
	virtual void Multi_FireSoundSFX_Implementation();


	//reload
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

	//multicast reload sfx
	UFUNCTION(NetMulticast, Reliable, WithValidation)
	void Multi_ReloadSFX();
	bool Multi_ReloadSFX_Validate();
	void Multi_ReloadSFX_Implementation();

	//can weapon fire again
	void CanFireAgain();

	//sets up weapon
	void SetUpWeapon(AWeaponBase* weapon);

	//reset weapon ammo and state
	UFUNCTION(BlueprintCallable, Category = "Weapon Functions")
	void RestoreWeaponDefaults();

	//calculate bullet spread
	virtual FRotator BulletSpread(const FVector& muzzDir, const float maxAngle);

	//calculate weapon damage falloff
	float CalcDamageFalloff(const float impactDist);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
