// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClassShooter/Public/StealthCharacter.h"
#include "Runtime/Engine/Classes/Engine/TimerHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStealthCharacter() {}

// Begin Cross Module References
CLASSSHOOTER_API UClass* Z_Construct_UClass_AClassShooterCharacter();
CLASSSHOOTER_API UClass* Z_Construct_UClass_AKnife_NoRegister();
CLASSSHOOTER_API UClass* Z_Construct_UClass_AStealthCharacter();
CLASSSHOOTER_API UClass* Z_Construct_UClass_AStealthCharacter_NoRegister();
CLASSSHOOTER_API UClass* Z_Construct_UClass_AWeaponBase_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
UPackage* Z_Construct_UPackage__Script_ClassShooter();
// End Cross Module References

// Begin Class AStealthCharacter Function StartAbility1
struct Z_Construct_UFunction_AStealthCharacter_StartAbility1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stealth Functions" },
		{ "ModuleRelativePath", "Public/StealthCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStealthCharacter_StartAbility1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStealthCharacter, nullptr, "StartAbility1", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AStealthCharacter_StartAbility1_Statics::Function_MetaDataParams), Z_Construct_UFunction_AStealthCharacter_StartAbility1_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AStealthCharacter_StartAbility1()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStealthCharacter_StartAbility1_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AStealthCharacter::execStartAbility1)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartAbility1();
	P_NATIVE_END;
}
// End Class AStealthCharacter Function StartAbility1

// Begin Class AStealthCharacter Function StartAbility2
struct Z_Construct_UFunction_AStealthCharacter_StartAbility2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stealth Functions" },
		{ "ModuleRelativePath", "Public/StealthCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStealthCharacter_StartAbility2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStealthCharacter, nullptr, "StartAbility2", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AStealthCharacter_StartAbility2_Statics::Function_MetaDataParams), Z_Construct_UFunction_AStealthCharacter_StartAbility2_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AStealthCharacter_StartAbility2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStealthCharacter_StartAbility2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AStealthCharacter::execStartAbility2)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartAbility2();
	P_NATIVE_END;
}
// End Class AStealthCharacter Function StartAbility2

// Begin Class AStealthCharacter Function StartUltimate
struct Z_Construct_UFunction_AStealthCharacter_StartUltimate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stealth Functions" },
		{ "ModuleRelativePath", "Public/StealthCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStealthCharacter_StartUltimate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStealthCharacter, nullptr, "StartUltimate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AStealthCharacter_StartUltimate_Statics::Function_MetaDataParams), Z_Construct_UFunction_AStealthCharacter_StartUltimate_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AStealthCharacter_StartUltimate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStealthCharacter_StartUltimate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AStealthCharacter::execStartUltimate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartUltimate();
	P_NATIVE_END;
}
// End Class AStealthCharacter Function StartUltimate

// Begin Class AStealthCharacter
void AStealthCharacter::StaticRegisterNativesAStealthCharacter()
{
	UClass* Class = AStealthCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "StartAbility1", &AStealthCharacter::execStartAbility1 },
		{ "StartAbility2", &AStealthCharacter::execStartAbility2 },
		{ "StartUltimate", &AStealthCharacter::execStartUltimate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AStealthCharacter);
