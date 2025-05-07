// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClassShooter_init() {}
	CLASSSHOOTER_API UFunction* Z_Construct_UDelegateFunction_ClassShooter_OnPickUp__DelegateSignature();
	CLASSSHOOTER_API UFunction* Z_Construct_UDelegateFunction_ClassShooter_RecoilDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ClassShooter;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ClassShooter()
	{
		if (!Z_Registration_Info_UPackage__Script_ClassShooter.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ClassShooter_OnPickUp__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ClassShooter_RecoilDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ClassShooter",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x31F102E9,
				0x0A04FD86,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ClassShooter.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ClassShooter.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ClassShooter(Z_Construct_UPackage__Script_ClassShooter, TEXT("/Script/ClassShooter"), Z_Registration_Info_UPackage__Script_ClassShooter, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x31F102E9, 0x0A04FD86));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
