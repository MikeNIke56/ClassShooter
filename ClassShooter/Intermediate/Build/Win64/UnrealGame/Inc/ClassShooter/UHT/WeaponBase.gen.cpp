// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClassShooter/Public/WeaponBase.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
#include "Runtime/Engine/Classes/Engine/TimerHandle.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponBase() {}

// Begin Cross Module References
CLASSSHOOTER_API UClass* Z_Construct_UClass_AWeaponBase();
CLASSSHOOTER_API UClass* Z_Construct_UClass_AWeaponBase_NoRegister();
CLASSSHOOTER_API UEnum* Z_Construct_UEnum_ClassShooter_WeaponState();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
UPackage* Z_Construct_UPackage__Script_ClassShooter();
// End Cross Module References

// Begin Enum WeaponState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_WeaponState;
static UEnum* WeaponState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_WeaponState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_WeaponState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ClassShooter_WeaponState, (UObject*)Z_Construct_UPackage__Script_ClassShooter(), TEXT("WeaponState"));
	}
	return Z_Registration_Info_UEnum_WeaponState.OuterSingleton;
}
template<> CLASSSHOOTER_API UEnum* StaticEnum<WeaponState>()
{
	return WeaponState_StaticEnum();
}
struct Z_Construct_UEnum_ClassShooter_WeaponState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Equipped.Name", "WeaponState::Equipped" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "OutOfInventory.Name", "WeaponState::OutOfInventory" },
		{ "Stowed.Name", "WeaponState::Stowed" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "WeaponState::Equipped", (int64)WeaponState::Equipped },
		{ "WeaponState::Stowed", (int64)WeaponState::Stowed },
		{ "WeaponState::OutOfInventory", (int64)WeaponState::OutOfInventory },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ClassShooter_WeaponState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ClassShooter,
	nullptr,
	"WeaponState",
	"WeaponState",
	Z_Construct_UEnum_ClassShooter_WeaponState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ClassShooter_WeaponState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ClassShooter_WeaponState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ClassShooter_WeaponState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ClassShooter_WeaponState()
{
	if (!Z_Registration_Info_UEnum_WeaponState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_WeaponState.InnerSingleton, Z_Construct_UEnum_ClassShooter_WeaponState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_WeaponState.InnerSingleton;
}
// End Enum WeaponState

// Begin Class AWeaponBase Function AutoFire
struct Z_Construct_UFunction_AWeaponBase_AutoFire_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon Functions" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_AutoFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "AutoFire", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_AutoFire_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_AutoFire_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWeaponBase_AutoFire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_AutoFire_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execAutoFire)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AutoFire();
	P_NATIVE_END;
}
// End Class AWeaponBase Function AutoFire

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

// Begin Class AWeaponBase Function Multi_Fire
struct WeaponBase_eventMulti_Fire_Parms
{
	FHitResult hitResult;
};
static FName NAME_AWeaponBase_Multi_Fire = FName(TEXT("Multi_Fire"));
void AWeaponBase::Multi_Fire(FHitResult hitResult)
{
	WeaponBase_eventMulti_Fire_Parms Parms;
	Parms.hitResult=hitResult;
	ProcessEvent(FindFunctionChecked(NAME_AWeaponBase_Multi_Fire),&Parms);
}
struct Z_Construct_UFunction_AWeaponBase_Multi_Fire_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_hitResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWeaponBase_Multi_Fire_Statics::NewProp_hitResult = { "hitResult", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponBase_eventMulti_Fire_Parms, hitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponBase_Multi_Fire_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponBase_Multi_Fire_Statics::NewProp_hitResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_Multi_Fire_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_Multi_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "Multi_Fire", nullptr, nullptr, Z_Construct_UFunction_AWeaponBase_Multi_Fire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_Multi_Fire_Statics::PropPointers), sizeof(WeaponBase_eventMulti_Fire_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_Multi_Fire_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_Multi_Fire_Statics::Function_MetaDataParams) };
static_assert(sizeof(WeaponBase_eventMulti_Fire_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponBase_Multi_Fire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_Multi_Fire_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execMulti_Fire)
{
	P_GET_STRUCT(FHitResult,Z_Param_hitResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Multi_Fire_Validate(Z_Param_hitResult))
	{
		RPC_ValidateFailed(TEXT("Multi_Fire_Validate"));
		return;
	}
	P_THIS->Multi_Fire_Implementation(Z_Param_hitResult);
	P_NATIVE_END;
}
// End Class AWeaponBase Function Multi_Fire

// Begin Class AWeaponBase Function Multi_FireSoundSFX
static FName NAME_AWeaponBase_Multi_FireSoundSFX = FName(TEXT("Multi_FireSoundSFX"));
void AWeaponBase::Multi_FireSoundSFX()
{
	ProcessEvent(FindFunctionChecked(NAME_AWeaponBase_Multi_FireSoundSFX),NULL);
}
struct Z_Construct_UFunction_AWeaponBase_Multi_FireSoundSFX_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_Multi_FireSoundSFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "Multi_FireSoundSFX", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_Multi_FireSoundSFX_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_Multi_FireSoundSFX_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWeaponBase_Multi_FireSoundSFX()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_Multi_FireSoundSFX_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execMulti_FireSoundSFX)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Multi_FireSoundSFX_Validate())
	{
		RPC_ValidateFailed(TEXT("Multi_FireSoundSFX_Validate"));
		return;
	}
	P_THIS->Multi_FireSoundSFX_Implementation();
	P_NATIVE_END;
}
// End Class AWeaponBase Function Multi_FireSoundSFX

