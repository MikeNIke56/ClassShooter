// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once


#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Logging/LogMacros.h"
#include "WeaponBase.h"
#include "Components/ArrowComponent.h"
#include "Blueprint/UserWidget.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraSystem.h"
#include "Damageable.h"
#include "ClassShooterCharacter.generated.h"


class UInputComponent;
class USkeletalMeshComponent;
class UCameraComponent;
class UInputAction;
class UInputMappingContext;
struct FInputActionValue;


DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

UCLASS(config=Game, Blueprintable)
class AClassShooterCharacter : public ACharacter, public IDamageable
{
	GENERATED_BODY()

	/** Pawn mesh: 1st person view (arms; seen only by self) */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Mesh, meta = (AllowPrivateAccess = "true"))
	USkeletalMeshComponent* Mesh1P;

	/** First person camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FirstPersonCameraComponent;

	


	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputAction* JumpAction;
	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputAction* MoveAction;
	/** Sprint Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* SprintAction;
	/** ADS input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* ADSAction;
	/** Shooting/Melee input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* ShootingAction;
	/** Switch weapon input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* SwitchWeaponAction;
	/** Reload weapon input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* ReloadWeaponAction;
	/** Drop weapon input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* DropWeaponAction;
	/** Crouch input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* CrouchAction;
	/** Drop weapon input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* Ability1Action;
	/** Crouch input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* Ability2Action;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* UltimateAction;

public:
	UPROPERTY(VisibleAnywhere,  BlueprintReadOnly, Category = Mesh, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* bodyMesh;

	UPROPERTY(EditAnywhere,  BlueprintReadWrite, Category = "Class Base Values")
	float curHealth;

	UPROPERTY(EditAnywhere,  BlueprintReadWrite, Category = "Class Base Values")
	float maxHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class Base Values")
	FVector shotLocation;

	//our array of weapons
	UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite, Category = "Class Base Values")
	TArray<AWeaponBase*> weaponArray;

	//backup array of weapons when in super
	UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite, Category = "Class Base Values")
	TArray<AWeaponBase*> backupWeaponArray;

	//currently equipped weapon
	UPROPERTY(EditAnywhere, ReplicatedUsing = OnRep_EquippedWeapon, BlueprintReadWrite, Category = "Class Base Values")
	AWeaponBase* curWeapon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	UArrowComponent* weaponLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class Base Values")
	FVector targetLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class Base Values")
	FRotator targetRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class Base Values")
	FVector curCamLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class Base Values")
	FRotator curCamRotation;

	bool ADSLerp;
	bool recoilLerp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	TSubclassOf<UUserWidget> unADSWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	UUserWidget* unADSWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	TSubclassOf<UUserWidget> sniperWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	UUserWidget* sniperWidget;

	float baseFov;
	float targetFov;
	bool startFovChange;
	FVector originalCamPos;

	UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite)
	TSubclassOf<AWeaponBase> weaponWorldObj;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class Base Values")
	TArray<UArrowComponent*> knifeSwingLocations;

	bool isLeftSwing;
	bool meleeLerp;

	UPROPERTY(EditAnywhere,  BlueprintReadWrite, Category = "Class Base Values")
	float slashSpeed;

	UPROPERTY(VisibleAnywhere,  BlueprintReadOnly, Category = "Class Base Values")
	FVector originalBodyScale;

	UPROPERTY(EditAnywhere,  BlueprintReadWrite, Category = "Movement Base Values")
	float curSpeed;
	UPROPERTY(EditAnywhere,  BlueprintReadWrite, Category = "Movement Base Values")
	float speedMulti;
	UPROPERTY(EditAnywhere,  BlueprintReadWrite, Category = "Movement Base Values")
	float baseSpeed;
	UPROPERTY(EditAnywhere,  BlueprintReadWrite, Category = "Movement Base Values")
	float sprintSpeed;
	UPROPERTY(EditAnywhere,  BlueprintReadWrite, Category = "Movement Base Values")
	float jumpPow;
	UPROPERTY(EditAnywhere,  BlueprintReadWrite, Category = "Movement Base Values")
	float slidePow;
	UPROPERTY(VisibleAnywhere,  BlueprintReadWrite, Category = "Class Base Values")
	bool jumpAllowed;
	UPROPERTY(VisibleAnywhere,  BlueprintReadOnly, Category = "Movement Base Values")
	bool isSprinting;
	UPROPERTY(VisibleAnywhere,  BlueprintReadOnly, Category = "Movement Base Values")
	bool isCrouching;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement Base Values")
	bool isSliding;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement Base Values")
	FVector2D movementVector;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Base Values")
	float baseGroundFriction;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Base Values")
	float baseBrakingDeceleration;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Base Values")
	float baseGravity;
	FTimerHandle slideTimer;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Class Base Values")
	bool isClone;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Base Values")
	bool shouldDestroyWeapon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class Base Values")
	bool isInUltimate;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class Base Values")
	bool ultimateTriggered;

	// Headbob parameters
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class Base Values")
	float bobTimer = 0.0f;
	UPROPERTY(EditAnywhere, Category = "Class Base Values")
	float bobSpeed = 10.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class Base Values")
	float bobAmount = 2.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class Base Values")
	int amplitude = 2.0f;
	FVector defaultCameraLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class Base Values")
	bool isMeleeHBOn;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class Base Values")
	bool knifeHitDetected;


protected:
	UCharacterMovementComponent* movementComponent = GetCharacterMovement();
	
public:
	AClassShooterCharacter();

protected:
	virtual void BeginPlay();
	virtual void Tick(float deltaTime);
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;



	//movement fucntions
	void Move(const FInputActionValue& Value);

	void HandleLook(const FInputActionValue& Value);
	UFUNCTION(Server, Unreliable)
	virtual void ServerLook(const FInputActionValue& Value);
	virtual void ServerLook_Implementation(const FInputActionValue& Value);
	void Look(const FInputActionValue& Value);


	virtual void Jump() override;         //override Jump
	virtual void StopJumping() override;  //override StopJumping

	bool IsGrounded();


	void Sprint();
	void StopSprinting();
	bool IsStillSprinting();

	void HandleStartCrouch();
	UFUNCTION(Server, Reliable)
	virtual void ServerStartCrouch();
	virtual void ServerStartCrouch_Implementation();
	void StartCrouch();
	void HandleCrouch();
	UFUNCTION(Server, Reliable)
	virtual void ServerCrouch();
	virtual void ServerCrouch_Implementation();
	void Crouch();
	void HandleStopCrouching();
	UFUNCTION(Server, Reliable)
	virtual void ServerStopCrouching();
	virtual void ServerStopCrouching_Implementation();
	void StopCrouching();

	void HandleSlide();
	UFUNCTION(Server, Reliable)
	virtual void ServerSlide();
	virtual void ServerSlide_Implementation();
	void Slide();
	void HandleStopSliding();
	UFUNCTION(Server, Reliable)
	virtual void ServerStopSliding();
	virtual void ServerStopSliding_Implementation();
	void StopSliding();

	FVector FindSlideVector();

	virtual void HandleResetMovement();
	UFUNCTION(Server, Reliable)
	virtual void ServerResetMovement();
	virtual void ServerResetMovement_Implementation();
	virtual void ResetMovement();


	//gun related functions
	virtual void HandleADS();
	UFUNCTION(Server, Reliable)
	virtual void ServerADS();
	virtual void ServerADS_Implementation();
	virtual void ADS();
	virtual void HandleStopADS();
	UFUNCTION(Server, Reliable)
	virtual void ServerStopADS();
	virtual void ServerStopADS_Implementation();
	virtual void StopADS();

	virtual void HandleStartShooting();
	UFUNCTION(Server, Reliable)
	virtual void ServerStartShooting();
	virtual void ServerStartShooting_Implementation();
	virtual void StartShooting();
	virtual void HandleStopShooting();
	UFUNCTION(Server, Reliable)
	virtual void ServerStopShooting();
	virtual void ServerStopShooting_Implementation();
	virtual void StopShooting();
	virtual void HandleShoot();
	UFUNCTION(Server, Reliable)
	virtual void ServerShoot();
	virtual void ServerShoot_Implementation();
	void Shoot();


	//Reload and Recoil
	UFUNCTION()
	void HandleRecoil();
	UFUNCTION(Server, Reliable)
	virtual void ServerRecoil();
	virtual void ServerRecoil_Implementation();
	void Recoil();
	void HandleReload();
	UFUNCTION(Server, Reliable)
	virtual void ServerReload();
	virtual void ServerReload_Implementation();
	void Reload();
	void BindDelegate();


	//Picking up and equipping weapons
	UFUNCTION(BlueprintCallable, Category = "Weapon Functions")
	void HandleEquipWeapon(AWeaponBase* weapon);
	UFUNCTION(Server, Reliable)
	virtual void ServerEquipWeapon(AWeaponBase* weapon);
	virtual void ServerEquipWeapon_Implementation(AWeaponBase* weapon);
	void EquipWeapon(AWeaponBase* weapon);
	UFUNCTION()
	void OnRep_EquippedWeapon();


	UFUNCTION(BlueprintCallable, Category = "Weapon Functions")
	void HandleShowCurWeapon(AWeaponBase* weapon);
	UFUNCTION(Server, Reliable)
	virtual void ServerShowCurWeapon(AWeaponBase* weapon);
	virtual void ServerShowCurWeapon_Implementation(AWeaponBase* weapon);
	void ShowCurWeapon(AWeaponBase* weapon);

	UFUNCTION(BlueprintCallable, Category = "Weapon Functions")
	void HandleADSCurWeapon(AWeaponBase* weapon);
	UFUNCTION(Server, Reliable)
	virtual void ServerADSCurWeapon(AWeaponBase* weapon);
	virtual void ServerADSCurWeapon_Implementation(AWeaponBase* weapon);
	void ADSCurWeapon(AWeaponBase* weapon);

	UFUNCTION(BlueprintCallable, Category = "Weapon Functions")
	virtual bool PickupWeapon(AWeaponBase* weapon);


	//Switching weapons
	UFUNCTION(BlueprintCallable, Category = "Weapon Functions")
	void HandleSwitchWeapon(const FInputActionValue& Value);
	UFUNCTION(Server, Reliable)
	virtual void ServerSwitchWeapon(const FInputActionValue& Value);
	virtual void ServerSwitchWeapon_Implementation(const FInputActionValue& Value);
	void SwitchWeapon(const FInputActionValue& Value);


	//Stowing weapons
	UFUNCTION(BlueprintCallable, Category = "Weapon Functions")
	void HandleStowWeapon(AWeaponBase* weapon, const FName& socketName);
	UFUNCTION(Server, Reliable)
	virtual void ServerStowWeapon(AWeaponBase* weapon, const FName& socketName);
	virtual void ServerStowWeapon_Implementation(AWeaponBase* weapon, const FName& socketName);
	void StowWeapon(AWeaponBase* weapon, const FName& socketName);


	//Dropping weapons
	void HandleDropWeaponInput();
	UFUNCTION(Server, Reliable)
	virtual void ServerDropWeapon();
	virtual void ServerDropWeapon_Implementation();
	virtual void DropWeapon();


	//Abilities
	virtual void HandleStartAbility1();
	UFUNCTION(Server, Reliable)
	virtual void ServerStartAbility1();
	virtual void ServerStartAbility1_Implementation();
	virtual void StartAbility1();
	virtual void HandleStopAbility1();
	UFUNCTION(Server, Reliable)
	virtual void ServerStopAbility1();
	virtual void ServerStopAbility1_Implementation();
	virtual void StopAbility1();
	virtual void HandleStartAbility2();
	UFUNCTION(Server, Reliable)
	virtual void ServerStartAbility2();
	virtual void ServerStartAbility2_Implementation();
	virtual void StartAbility2();
	virtual void HandleStopAbility2();
	UFUNCTION(Server, Reliable)
	virtual void ServerStopAbility2();
	virtual void ServerStopAbility2_Implementation();
	virtual void StopAbility2();
	virtual void HandleStartUltimate();
	UFUNCTION(Server, Reliable)
	virtual void ServerStartUltimate();
	virtual void ServerStartUltimate_Implementation();
	virtual void StartUltimate();
	virtual void HandleStopUltimate();
	UFUNCTION(Server, Reliable)
	virtual void ServerStopUltimate();
	virtual void ServerStopUltimate_Implementation();
	virtual void StopUltimate();
	virtual void HandleSaveCurWeapons();
	UFUNCTION(Server, Reliable)
	virtual void ServerSaveCurWeapons();
	virtual void ServerSaveCurWeapons_Implementation();
	void SaveCurWeapons();
	virtual void HandleRestoreCurWeapons();
	UFUNCTION(Server, Reliable)
	virtual void ServerRestoreCurWeapons();
	virtual void ServerRestoreCurWeapons_Implementation();
	void RestoreCurWeapons();

	//Melee
	void HandleMelee();
	UFUNCTION(Server, Reliable)
	virtual void ServerMelee();
	virtual void ServerMelee_Implementation();
	void Melee();

	//Damage and death
	void HandleTakeCustomDamage_Implementation(float DamageAmount) override;
	UFUNCTION(Server, Reliable)
	virtual void ServerTakeCustomDamage(float DamageAmount);
	virtual void ServerTakeCustomDamage_Implementation(float DamageAmount);
	void TakeCustomDamage(float DamageAmount);

	void HandleDie();
	UFUNCTION(Server, Reliable)
	virtual void ServerDie();
	virtual void ServerDie_Implementation();
	void Die();


public:
		
	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* LookAction;

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;
	// End of APawn interface

public:
	/** Returns Mesh1P subobject **/
	USkeletalMeshComponent* GetMesh1P() const { return Mesh1P; }
	/** Returns FirstPersonCameraComponent subobject **/
	UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }

};

