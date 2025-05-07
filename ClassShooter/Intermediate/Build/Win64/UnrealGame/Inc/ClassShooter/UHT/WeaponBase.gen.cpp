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
CLASSSHOOTER_API UEnum* Z_Construct_UEnum_ClassShooter_WeaponState();
CLASSSHOOTER_API UFunction* Z_Construct_UDelegateFunction_ClassShooter_RecoilDelegate__DelegateSignature();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
UPackage* Z_Construct_UPackage__Script_ClassShooter();
// End Cross Module References

// Begin Delegate FRecoilDelegate
struct Z_Construct_UDelegateFunction_ClassShooter_RecoilDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ClassShooter_RecoilDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ClassShooter, nullptr, "RecoilDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ClassShooter_RecoilDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ClassShooter_RecoilDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_ClassShooter_RecoilDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ClassShooter_RecoilDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FRecoilDelegate_DelegateWrapper(const FMulticastScriptDelegate& RecoilDelegate)
{
	RecoilDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FRecoilDelegate

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

// Begin Class AWeaponBase Function HandleAutoFire
struct Z_Construct_UFunction_AWeaponBase_HandleAutoFire_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon Functions" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_HandleAutoFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "HandleAutoFire", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_HandleAutoFire_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_HandleAutoFire_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWeaponBase_HandleAutoFire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_HandleAutoFire_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execHandleAutoFire)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleAutoFire();
	P_NATIVE_END;
}
// End Class AWeaponBase Function HandleAutoFire

// Begin Class AWeaponBase Function HandleFire
struct Z_Construct_UFunction_AWeaponBase_HandleFire_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon Functions" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_HandleFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "HandleFire", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_HandleFire_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_HandleFire_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWeaponBase_HandleFire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_HandleFire_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execHandleFire)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleFire();
	P_NATIVE_END;
}
// End Class AWeaponBase Function HandleFire

// Begin Class AWeaponBase Function HandleReload
struct Z_Construct_UFunction_AWeaponBase_HandleReload_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon Functions" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_HandleReload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "HandleReload", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_HandleReload_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_HandleReload_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWeaponBase_HandleReload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_HandleReload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execHandleReload)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleReload();
	P_NATIVE_END;
}
// End Class AWeaponBase Function HandleReload

// Begin Class AWeaponBase Function ServerAutoFire
static FName NAME_AWeaponBase_ServerAutoFire = FName(TEXT("ServerAutoFire"));
void AWeaponBase::ServerAutoFire()
{
	ProcessEvent(FindFunctionChecked(NAME_AWeaponBase_ServerAutoFire),NULL);
}
struct Z_Construct_UFunction_AWeaponBase_ServerAutoFire_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_ServerAutoFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "ServerAutoFire", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_ServerAutoFire_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_ServerAutoFire_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWeaponBase_ServerAutoFire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_ServerAutoFire_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execServerAutoFire)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerAutoFire_Implementation();
	P_NATIVE_END;
}
// End Class AWeaponBase Function ServerAutoFire

// Begin Class AWeaponBase Function ServerCanFireAgain
static FName NAME_AWeaponBase_ServerCanFireAgain = FName(TEXT("ServerCanFireAgain"));
void AWeaponBase::ServerCanFireAgain()
{
	ProcessEvent(FindFunctionChecked(NAME_AWeaponBase_ServerCanFireAgain),NULL);
}
struct Z_Construct_UFunction_AWeaponBase_ServerCanFireAgain_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_ServerCanFireAgain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "ServerCanFireAgain", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_ServerCanFireAgain_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_ServerCanFireAgain_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWeaponBase_ServerCanFireAgain()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_ServerCanFireAgain_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execServerCanFireAgain)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerCanFireAgain_Implementation();
	P_NATIVE_END;
}
// End Class AWeaponBase Function ServerCanFireAgain

// Begin Class AWeaponBase Function ServerFinishReloading
static FName NAME_AWeaponBase_ServerFinishReloading = FName(TEXT("ServerFinishReloading"));
void AWeaponBase::ServerFinishReloading()
{
	ProcessEvent(FindFunctionChecked(NAME_AWeaponBase_ServerFinishReloading),NULL);
}
struct Z_Construct_UFunction_AWeaponBase_ServerFinishReloading_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_ServerFinishReloading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "ServerFinishReloading", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_ServerFinishReloading_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_ServerFinishReloading_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWeaponBase_ServerFinishReloading()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_ServerFinishReloading_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execServerFinishReloading)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerFinishReloading_Implementation();
	P_NATIVE_END;
}
// End Class AWeaponBase Function ServerFinishReloading

// Begin Class AWeaponBase Function ServerFire
static FName NAME_AWeaponBase_ServerFire = FName(TEXT("ServerFire"));
void AWeaponBase::ServerFire()
{
	ProcessEvent(FindFunctionChecked(NAME_AWeaponBase_ServerFire),NULL);
}
struct Z_Construct_UFunction_AWeaponBase_ServerFire_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_ServerFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "ServerFire", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_ServerFire_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_ServerFire_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWeaponBase_ServerFire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_ServerFire_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execServerFire)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerFire_Implementation();
	P_NATIVE_END;
}
// End Class AWeaponBase Function ServerFire

