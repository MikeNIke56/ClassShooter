// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Pistol.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CLASSSHOOTER_Pistol_generated_h
#error "Pistol.generated.h already included, missing '#pragma once' in Pistol.h"
#endif
#define CLASSSHOOTER_Pistol_generated_h

#define FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_Pistol_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPistol(); \
	friend struct Z_Construct_UClass_APistol_Statics; \
public: \
	DECLARE_CLASS(APistol, AWeaponBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ClassShooter"), NO_API) \
	DECLARE_SERIALIZER(APistol)


#define FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_Pistol_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APistol(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APistol(APistol&&); \
	APistol(const APistol&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APistol); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APistol); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APistol) \
	NO_API virtual ~APistol();


#define FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_Pistol_h_12_PROLOG
#define FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_Pistol_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_Pistol_h_15_INCLASS_NO_PURE_DECLS \
	FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_Pistol_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLASSSHOOTER_API UClass* StaticClass<class APistol>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_Pistol_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
