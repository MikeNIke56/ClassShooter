// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClassShooter/ClassShooterCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClassShooterCharacter() {}

// Begin Cross Module References
CLASSSHOOTER_API UClass* Z_Construct_UClass_AClassShooterCharacter();
CLASSSHOOTER_API UClass* Z_Construct_UClass_AClassShooterCharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
UPackage* Z_Construct_UPackage__Script_ClassShooter();
// End Cross Module References

// Begin Class AClassShooterCharacter
void AClassShooterCharacter::StaticRegisterNativesAClassShooterCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AClassShooterCharacter);
UClass* Z_Construct_UClass_AClassShooterCharacter_NoRegister()
{
	return AClassShooterCharacter::StaticClass();
}
struct Z_Construct_UClass_AClassShooterCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ClassShooterCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pawn mesh: 1st person view (arms; seen only by self) */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** First person camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "First person camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sprint Input Action */" },
#endif
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sprint Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ADSAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** ADS input Action */" },
#endif
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ADS input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShootingAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Shooting input Action */" },
#endif
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Shooting input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrenadeAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Throw Grenade input Action */" },
#endif
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Throw Grenade input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeleeAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Melee input Action */" },
#endif
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Melee input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_curSpeed_MetaData[] = {
		{ "Category", "Class Base Values" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Speed variable\n" },
#endif
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Speed variable" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_speedMulti_MetaData[] = {
		{ "Category", "Class Base Values" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_baseSpeed_MetaData[] = {
		{ "Category", "Class Base Values" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_jumpPow_MetaData[] = {
		{ "Category", "Class Base Values" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_curHealth_MetaData[] = {
		{ "Category", "Class Base Values" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maxHealth_MetaData[] = {
		{ "Category", "Class Base Values" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_jumpAllowed_MetaData[] = {
		{ "Category", "Class Base Values" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh1P;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SprintAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ADSAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShootingAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GrenadeAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeleeAction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_curSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_speedMulti;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_baseSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_jumpPow;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_curHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_maxHealth;
	static void NewProp_jumpAllowed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_jumpAllowed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AClassShooterCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_Mesh1P = { "Mesh1P", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh1P_MetaData), NewProp_Mesh1P_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstPersonCameraComponent_MetaData), NewProp_FirstPersonCameraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_SprintAction = { "SprintAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, SprintAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintAction_MetaData), NewProp_SprintAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_ADSAction = { "ADSAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, ADSAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ADSAction_MetaData), NewProp_ADSAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_ShootingAction = { "ShootingAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, ShootingAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShootingAction_MetaData), NewProp_ShootingAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_GrenadeAction = { "GrenadeAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, GrenadeAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrenadeAction_MetaData), NewProp_GrenadeAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_MeleeAction = { "MeleeAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, MeleeAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeleeAction_MetaData), NewProp_MeleeAction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_curSpeed = { "curSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, curSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_curSpeed_MetaData), NewProp_curSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_speedMulti = { "speedMulti", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, speedMulti), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_speedMulti_MetaData), NewProp_speedMulti_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_baseSpeed = { "baseSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, baseSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_baseSpeed_MetaData), NewProp_baseSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_jumpPow = { "jumpPow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, jumpPow), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_jumpPow_MetaData), NewProp_jumpPow_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_curHealth = { "curHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, curHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_curHealth_MetaData), NewProp_curHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_maxHealth = { "maxHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, maxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxHealth_MetaData), NewProp_maxHealth_MetaData) };
void Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_jumpAllowed_SetBit(void* Obj)
{
	((AClassShooterCharacter*)Obj)->jumpAllowed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_jumpAllowed = { "jumpAllowed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AClassShooterCharacter), &Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_jumpAllowed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_jumpAllowed_MetaData), NewProp_jumpAllowed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AClassShooterCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_Mesh1P,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_FirstPersonCameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_SprintAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_ADSAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_ShootingAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_GrenadeAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_MeleeAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_curSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_speedMulti,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_baseSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_jumpPow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_curHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_maxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_jumpAllowed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_LookAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AClassShooterCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AClassShooterCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_ClassShooter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AClassShooterCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AClassShooterCharacter_Statics::ClassParams = {
	&AClassShooterCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AClassShooterCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AClassShooterCharacter_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AClassShooterCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AClassShooterCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AClassShooterCharacter()
{
	if (!Z_Registration_Info_UClass_AClassShooterCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AClassShooterCharacter.OuterSingleton, Z_Construct_UClass_AClassShooterCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AClassShooterCharacter.OuterSingleton;
}
template<> CLASSSHOOTER_API UClass* StaticClass<AClassShooterCharacter>()
{
	return AClassShooterCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AClassShooterCharacter);
AClassShooterCharacter::~AClassShooterCharacter() {}
// End Class AClassShooterCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_ClassShooterCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AClassShooterCharacter, AClassShooterCharacter::StaticClass, TEXT("AClassShooterCharacter"), &Z_Registration_Info_UClass_AClassShooterCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AClassShooterCharacter), 3403415907U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_ClassShooterCharacter_h_153727229(TEXT("/Script/ClassShooter"),
	Z_CompiledInDeferFile_FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_ClassShooterCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_ClassShooterCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
