// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClassShooter/Public/Shotgun.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShotgun() {}

// Begin Cross Module References
CLASSSHOOTER_API UClass* Z_Construct_UClass_AShotgun();
CLASSSHOOTER_API UClass* Z_Construct_UClass_AShotgun_NoRegister();
CLASSSHOOTER_API UClass* Z_Construct_UClass_AWeaponBase();
UPackage* Z_Construct_UPackage__Script_ClassShooter();
// End Cross Module References

// Begin Class AShotgun
void AShotgun::StaticRegisterNativesAShotgun()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShotgun);
UClass* Z_Construct_UClass_AShotgun_NoRegister()
{
	return AShotgun::StaticClass();
}
struct Z_Construct_UClass_AShotgun_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Shotgun.h" },
		{ "ModuleRelativePath", "Public/Shotgun.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShotgun>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AShotgun_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AWeaponBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ClassShooter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShotgun_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AShotgun_Statics::ClassParams = {
	&AShotgun::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShotgun_Statics::Class_MetaDataParams), Z_Construct_UClass_AShotgun_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AShotgun()
{
	if (!Z_Registration_Info_UClass_AShotgun.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShotgun.OuterSingleton, Z_Construct_UClass_AShotgun_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AShotgun.OuterSingleton;
}
template<> CLASSSHOOTER_API UClass* StaticClass<AShotgun>()
{
	return AShotgun::StaticClass();
}
AShotgun::AShotgun() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AShotgun);
AShotgun::~AShotgun() {}
// End Class AShotgun

// Begin Registration
struct Z_CompiledInDeferFile_FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_Shotgun_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AShotgun, AShotgun::StaticClass, TEXT("AShotgun"), &Z_Registration_Info_UClass_AShotgun, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShotgun), 2591638257U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_Shotgun_h_2637783096(TEXT("/Script/ClassShooter"),
	Z_CompiledInDeferFile_FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_Shotgun_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_Shotgun_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
