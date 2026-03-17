// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ClassShooterCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AWeaponBase;
struct FInputActionValue;
#ifdef CLASSSHOOTER_ClassShooterCharacter_generated_h
#error "ClassShooterCharacter.generated.h already included, missing '#pragma once' in ClassShooterCharacter.h"
#endif
#define CLASSSHOOTER_ClassShooterCharacter_generated_h

#define FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_ClassShooterCharacter_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMulti_Death); \
	DECLARE_FUNCTION(execServer_TakeCustomDamage); \
	DECLARE_FUNCTION(execServer_Melee); \
	DECLARE_FUNCTION(execServer_RestoreCurWeapons); \
	DECLARE_FUNCTION(execRestoreCurWeapons); \
	DECLARE_FUNCTION(execServer_SaveCurWeapons); \
	DECLARE_FUNCTION(execServer_StopUltimate); \
	DECLARE_FUNCTION(execServer_StartUltimate); \
	DECLARE_FUNCTION(execServer_StopAbility2); \
	DECLARE_FUNCTION(execServer_StartAbility2); \
	DECLARE_FUNCTION(execServer_StopAbility1); \
	DECLARE_FUNCTION(execServer_StartAbility1); \
	DECLARE_FUNCTION(execServer_SwapWeaponOver); \
	DECLARE_FUNCTION(execServer_StowWeapon); \
	DECLARE_FUNCTION(execServer_SwitchWeapon); \
	DECLARE_FUNCTION(execSwitchWeapon); \
	DECLARE_FUNCTION(execADSCurWeapon); \
	DECLARE_FUNCTION(execServer_ShowCurWeapon); \
	DECLARE_FUNCTION(execShowCurWeapon); \
	DECLARE_FUNCTION(execServer_EquipWeapon); \
	DECLARE_FUNCTION(execProceduralRecoil); \
	DECLARE_FUNCTION(execServer_Reload); \
	DECLARE_FUNCTION(execServer_Shoot); \
	DECLARE_FUNCTION(execServer_StopShooting); \
	DECLARE_FUNCTION(execServer_StartShooting); \
	DECLARE_FUNCTION(execServer_StopADS); \
	DECLARE_FUNCTION(execServer_ADS); \
	DECLARE_FUNCTION(execServer_ResetMovement); \
	DECLARE_FUNCTION(execServer_StopSliding); \
	DECLARE_FUNCTION(execServer_Slide); \
	DECLARE_FUNCTION(execServer_StopCrouching); \
	DECLARE_FUNCTION(execServer_Crouch); \
	DECLARE_FUNCTION(execServer_StartCrouch); \
	DECLARE_FUNCTION(execServer_StopSprinting); \
	DECLARE_FUNCTION(execServer_Sprint); \
	DECLARE_FUNCTION(execServer_StopJumping); \
	DECLARE_FUNCTION(execServer_Jump); \
	DECLARE_FUNCTION(execOnRep_deathTriggered); \
	DECLARE_FUNCTION(execOnRep_targetLocation); \
	DECLARE_FUNCTION(execOnRep_curWeapon); \
	DECLARE_FUNCTION(execOnRep_weaponArray); \
	DECLARE_FUNCTION(execEquipWeapon);


#define FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_ClassShooterCharacter_h_41_CALLBACK_WRAPPERS
#define FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_ClassShooterCharacter_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAClassShooterCharacter(); \
	friend struct Z_Construct_UClass_AClassShooterCharacter_Statics; \
public: \
	DECLARE_CLASS(AClassShooterCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ClassShooter"), NO_API) \
	DECLARE_SERIALIZER(AClassShooterCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AClassShooterCharacter*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		currentStates=NETFIELD_REP_START, \
		bodyMesh, \
		curHealth, \
		xSens, \
		ySens, \
		weaponArray, \
		backupWeaponArray, \
		curWeapon, \
		weaponCopy, \
		weaponLocation, \
		targetLocation, \
		targetRotation, \
		targetFov, \
		startFovChange, \
		originalCamPos, \
		weaponWorldObj, \
		knifeSwingLocations, \
		isLeftSwing, \
		meleeLerp, \
		slashSpeed, \
		originalBodyScale, \
		curSpeed, \
		curSpeedMulti, \
		baseSpeedMulti, \
		baseSpeed, \
		jumpPow, \
		slidePow, \
		jumpAllowed, \
		isSprinting, \
		isADSing, \
		movementVector, \
		baseGroundFriction, \
		baseBrakingDeceleration, \
		isClone, \
		ultimateTriggered, \
		isMeleeHBOn, \
		knifeHitDetected, \
		deathTriggered, \
		didCauseDmg, \
		didGetKill, \
		triggerScreenDmgEffect, \
		deathExplosionVFX, \
		playerWhoDamagedMe, \
		movementComponent, \
		NETFIELD_REP_END=movementComponent	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_ClassShooterCharacter_h_41_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AClassShooterCharacter(AClassShooterCharacter&&); \
	AClassShooterCharacter(const AClassShooterCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AClassShooterCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AClassShooterCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AClassShooterCharacter) \
	NO_API virtual ~AClassShooterCharacter();


#define FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_ClassShooterCharacter_h_38_PROLOG
#define FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_ClassShooterCharacter_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_ClassShooterCharacter_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_ClassShooterCharacter_h_41_CALLBACK_WRAPPERS \
	FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_ClassShooterCharacter_h_41_INCLASS_NO_PURE_DECLS \
	FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_ClassShooterCharacter_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLASSSHOOTER_API UClass* StaticClass<class AClassShooterCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_ClassShooterCharacter_h


#define FOREACH_ENUM_PLAYERGAMESTATE(op) \
	op(PlayerGameState::Walking) \
	op(PlayerGameState::Sprinting) \
	op(PlayerGameState::Sliding) \
	op(PlayerGameState::Jumping) \
	op(PlayerGameState::ShieldBashing) \
	op(PlayerGameState::Grappling) \
	op(PlayerGameState::Dashing) \
	op(PlayerGameState::Diving) \
	op(PlayerGameState::Wallrunning) \
	op(PlayerGameState::Crouching) \
	op(PlayerGameState::Meleeing) \
	op(PlayerGameState::Ability1) \
	op(PlayerGameState::Ability2) \
	op(PlayerGameState::Ultimate) \
	op(PlayerGameState::Dying) 

enum class PlayerGameState : uint8;
template<> struct TIsUEnumClass<PlayerGameState> { enum { Value = true }; };
template<> CLASSSHOOTER_API UEnum* StaticEnum<PlayerGameState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
