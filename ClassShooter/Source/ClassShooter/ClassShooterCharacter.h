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
#include "ClassShooterCharacter.generated.h"

class UInputComponent;
class USkeletalMeshComponent;
class UCameraComponent;
class UInputAction;
class UInputMappingContext;
struct FInputActionValue;


DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

UCLASS(config=Game, Blueprintable)
class AClassShooterCharacter : public ACharacter
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
	/** Throw Grenade input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* GrenadeAction;
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
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Mesh, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* bodyMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class Base Values")
	float curHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class Base Values")
	float maxHealth;

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
	float speedMulti;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Base Values")
	float baseSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Base Values")
	float jumpPow;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Base Values")
	float slidePow;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Class Base Values")
	bool jumpAllowed;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement Base Values")
	bool isSprinting;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement Base Values")
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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stealth Class Base Values")
	bool isInUltimate;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stealth Class Base Values")
	bool ultimateTriggered;

protected:
	UCharacterMovementComponent* movementComponent = GetCharacterMovement();;
	
public:
	AClassShooterCharacter();

protected:
	virtual void BeginPlay();
	virtual void Tick(float deltaTime);


	//movement fucntions;
	void Move(const FInputActionValue& Value);
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
	void ReadyGrenade();
	void ThrowGrenade();
	UFUNCTION()
	void Recoil();
	UFUNCTION(BlueprintCallable, Category = "Weapon Functions")
	void EquipWeapon(AWeaponBase* weapon);
	UFUNCTION(BlueprintCallable, Category = "Weapon Functions")
	void ShowCurWeapon(AWeaponBase* weapon);
	UFUNCTION(BlueprintCallable, Category = "Weapon Functions")
	void ADSCurWeapon(AWeaponBase* weapon);
	UFUNCTION(BlueprintCallable, Category = "Weapon Functions")
	bool PickupWeapon(AWeaponBase* weapon);
	UFUNCTION(BlueprintCallable, Category = "Weapon Functions")
	void SwitchWeapon(const FInputActionValue& Value);
	UFUNCTION(BlueprintCallable, Category = "Weapon Functions")
	void StowWeapon(AWeaponBase* weapon, const FName& socketName);
	void DropWeapon();
	void Reload();


	//misc.
	void BindDelegate();
	void Melee();
	void Die();
	void Look(const FInputActionValue& Value);
	virtual void StartAbility1();
	virtual void StopAbility1();
	virtual void StartAbility2();
	virtual void StopAbility2();
	virtual void StartUltimate();
	virtual void StopUltimate();
	void SaveCurWeapons();
	void RestoreCurWeapons();

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

