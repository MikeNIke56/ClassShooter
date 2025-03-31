// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClassShooter/Public/GrenadeLauncher.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrenadeLauncher() {}

// Begin Cross Module References
CLASSSHOOTER_API UClass* Z_Construct_UClass_AGrenadeLauncher();
CLASSSHOOTER_API UClass* Z_Construct_UClass_AGrenadeLauncher_NoRegister();
CLASSSHOOTER_API UClass* Z_Construct_UClass_AWeaponBase();
UPackage* Z_Construct_UPackage__Script_ClassShooter();
// End Cross Module References

// Begin Class AGrenadeLauncher
void AGrenadeLauncher::StaticRegisterNativesAGrenadeLauncher()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGrenadeLauncher);
UClass* Z_Construct_UClass_AGrenadeLauncher_NoRegister()
{
	return AGrenadeLauncher::StaticClass();
}
struct Z_Construct_UClass_AGrenadeLauncher_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GrenadeLauncher.h" },
		{ "ModuleRelativePath", "Public/GrenadeLauncher.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGrenadeLauncher>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGrenadeLauncher_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AWeaponBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ClassShooter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGrenadeLauncher_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGrenadeLauncher_Statics::ClassParams = {
	&AGrenadeLauncher::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGrenadeLauncher_Statics::Class_MetaDataParams), Z_Construct_UClass_AGrenadeLauncher_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGrenadeLauncher()
{
	if (!Z_Registration_Info_UClass_AGrenadeLauncher.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGrenadeLauncher.OuterSingleton, Z_Construct_UClass_AGrenadeLauncher_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGrenadeLauncher.OuterSingleton;
}
template<> CLASSSHOOTER_API UClass* StaticClass<AGrenadeLauncher>()
{
	return AGrenadeLauncher::StaticClass();
}
AGrenadeLauncher::AGrenadeLauncher() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGrenadeLauncher);
AGrenadeLauncher::~AGrenadeLauncher() {}
// End Class AGrenadeLauncher

// Begin Registration
struct Z_CompiledInDeferFile_FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_GrenadeLauncher_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGrenadeLauncher, AGrenadeLauncher::StaticClass, TEXT("AGrenadeLauncher"), &Z_Registration_Info_UClass_AGrenadeLauncher, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGrenadeLauncher), 2454124683U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_GrenadeLauncher_h_860468065(TEXT("/Script/ClassShooter"),
	Z_CompiledInDeferFile_FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_GrenadeLauncher_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_GrenadeLauncher_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
