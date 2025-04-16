// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClassShooter/Public/MovementCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovementCharacter() {}

// Begin Cross Module References
CLASSSHOOTER_API UClass* Z_Construct_UClass_AClassShooterCharacter();
CLASSSHOOTER_API UClass* Z_Construct_UClass_AMovementCharacter();
CLASSSHOOTER_API UClass* Z_Construct_UClass_AMovementCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_ClassShooter();
// End Cross Module References

// Begin Class AMovementCharacter
void AMovementCharacter::StaticRegisterNativesAMovementCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMovementCharacter);
UClass* Z_Construct_UClass_AMovementCharacter_NoRegister()
{
	return AMovementCharacter::StaticClass();
}
struct Z_Construct_UClass_AMovementCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MovementCharacter.h" },
		{ "ModuleRelativePath", "Public/MovementCharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovementCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMovementCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AClassShooterCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_ClassShooter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovementCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMovementCharacter_Statics::ClassParams = {
	&AMovementCharacter::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMovementCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMovementCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMovementCharacter()
{
	if (!Z_Registration_Info_UClass_AMovementCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMovementCharacter.OuterSingleton, Z_Construct_UClass_AMovementCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMovementCharacter.OuterSingleton;
}
template<> CLASSSHOOTER_API UClass* StaticClass<AMovementCharacter>()
{
	return AMovementCharacter::StaticClass();
}
AMovementCharacter::AMovementCharacter() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMovementCharacter);
AMovementCharacter::~AMovementCharacter() {}
// End Class AMovementCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_MovementCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMovementCharacter, AMovementCharacter::StaticClass, TEXT("AMovementCharacter"), &Z_Registration_Info_UClass_AMovementCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMovementCharacter), 2752538071U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_MovementCharacter_h_1058081726(TEXT("/Script/ClassShooter"),
	Z_CompiledInDeferFile_FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_MovementCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_MovementCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
