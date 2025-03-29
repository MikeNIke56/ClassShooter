// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClassShooter/Public/WeaponBase.h"
#include "Runtime/Engine/Classes/Engine/TimerHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponBase() {}

// Begin Cross Module References
CLASSSHOOTER_API UClass* Z_Construct_UClass_AWeaponBase();
CLASSSHOOTER_API UClass* Z_Construct_UClass_AWeaponBase_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
UPackage* Z_Construct_UPackage__Script_ClassShooter();
// End Cross Module References

// Begin Class AWeaponBase Function BulletSpread
struct Z_Construct_UFunction_AWeaponBase_BulletSpread_Statics
{
	struct WeaponBase_eventBulletSpread_Parms
	{
		FVector muzzDir;
		float maxAngle;
		FRotator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon Functions" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_muzzDir_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maxAngle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_muzzDir;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_maxAngle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWeaponBase_BulletSpread_Statics::NewProp_muzzDir = { "muzzDir", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponBase_eventBulletSpread_Parms, muzzDir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_muzzDir_MetaData), NewProp_muzzDir_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWeaponBase_BulletSpread_Statics::NewProp_maxAngle = { "maxAngle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponBase_eventBulletSpread_Parms, maxAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxAngle_MetaData), NewProp_maxAngle_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWeaponBase_BulletSpread_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponBase_eventBulletSpread_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponBase_BulletSpread_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponBase_BulletSpread_Statics::NewProp_muzzDir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponBase_BulletSpread_Statics::NewProp_maxAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponBase_BulletSpread_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_BulletSpread_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_BulletSpread_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "BulletSpread", nullptr, nullptr, Z_Construct_UFunction_AWeaponBase_BulletSpread_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_BulletSpread_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeaponBase_BulletSpread_Statics::WeaponBase_eventBulletSpread_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_BulletSpread_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_BulletSpread_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWeaponBase_BulletSpread_Statics::WeaponBase_eventBulletSpread_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponBase_BulletSpread()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_BulletSpread_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execBulletSpread)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_muzzDir);
	P_GET_PROPERTY(FFloatProperty,Z_Param_maxAngle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=P_THIS->BulletSpread(Z_Param_Out_muzzDir,Z_Param_maxAngle);
	P_NATIVE_END;
}
// End Class AWeaponBase Function BulletSpread

// Begin Class AWeaponBase Function Fire
struct Z_Construct_UFunction_AWeaponBase_Fire_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon Functions" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "Fire", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_Fire_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_Fire_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWeaponBase_Fire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_Fire_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execFire)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Fire();
	P_NATIVE_END;
}
// End Class AWeaponBase Function Fire

// Begin Class AWeaponBase Function Reload
struct Z_Construct_UFunction_AWeaponBase_Reload_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon Functions" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_Reload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "Reload", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_Reload_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_Reload_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWeaponBase_Reload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_Reload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execReload)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Reload();
	P_NATIVE_END;
}
// End Class AWeaponBase Function Reload

// Begin Class AWeaponBase
void AWeaponBase::StaticRegisterNativesAWeaponBase()
{
	UClass* Class = AWeaponBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BulletSpread", &AWeaponBase::execBulletSpread },
		{ "Fire", &AWeaponBase::execFire },
		{ "Reload", &AWeaponBase::execReload },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWeaponBase);
