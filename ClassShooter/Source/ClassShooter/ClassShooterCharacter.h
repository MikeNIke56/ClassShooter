// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once


#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Logging/LogMacros.h"
#include "WeaponBase.h"
#include "Components/ArrowComponent.h"
#include "Blueprint/UserWidget.h"
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

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Mesh, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* bodyMesh;

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

public:
	// Speed variable
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class Base Values")
	float curSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class Base Values")
	float speedMulti;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class Base Values")
	float baseSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class Base Values")
	float jumpPow;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class Base Values")
	float curHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class Base Values")
	float maxHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class Base Values")
	bool jumpAllowed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class Base Values")
	FVector shotLocation;

	//our array of weapons
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class Base Values")
	TArray<AWeaponBase*> weaponArray;

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

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AWeaponBase> weaponWorldObj;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class Base Values")
	TArray<UArrowComponent*> knifeSwingLocations;

	bool isLeftSwing;
	bool meleeLerp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class Base Values")
	float slashSpeed;

protected:
	UCharacterMovementComponent* movementComponent;
	
public:
	AClassShooterCharacter();

protected:
	virtual void BeginPlay();
	virtual void Tick(float deltaTime);

	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);

	//void Jump(const FInputActionValue& Value);
	virtual void Jump() override;         //override Jump
	virtual void StopJumping() override;  //override StopJumping


	bool CheckCanJump();

	void Sprint();
	void StopSprinting();

	void ADS();
	void StopADS();

	void StartShooting();
	void StopShooting();
	void Shoot();

	void ReadyGrenade();
	void ThrowGrenade();

	UFUNCTION()
	void Recoil();

	void BindDelegate();

	void Melee();
	void Die();

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

