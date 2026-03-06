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
#include "InputActionValue.h"
#include "DrawDebugHelpers.h"
#include "Net/UnrealNetwork.h" 
#include "ClassShooterCharacter.generated.h"

UENUM(BlueprintType)
enum class PlayerGameState : uint8
{
	Walking, Sprinting, Sliding, Jumping, ShieldBashing,
	Grappling, Dashing, Diving, Wallrunning, Crouching, 
	Meleeing, Ability1, Ability2, Ultimate, Dying
};

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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class Base Values")
	int controllerID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Class Base Values")
	TArray<PlayerGameState> currentStates;

	EMovementMode prevMoveMode;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Replicated, Category = Mesh, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* bodyMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Class Base Values")
	float curHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class Base Values")
	float maxHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class Base Values")
	float xSens;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class Base Values")
	float ySens;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class Base Values")
	FVector shotLocation;

	//our array of weapons
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Class Base Values")
	TArray<AWeaponBase*> weaponArray;

	//backup array of weapons when in super
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Class Base Values")
	TArray<AWeaponBase*> backupWeaponArray;

	//currently equipped weapon
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_curWeapon, Category = "Class Base Values")
	AWeaponBase* curWeapon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Class Base Values")
	AWeaponBase* weaponCopy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Components")
	UArrowComponent* weaponLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_targetLocation, Category = "Class Base Values")
	FVector targetLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Class Base Values")
	FRotator targetRotation;


	//Recoil and Hand Sway
	bool ADSLerp;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gun Values")
	float springRecoilVal;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gun Values")
	float sideMove;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gun Values")
	float mouseX;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gun Values")
	float mouseY;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gun Values")
	FRotator handSwayRotator;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gun Values")
	FTransform recoilTransform;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gun Values")
	FTransform recoil;

	float baseFov;
	UPROPERTY(Replicated)
	float targetFov;
	UPROPERTY(Replicated)
	bool startFovChange;
	UPROPERTY(Replicated)
	FVector originalCamPos;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
	TSubclassOf<AWeaponBase> weaponWorldObj;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Class Base Values")
	TArray<UArrowComponent*> knifeSwingLocations;

	UPROPERTY(Replicated)
	bool isLeftSwing;
	UPROPERTY(Replicated)
	bool meleeLerp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Class Base Values")
	float slashSpeed;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Replicated, Category = "Class Base Values")
	FVector originalBodyScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Movement Base Values")
	float curSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Movement Base Values")
	float curSpeedMulti;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Movement Base Values")
	float baseSpeedMulti;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Movement Base Values")
	float baseSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Movement Base Values")
	float jumpPow;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Movement Base Values")
	float slidePow;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Replicated, Category = "Class Base Values")
	bool jumpAllowed;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Replicated, Category = "Class Base Values")
	bool isSprinting;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Replicated, Category = "Movement Base Values")
	bool isADSing;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Replicated, Category = "Movement Base Values")
	FVector2D movementVector;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Movement Base Values")
	float baseGroundFriction;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Movement Base Values")
	float baseBrakingDeceleration;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Base Values")
	float baseGravity;
	FTimerHandle slideTimer;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Replicated, Category = "Class Base Values")
	bool isClone;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Base Values")
	bool shouldDestroyWeapon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Class Base Values")
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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Class Base Values")
	bool isMeleeHBOn;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Class Base Values")
	bool knifeHitDetected;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class Base Values")
	bool isSwitchingAfterPickup;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Class Base Values")
	bool deathTriggered;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Class Base Values")
	bool didCauseDmg;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Class Base Values")
	bool didGetKill;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Class Base Values")
	bool triggerScreenDmgEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Class Base Values")
	UNiagaraSystem* deathExplosionVFX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class Base Values")
	FVector baseBodyLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Class Base Values")
	AClassShooterCharacter* playerWhoDamagedMe;

protected:
	UPROPERTY(Replicated)
	UCharacterMovementComponent* movementComponent = GetCharacterMovement();
	
public:
	AClassShooterCharacter();

	//Picking up and equipping weapons
	UFUNCTION(BlueprintCallable)
	void EquipWeapon(AWeaponBase* weapon, bool isUltDagger);

