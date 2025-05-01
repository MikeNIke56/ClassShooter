// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Damageable.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CLASSSHOOTER_Damageable_generated_h
#error "Damageable.generated.h already included, missing '#pragma once' in Damageable.h"
#endif
#define CLASSSHOOTER_Damageable_generated_h

#define FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_Damageable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void TakeCustomDamage_Implementation(float Amount) {}; \
	DECLARE_FUNCTION(execTakeCustomDamage);


#define FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_Damageable_h_13_CALLBACK_WRAPPERS
#define FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_Damageable_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CLASSSHOOTER_API UDamageable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDamageable(UDamageable&&); \
	UDamageable(const UDamageable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLASSSHOOTER_API, UDamageable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDamageable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDamageable) \
	CLASSSHOOTER_API virtual ~UDamageable();


#define FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_Damageable_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDamageable(); \
	friend struct Z_Construct_UClass_UDamageable_Statics; \
public: \
	DECLARE_CLASS(UDamageable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ClassShooter"), CLASSSHOOTER_API) \
	DECLARE_SERIALIZER(UDamageable)


#define FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_Damageable_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_Damageable_h_13_GENERATED_UINTERFACE_BODY() \
	FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_Damageable_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_Damageable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDamageable() {} \
public: \
	typedef UDamageable UClassType; \
	typedef IDamageable ThisClass; \
	static void Execute_TakeCustomDamage(UObject* O, float Amount); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_Damageable_h_10_PROLOG
#define FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_Damageable_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_Damageable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_Damageable_h_13_CALLBACK_WRAPPERS \
	FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_Damageable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLASSSHOOTER_API UClass* StaticClass<class UDamageable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_Damageable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
