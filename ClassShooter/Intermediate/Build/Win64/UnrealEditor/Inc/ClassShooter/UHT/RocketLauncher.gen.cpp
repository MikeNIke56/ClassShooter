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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARocketLauncher>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
		{ Z_Construct_UClass_ARocketLauncher, ARocketLauncher::StaticClass, TEXT("ARocketLauncher"), &Z_Registration_Info_UClass_ARocketLauncher, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARocketLauncher), 113372358U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_RocketLauncher_h_2523119865(TEXT("/Script/ClassShooter"),
	Z_CompiledInDeferFile_FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_RocketLauncher_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_RocketLauncher_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
