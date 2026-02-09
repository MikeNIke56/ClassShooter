// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ShieldCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CLASSSHOOTER_ShieldCharacter_generated_h
#error "ShieldCharacter.generated.h already included, missing '#pragma once' in ShieldCharacter.h"
#endif
#define CLASSSHOOTER_ShieldCharacter_generated_h

#define FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_ShieldCharacter_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStartUltimate); \
	DECLARE_FUNCTION(execStartAbility2); \
	DECLARE_FUNCTION(execStartAbility1); \
	DECLARE_FUNCTION(execShieldThrow); \
	DECLARE_FUNCTION(execShieldBash); \
	DECLARE_FUNCTION(execStopBlocking); \
	DECLARE_FUNCTION(execBlock);


#define FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_ShieldCharacter_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShieldCharacter(); \
	friend struct Z_Construct_UClass_AShieldCharacter_Statics; \
public: \
	DECLARE_CLASS(AShieldCharacter, AClassShooterCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ClassShooter"), NO_API) \
	DECLARE_SERIALIZER(AShieldCharacter)


#define FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_ShieldCharacter_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AShieldCharacter(AShieldCharacter&&); \
	AShieldCharacter(const AShieldCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShieldCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShieldCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShieldCharacter) \
	NO_API virtual ~AShieldCharacter();


#define FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_ShieldCharacter_h_16_PROLOG
#define FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_ShieldCharacter_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_ShieldCharacter_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_ShieldCharacter_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_ShieldCharacter_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLASSSHOOTER_API UClass* StaticClass<class AShieldCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_ShieldCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