UClass* Z_Construct_UClass_AWeaponBase_NoRegister()
{
	return AWeaponBase::StaticClass();
}
struct Z_Construct_UClass_AWeaponBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WeaponBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_weaponMesh_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Skeletal Mesh Component\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Skeletal Mesh Component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_fireAnim_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_reloadAnim_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_fireOffset_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_fireRate_MetaData[] = {
		{ "Category", "Weapon Variables" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_shotTimer_MetaData[] = {
		{ "Category", "Weapon Variables" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_reloadTime_MetaData[] = {
		{ "Category", "Weapon Variables" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_range_MetaData[] = {
		{ "Category", "Weapon Variables" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_curAmmo_MetaData[] = {
		{ "Category", "Weapon Variables" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maxAmmo_MetaData[] = {
		{ "Category", "Weapon Variables" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ammoToRefill_MetaData[] = {
		{ "Category", "Weapon Variables" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ammoReserves_MetaData[] = {
		{ "Category", "Weapon Variables" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_canFire_MetaData[] = {
		{ "Category", "Weapon Variables" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isReloading_MetaData[] = {
		{ "Category", "Weapon Variables" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bulletCone_MetaData[] = {
		{ "Category", "Weapon Variables" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_fireTimer_MetaData[] = {
		{ "Category", "Weapon Variables" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_reloadTimer_MetaData[] = {
		{ "Category", "Weapon Variables" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_weaponMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_fireAnim;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_reloadAnim;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_fireOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_fireRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_shotTimer;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_reloadTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_range;
	static const UECodeGen_Private::FIntPropertyParams NewProp_curAmmo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_maxAmmo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ammoToRefill;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ammoReserves;
	static void NewProp_canFire_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_canFire;
	static void NewProp_isReloading_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isReloading;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_bulletCone;
	static const UECodeGen_Private::FStructPropertyParams NewProp_fireTimer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_reloadTimer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AWeaponBase_BulletSpread, "BulletSpread" }, // 578295555
		{ &Z_Construct_UFunction_AWeaponBase_Fire, "Fire" }, // 581559785
		{ &Z_Construct_UFunction_AWeaponBase_Reload, "Reload" }, // 2657704823
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeaponBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_weaponMesh = { "weaponMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, weaponMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_weaponMesh_MetaData), NewProp_weaponMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_fireAnim = { "fireAnim", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, fireAnim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_fireAnim_MetaData), NewProp_fireAnim_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_reloadAnim = { "reloadAnim", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, reloadAnim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_reloadAnim_MetaData), NewProp_reloadAnim_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_fireOffset = { "fireOffset", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, fireOffset), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_fireOffset_MetaData), NewProp_fireOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_fireRate = { "fireRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, fireRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_fireRate_MetaData), NewProp_fireRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_shotTimer = { "shotTimer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, shotTimer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_shotTimer_MetaData), NewProp_shotTimer_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_reloadTime = { "reloadTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, reloadTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_reloadTime_MetaData), NewProp_reloadTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_range = { "range", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, range), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_range_MetaData), NewProp_range_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_curAmmo = { "curAmmo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, curAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_curAmmo_MetaData), NewProp_curAmmo_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_maxAmmo = { "maxAmmo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, maxAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxAmmo_MetaData), NewProp_maxAmmo_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_ammoToRefill = { "ammoToRefill", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, ammoToRefill), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ammoToRefill_MetaData), NewProp_ammoToRefill_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_ammoReserves = { "ammoReserves", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, ammoReserves), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ammoReserves_MetaData), NewProp_ammoReserves_MetaData) };
void Z_Construct_UClass_AWeaponBase_Statics::NewProp_canFire_SetBit(void* Obj)
{
	((AWeaponBase*)Obj)->canFire = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_canFire = { "canFire", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AWeaponBase), &Z_Construct_UClass_AWeaponBase_Statics::NewProp_canFire_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_canFire_MetaData), NewProp_canFire_MetaData) };
void Z_Construct_UClass_AWeaponBase_Statics::NewProp_isReloading_SetBit(void* Obj)
{
	((AWeaponBase*)Obj)->isReloading = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_isReloading = { "isReloading", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AWeaponBase), &Z_Construct_UClass_AWeaponBase_Statics::NewProp_isReloading_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isReloading_MetaData), NewProp_isReloading_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_bulletCone = { "bulletCone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, bulletCone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bulletCone_MetaData), NewProp_bulletCone_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_fireTimer = { "fireTimer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, fireTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_fireTimer_MetaData), NewProp_fireTimer_MetaData) }; // 756291145
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_reloadTimer = { "reloadTimer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, reloadTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_reloadTimer_MetaData), NewProp_reloadTimer_MetaData) }; // 756291145
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeaponBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_weaponMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_fireAnim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_reloadAnim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_fireOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_fireRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_shotTimer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_reloadTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_range,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_curAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_maxAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_ammoToRefill,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_ammoReserves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_canFire,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_isReloading,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_bulletCone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_fireTimer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_reloadTimer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWeaponBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ClassShooter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeaponBase_Statics::ClassParams = {
	&AWeaponBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AWeaponBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AWeaponBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWeaponBase()
{
	if (!Z_Registration_Info_UClass_AWeaponBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWeaponBase.OuterSingleton, Z_Construct_UClass_AWeaponBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWeaponBase.OuterSingleton;
}
template<> CLASSSHOOTER_API UClass* StaticClass<AWeaponBase>()
{
	return AWeaponBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWeaponBase);
AWeaponBase::~AWeaponBase() {}
// End Class AWeaponBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_WeaponBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWeaponBase, AWeaponBase::StaticClass, TEXT("AWeaponBase"), &Z_Registration_Info_UClass_AWeaponBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeaponBase), 1465186998U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_WeaponBase_h_730110696(TEXT("/Script/ClassShooter"),
	Z_CompiledInDeferFile_FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_WeaponBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_WeaponBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
