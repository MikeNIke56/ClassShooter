// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClassShooter/Public/ShieldThrowable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShieldThrowable() {}

// Begin Cross Module References
CLASSSHOOTER_API UClass* Z_Construct_UClass_AShieldThrowable();
CLASSSHOOTER_API UClass* Z_Construct_UClass_AShieldThrowable_NoRegister();
CLASSSHOOTER_API UClass* Z_Construct_UClass_AWeaponBase();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_ClassShooter();
// End Cross Module References

// Begin Class AShieldThrowable
void AShieldThrowable::StaticRegisterNativesAShieldThrowable()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShieldThrowable);
UClass* Z_Construct_UClass_AShieldThrowable_NoRegister()
{
	return AShieldThrowable::StaticClass();
}
struct Z_Construct_UClass_AShieldThrowable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ShieldThrowable.h" },
		{ "ModuleRelativePath", "Public/ShieldThrowable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_source_MetaData[] = {
		{ "Category", "Entity source" },
		{ "ModuleRelativePath", "Public/ShieldThrowable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_source;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShieldThrowable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShieldThrowable_Statics::NewProp_source = { "source", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShieldThrowable, source), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_source_MetaData), NewProp_source_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShieldThrowable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShieldThrowable_Statics::NewProp_source,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShieldThrowable_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AShieldThrowable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AWeaponBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ClassShooter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShieldThrowable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AShieldThrowable_Statics::ClassParams = {
	&AShieldThrowable::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AShieldThrowable_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AShieldThrowable_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShieldThrowable_Statics::Class_MetaDataParams), Z_Construct_UClass_AShieldThrowable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AShieldThrowable()
{
	if (!Z_Registration_Info_UClass_AShieldThrowable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShieldThrowable.OuterSingleton, Z_Construct_UClass_AShieldThrowable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AShieldThrowable.OuterSingleton;
}
template<> CLASSSHOOTER_API UClass* StaticClass<AShieldThrowable>()
{
	return AShieldThrowable::StaticClass();
}
AShieldThrowable::AShieldThrowable() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AShieldThrowable);
AShieldThrowable::~AShieldThrowable() {}
// End Class AShieldThrowable

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_ShieldThrowable_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AShieldThrowable, AShieldThrowable::StaticClass, TEXT("AShieldThrowable"), &Z_Registration_Info_UClass_AShieldThrowable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShieldThrowable), 4225628364U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_ShieldThrowable_h_1381026680(TEXT("/Script/ClassShooter"),
	Z_CompiledInDeferFile_FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_ShieldThrowable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_ShieldThrowable_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