// Begin Class AWeaponBase Function Multi_MuzzleFlash
static FName NAME_AWeaponBase_Multi_MuzzleFlash = FName(TEXT("Multi_MuzzleFlash"));
void AWeaponBase::Multi_MuzzleFlash()
{
	ProcessEvent(FindFunctionChecked(NAME_AWeaponBase_Multi_MuzzleFlash),NULL);
}
struct Z_Construct_UFunction_AWeaponBase_Multi_MuzzleFlash_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_Multi_MuzzleFlash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "Multi_MuzzleFlash", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_Multi_MuzzleFlash_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_Multi_MuzzleFlash_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWeaponBase_Multi_MuzzleFlash()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_Multi_MuzzleFlash_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execMulti_MuzzleFlash)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Multi_MuzzleFlash_Validate())
	{
		RPC_ValidateFailed(TEXT("Multi_MuzzleFlash_Validate"));
		return;
	}
	P_THIS->Multi_MuzzleFlash_Implementation();
	P_NATIVE_END;
}
// End Class AWeaponBase Function Multi_MuzzleFlash

// Begin Class AWeaponBase Function Multi_ReloadSFX
static FName NAME_AWeaponBase_Multi_ReloadSFX = FName(TEXT("Multi_ReloadSFX"));
void AWeaponBase::Multi_ReloadSFX()
{
	ProcessEvent(FindFunctionChecked(NAME_AWeaponBase_Multi_ReloadSFX),NULL);
}
struct Z_Construct_UFunction_AWeaponBase_Multi_ReloadSFX_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_Multi_ReloadSFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "Multi_ReloadSFX", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_Multi_ReloadSFX_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_Multi_ReloadSFX_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWeaponBase_Multi_ReloadSFX()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_Multi_ReloadSFX_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execMulti_ReloadSFX)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Multi_ReloadSFX_Validate())
	{
		RPC_ValidateFailed(TEXT("Multi_ReloadSFX_Validate"));
		return;
	}
	P_THIS->Multi_ReloadSFX_Implementation();
	P_NATIVE_END;
}
// End Class AWeaponBase Function Multi_ReloadSFX

// Begin Class AWeaponBase Function OnRep_curAmmo
struct Z_Construct_UFunction_AWeaponBase_OnRep_curAmmo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_OnRep_curAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "OnRep_curAmmo", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_OnRep_curAmmo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_OnRep_curAmmo_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWeaponBase_OnRep_curAmmo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_OnRep_curAmmo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execOnRep_curAmmo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_curAmmo();
	P_NATIVE_END;
}
// End Class AWeaponBase Function OnRep_curAmmo

