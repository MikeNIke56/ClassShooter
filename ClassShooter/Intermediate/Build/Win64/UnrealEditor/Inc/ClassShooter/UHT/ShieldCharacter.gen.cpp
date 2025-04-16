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
CLASSSHOOTER_API UClass* Z_Construct_UClass_AShieldCharacter();
CLASSSHOOTER_API UClass* Z_Construct_UClass_AShieldCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_ClassShooter();
// End Cross Module References

// Begin Class AShieldCharacter
void AShieldCharacter::StaticRegisterNativesAShieldCharacter()
{
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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShieldCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
AShieldCharacter::AShieldCharacter() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AShieldCharacter);
AShieldCharacter::~AShieldCharacter() {}
// End Class AShieldCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_ShieldCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AShieldCharacter, AShieldCharacter::StaticClass, TEXT("AShieldCharacter"), &Z_Registration_Info_UClass_AShieldCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShieldCharacter), 584271452U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_ShieldCharacter_h_25383194(TEXT("/Script/ClassShooter"),
	Z_CompiledInDeferFile_FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_ShieldCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_ShieldCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
