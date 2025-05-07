// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClassShooter/Public/RocketLauncher.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRocketLauncher() {}

// Begin Cross Module References
CLASSSHOOTER_API UClass* Z_Construct_UClass_ARocketLauncher();
CLASSSHOOTER_API UClass* Z_Construct_UClass_ARocketLauncher_NoRegister();
CLASSSHOOTER_API UClass* Z_Construct_UClass_AWeaponBase();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_ClassShooter();
// End Cross Module References

// Begin Class ARocketLauncher
void ARocketLauncher::StaticRegisterNativesARocketLauncher()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARocketLauncher);
UClass* Z_Construct_UClass_ARocketLauncher_NoRegister()
{
	return ARocketLauncher::StaticClass();
}
struct Z_Construct_UClass_ARocketLauncher_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "RocketLauncher.h" },
		{ "ModuleRelativePath", "Public/RocketLauncher.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_projectile_MetaData[] = {
		{ "Category", "Weapon Variables" },
		{ "ModuleRelativePath", "Public/RocketLauncher.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_projectile;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARocketLauncher>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARocketLauncher_Statics::NewProp_projectile = { "projectile", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARocketLauncher, projectile), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_projectile_MetaData), NewProp_projectile_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARocketLauncher_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARocketLauncher_Statics::NewProp_projectile,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARocketLauncher_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARocketLauncher_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AWeaponBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ClassShooter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARocketLauncher_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARocketLauncher_Statics::ClassParams = {
	&ARocketLauncher::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ARocketLauncher_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ARocketLauncher_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARocketLauncher_Statics::Class_MetaDataParams), Z_Construct_UClass_ARocketLauncher_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARocketLauncher()
{
	if (!Z_Registration_Info_UClass_ARocketLauncher.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARocketLauncher.OuterSingleton, Z_Construct_UClass_ARocketLauncher_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARocketLauncher.OuterSingleton;
}
template<> CLASSSHOOTER_API UClass* StaticClass<ARocketLauncher>()
{
	return ARocketLauncher::StaticClass();
}
ARocketLauncher::ARocketLauncher() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARocketLauncher);
ARocketLauncher::~ARocketLauncher() {}
// End Class ARocketLauncher

// Begin Registration
struct Z_CompiledInDeferFile_FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_RocketLauncher_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARocketLauncher, ARocketLauncher::StaticClass, TEXT("ARocketLauncher"), &Z_Registration_Info_UClass_ARocketLauncher, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARocketLauncher), 581505015U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_RocketLauncher_h_621215568(TEXT("/Script/ClassShooter"),
	Z_CompiledInDeferFile_FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_RocketLauncher_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_RocketLauncher_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