// Begin Class AWeaponBase Function OnRep_weaponState
struct Z_Construct_UFunction_AWeaponBase_OnRep_weaponState_Statics
{
	struct WeaponBase_eventOnRep_weaponState_Parms
	{
		WeaponState lastState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_lastState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_lastState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AWeaponBase_OnRep_weaponState_Statics::NewProp_lastState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AWeaponBase_OnRep_weaponState_Statics::NewProp_lastState = { "lastState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponBase_eventOnRep_weaponState_Parms, lastState), Z_Construct_UEnum_ClassShooter_WeaponState, METADATA_PARAMS(0, nullptr) }; // 3274410147
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponBase_OnRep_weaponState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponBase_OnRep_weaponState_Statics::NewProp_lastState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponBase_OnRep_weaponState_Statics::NewProp_lastState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_OnRep_weaponState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_OnRep_weaponState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "OnRep_weaponState", nullptr, nullptr, Z_Construct_UFunction_AWeaponBase_OnRep_weaponState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_OnRep_weaponState_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeaponBase_OnRep_weaponState_Statics::WeaponBase_eventOnRep_weaponState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_OnRep_weaponState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_OnRep_weaponState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWeaponBase_OnRep_weaponState_Statics::WeaponBase_eventOnRep_weaponState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponBase_OnRep_weaponState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_OnRep_weaponState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execOnRep_weaponState)
{
	P_GET_ENUM(WeaponState,Z_Param_lastState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_weaponState(WeaponState(Z_Param_lastState));
	P_NATIVE_END;
}
// End Class AWeaponBase Function OnRep_weaponState

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

// Begin Class AWeaponBase Function RestoreWeaponDefaults
struct Z_Construct_UFunction_AWeaponBase_RestoreWeaponDefaults_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon Functions" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_RestoreWeaponDefaults_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "RestoreWeaponDefaults", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_RestoreWeaponDefaults_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_RestoreWeaponDefaults_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWeaponBase_RestoreWeaponDefaults()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_RestoreWeaponDefaults_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execRestoreWeaponDefaults)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RestoreWeaponDefaults();
	P_NATIVE_END;
}
// End Class AWeaponBase Function RestoreWeaponDefaults

// Begin Class AWeaponBase Function Server_AutoFire
static FName NAME_AWeaponBase_Server_AutoFire = FName(TEXT("Server_AutoFire"));
void AWeaponBase::Server_AutoFire()
{
	ProcessEvent(FindFunctionChecked(NAME_AWeaponBase_Server_AutoFire),NULL);
}
struct Z_Construct_UFunction_AWeaponBase_Server_AutoFire_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_Server_AutoFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "Server_AutoFire", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_Server_AutoFire_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_Server_AutoFire_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWeaponBase_Server_AutoFire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_Server_AutoFire_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execServer_AutoFire)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_AutoFire_Validate())
	{
		RPC_ValidateFailed(TEXT("Server_AutoFire_Validate"));
		return;
	}
	P_THIS->Server_AutoFire_Implementation();
	P_NATIVE_END;
}
// End Class AWeaponBase Function Server_AutoFire

// Begin Class AWeaponBase Function Server_FinishReloading
static FName NAME_AWeaponBase_Server_FinishReloading = FName(TEXT("Server_FinishReloading"));
void AWeaponBase::Server_FinishReloading()
{
	ProcessEvent(FindFunctionChecked(NAME_AWeaponBase_Server_FinishReloading),NULL);
}
struct Z_Construct_UFunction_AWeaponBase_Server_FinishReloading_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_Server_FinishReloading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "Server_FinishReloading", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_Server_FinishReloading_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_Server_FinishReloading_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWeaponBase_Server_FinishReloading()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_Server_FinishReloading_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execServer_FinishReloading)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_FinishReloading_Validate())
	{
		RPC_ValidateFailed(TEXT("Server_FinishReloading_Validate"));
		return;
	}
	P_THIS->Server_FinishReloading_Implementation();
	P_NATIVE_END;
}
// End Class AWeaponBase Function Server_FinishReloading

// Begin Class AWeaponBase Function Server_Fire
static FName NAME_AWeaponBase_Server_Fire = FName(TEXT("Server_Fire"));
void AWeaponBase::Server_Fire()
{
	ProcessEvent(FindFunctionChecked(NAME_AWeaponBase_Server_Fire),NULL);
}
struct Z_Construct_UFunction_AWeaponBase_Server_Fire_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_Server_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "Server_Fire", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_Server_Fire_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_Server_Fire_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWeaponBase_Server_Fire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_Server_Fire_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execServer_Fire)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_Fire_Validate())
	{
		RPC_ValidateFailed(TEXT("Server_Fire_Validate"));
		return;
	}
	P_THIS->Server_Fire_Implementation();
	P_NATIVE_END;
}
// End Class AWeaponBase Function Server_Fire