UClass* Z_Construct_UClass_AStealthCharacter_NoRegister()
{
	return AStealthCharacter::StaticClass();
}
struct Z_Construct_UClass_AStealthCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "StealthCharacter.h" },
		{ "ModuleRelativePath", "Public/StealthCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_invisTimer_MetaData[] = {
		{ "Category", "Stealth Class Base Values" },
		{ "ModuleRelativePath", "Public/StealthCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_invisLength_MetaData[] = {
		{ "Category", "Stealth Class Base Values" },
		{ "ModuleRelativePath", "Public/StealthCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_invisCooldownTimer_MetaData[] = {
		{ "Category", "Stealth Class Base Values" },
		{ "ModuleRelativePath", "Public/StealthCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_invisCooldown_MetaData[] = {
		{ "Category", "Stealth Class Base Values" },
		{ "ModuleRelativePath", "Public/StealthCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_invisRemainingTime_MetaData[] = {
		{ "Category", "Stealth Class Base Values" },
		{ "ModuleRelativePath", "Public/StealthCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_decoyTimer_MetaData[] = {
		{ "Category", "Stealth Class Base Values" },
		{ "ModuleRelativePath", "Public/StealthCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_decoyLength_MetaData[] = {
		{ "Category", "Stealth Class Base Values" },
		{ "ModuleRelativePath", "Public/StealthCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_decoyCooldownTimer_MetaData[] = {
		{ "Category", "Stealth Class Base Values" },
		{ "ModuleRelativePath", "Public/StealthCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_decoyCooldown_MetaData[] = {
		{ "Category", "Stealth Class Base Values" },
		{ "ModuleRelativePath", "Public/StealthCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_decoyRemainingTime_MetaData[] = {
		{ "Category", "Stealth Class Base Values" },
		{ "ModuleRelativePath", "Public/StealthCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_decoyDodge_MetaData[] = {
		{ "Category", "Stealth Class Base Values" },
		{ "ModuleRelativePath", "Public/StealthCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_decoyObj_MetaData[] = {
		{ "Category", "StealthCharacter" },
		{ "ModuleRelativePath", "Public/StealthCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ultTimer_MetaData[] = {
		{ "Category", "Stealth Class Base Values" },
		{ "ModuleRelativePath", "Public/StealthCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ultLength_MetaData[] = {
		{ "Category", "Stealth Class Base Values" },
		{ "ModuleRelativePath", "Public/StealthCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ultCooldownTimer_MetaData[] = {
		{ "Category", "Stealth Class Base Values" },
		{ "ModuleRelativePath", "Public/StealthCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ultCooldown_MetaData[] = {
		{ "Category", "Stealth Class Base Values" },
		{ "ModuleRelativePath", "Public/StealthCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ultRemainingTime_MetaData[] = {
		{ "Category", "Stealth Class Base Values" },
		{ "ModuleRelativePath", "Public/StealthCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_invisVFX_MetaData[] = {
		{ "Category", "Stealth Class Base Values" },
		{ "ModuleRelativePath", "Public/StealthCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_decoyVFX_MetaData[] = {
		{ "Category", "Stealth Class Base Values" },
		{ "ModuleRelativePath", "Public/StealthCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_decoyFloatiesVFX_MetaData[] = {
		{ "Category", "Stealth Class Base Values" },
		{ "ModuleRelativePath", "Public/StealthCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_baseBodyMat_MetaData[] = {
		{ "Category", "Stealth Class Base Values" },
		{ "ModuleRelativePath", "Public/StealthCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_invisMat_MetaData[] = {
		{ "Category", "Stealth Class Base Values" },
		{ "ModuleRelativePath", "Public/StealthCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ultimateMat_MetaData[] = {
		{ "Category", "Stealth Class Base Values" },
		{ "ModuleRelativePath", "Public/StealthCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ultWeaponWorldObj_MetaData[] = {
		{ "Category", "StealthCharacter" },
		{ "ModuleRelativePath", "Public/StealthCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_knifeObj_MetaData[] = {
		{ "Category", "StealthCharacter" },
		{ "ModuleRelativePath", "Public/StealthCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_invisTimer;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_invisLength;
	static const UECodeGen_Private::FStructPropertyParams NewProp_invisCooldownTimer;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_invisCooldown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_invisRemainingTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_decoyTimer;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_decoyLength;
	static const UECodeGen_Private::FStructPropertyParams NewProp_decoyCooldownTimer;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_decoyCooldown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_decoyRemainingTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_decoyDodge;
	static const UECodeGen_Private::FClassPropertyParams NewProp_decoyObj;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ultTimer;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ultLength;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ultCooldownTimer;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ultCooldown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ultRemainingTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_invisVFX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_decoyVFX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_decoyFloatiesVFX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_baseBodyMat;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_invisMat;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ultimateMat;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ultWeaponWorldObj;
	static const UECodeGen_Private::FClassPropertyParams NewProp_knifeObj;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AStealthCharacter_StartAbility1, "StartAbility1" }, // 2060396523
		{ &Z_Construct_UFunction_AStealthCharacter_StartAbility2, "StartAbility2" }, // 2088239526
		{ &Z_Construct_UFunction_AStealthCharacter_StartUltimate, "StartUltimate" }, // 3225178150
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStealthCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStealthCharacter_Statics::NewProp_invisTimer = { "invisTimer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStealthCharacter, invisTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_invisTimer_MetaData), NewProp_invisTimer_MetaData) }; // 756291145
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStealthCharacter_Statics::NewProp_invisLength = { "invisLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStealthCharacter, invisLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_invisLength_MetaData), NewProp_invisLength_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStealthCharacter_Statics::NewProp_invisCooldownTimer = { "invisCooldownTimer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStealthCharacter, invisCooldownTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_invisCooldownTimer_MetaData), NewProp_invisCooldownTimer_MetaData) }; // 756291145
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStealthCharacter_Statics::NewProp_invisCooldown = { "invisCooldown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStealthCharacter, invisCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_invisCooldown_MetaData), NewProp_invisCooldown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStealthCharacter_Statics::NewProp_invisRemainingTime = { "invisRemainingTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStealthCharacter, invisRemainingTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_invisRemainingTime_MetaData), NewProp_invisRemainingTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStealthCharacter_Statics::NewProp_decoyTimer = { "decoyTimer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStealthCharacter, decoyTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_decoyTimer_MetaData), NewProp_decoyTimer_MetaData) }; // 756291145
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStealthCharacter_Statics::NewProp_decoyLength = { "decoyLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStealthCharacter, decoyLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_decoyLength_MetaData), NewProp_decoyLength_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStealthCharacter_Statics::NewProp_decoyCooldownTimer = { "decoyCooldownTimer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStealthCharacter, decoyCooldownTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_decoyCooldownTimer_MetaData), NewProp_decoyCooldownTimer_MetaData) }; // 756291145
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStealthCharacter_Statics::NewProp_decoyCooldown = { "decoyCooldown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStealthCharacter, decoyCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_decoyCooldown_MetaData), NewProp_decoyCooldown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStealthCharacter_Statics::NewProp_decoyRemainingTime = { "decoyRemainingTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStealthCharacter, decoyRemainingTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_decoyRemainingTime_MetaData), NewProp_decoyRemainingTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStealthCharacter_Statics::NewProp_decoyDodge = { "decoyDodge", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStealthCharacter, decoyDodge), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_decoyDodge_MetaData), NewProp_decoyDodge_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AStealthCharacter_Statics::NewProp_decoyObj = { "decoyObj", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStealthCharacter, decoyObj), Z_Construct_UClass_UClass, Z_Construct_UClass_AStealthCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_decoyObj_MetaData), NewProp_decoyObj_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStealthCharacter_Statics::NewProp_ultTimer = { "ultTimer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStealthCharacter, ultTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ultTimer_MetaData), NewProp_ultTimer_MetaData) }; // 756291145
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStealthCharacter_Statics::NewProp_ultLength = { "ultLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStealthCharacter, ultLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ultLength_MetaData), NewProp_ultLength_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStealthCharacter_Statics::NewProp_ultCooldownTimer = { "ultCooldownTimer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStealthCharacter, ultCooldownTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ultCooldownTimer_MetaData), NewProp_ultCooldownTimer_MetaData) }; // 756291145
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStealthCharacter_Statics::NewProp_ultCooldown = { "ultCooldown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStealthCharacter, ultCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ultCooldown_MetaData), NewProp_ultCooldown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStealthCharacter_Statics::NewProp_ultRemainingTime = { "ultRemainingTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStealthCharacter, ultRemainingTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ultRemainingTime_MetaData), NewProp_ultRemainingTime_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStealthCharacter_Statics::NewProp_invisVFX = { "invisVFX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStealthCharacter, invisVFX), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_invisVFX_MetaData), NewProp_invisVFX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStealthCharacter_Statics::NewProp_decoyVFX = { "decoyVFX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStealthCharacter, decoyVFX), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_decoyVFX_MetaData), NewProp_decoyVFX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStealthCharacter_Statics::NewProp_decoyFloatiesVFX = { "decoyFloatiesVFX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStealthCharacter, decoyFloatiesVFX), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_decoyFloatiesVFX_MetaData), NewProp_decoyFloatiesVFX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStealthCharacter_Statics::NewProp_baseBodyMat = { "baseBodyMat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStealthCharacter, baseBodyMat), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_baseBodyMat_MetaData), NewProp_baseBodyMat_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStealthCharacter_Statics::NewProp_invisMat = { "invisMat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStealthCharacter, invisMat), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_invisMat_MetaData), NewProp_invisMat_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStealthCharacter_Statics::NewProp_ultimateMat = { "ultimateMat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStealthCharacter, ultimateMat), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ultimateMat_MetaData), NewProp_ultimateMat_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AStealthCharacter_Statics::NewProp_ultWeaponWorldObj = { "ultWeaponWorldObj", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStealthCharacter, ultWeaponWorldObj), Z_Construct_UClass_UClass, Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ultWeaponWorldObj_MetaData), NewProp_ultWeaponWorldObj_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AStealthCharacter_Statics::NewProp_knifeObj = { "knifeObj", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStealthCharacter, knifeObj), Z_Construct_UClass_UClass, Z_Construct_UClass_AKnife_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_knifeObj_MetaData), NewProp_knifeObj_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStealthCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStealthCharacter_Statics::NewProp_invisTimer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStealthCharacter_Statics::NewProp_invisLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStealthCharacter_Statics::NewProp_invisCooldownTimer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStealthCharacter_Statics::NewProp_invisCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStealthCharacter_Statics::NewProp_invisRemainingTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStealthCharacter_Statics::NewProp_decoyTimer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStealthCharacter_Statics::NewProp_decoyLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStealthCharacter_Statics::NewProp_decoyCooldownTimer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStealthCharacter_Statics::NewProp_decoyCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStealthCharacter_Statics::NewProp_decoyRemainingTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStealthCharacter_Statics::NewProp_decoyDodge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStealthCharacter_Statics::NewProp_decoyObj,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStealthCharacter_Statics::NewProp_ultTimer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStealthCharacter_Statics::NewProp_ultLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStealthCharacter_Statics::NewProp_ultCooldownTimer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStealthCharacter_Statics::NewProp_ultCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStealthCharacter_Statics::NewProp_ultRemainingTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStealthCharacter_Statics::NewProp_invisVFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStealthCharacter_Statics::NewProp_decoyVFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStealthCharacter_Statics::NewProp_decoyFloatiesVFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStealthCharacter_Statics::NewProp_baseBodyMat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStealthCharacter_Statics::NewProp_invisMat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStealthCharacter_Statics::NewProp_ultimateMat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStealthCharacter_Statics::NewProp_ultWeaponWorldObj,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStealthCharacter_Statics::NewProp_knifeObj,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStealthCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AStealthCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AClassShooterCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_ClassShooter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStealthCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AStealthCharacter_Statics::ClassParams = {
	&AStealthCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AStealthCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AStealthCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AStealthCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AStealthCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AStealthCharacter()
{
	if (!Z_Registration_Info_UClass_AStealthCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AStealthCharacter.OuterSingleton, Z_Construct_UClass_AStealthCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AStealthCharacter.OuterSingleton;
}
template<> CLASSSHOOTER_API UClass* StaticClass<AStealthCharacter>()
{
	return AStealthCharacter::StaticClass();
}
AStealthCharacter::AStealthCharacter() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AStealthCharacter);
AStealthCharacter::~AStealthCharacter() {}
// End Class AStealthCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_StealthCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AStealthCharacter, AStealthCharacter::StaticClass, TEXT("AStealthCharacter"), &Z_Registration_Info_UClass_AStealthCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStealthCharacter), 1773202309U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_StealthCharacter_h_1482371674(TEXT("/Script/ClassShooter"),
	Z_CompiledInDeferFile_FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_StealthCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_StealthCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
