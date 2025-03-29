// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once


#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Logging/LogMacros.h"
//#include "WeaponBase.h"
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

	/** Shooting input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* ShootingAction;

	/** Throw Grenade input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* GrenadeAction;

	/** Melee input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* MeleeAction;

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

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Values")
	//WeaponBase* jumpAllowed;


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
	virtual void Jump() override;         // Correctly override Jump
	virtual void StopJumping() override;  // Correctly override StopJumping


	bool CheckCanJump();

	void Sprint();
	void StopSprinting();

	void ADS();
	void StopADS();

	void Shoot();

	void ReadyGrenade();
	void ThrowGrenade();

	void Melee();
	void Die();

	void EquipWeapon();
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

