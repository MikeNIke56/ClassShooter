// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Knife.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CLASSSHOOTER_Knife_generated_h
#error "Knife.generated.h already included, missing '#pragma once' in Knife.h"
#endif
#define CLASSSHOOTER_Knife_generated_h

#define FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_Knife_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAKnife(); \
	friend struct Z_Construct_UClass_AKnife_Statics; \
public: \
	DECLARE_CLASS(AKnife, AWeaponBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ClassShooter"), NO_API) \
	DECLARE_SERIALIZER(AKnife)


#define FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_Knife_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AKnife(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AKnife(AKnife&&); \
	AKnife(const AKnife&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKnife); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKnife); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AKnife) \
	NO_API virtual ~AKnife();


#define FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_Knife_h_12_PROLOG
#define FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_Knife_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_Knife_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_Knife_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLASSSHOOTER_API UClass* StaticClass<class AKnife>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_Knife_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
