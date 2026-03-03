// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WeaponBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class WeaponState : uint8;
struct FHitResult;
#ifdef CLASSSHOOTER_WeaponBase_generated_h
#error "WeaponBase.generated.h already included, missing '#pragma once' in WeaponBase.h"
#endif
#define CLASSSHOOTER_WeaponBase_generated_h

#define FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_WeaponBase_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRestoreWeaponDefaults); \
	DECLARE_FUNCTION(execServer_FinishReloading); \
	DECLARE_FUNCTION(execServer_Reload); \
	DECLARE_FUNCTION(execReload); \
	DECLARE_FUNCTION(execMulti_Fire); \
	DECLARE_FUNCTION(execServer_AutoFire); \
	DECLARE_FUNCTION(execAutoFire); \
	DECLARE_FUNCTION(execServer_Fire); \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execOnRep_curAmmo); \
	DECLARE_FUNCTION(execOnRep_weaponState);


#define FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_WeaponBase_h_26_CALLBACK_WRAPPERS
#define FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_WeaponBase_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeaponBase(); \
	friend struct Z_Construct_UClass_AWeaponBase_Statics; \
public: \
	DECLARE_CLASS(AWeaponBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ClassShooter"), NO_API) \
	DECLARE_SERIALIZER(AWeaponBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		weaponMesh=NETFIELD_REP_START, \
		range, \
		curAmmo, \
		ammoToRefill, \
		ammoReserves, \
		canFire, \
		isReloading, \
		isFiring, \
		curBulletCone, \
		recoilAmnt, \
		fireTimer, \
		reloadTimer, \
		interactBox, \
		state, \
		bulletImpactVFX, \
		curCamLoc, \
		curCamRot, \
		weaponUnADSLocation, \
		weaponADSStandingLocation, \
		weaponADSCrouchedLocation, \
		NETFIELD_REP_END=weaponADSCrouchedLocation	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_WeaponBase_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AWeaponBase(AWeaponBase&&); \
	AWeaponBase(const AWeaponBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeaponBase) \
	NO_API virtual ~AWeaponBase();


#define FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_WeaponBase_h_23_PROLOG
#define FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_WeaponBase_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_WeaponBase_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_WeaponBase_h_26_CALLBACK_WRAPPERS \
	FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_WeaponBase_h_26_INCLASS_NO_PURE_DECLS \
	FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_WeaponBase_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLASSSHOOTER_API UClass* StaticClass<class AWeaponBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_WeaponBase_h


#define FOREACH_ENUM_WEAPONSTATE(op) \
	op(WeaponState::Equipped) \
	op(WeaponState::Stowed) \
	op(WeaponState::OutOfInventory) 

enum class WeaponState : uint8;
template<> struct TIsUEnumClass<WeaponState> { enum { Value = true }; };
template<> CLASSSHOOTER_API UEnum* StaticEnum<WeaponState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
