// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovementCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CLASSSHOOTER_MovementCharacter_generated_h
#error "MovementCharacter.generated.h already included, missing '#pragma once' in MovementCharacter.h"
#endif
#define CLASSSHOOTER_MovementCharacter_generated_h

#define FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_MovementCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStartUltimate); \
	DECLARE_FUNCTION(execStartAbility2); \
	DECLARE_FUNCTION(execStartAbility1);


#define FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_MovementCharacter_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMovementCharacter(); \
	friend struct Z_Construct_UClass_AMovementCharacter_Statics; \
public: \
	DECLARE_CLASS(AMovementCharacter, AClassShooterCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ClassShooter"), NO_API) \
	DECLARE_SERIALIZER(AMovementCharacter)


#define FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_MovementCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMovementCharacter(AMovementCharacter&&); \
	AMovementCharacter(const AMovementCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMovementCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMovementCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMovementCharacter) \
	NO_API virtual ~AMovementCharacter();


#define FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_MovementCharacter_h_15_PROLOG
#define FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_MovementCharacter_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_MovementCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_MovementCharacter_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_MovementCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLASSSHOOTER_API UClass* StaticClass<class AMovementCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_MovementCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
