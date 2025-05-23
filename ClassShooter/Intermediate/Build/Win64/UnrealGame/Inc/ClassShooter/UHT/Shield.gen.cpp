// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClassShooter/Public/Shield.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShield() {}

// Begin Cross Module References
CLASSSHOOTER_API UClass* Z_Construct_UClass_AShield();
CLASSSHOOTER_API UClass* Z_Construct_UClass_AShield_NoRegister();
CLASSSHOOTER_API UClass* Z_Construct_UClass_AWeaponBase();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_ClassShooter();
// End Cross Module References

// Begin Class AShield
void AShield::StaticRegisterNativesAShield()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShield);
UClass* Z_Construct_UClass_AShield_NoRegister()
{
	return AShield::StaticClass();
}
struct Z_Construct_UClass_AShield_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Shield.h" },
		{ "ModuleRelativePath", "Public/Shield.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_source_MetaData[] = {
		{ "Category", "Entity source" },
		{ "ModuleRelativePath", "Public/Shield.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_wasThrown_MetaData[] = {
		{ "Category", "Entity source" },
		{ "ModuleRelativePath", "Public/Shield.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_source;
	static void NewProp_wasThrown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_wasThrown;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShield>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShield_Statics::NewProp_source = { "source", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShield, source), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_source_MetaData), NewProp_source_MetaData) };
void Z_Construct_UClass_AShield_Statics::NewProp_wasThrown_SetBit(void* Obj)
{
	((AShield*)Obj)->wasThrown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShield_Statics::NewProp_wasThrown = { "wasThrown", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AShield), &Z_Construct_UClass_AShield_Statics::NewProp_wasThrown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_wasThrown_MetaData), NewProp_wasThrown_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShield_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShield_Statics::NewProp_source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShield_Statics::NewProp_wasThrown,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShield_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AShield_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AWeaponBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ClassShooter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShield_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AShield_Statics::ClassParams = {
	&AShield::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AShield_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AShield_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShield_Statics::Class_MetaDataParams), Z_Construct_UClass_AShield_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AShield()
{
	if (!Z_Registration_Info_UClass_AShield.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShield.OuterSingleton, Z_Construct_UClass_AShield_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AShield.OuterSingleton;
}
template<> CLASSSHOOTER_API UClass* StaticClass<AShield>()
{
	return AShield::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AShield);
AShield::~AShield() {}
// End Class AShield

// Begin Registration
struct Z_CompiledInDeferFile_FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_Shield_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AShield, AShield::StaticClass, TEXT("AShield"), &Z_Registration_Info_UClass_AShield, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShield), 3403295802U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_Shield_h_1711663950(TEXT("/Script/ClassShooter"),
	Z_CompiledInDeferFile_FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_Shield_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_Shield_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