// Begin Class AWeaponBase Function Server_Reload
static FName NAME_AWeaponBase_Server_Reload = FName(TEXT("Server_Reload"));
void AWeaponBase::Server_Reload()
{
	ProcessEvent(FindFunctionChecked(NAME_AWeaponBase_Server_Reload),NULL);
}
struct Z_Construct_UFunction_AWeaponBase_Server_Reload_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_Server_Reload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "Server_Reload", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_Server_Reload_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_Server_Reload_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWeaponBase_Server_Reload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_Server_Reload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execServer_Reload)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_Reload_Validate())
	{
		RPC_ValidateFailed(TEXT("Server_Reload_Validate"));
		return;
	}
	P_THIS->Server_Reload_Implementation();
	P_NATIVE_END;
}
// End Class AWeaponBase Function Server_Reload

// Begin Class AWeaponBase
void AWeaponBase::StaticRegisterNativesAWeaponBase()
{
	UClass* Class = AWeaponBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AutoFire", &AWeaponBase::execAutoFire },
		{ "Fire", &AWeaponBase::execFire },
		{ "Multi_Fire", &AWeaponBase::execMulti_Fire },
		{ "Multi_FireSoundSFX", &AWeaponBase::execMulti_FireSoundSFX },
		{ "Multi_MuzzleFlash", &AWeaponBase::execMulti_MuzzleFlash },
		{ "Multi_ReloadSFX", &AWeaponBase::execMulti_ReloadSFX },
		{ "OnRep_curAmmo", &AWeaponBase::execOnRep_curAmmo },
		{ "OnRep_weaponState", &AWeaponBase::execOnRep_weaponState },
		{ "Reload", &AWeaponBase::execReload },
		{ "RestoreWeaponDefaults", &AWeaponBase::execRestoreWeaponDefaults },
		{ "Server_AutoFire", &AWeaponBase::execServer_AutoFire },
		{ "Server_FinishReloading", &AWeaponBase::execServer_FinishReloading },
		{ "Server_Fire", &AWeaponBase::execServer_Fire },
		{ "Server_Reload", &AWeaponBase::execServer_Reload },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[] = {
		{ "Category", "Weapon Variables" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isAutomatic_MetaData[] = {
		{ "Category", "Weapon Variables" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isProjectile_MetaData[] = {
		{ "Category", "Weapon Variables" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isShield_MetaData[] = {
		{ "Category", "Weapon Variables" },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isFiring_MetaData[] = {
		{ "Category", "Weapon Variables" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_curBulletCone_MetaData[] = {
		{ "Category", "Weapon Variables" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_baseBulletCone_MetaData[] = {
		{ "Category", "Weapon Variables" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_recoilAmnt_MetaData[] = {
		{ "Category", "Weapon Variables" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_baseRecoilAmnt_MetaData[] = {
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_interactBox_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Capsule Component\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Capsule Component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_state_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_shotLocation_MetaData[] = {
		{ "Category", "Weapon Variables" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bulletImpactVFX_MetaData[] = {
		{ "Category", "Weapon Variables" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_curCamLoc_MetaData[] = {
		{ "Category", "Weapon Variables" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_curCamRot_MetaData[] = {
		{ "Category", "Weapon Variables" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_shield_MetaData[] = {
		{ "Category", "Weapon Variables" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_damage_MetaData[] = {
		{ "Category", "Weapon Variables" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isWeaponDrop_MetaData[] = {
		{ "Category", "Weapon Variables" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_weaponUnADSLocation_MetaData[] = {
		{ "Category", "Weapon Variables" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_weaponADSStandingLocation_MetaData[] = {
		{ "Category", "Weapon Variables" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_weaponADSCrouchedLocation_MetaData[] = {
		{ "Category", "Weapon Variables" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_weaponADSFOV_MetaData[] = {
		{ "Category", "Weapon Variables" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_muzzleFlashLocation_MetaData[] = {
		{ "Category", "Weapon Variables" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_muzzleFlashVFX_MetaData[] = {
		{ "Category", "Weapon Variables" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_weaponAtkSound_MetaData[] = {
		{ "Category", "Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//audio\n" },
#endif
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "audio" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_weaponReloadSound_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_weaponMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_fireAnim;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_reloadAnim;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_fireOffset;
	static const UECodeGen_Private::FNamePropertyParams NewProp_name;
	static void NewProp_isAutomatic_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isAutomatic;
	static void NewProp_isProjectile_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isProjectile;
	static void NewProp_isShield_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isShield;
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
	static void NewProp_isFiring_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isFiring;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_curBulletCone;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_baseBulletCone;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_recoilAmnt;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_baseRecoilAmnt;
	static const UECodeGen_Private::FStructPropertyParams NewProp_fireTimer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_reloadTimer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_interactBox;
	static const UECodeGen_Private::FBytePropertyParams NewProp_state_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_state;
	static const UECodeGen_Private::FStructPropertyParams NewProp_shotLocation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_bulletImpactVFX;
	static const UECodeGen_Private::FStructPropertyParams NewProp_curCamLoc;
	static const UECodeGen_Private::FStructPropertyParams NewProp_curCamRot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_shield;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_damage;
	static void NewProp_isWeaponDrop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isWeaponDrop;
	static const UECodeGen_Private::FStructPropertyParams NewProp_weaponUnADSLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_weaponADSStandingLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_weaponADSCrouchedLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_weaponADSFOV;
	static const UECodeGen_Private::FStructPropertyParams NewProp_muzzleFlashLocation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_muzzleFlashVFX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_weaponAtkSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_weaponReloadSound;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AWeaponBase_AutoFire, "AutoFire" }, // 2004454903
		{ &Z_Construct_UFunction_AWeaponBase_Fire, "Fire" }, // 581559785
		{ &Z_Construct_UFunction_AWeaponBase_Multi_Fire, "Multi_Fire" }, // 3265869574
		{ &Z_Construct_UFunction_AWeaponBase_Multi_FireSoundSFX, "Multi_FireSoundSFX" }, // 787300172
		{ &Z_Construct_UFunction_AWeaponBase_Multi_MuzzleFlash, "Multi_MuzzleFlash" }, // 1954485701
		{ &Z_Construct_UFunction_AWeaponBase_Multi_ReloadSFX, "Multi_ReloadSFX" }, // 3242556088
		{ &Z_Construct_UFunction_AWeaponBase_OnRep_curAmmo, "OnRep_curAmmo" }, // 915249934
		{ &Z_Construct_UFunction_AWeaponBase_OnRep_weaponState, "OnRep_weaponState" }, // 3973844332
		{ &Z_Construct_UFunction_AWeaponBase_Reload, "Reload" }, // 2657704823
		{ &Z_Construct_UFunction_AWeaponBase_RestoreWeaponDefaults, "RestoreWeaponDefaults" }, // 3905622946
		{ &Z_Construct_UFunction_AWeaponBase_Server_AutoFire, "Server_AutoFire" }, // 1562018849
		{ &Z_Construct_UFunction_AWeaponBase_Server_FinishReloading, "Server_FinishReloading" }, // 1061671283
		{ &Z_Construct_UFunction_AWeaponBase_Server_Fire, "Server_Fire" }, // 895863095
		{ &Z_Construct_UFunction_AWeaponBase_Server_Reload, "Server_Reload" }, // 1401435619
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeaponBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_weaponMesh = { "weaponMesh", nullptr, (EPropertyFlags)0x001000000008002d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, weaponMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_weaponMesh_MetaData), NewProp_weaponMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_fireAnim = { "fireAnim", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, fireAnim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_fireAnim_MetaData), NewProp_fireAnim_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_reloadAnim = { "reloadAnim", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, reloadAnim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_reloadAnim_MetaData), NewProp_reloadAnim_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_fireOffset = { "fireOffset", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, fireOffset), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_fireOffset_MetaData), NewProp_fireOffset_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_name_MetaData), NewProp_name_MetaData) };
void Z_Construct_UClass_AWeaponBase_Statics::NewProp_isAutomatic_SetBit(void* Obj)
{
	((AWeaponBase*)Obj)->isAutomatic = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_isAutomatic = { "isAutomatic", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AWeaponBase), &Z_Construct_UClass_AWeaponBase_Statics::NewProp_isAutomatic_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isAutomatic_MetaData), NewProp_isAutomatic_MetaData) };
void Z_Construct_UClass_AWeaponBase_Statics::NewProp_isProjectile_SetBit(void* Obj)
{
	((AWeaponBase*)Obj)->isProjectile = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_isProjectile = { "isProjectile", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AWeaponBase), &Z_Construct_UClass_AWeaponBase_Statics::NewProp_isProjectile_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isProjectile_MetaData), NewProp_isProjectile_MetaData) };
void Z_Construct_UClass_AWeaponBase_Statics::NewProp_isShield_SetBit(void* Obj)
{
	((AWeaponBase*)Obj)->isShield = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_isShield = { "isShield", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AWeaponBase), &Z_Construct_UClass_AWeaponBase_Statics::NewProp_isShield_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isShield_MetaData), NewProp_isShield_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_fireRate = { "fireRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, fireRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_fireRate_MetaData), NewProp_fireRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_shotTimer = { "shotTimer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, shotTimer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_shotTimer_MetaData), NewProp_shotTimer_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_reloadTime = { "reloadTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, reloadTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_reloadTime_MetaData), NewProp_reloadTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_range = { "range", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, range), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_range_MetaData), NewProp_range_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_curAmmo = { "curAmmo", "OnRep_curAmmo", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, curAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_curAmmo_MetaData), NewProp_curAmmo_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_maxAmmo = { "maxAmmo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, maxAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxAmmo_MetaData), NewProp_maxAmmo_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_ammoToRefill = { "ammoToRefill", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, ammoToRefill), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ammoToRefill_MetaData), NewProp_ammoToRefill_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_ammoReserves = { "ammoReserves", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, ammoReserves), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ammoReserves_MetaData), NewProp_ammoReserves_MetaData) };
void Z_Construct_UClass_AWeaponBase_Statics::NewProp_canFire_SetBit(void* Obj)
{
	((AWeaponBase*)Obj)->canFire = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_canFire = { "canFire", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AWeaponBase), &Z_Construct_UClass_AWeaponBase_Statics::NewProp_canFire_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_canFire_MetaData), NewProp_canFire_MetaData) };
void Z_Construct_UClass_AWeaponBase_Statics::NewProp_isReloading_SetBit(void* Obj)
{
	((AWeaponBase*)Obj)->isReloading = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_isReloading = { "isReloading", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AWeaponBase), &Z_Construct_UClass_AWeaponBase_Statics::NewProp_isReloading_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isReloading_MetaData), NewProp_isReloading_MetaData) };
void Z_Construct_UClass_AWeaponBase_Statics::NewProp_isFiring_SetBit(void* Obj)
{
	((AWeaponBase*)Obj)->isFiring = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_isFiring = { "isFiring", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AWeaponBase), &Z_Construct_UClass_AWeaponBase_Statics::NewProp_isFiring_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isFiring_MetaData), NewProp_isFiring_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_curBulletCone = { "curBulletCone", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, curBulletCone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_curBulletCone_MetaData), NewProp_curBulletCone_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_baseBulletCone = { "baseBulletCone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, baseBulletCone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_baseBulletCone_MetaData), NewProp_baseBulletCone_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_recoilAmnt = { "recoilAmnt", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, recoilAmnt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_recoilAmnt_MetaData), NewProp_recoilAmnt_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_baseRecoilAmnt = { "baseRecoilAmnt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, baseRecoilAmnt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_baseRecoilAmnt_MetaData), NewProp_baseRecoilAmnt_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_fireTimer = { "fireTimer", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, fireTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_fireTimer_MetaData), NewProp_fireTimer_MetaData) }; // 756291145
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_reloadTimer = { "reloadTimer", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, reloadTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_reloadTimer_MetaData), NewProp_reloadTimer_MetaData) }; // 756291145
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_interactBox = { "interactBox", nullptr, (EPropertyFlags)0x00100000000a003d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, interactBox), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_interactBox_MetaData), NewProp_interactBox_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_state_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_state = { "state", "OnRep_weaponState", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, state), Z_Construct_UEnum_ClassShooter_WeaponState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_state_MetaData), NewProp_state_MetaData) }; // 3274410147
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_shotLocation = { "shotLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, shotLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_shotLocation_MetaData), NewProp_shotLocation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_bulletImpactVFX = { "bulletImpactVFX", nullptr, (EPropertyFlags)0x0010000000000021, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, bulletImpactVFX), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bulletImpactVFX_MetaData), NewProp_bulletImpactVFX_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_curCamLoc = { "curCamLoc", nullptr, (EPropertyFlags)0x0010000000020035, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, curCamLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_curCamLoc_MetaData), NewProp_curCamLoc_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_curCamRot = { "curCamRot", nullptr, (EPropertyFlags)0x0010000000020035, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, curCamRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_curCamRot_MetaData), NewProp_curCamRot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_shield = { "shield", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, shield), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_shield_MetaData), NewProp_shield_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_damage = { "damage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, damage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_damage_MetaData), NewProp_damage_MetaData) };
void Z_Construct_UClass_AWeaponBase_Statics::NewProp_isWeaponDrop_SetBit(void* Obj)
{
	((AWeaponBase*)Obj)->isWeaponDrop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_isWeaponDrop = { "isWeaponDrop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AWeaponBase), &Z_Construct_UClass_AWeaponBase_Statics::NewProp_isWeaponDrop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isWeaponDrop_MetaData), NewProp_isWeaponDrop_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_weaponUnADSLocation = { "weaponUnADSLocation", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, weaponUnADSLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_weaponUnADSLocation_MetaData), NewProp_weaponUnADSLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_weaponADSStandingLocation = { "weaponADSStandingLocation", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, weaponADSStandingLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_weaponADSStandingLocation_MetaData), NewProp_weaponADSStandingLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_weaponADSCrouchedLocation = { "weaponADSCrouchedLocation", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, weaponADSCrouchedLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_weaponADSCrouchedLocation_MetaData), NewProp_weaponADSCrouchedLocation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_weaponADSFOV = { "weaponADSFOV", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, weaponADSFOV), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_weaponADSFOV_MetaData), NewProp_weaponADSFOV_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_muzzleFlashLocation = { "muzzleFlashLocation", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, muzzleFlashLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_muzzleFlashLocation_MetaData), NewProp_muzzleFlashLocation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_muzzleFlashVFX = { "muzzleFlashVFX", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, muzzleFlashVFX), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_muzzleFlashVFX_MetaData), NewProp_muzzleFlashVFX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_weaponAtkSound = { "weaponAtkSound", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, weaponAtkSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_weaponAtkSound_MetaData), NewProp_weaponAtkSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_weaponReloadSound = { "weaponReloadSound", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, weaponReloadSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_weaponReloadSound_MetaData), NewProp_weaponReloadSound_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeaponBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_weaponMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_fireAnim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_reloadAnim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_fireOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_isAutomatic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_isProjectile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_isShield,
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
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_isFiring,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_curBulletCone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_baseBulletCone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_recoilAmnt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_baseRecoilAmnt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_fireTimer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_reloadTimer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_interactBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_state_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_state,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_shotLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_bulletImpactVFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_curCamLoc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_curCamRot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_shield,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_isWeaponDrop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_weaponUnADSLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_weaponADSStandingLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_weaponADSCrouchedLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_weaponADSFOV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_muzzleFlashLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_muzzleFlashVFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_weaponAtkSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_weaponReloadSound,
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
void AWeaponBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_weaponMesh(TEXT("weaponMesh"));
	static const FName Name_range(TEXT("range"));
	static const FName Name_curAmmo(TEXT("curAmmo"));
	static const FName Name_ammoToRefill(TEXT("ammoToRefill"));
	static const FName Name_ammoReserves(TEXT("ammoReserves"));
	static const FName Name_canFire(TEXT("canFire"));
	static const FName Name_isReloading(TEXT("isReloading"));
	static const FName Name_isFiring(TEXT("isFiring"));
	static const FName Name_curBulletCone(TEXT("curBulletCone"));
	static const FName Name_recoilAmnt(TEXT("recoilAmnt"));
	static const FName Name_fireTimer(TEXT("fireTimer"));
	static const FName Name_reloadTimer(TEXT("reloadTimer"));
	static const FName Name_interactBox(TEXT("interactBox"));
	static const FName Name_state(TEXT("state"));
	static const FName Name_bulletImpactVFX(TEXT("bulletImpactVFX"));
	static const FName Name_curCamLoc(TEXT("curCamLoc"));
	static const FName Name_curCamRot(TEXT("curCamRot"));
	static const FName Name_weaponUnADSLocation(TEXT("weaponUnADSLocation"));
	static const FName Name_weaponADSStandingLocation(TEXT("weaponADSStandingLocation"));
	static const FName Name_weaponADSCrouchedLocation(TEXT("weaponADSCrouchedLocation"));
	static const FName Name_muzzleFlashLocation(TEXT("muzzleFlashLocation"));
	static const FName Name_muzzleFlashVFX(TEXT("muzzleFlashVFX"));
	static const FName Name_weaponAtkSound(TEXT("weaponAtkSound"));
	static const FName Name_weaponReloadSound(TEXT("weaponReloadSound"));
	const bool bIsValid = true
		&& Name_weaponMesh == ClassReps[(int32)ENetFields_Private::weaponMesh].Property->GetFName()
		&& Name_range == ClassReps[(int32)ENetFields_Private::range].Property->GetFName()
		&& Name_curAmmo == ClassReps[(int32)ENetFields_Private::curAmmo].Property->GetFName()
		&& Name_ammoToRefill == ClassReps[(int32)ENetFields_Private::ammoToRefill].Property->GetFName()
		&& Name_ammoReserves == ClassReps[(int32)ENetFields_Private::ammoReserves].Property->GetFName()
		&& Name_canFire == ClassReps[(int32)ENetFields_Private::canFire].Property->GetFName()
		&& Name_isReloading == ClassReps[(int32)ENetFields_Private::isReloading].Property->GetFName()
		&& Name_isFiring == ClassReps[(int32)ENetFields_Private::isFiring].Property->GetFName()
		&& Name_curBulletCone == ClassReps[(int32)ENetFields_Private::curBulletCone].Property->GetFName()
		&& Name_recoilAmnt == ClassReps[(int32)ENetFields_Private::recoilAmnt].Property->GetFName()
		&& Name_fireTimer == ClassReps[(int32)ENetFields_Private::fireTimer].Property->GetFName()
		&& Name_reloadTimer == ClassReps[(int32)ENetFields_Private::reloadTimer].Property->GetFName()
		&& Name_interactBox == ClassReps[(int32)ENetFields_Private::interactBox].Property->GetFName()
		&& Name_state == ClassReps[(int32)ENetFields_Private::state].Property->GetFName()
		&& Name_bulletImpactVFX == ClassReps[(int32)ENetFields_Private::bulletImpactVFX].Property->GetFName()
		&& Name_curCamLoc == ClassReps[(int32)ENetFields_Private::curCamLoc].Property->GetFName()
		&& Name_curCamRot == ClassReps[(int32)ENetFields_Private::curCamRot].Property->GetFName()
		&& Name_weaponUnADSLocation == ClassReps[(int32)ENetFields_Private::weaponUnADSLocation].Property->GetFName()
		&& Name_weaponADSStandingLocation == ClassReps[(int32)ENetFields_Private::weaponADSStandingLocation].Property->GetFName()
		&& Name_weaponADSCrouchedLocation == ClassReps[(int32)ENetFields_Private::weaponADSCrouchedLocation].Property->GetFName()
		&& Name_muzzleFlashLocation == ClassReps[(int32)ENetFields_Private::muzzleFlashLocation].Property->GetFName()
		&& Name_muzzleFlashVFX == ClassReps[(int32)ENetFields_Private::muzzleFlashVFX].Property->GetFName()
		&& Name_weaponAtkSound == ClassReps[(int32)ENetFields_Private::weaponAtkSound].Property->GetFName()
		&& Name_weaponReloadSound == ClassReps[(int32)ENetFields_Private::weaponReloadSound].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AWeaponBase"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWeaponBase);
AWeaponBase::~AWeaponBase() {}
// End Class AWeaponBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_WeaponBase_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ WeaponState_StaticEnum, TEXT("WeaponState"), &Z_Registration_Info_UEnum_WeaponState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3274410147U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWeaponBase, AWeaponBase::StaticClass, TEXT("AWeaponBase"), &Z_Registration_Info_UClass_AWeaponBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeaponBase), 4172207318U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_WeaponBase_h_699436797(TEXT("/Script/ClassShooter"),
	Z_CompiledInDeferFile_FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_WeaponBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_WeaponBase_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_WeaponBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_WeaponBase_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
