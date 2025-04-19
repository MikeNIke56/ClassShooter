// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClassShooter/Public/ShieldCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShieldCharacter() {}

// Begin Cross Module References
CLASSSHOOTER_API UClass* Z_Construct_UClass_AClassShooterCharacter();
CLASSSHOOTER_API UClass* Z_Construct_UClass_AShield_NoRegister();
CLASSSHOOTER_API UClass* Z_Construct_UClass_AShieldCharacter();
CLASSSHOOTER_API UClass* Z_Construct_UClass_AShieldCharacter_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_ClassShooter();
// End Cross Module References

// Begin Class AShieldCharacter Function Block
struct Z_Construct_UFunction_AShieldCharacter_Block_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Shield Functions" },
		{ "ModuleRelativePath", "Public/ShieldCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShieldCharacter_Block_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShieldCharacter, nullptr, "Block", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShieldCharacter_Block_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShieldCharacter_Block_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AShieldCharacter_Block()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShieldCharacter_Block_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AShieldCharacter::execBlock)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Block();
	P_NATIVE_END;
}
// End Class AShieldCharacter Function Block

// Begin Class AShieldCharacter Function ShieldBash
struct Z_Construct_UFunction_AShieldCharacter_ShieldBash_Statics
{
	struct ShieldCharacter_eventShieldBash_Parms
	{
		FVector2D dir;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Shield Functions" },
		{ "ModuleRelativePath", "Public/ShieldCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_dir;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AShieldCharacter_ShieldBash_Statics::NewProp_dir = { "dir", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShieldCharacter_eventShieldBash_Parms, dir), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShieldCharacter_ShieldBash_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShieldCharacter_ShieldBash_Statics::NewProp_dir,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AShieldCharacter_ShieldBash_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShieldCharacter_ShieldBash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShieldCharacter, nullptr, "ShieldBash", nullptr, nullptr, Z_Construct_UFunction_AShieldCharacter_ShieldBash_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShieldCharacter_ShieldBash_Statics::PropPointers), sizeof(Z_Construct_UFunction_AShieldCharacter_ShieldBash_Statics::ShieldCharacter_eventShieldBash_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShieldCharacter_ShieldBash_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShieldCharacter_ShieldBash_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AShieldCharacter_ShieldBash_Statics::ShieldCharacter_eventShieldBash_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AShieldCharacter_ShieldBash()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShieldCharacter_ShieldBash_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AShieldCharacter::execShieldBash)
{
	P_GET_STRUCT(FVector2D,Z_Param_dir);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShieldBash(Z_Param_dir);
	P_NATIVE_END;
}
// End Class AShieldCharacter Function ShieldBash

// Begin Class AShieldCharacter Function ShieldThrow
struct Z_Construct_UFunction_AShieldCharacter_ShieldThrow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Shield Functions" },
		{ "ModuleRelativePath", "Public/ShieldCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShieldCharacter_ShieldThrow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShieldCharacter, nullptr, "ShieldThrow", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShieldCharacter_ShieldThrow_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShieldCharacter_ShieldThrow_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AShieldCharacter_ShieldThrow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShieldCharacter_ShieldThrow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AShieldCharacter::execShieldThrow)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShieldThrow();
	P_NATIVE_END;
}
// End Class AShieldCharacter Function ShieldThrow

// Begin Class AShieldCharacter Function StartUltimate
struct Z_Construct_UFunction_AShieldCharacter_StartUltimate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Shield Functions" },
		{ "ModuleRelativePath", "Public/ShieldCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShieldCharacter_StartUltimate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShieldCharacter, nullptr, "StartUltimate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShieldCharacter_StartUltimate_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShieldCharacter_StartUltimate_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AShieldCharacter_StartUltimate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShieldCharacter_StartUltimate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AShieldCharacter::execStartUltimate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartUltimate();
	P_NATIVE_END;
}
// End Class AShieldCharacter Function StartUltimate

// Begin Class AShieldCharacter
void AShieldCharacter::StaticRegisterNativesAShieldCharacter()
{
	UClass* Class = AShieldCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Block", &AShieldCharacter::execBlock },
		{ "ShieldBash", &AShieldCharacter::execShieldBash },
		{ "ShieldThrow", &AShieldCharacter::execShieldThrow },
		{ "StartUltimate", &AShieldCharacter::execStartUltimate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShieldCharacter);
UClass* Z_Construct_UClass_AShieldCharacter_NoRegister()
{
	return AShieldCharacter::StaticClass();
}
struct Z_Construct_UClass_AShieldCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ShieldCharacter.h" },
		{ "ModuleRelativePath", "Public/ShieldCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_shieldWorldObj_MetaData[] = {
		{ "Category", "ShieldCharacter" },
		{ "ModuleRelativePath", "Public/ShieldCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_shieldBashDist_MetaData[] = {
		{ "Category", "Shield Class Base Values" },
		{ "ModuleRelativePath", "Public/ShieldCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ultLength_MetaData[] = {
		{ "Category", "Shield Class Base Values" },
		{ "ModuleRelativePath", "Public/ShieldCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ultCooldown_MetaData[] = {
		{ "Category", "Shield Class Base Values" },
		{ "ModuleRelativePath", "Public/ShieldCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_shieldBashVFX_MetaData[] = {
		{ "Category", "Shield Class Base Values" },
		{ "ModuleRelativePath", "Public/ShieldCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_baseBodyMat_MetaData[] = {
		{ "Category", "Shield Class Base Values" },
		{ "ModuleRelativePath", "Public/ShieldCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ultimateMat_MetaData[] = {
		{ "Category", "Shield Class Base Values" },
		{ "ModuleRelativePath", "Public/ShieldCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_shieldWorldObj;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_shieldBashDist;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ultLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ultCooldown;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_shieldBashVFX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_baseBodyMat;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ultimateMat;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AShieldCharacter_Block, "Block" }, // 570295080
		{ &Z_Construct_UFunction_AShieldCharacter_ShieldBash, "ShieldBash" }, // 3023485655
		{ &Z_Construct_UFunction_AShieldCharacter_ShieldThrow, "ShieldThrow" }, // 2740348914
		{ &Z_Construct_UFunction_AShieldCharacter_StartUltimate, "StartUltimate" }, // 3567900083
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShieldCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShieldCharacter_Statics::NewProp_shieldWorldObj = { "shieldWorldObj", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShieldCharacter, shieldWorldObj), Z_Construct_UClass_UClass, Z_Construct_UClass_AShield_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_shieldWorldObj_MetaData), NewProp_shieldWorldObj_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShieldCharacter_Statics::NewProp_shieldBashDist = { "shieldBashDist", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShieldCharacter, shieldBashDist), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_shieldBashDist_MetaData), NewProp_shieldBashDist_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShieldCharacter_Statics::NewProp_ultLength = { "ultLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShieldCharacter, ultLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ultLength_MetaData), NewProp_ultLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShieldCharacter_Statics::NewProp_ultCooldown = { "ultCooldown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShieldCharacter, ultCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ultCooldown_MetaData), NewProp_ultCooldown_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShieldCharacter_Statics::NewProp_shieldBashVFX = { "shieldBashVFX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShieldCharacter, shieldBashVFX), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_shieldBashVFX_MetaData), NewProp_shieldBashVFX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShieldCharacter_Statics::NewProp_baseBodyMat = { "baseBodyMat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShieldCharacter, baseBodyMat), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_baseBodyMat_MetaData), NewProp_baseBodyMat_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShieldCharacter_Statics::NewProp_ultimateMat = { "ultimateMat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShieldCharacter, ultimateMat), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ultimateMat_MetaData), NewProp_ultimateMat_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShieldCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShieldCharacter_Statics::NewProp_shieldWorldObj,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShieldCharacter_Statics::NewProp_shieldBashDist,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShieldCharacter_Statics::NewProp_ultLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShieldCharacter_Statics::NewProp_ultCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShieldCharacter_Statics::NewProp_shieldBashVFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShieldCharacter_Statics::NewProp_baseBodyMat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShieldCharacter_Statics::NewProp_ultimateMat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShieldCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AShieldCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AClassShooterCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_ClassShooter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShieldCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AShieldCharacter_Statics::ClassParams = {
	&AShieldCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AShieldCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AShieldCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShieldCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AShieldCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AShieldCharacter()
{
	if (!Z_Registration_Info_UClass_AShieldCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShieldCharacter.OuterSingleton, Z_Construct_UClass_AShieldCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AShieldCharacter.OuterSingleton;
}
template<> CLASSSHOOTER_API UClass* StaticClass<AShieldCharacter>()
{
	return AShieldCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AShieldCharacter);
AShieldCharacter::~AShieldCharacter() {}
// End Class AShieldCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_ShieldCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AShieldCharacter, AShieldCharacter::StaticClass, TEXT("AShieldCharacter"), &Z_Registration_Info_UClass_AShieldCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShieldCharacter), 2451410640U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_ShieldCharacter_h_1886873583(TEXT("/Script/ClassShooter"),
	Z_CompiledInDeferFile_FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_ShieldCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_ShieldCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