// Begin Class AWeaponBase Function ServerReload
static FName NAME_AWeaponBase_ServerReload = FName(TEXT("ServerReload"));
void AWeaponBase::ServerReload()
{
	ProcessEvent(FindFunctionChecked(NAME_AWeaponBase_ServerReload),NULL);
}
struct Z_Construct_UFunction_AWeaponBase_ServerReload_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_ServerReload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "ServerReload", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_ServerReload_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_ServerReload_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWeaponBase_ServerReload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_ServerReload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execServerReload)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerReload_Implementation();
	P_NATIVE_END;
}
// End Class AWeaponBase Function ServerReload

// Begin Class AWeaponBase Function ServerSetUpWeapon
struct WeaponBase_eventServerSetUpWeapon_Parms
{
	AWeaponBase* weapon;
};
static FName NAME_AWeaponBase_ServerSetUpWeapon = FName(TEXT("ServerSetUpWeapon"));
void AWeaponBase::ServerSetUpWeapon(AWeaponBase* weapon)
{
	WeaponBase_eventServerSetUpWeapon_Parms Parms;
	Parms.weapon=weapon;
	ProcessEvent(FindFunctionChecked(NAME_AWeaponBase_ServerSetUpWeapon),&Parms);
}
struct Z_Construct_UFunction_AWeaponBase_ServerSetUpWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_weapon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponBase_ServerSetUpWeapon_Statics::NewProp_weapon = { "weapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponBase_eventServerSetUpWeapon_Parms, weapon), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponBase_ServerSetUpWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponBase_ServerSetUpWeapon_Statics::NewProp_weapon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_ServerSetUpWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_ServerSetUpWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "ServerSetUpWeapon", nullptr, nullptr, Z_Construct_UFunction_AWeaponBase_ServerSetUpWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_ServerSetUpWeapon_Statics::PropPointers), sizeof(WeaponBase_eventServerSetUpWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_ServerSetUpWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_ServerSetUpWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(WeaponBase_eventServerSetUpWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponBase_ServerSetUpWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_ServerSetUpWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execServerSetUpWeapon)
{
	P_GET_OBJECT(AWeaponBase,Z_Param_weapon);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerSetUpWeapon_Implementation(Z_Param_weapon);
	P_NATIVE_END;
}
// End Class AWeaponBase Function ServerSetUpWeapon

// Begin Class AWeaponBase
void AWeaponBase::StaticRegisterNativesAWeaponBase()
{
	UClass* Class = AWeaponBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleAutoFire", &AWeaponBase::execHandleAutoFire },
		{ "HandleFire", &AWeaponBase::execHandleFire },
		{ "HandleReload", &AWeaponBase::execHandleReload },
		{ "ServerAutoFire", &AWeaponBase::execServerAutoFire },
		{ "ServerCanFireAgain", &AWeaponBase::execServerCanFireAgain },
		{ "ServerFinishReloading", &AWeaponBase::execServerFinishReloading },
		{ "ServerFire", &AWeaponBase::execServerFire },
		{ "ServerReload", &AWeaponBase::execServerReload },
		{ "ServerSetUpWeapon", &AWeaponBase::execServerSetUpWeapon },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_curBulletCone_MetaData[] = {
		{ "Category", "Weapon Variables" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_baseBulletCone_MetaData[] = {
		{ "Category", "Weapon Variables" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_minVertRecoilAmnt_MetaData[] = {
		{ "Category", "Weapon Variables" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maxVertRecoilAmnt_MetaData[] = {
		{ "Category", "Weapon Variables" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_minHorRecoilAmnt_MetaData[] = {
		{ "Category", "Weapon Variables" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maxHorRecoilAmnt_MetaData[] = {
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_recoilDel_MetaData[] = {
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_shield_MetaData[] = {
		{ "Category", "Weapon Variables" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_damage_MetaData[] = {
		{ "Category", "Weapon Variables" },
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
	static const UECodeGen_Private::FFloatPropertyParams NewProp_curBulletCone;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_baseBulletCone;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_minVertRecoilAmnt;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_maxVertRecoilAmnt;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_minHorRecoilAmnt;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_maxHorRecoilAmnt;
	static const UECodeGen_Private::FStructPropertyParams NewProp_fireTimer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_reloadTimer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_interactBox;
	static const UECodeGen_Private::FBytePropertyParams NewProp_state_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_state;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_recoilDel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_shotLocation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_bulletImpactVFX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_shield;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_damage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AWeaponBase_HandleAutoFire, "HandleAutoFire" }, // 2772425705
		{ &Z_Construct_UFunction_AWeaponBase_HandleFire, "HandleFire" }, // 2376757784
		{ &Z_Construct_UFunction_AWeaponBase_HandleReload, "HandleReload" }, // 2964189693
		{ &Z_Construct_UFunction_AWeaponBase_ServerAutoFire, "ServerAutoFire" }, // 517650090
		{ &Z_Construct_UFunction_AWeaponBase_ServerCanFireAgain, "ServerCanFireAgain" }, // 2204993516
		{ &Z_Construct_UFunction_AWeaponBase_ServerFinishReloading, "ServerFinishReloading" }, // 1687155394
		{ &Z_Construct_UFunction_AWeaponBase_ServerFire, "ServerFire" }, // 3658942569
		{ &Z_Construct_UFunction_AWeaponBase_ServerReload, "ServerReload" }, // 1279903603
		{ &Z_Construct_UFunction_AWeaponBase_ServerSetUpWeapon, "ServerSetUpWeapon" }, // 659319298
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
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_name_MetaData), NewProp_name_MetaData) };
void Z_Construct_UClass_AWeaponBase_Statics::NewProp_isAutomatic_SetBit(void* Obj)
{
	((AWeaponBase*)Obj)->isAutomatic = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_isAutomatic = { "isAutomatic", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AWeaponBase), &Z_Construct_UClass_AWeaponBase_Statics::NewProp_isAutomatic_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isAutomatic_MetaData), NewProp_isAutomatic_MetaData) };
void Z_Construct_UClass_AWeaponBase_Statics::NewProp_isShield_SetBit(void* Obj)
{
	((AWeaponBase*)Obj)->isShield = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_isShield = { "isShield", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AWeaponBase), &Z_Construct_UClass_AWeaponBase_Statics::NewProp_isShield_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isShield_MetaData), NewProp_isShield_MetaData) };
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_curBulletCone = { "curBulletCone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, curBulletCone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_curBulletCone_MetaData), NewProp_curBulletCone_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_baseBulletCone = { "baseBulletCone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, baseBulletCone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_baseBulletCone_MetaData), NewProp_baseBulletCone_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_minVertRecoilAmnt = { "minVertRecoilAmnt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, minVertRecoilAmnt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_minVertRecoilAmnt_MetaData), NewProp_minVertRecoilAmnt_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_maxVertRecoilAmnt = { "maxVertRecoilAmnt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, maxVertRecoilAmnt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxVertRecoilAmnt_MetaData), NewProp_maxVertRecoilAmnt_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_minHorRecoilAmnt = { "minHorRecoilAmnt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, minHorRecoilAmnt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_minHorRecoilAmnt_MetaData), NewProp_minHorRecoilAmnt_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_maxHorRecoilAmnt = { "maxHorRecoilAmnt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, maxHorRecoilAmnt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxHorRecoilAmnt_MetaData), NewProp_maxHorRecoilAmnt_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_fireTimer = { "fireTimer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, fireTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_fireTimer_MetaData), NewProp_fireTimer_MetaData) }; // 756291145
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_reloadTimer = { "reloadTimer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, reloadTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_reloadTimer_MetaData), NewProp_reloadTimer_MetaData) }; // 756291145
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_interactBox = { "interactBox", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, interactBox), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_interactBox_MetaData), NewProp_interactBox_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_state_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, state), Z_Construct_UEnum_ClassShooter_WeaponState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_state_MetaData), NewProp_state_MetaData) }; // 3274410147
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_recoilDel = { "recoilDel", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, recoilDel), Z_Construct_UDelegateFunction_ClassShooter_RecoilDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_recoilDel_MetaData), NewProp_recoilDel_MetaData) }; // 1031390445
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_shotLocation = { "shotLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, shotLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_shotLocation_MetaData), NewProp_shotLocation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_bulletImpactVFX = { "bulletImpactVFX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, bulletImpactVFX), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bulletImpactVFX_MetaData), NewProp_bulletImpactVFX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_shield = { "shield", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, shield), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_shield_MetaData), NewProp_shield_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_damage = { "damage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, damage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_damage_MetaData), NewProp_damage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeaponBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_weaponMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_fireAnim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_reloadAnim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_fireOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_isAutomatic,
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
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_curBulletCone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_baseBulletCone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_minVertRecoilAmnt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_maxVertRecoilAmnt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_minHorRecoilAmnt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_maxHorRecoilAmnt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_fireTimer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_reloadTimer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_interactBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_state_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_state,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_recoilDel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_shotLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_bulletImpactVFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_shield,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_damage,
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
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ WeaponState_StaticEnum, TEXT("WeaponState"), &Z_Registration_Info_UEnum_WeaponState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3274410147U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWeaponBase, AWeaponBase::StaticClass, TEXT("AWeaponBase"), &Z_Registration_Info_UClass_AWeaponBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeaponBase), 2944413168U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_WeaponBase_h_229933182(TEXT("/Script/ClassShooter"),
	Z_CompiledInDeferFile_FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_WeaponBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_WeaponBase_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_WeaponBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_WeaponBase_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
