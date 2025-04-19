// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Shield.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CLASSSHOOTER_Shield_generated_h
#error "Shield.generated.h already included, missing '#pragma once' in Shield.h"
#endif
#define CLASSSHOOTER_Shield_generated_h

#define FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_Shield_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShield(); \
	friend struct Z_Construct_UClass_AShield_Statics; \
public: \
	DECLARE_CLASS(AShield, AWeaponBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ClassShooter"), NO_API) \
	DECLARE_SERIALIZER(AShield)


#define FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_Shield_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShield(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AShield(AShield&&); \
	AShield(const AShield&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShield); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShield); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShield) \
	NO_API virtual ~AShield();


#define FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_Shield_h_12_PROLOG
#define FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_Shield_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_Shield_h_15_INCLASS_NO_PURE_DECLS \
	FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_Shield_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLASSSHOOTER_API UClass* StaticClass<class AShield>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_Shield_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
