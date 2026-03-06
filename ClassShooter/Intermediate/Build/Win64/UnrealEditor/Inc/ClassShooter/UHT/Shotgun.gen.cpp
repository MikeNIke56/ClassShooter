// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClassShooter/Public/Shotgun.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShotgun() {}

// Begin Cross Module References
CLASSSHOOTER_API UClass* Z_Construct_UClass_AShotgun();
CLASSSHOOTER_API UClass* Z_Construct_UClass_AShotgun_NoRegister();
CLASSSHOOTER_API UClass* Z_Construct_UClass_AWeaponBase();
UPackage* Z_Construct_UPackage__Script_ClassShooter();
// End Cross Module References

// Begin Class AShotgun Function Server_ShotgunFire
static FName NAME_AShotgun_Server_ShotgunFire = FName(TEXT("Server_ShotgunFire"));
void AShotgun::Server_ShotgunFire()
{
	ProcessEvent(FindFunctionChecked(NAME_AShotgun_Server_ShotgunFire),NULL);
}
struct Z_Construct_UFunction_AShotgun_Server_ShotgunFire_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shotgun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShotgun_Server_ShotgunFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShotgun, nullptr, "Server_ShotgunFire", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShotgun_Server_ShotgunFire_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShotgun_Server_ShotgunFire_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AShotgun_Server_ShotgunFire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShotgun_Server_ShotgunFire_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AShotgun::execServer_ShotgunFire)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_ShotgunFire_Validate())
	{
		RPC_ValidateFailed(TEXT("Server_ShotgunFire_Validate"));
		return;
	}
	P_THIS->Server_ShotgunFire_Implementation();
	P_NATIVE_END;
}
// End Class AShotgun Function Server_ShotgunFire

// Begin Class AShotgun
void AShotgun::StaticRegisterNativesAShotgun()
{
	UClass* Class = AShotgun::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Server_ShotgunFire", &AShotgun::execServer_ShotgunFire },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AShotgun_Server_ShotgunFire, "Server_ShotgunFire" }, // 102381169
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
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
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
struct Z_CompiledInDeferFile_FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_Shotgun_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AShotgun, AShotgun::StaticClass, TEXT("AShotgun"), &Z_Registration_Info_UClass_AShotgun, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShotgun), 802102617U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_Shotgun_h_2490363422(TEXT("/Script/ClassShooter"),
	Z_CompiledInDeferFile_FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_Shotgun_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_Shotgun_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