protected:
	virtual void BeginPlay();
	virtual void Tick(float deltaTime);
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UFUNCTION()
	void OnRep_weaponArray();
	UFUNCTION()
	void OnRep_curWeapon(AWeaponBase* weapon);
	UFUNCTION()
	void OnRep_targetLocation();

	//movement fucntions
	void Move(const FInputActionValue& Value);
	void Look(const FInputActionValue& Value);


	virtual void Jump() override;         //override Jump
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_Jump();
	bool Server_Jump_Validate();
	void Server_Jump_Implementation();

	virtual void StopJumping() override;  //override StopJumping
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_StopJumping();
	bool Server_StopJumping_Validate();
	void Server_StopJumping_Implementation();

	bool IsGrounded();


	void Sprint();
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_Sprint();
	bool Server_Sprint_Validate();
	void Server_Sprint_Implementation();

	void StopSprinting();
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_StopSprinting();
	bool Server_StopSprinting_Validate();
	void Server_StopSprinting_Implementation();

	bool IsStillSprinting();


	void StartCrouch();
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_StartCrouch();
	bool Server_StartCrouch_Validate();
	void Server_StartCrouch_Implementation();

	void Crouch();
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_Crouch();
	bool Server_Crouch_Validate();
	void Server_Crouch_Implementation();

	void StopCrouching();
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_StopCrouching();
	bool Server_StopCrouching_Validate();
	void Server_StopCrouching_Implementation();


	void Slide();
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_Slide();
	bool Server_Slide_Validate();
	void Server_Slide_Implementation();

	void StopSliding();
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_StopSliding();
	bool Server_StopSliding_Validate();
	void Server_StopSliding_Implementation();

	FVector FindSlideVector();


	virtual void ResetMovement();
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_ResetMovement();
	bool Server_ResetMovement_Validate();
	void Server_ResetMovement_Implementation();


	//gun related functions
	virtual void ADS();
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_ADS();
	bool Server_ADS_Validate();
	void Server_ADS_Implementation();

	virtual void StopADS();
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_StopADS();
	bool Server_StopADS_Validate();
	void Server_StopADS_Implementation();


	virtual void StartShooting();
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_StartShooting();
	bool Server_StartShooting_Validate();
	void Server_StartShooting_Implementation();

	virtual void StopShooting();
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_StopShooting();
	bool Server_StopShooting_Validate();
	void Server_StopShooting_Implementation();

	void Shoot();
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_Shoot();
	bool Server_Shoot_Validate();
	void Server_Shoot_Implementation();


	void Reload();
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_Reload();
	bool Server_Reload_Validate();
	void Server_Reload_Implementation();


	UFUNCTION(BlueprintCallable, Category = "Weapon Functions")
	void ProceduralRecoil(float multiplier);

	UFUNCTION(Server, Reliable, WithValidation)
	void Server_EquipWeapon(AWeaponBase* weapon, bool isUltDagger);
	bool Server_EquipWeapon_Validate(AWeaponBase* weapon, bool isUltDagger);
	void Server_EquipWeapon_Implementation(AWeaponBase* weapon, bool isUltDagger);


	UFUNCTION(BlueprintCallable, Category = "Weapon Functions")
	void ShowCurWeapon(AWeaponBase* weapon);
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_ShowCurWeapon(AWeaponBase* weapon);
	bool Server_ShowCurWeapon_Validate(AWeaponBase* weapon);
	void Server_ShowCurWeapon_Implementation(AWeaponBase* weapon);


	UFUNCTION(BlueprintCallable, Category = "Weapon Functions")
	void ADSCurWeapon(AWeaponBase* weapon);


	//Switching weapons
	UFUNCTION(BlueprintCallable, Category = "Weapon Functions")
	void SwitchWeapon(const FInputActionValue& Value);
	UFUNCTION(Server, Reliable, WithValidation)
	virtual void Server_SwitchWeapon(const FInputActionValue& Value);
	virtual bool Server_SwitchWeapon_Validate(const FInputActionValue& Value);
	virtual void Server_SwitchWeapon_Implementation(const FInputActionValue& Value);


	//Stowing weapons
	void StowWeapon(AWeaponBase* weapon, const FName& socketName, bool shouldCreateNew, int pos);
	UFUNCTION(Server, Reliable, WithValidation)
	virtual void Server_StowWeapon(AWeaponBase* weapon, const FName& socketName, bool shouldCreateNew, int pos);
	virtual bool Server_StowWeapon_Validate(AWeaponBase* weapon, const FName& socketName, bool shouldCreateNew, int pos);
	virtual void Server_StowWeapon_Implementation(AWeaponBase* weapon, const FName& socketName, bool shouldCreateNew, int pos);


	//Dropping weapons
	virtual void DropWeapon();
	UFUNCTION(Server, Reliable, WithValidation)
	virtual void Server_DropWeapon();
	virtual bool Server_DropWeapon_Validate();
	virtual void Server_DropWeapon_Implementation();

	void SwapWeaponOver(AWeaponBase* weapon, int pos);
	UFUNCTION(Server, Reliable, WithValidation)
	virtual void Server_SwapWeaponOver(AWeaponBase* weapon, int pos);
	virtual bool Server_SwapWeaponOver_Validate(AWeaponBase* weapon, int pos);
	virtual void Server_SwapWeaponOver_Implementation(AWeaponBase* weapon, int pos);


	//Abilities
	virtual void StartAbility1();
	UFUNCTION(Server, Reliable, WithValidation)
	virtual void Server_StartAbility1();
	virtual bool Server_StartAbility1_Validate();
	virtual void Server_StartAbility1_Implementation();

	virtual void StopAbility1();
	UFUNCTION(Server, Reliable, WithValidation)
	virtual void Server_StopAbility1();
	virtual bool Server_StopAbility1_Validate();
	virtual void Server_StopAbility1_Implementation();

	virtual void StartAbility2();
	UFUNCTION(Server, Reliable, WithValidation)
	virtual void Server_StartAbility2();
	virtual bool Server_StartAbility2_Validate();
	virtual void Server_StartAbility2_Implementation();

	virtual void StopAbility2();
	UFUNCTION(Server, Reliable, WithValidation)
	virtual void Server_StopAbility2();
	virtual bool Server_StopAbility2_Validate();
	virtual void Server_StopAbility2_Implementation();

	virtual void StartUltimate();
	UFUNCTION(Server, Reliable, WithValidation)
	virtual void Server_StartUltimate();
	virtual bool Server_StartUltimate_Validate();
	virtual void Server_StartUltimate_Implementation();

	virtual void StopUltimate();
	UFUNCTION(Server, Reliable, WithValidation)
	virtual void Server_StopUltimate();
	virtual bool Server_StopUltimate_Validate();
	virtual void Server_StopUltimate_Implementation();

	void SaveCurWeapons();
	UFUNCTION(Server, Reliable, WithValidation)
	virtual void Server_SaveCurWeapons();
	virtual bool Server_SaveCurWeapons_Validate();
	virtual void Server_SaveCurWeapons_Implementation();

	UFUNCTION(BlueprintCallable, Category = "Weapon Functions")
	void RestoreCurWeapons();
	UFUNCTION(Server, Reliable, WithValidation)
	virtual void Server_RestoreCurWeapons();
	virtual bool Server_RestoreCurWeapons_Validate();
	virtual void Server_RestoreCurWeapons_Implementation();

	//Melee
	void Melee();
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_Melee();
	bool Server_Melee_Validate();
	void Server_Melee_Implementation();


	//Damage and death
	void HandleTakeCustomDamage_Implementation(float damage, AActor* source);

	virtual void TakeCustomDamage(float DamageAmount, AActor* source);
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_TakeCustomDamage(float DamageAmount, AActor* source);
	bool Server_TakeCustomDamage_Validate(float DamageAmount, AActor* source);
	void Server_TakeCustomDamage_Implementation(float DamageAmount, AActor* source);

	UFUNCTION(NetMulticast, Reliable, WithValidation)
	void Multi_Death();
	bool Multi_Death_Validate();
	void Multi_Death_Implementation();


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

