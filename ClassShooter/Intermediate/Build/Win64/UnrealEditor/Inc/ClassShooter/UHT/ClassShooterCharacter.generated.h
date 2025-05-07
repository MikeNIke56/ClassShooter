// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ClassShooterCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AWeaponBase;
struct FInputActionValue;
#ifdef CLASSSHOOTER_ClassShooterCharacter_generated_h
#error "ClassShooterCharacter.generated.h already included, missing '#pragma once' in ClassShooterCharacter.h"
#endif
#define CLASSSHOOTER_ClassShooterCharacter_generated_h

#define FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_ClassShooterCharacter_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execServerDie); \
	DECLARE_FUNCTION(execServerTakeCustomDamage); \
	DECLARE_FUNCTION(execServerMelee); \
	DECLARE_FUNCTION(execServerRestoreCurWeapons); \
	DECLARE_FUNCTION(execServerSaveCurWeapons); \
	DECLARE_FUNCTION(execServerStopUltimate); \
	DECLARE_FUNCTION(execServerStartUltimate); \
	DECLARE_FUNCTION(execServerStopAbility2); \
	DECLARE_FUNCTION(execServerStartAbility2); \
	DECLARE_FUNCTION(execServerStopAbility1); \
	DECLARE_FUNCTION(execServerStartAbility1); \
	DECLARE_FUNCTION(execServerDropWeapon); \
	DECLARE_FUNCTION(execServerStowWeapon); \
	DECLARE_FUNCTION(execHandleStowWeapon); \
	DECLARE_FUNCTION(execServerSwitchWeapon); \
	DECLARE_FUNCTION(execHandleSwitchWeapon); \
	DECLARE_FUNCTION(execPickupWeapon); \
	DECLARE_FUNCTION(execServerADSCurWeapon); \
	DECLARE_FUNCTION(execHandleADSCurWeapon); \
	DECLARE_FUNCTION(execServerShowCurWeapon); \
	DECLARE_FUNCTION(execHandleShowCurWeapon); \
	DECLARE_FUNCTION(execOnRep_EquippedWeapon); \
	DECLARE_FUNCTION(execServerEquipWeapon); \
	DECLARE_FUNCTION(execHandleEquipWeapon); \
	DECLARE_FUNCTION(execServerReload); \
	DECLARE_FUNCTION(execServerRecoil); \
	DECLARE_FUNCTION(execHandleRecoil); \
	DECLARE_FUNCTION(execServerShoot); \
	DECLARE_FUNCTION(execServerStopShooting); \
	DECLARE_FUNCTION(execServerStartShooting); \
	DECLARE_FUNCTION(execServerStopADS); \
	DECLARE_FUNCTION(execServerADS); \
	DECLARE_FUNCTION(execServerResetMovement); \
	DECLARE_FUNCTION(execServerStopSliding); \
	DECLARE_FUNCTION(execServerSlide); \
	DECLARE_FUNCTION(execServerStopCrouching); \
	DECLARE_FUNCTION(execServerCrouch); \
	DECLARE_FUNCTION(execServerStartCrouch); \
	DECLARE_FUNCTION(execServerLook);


#define FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_ClassShooterCharacter_h_31_CALLBACK_WRAPPERS
#define FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_ClassShooterCharacter_h_31_INCLASS_NO_PURE_DECLS \
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
		weaponArray=NETFIELD_REP_START, \
		backupWeaponArray, \
		curWeapon, \
		weaponWorldObj, \
		NETFIELD_REP_END=weaponWorldObj	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_ClassShooterCharacter_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AClassShooterCharacter(AClassShooterCharacter&&); \
	AClassShooterCharacter(const AClassShooterCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AClassShooterCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AClassShooterCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AClassShooterCharacter) \
	NO_API virtual ~AClassShooterCharacter();


#define FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_ClassShooterCharacter_h_28_PROLOG
#define FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_ClassShooterCharacter_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_ClassShooterCharacter_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_ClassShooterCharacter_h_31_CALLBACK_WRAPPERS \
	FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_ClassShooterCharacter_h_31_INCLASS_NO_PURE_DECLS \
	FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_ClassShooterCharacter_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLASSSHOOTER_API UClass* StaticClass<class AClassShooterCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_ClassShooterCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
