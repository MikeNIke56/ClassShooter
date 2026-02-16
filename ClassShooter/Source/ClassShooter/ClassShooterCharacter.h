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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class Base Values")
	TArray<PlayerGameState> currentStates;

	EMovementMode prevMoveMode;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Mesh, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* bodyMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class Base Values")
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
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class Base Values")
	TArray<AWeaponBase*> weaponArray;

	//backup array of weapons when in super
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class Base Values")
	TArray<AWeaponBase*> backupWeaponArray;

	//currently equipped weapon
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class Base Values")
	AWeaponBase* curWeapon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class Base Values")
	AWeaponBase* weaponCopy;

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
	float targetFov;
	bool startFovChange;
	FVector originalCamPos;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AWeaponBase> weaponWorldObj;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class Base Values")
	TArray<UArrowComponent*> knifeSwingLocations;

	bool isLeftSwing;
	bool meleeLerp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class Base Values")
	float slashSpeed;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Class Base Values")
	FVector originalBodyScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Base Values")
	float curSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Base Values")
	float curSpeedMulti;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Base Values")
	float baseSpeedMulti;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Base Values")
	float baseSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Base Values")
	float jumpPow;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Base Values")
	float slidePow;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Class Base Values")
	bool jumpAllowed;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Class Base Values")
	bool isSprinting;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement Base Values")
	bool isADSing;
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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class Base Values")
	bool isSwitchingAfterPickup;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class Base Values")
	bool deathTriggered;

protected:
	UCharacterMovementComponent* movementComponent = GetCharacterMovement();
	
public:
	AClassShooterCharacter();

protected:
	virtual void BeginPlay();
	virtual void Tick(float deltaTime);



	//movement fucntions
	void Move(const FInputActionValue& Value);
	void Look(const FInputActionValue& Value);


	virtual void Jump() override;         //override Jump
	virtual void StopJumping() override;  //override StopJumping

	bool IsGrounded();


	void Sprint();
	void StopSprinting();
	bool IsStillSprinting();


	void StartCrouch();
	void Crouch();
	void StopCrouching();


	void Slide();
	void StopSliding();
	FVector FindSlideVector();


	virtual void ResetMovement();


	//gun related functions
	virtual void ADS();
	virtual void StopADS();


	virtual void StartShooting();
	virtual void StopShooting();
	void Shoot();

	void Reload();
	UFUNCTION(BlueprintCallable, Category = "Weapon Functions")
	void ProceduralRecoil(float multiplier);

	//Picking up and equipping weapons
	void EquipWeapon(AWeaponBase* weapon, int pos);


	UFUNCTION(BlueprintCallable, Category = "Weapon Functions")
	void ShowCurWeapon(AWeaponBase* weapon);


	UFUNCTION(BlueprintCallable, Category = "Weapon Functions")
	void ADSCurWeapon(AWeaponBase* weapon);


	//Picking up weapon
	UFUNCTION(BlueprintCallable, Category = "Weapon Functions")
	virtual void PickupWeapon(AWeaponBase* weapon);


	//Switching weapons
	UFUNCTION(BlueprintCallable, Category = "Weapon Functions")
	void SwitchWeapon(const FInputActionValue& Value);


	//Stowing weapons
	void StowWeapon(AWeaponBase* weapon, const FName& socketName, bool shouldCreateNew, int pos);


	//Dropping weapons
	virtual void DropWeapon();
	void SwapWeaponOver(AWeaponBase* weapon, int pos);


	//Abilities
	virtual void StartAbility1();
	virtual void StopAbility1();

	virtual void StartAbility2();
	virtual void StopAbility2();

	virtual void StartUltimate();
	virtual void StopUltimate();

	void SaveCurWeapons();
	UFUNCTION(BlueprintCallable, Category = "Weapon Functions")
	void RestoreCurWeapons();

	//Melee
	void Melee();

	//Damage and death
	void HandleTakeCustomDamage_Implementation(float DamageAmount) override;
	void TakeCustomDamage(float DamageAmount);


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

