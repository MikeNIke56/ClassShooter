// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClassShooter/Public/SniperRifle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSniperRifle() {}

// Begin Cross Module References
CLASSSHOOTER_API UClass* Z_Construct_UClass_ASniperRifle();
CLASSSHOOTER_API UClass* Z_Construct_UClass_ASniperRifle_NoRegister();
CLASSSHOOTER_API UClass* Z_Construct_UClass_AWeaponBase();
UPackage* Z_Construct_UPackage__Script_ClassShooter();
// End Cross Module References

// Begin Class ASniperRifle
void ASniperRifle::StaticRegisterNativesASniperRifle()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASniperRifle);
UClass* Z_Construct_UClass_ASniperRifle_NoRegister()
{
	return ASniperRifle::StaticClass();
}
struct Z_Construct_UClass_ASniperRifle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SniperRifle.h" },
		{ "ModuleRelativePath", "Public/SniperRifle.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASniperRifle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASniperRifle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AWeaponBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ClassShooter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASniperRifle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASniperRifle_Statics::ClassParams = {
	&ASniperRifle::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASniperRifle_Statics::Class_MetaDataParams), Z_Construct_UClass_ASniperRifle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASniperRifle()
{
	if (!Z_Registration_Info_UClass_ASniperRifle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASniperRifle.OuterSingleton, Z_Construct_UClass_ASniperRifle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASniperRifle.OuterSingleton;
}
template<> CLASSSHOOTER_API UClass* StaticClass<ASniperRifle>()
{
	return ASniperRifle::StaticClass();
}
ASniperRifle::ASniperRifle() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASniperRifle);
ASniperRifle::~ASniperRifle() {}
// End Class ASniperRifle

// Begin Registration
struct Z_CompiledInDeferFile_FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_SniperRifle_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASniperRifle, ASniperRifle::StaticClass, TEXT("ASniperRifle"), &Z_Registration_Info_UClass_ASniperRifle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASniperRifle), 2829317802U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_SniperRifle_h_3883835429(TEXT("/Script/ClassShooter"),
	Z_CompiledInDeferFile_FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_SniperRifle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_SniperRifle_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
