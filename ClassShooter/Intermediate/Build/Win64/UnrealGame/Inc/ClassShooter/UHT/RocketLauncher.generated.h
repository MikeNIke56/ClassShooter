// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RocketLauncher.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CLASSSHOOTER_RocketLauncher_generated_h
#error "RocketLauncher.generated.h already included, missing '#pragma once' in RocketLauncher.h"
#endif
#define CLASSSHOOTER_RocketLauncher_generated_h

#define FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_RocketLauncher_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARocketLauncher(); \
	friend struct Z_Construct_UClass_ARocketLauncher_Statics; \
public: \
	DECLARE_CLASS(ARocketLauncher, AWeaponBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ClassShooter"), NO_API) \
	DECLARE_SERIALIZER(ARocketLauncher)


#define FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_RocketLauncher_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARocketLauncher(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARocketLauncher(ARocketLauncher&&); \
	ARocketLauncher(const ARocketLauncher&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARocketLauncher); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARocketLauncher); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARocketLauncher) \
	NO_API virtual ~ARocketLauncher();


#define FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_RocketLauncher_h_12_PROLOG
#define FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_RocketLauncher_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_RocketLauncher_h_15_INCLASS_NO_PURE_DECLS \
	FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_RocketLauncher_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLASSSHOOTER_API UClass* StaticClass<class ARocketLauncher>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_RocketLauncher_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
