// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StealthCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CLASSSHOOTER_StealthCharacter_generated_h
#error "StealthCharacter.generated.h already included, missing '#pragma once' in StealthCharacter.h"
#endif
#define CLASSSHOOTER_StealthCharacter_generated_h

#define FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_StealthCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleStartUltimate); \
	DECLARE_FUNCTION(execHandleStartAbility2); \
	DECLARE_FUNCTION(execHandleStartAbility1);


#define FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_StealthCharacter_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStealthCharacter(); \
	friend struct Z_Construct_UClass_AStealthCharacter_Statics; \
public: \
	DECLARE_CLASS(AStealthCharacter, AClassShooterCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ClassShooter"), NO_API) \
	DECLARE_SERIALIZER(AStealthCharacter)


#define FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_StealthCharacter_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStealthCharacter(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AStealthCharacter(AStealthCharacter&&); \
	AStealthCharacter(const AStealthCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStealthCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStealthCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AStealthCharacter) \
	NO_API virtual ~AStealthCharacter();


#define FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_StealthCharacter_h_15_PROLOG
#define FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_StealthCharacter_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_StealthCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_StealthCharacter_h_18_INCLASS_NO_PURE_DECLS \
	FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_StealthCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLASSSHOOTER_API UClass* StaticClass<class AStealthCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_StealthCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
