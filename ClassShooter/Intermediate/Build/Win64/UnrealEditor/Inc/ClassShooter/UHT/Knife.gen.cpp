// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClassShooter/Public/Knife.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKnife() {}

// Begin Cross Module References
CLASSSHOOTER_API UClass* Z_Construct_UClass_AKnife();
CLASSSHOOTER_API UClass* Z_Construct_UClass_AKnife_NoRegister();
CLASSSHOOTER_API UClass* Z_Construct_UClass_AWeaponBase();
UPackage* Z_Construct_UPackage__Script_ClassShooter();
// End Cross Module References

// Begin Class AKnife
void AKnife::StaticRegisterNativesAKnife()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AKnife);
UClass* Z_Construct_UClass_AKnife_NoRegister()
{
	return AKnife::StaticClass();
}
struct Z_Construct_UClass_AKnife_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Knife.h" },
		{ "ModuleRelativePath", "Public/Knife.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKnife>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AKnife_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AWeaponBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ClassShooter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKnife_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AKnife_Statics::ClassParams = {
	&AKnife::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AKnife_Statics::Class_MetaDataParams), Z_Construct_UClass_AKnife_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AKnife()
{
	if (!Z_Registration_Info_UClass_AKnife.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AKnife.OuterSingleton, Z_Construct_UClass_AKnife_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AKnife.OuterSingleton;
}
template<> CLASSSHOOTER_API UClass* StaticClass<AKnife>()
{
	return AKnife::StaticClass();
}
AKnife::AKnife() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AKnife);
AKnife::~AKnife() {}
// End Class AKnife

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_Knife_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AKnife, AKnife::StaticClass, TEXT("AKnife"), &Z_Registration_Info_UClass_AKnife, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKnife), 474785643U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_Knife_h_190149651(TEXT("/Script/ClassShooter"),
	Z_CompiledInDeferFile_FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_Knife_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_Knife_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
