// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Shotgun.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CLASSSHOOTER_Shotgun_generated_h
#error "Shotgun.generated.h already included, missing '#pragma once' in Shotgun.h"
#endif
#define CLASSSHOOTER_Shotgun_generated_h

#define FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_Shotgun_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShotgun(); \
	friend struct Z_Construct_UClass_AShotgun_Statics; \
public: \
	DECLARE_CLASS(AShotgun, AWeaponBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ClassShooter"), NO_API) \
	DECLARE_SERIALIZER(AShotgun)


#define FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_Shotgun_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShotgun(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AShotgun(AShotgun&&); \
	AShotgun(const AShotgun&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShotgun); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShotgun); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShotgun) \
	NO_API virtual ~AShotgun();


#define FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_Shotgun_h_12_PROLOG
#define FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_Shotgun_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_Shotgun_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_Shotgun_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLASSSHOOTER_API UClass* StaticClass<class AShotgun>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_Shotgun_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
