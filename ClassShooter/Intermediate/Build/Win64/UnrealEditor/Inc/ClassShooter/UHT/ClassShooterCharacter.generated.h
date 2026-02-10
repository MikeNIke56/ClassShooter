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

#define FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_ClassShooterCharacter_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSwitchWeapon); \
	DECLARE_FUNCTION(execPickupWeapon); \
	DECLARE_FUNCTION(execADSCurWeapon); \
	DECLARE_FUNCTION(execShowCurWeapon); \
	DECLARE_FUNCTION(execBindDelegate);


#define FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_ClassShooterCharacter_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAClassShooterCharacter(); \
	friend struct Z_Construct_UClass_AClassShooterCharacter_Statics; \
public: \
	DECLARE_CLASS(AClassShooterCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ClassShooter"), NO_API) \
	DECLARE_SERIALIZER(AClassShooterCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AClassShooterCharacter*>(this); }


#define FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_ClassShooterCharacter_h_39_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AClassShooterCharacter(AClassShooterCharacter&&); \
	AClassShooterCharacter(const AClassShooterCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AClassShooterCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AClassShooterCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AClassShooterCharacter) \
	NO_API virtual ~AClassShooterCharacter();


#define FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_ClassShooterCharacter_h_36_PROLOG
#define FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_ClassShooterCharacter_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_ClassShooterCharacter_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_ClassShooterCharacter_h_39_INCLASS_NO_PURE_DECLS \
	FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_ClassShooterCharacter_h_39_ENHANCED_CONSTRUCTORS \
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
