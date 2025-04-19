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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShield>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
AShield::AShield() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AShield);
AShield::~AShield() {}
// End Class AShield

// Begin Registration
struct Z_CompiledInDeferFile_FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_Shield_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AShield, AShield::StaticClass, TEXT("AShield"), &Z_Registration_Info_UClass_AShield, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShield), 3946109757U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_Shield_h_889487234(TEXT("/Script/ClassShooter"),
	Z_CompiledInDeferFile_FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_Shield_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_Shield_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
