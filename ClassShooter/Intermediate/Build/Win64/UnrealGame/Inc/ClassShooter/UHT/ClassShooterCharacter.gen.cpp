// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClassShooter/ClassShooterCharacter.h"
#include "EnhancedInput/Public/InputActionValue.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClassShooterCharacter() {}

// Begin Cross Module References
CLASSSHOOTER_API UClass* Z_Construct_UClass_AClassShooterCharacter();
CLASSSHOOTER_API UClass* Z_Construct_UClass_AClassShooterCharacter_NoRegister();
CLASSSHOOTER_API UClass* Z_Construct_UClass_AWeaponBase_NoRegister();
CLASSSHOOTER_API UClass* Z_Construct_UClass_UDamageable_NoRegister();
CLASSSHOOTER_API UEnum* Z_Construct_UEnum_ClassShooter_PlayerGameState();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_ClassShooter();
// End Cross Module References

// Begin Enum PlayerGameState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_PlayerGameState;
static UEnum* PlayerGameState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_PlayerGameState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_PlayerGameState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ClassShooter_PlayerGameState, (UObject*)Z_Construct_UPackage__Script_ClassShooter(), TEXT("PlayerGameState"));
	}
	return Z_Registration_Info_UEnum_PlayerGameState.OuterSingleton;
}
template<> CLASSSHOOTER_API UEnum* StaticEnum<PlayerGameState>()
{
	return PlayerGameState_StaticEnum();
}
struct Z_Construct_UEnum_ClassShooter_PlayerGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Ability1.Name", "PlayerGameState::Ability1" },
		{ "Ability2.Name", "PlayerGameState::Ability2" },
		{ "BlueprintType", "true" },
		{ "Crouching.Name", "PlayerGameState::Crouching" },
		{ "Dashing.Name", "PlayerGameState::Dashing" },
		{ "Diving.Name", "PlayerGameState::Diving" },
		{ "Dying.Name", "PlayerGameState::Dying" },
		{ "Grappling.Name", "PlayerGameState::Grappling" },
		{ "Jumping.Name", "PlayerGameState::Jumping" },
		{ "Meleeing.Name", "PlayerGameState::Meleeing" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
		{ "ShieldBashing.Name", "PlayerGameState::ShieldBashing" },
		{ "Sliding.Name", "PlayerGameState::Sliding" },
		{ "Sprinting.Name", "PlayerGameState::Sprinting" },
		{ "Ultimate.Name", "PlayerGameState::Ultimate" },
		{ "Walking.Name", "PlayerGameState::Walking" },
		{ "Wallrunning.Name", "PlayerGameState::Wallrunning" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "PlayerGameState::Walking", (int64)PlayerGameState::Walking },
		{ "PlayerGameState::Sprinting", (int64)PlayerGameState::Sprinting },
		{ "PlayerGameState::Sliding", (int64)PlayerGameState::Sliding },
		{ "PlayerGameState::Jumping", (int64)PlayerGameState::Jumping },
		{ "PlayerGameState::ShieldBashing", (int64)PlayerGameState::ShieldBashing },
		{ "PlayerGameState::Grappling", (int64)PlayerGameState::Grappling },
		{ "PlayerGameState::Dashing", (int64)PlayerGameState::Dashing },
		{ "PlayerGameState::Diving", (int64)PlayerGameState::Diving },
		{ "PlayerGameState::Wallrunning", (int64)PlayerGameState::Wallrunning },
		{ "PlayerGameState::Crouching", (int64)PlayerGameState::Crouching },
		{ "PlayerGameState::Meleeing", (int64)PlayerGameState::Meleeing },
		{ "PlayerGameState::Ability1", (int64)PlayerGameState::Ability1 },
		{ "PlayerGameState::Ability2", (int64)PlayerGameState::Ability2 },
		{ "PlayerGameState::Ultimate", (int64)PlayerGameState::Ultimate },
		{ "PlayerGameState::Dying", (int64)PlayerGameState::Dying },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ClassShooter_PlayerGameState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ClassShooter,
	nullptr,
	"PlayerGameState",
	"PlayerGameState",
	Z_Construct_UEnum_ClassShooter_PlayerGameState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ClassShooter_PlayerGameState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ClassShooter_PlayerGameState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ClassShooter_PlayerGameState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ClassShooter_PlayerGameState()
{
	if (!Z_Registration_Info_UEnum_PlayerGameState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_PlayerGameState.InnerSingleton, Z_Construct_UEnum_ClassShooter_PlayerGameState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_PlayerGameState.InnerSingleton;
}
// End Enum PlayerGameState

// Begin Class AClassShooterCharacter Function ADSCurWeapon
struct Z_Construct_UFunction_AClassShooterCharacter_ADSCurWeapon_Statics
{
	struct ClassShooterCharacter_eventADSCurWeapon_Parms
	{
		AWeaponBase* weapon;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon Functions" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_weapon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AClassShooterCharacter_ADSCurWeapon_Statics::NewProp_weapon = { "weapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClassShooterCharacter_eventADSCurWeapon_Parms, weapon), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AClassShooterCharacter_ADSCurWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AClassShooterCharacter_ADSCurWeapon_Statics::NewProp_weapon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_ADSCurWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_ADSCurWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "ADSCurWeapon", nullptr, nullptr, Z_Construct_UFunction_AClassShooterCharacter_ADSCurWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_ADSCurWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_AClassShooterCharacter_ADSCurWeapon_Statics::ClassShooterCharacter_eventADSCurWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_ADSCurWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_ADSCurWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AClassShooterCharacter_ADSCurWeapon_Statics::ClassShooterCharacter_eventADSCurWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AClassShooterCharacter_ADSCurWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_ADSCurWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execADSCurWeapon)
{
	P_GET_OBJECT(AWeaponBase,Z_Param_weapon);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ADSCurWeapon(Z_Param_weapon);
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function ADSCurWeapon

// Begin Class AClassShooterCharacter Function EquipWeapon
struct Z_Construct_UFunction_AClassShooterCharacter_EquipWeapon_Statics
{
	struct ClassShooterCharacter_eventEquipWeapon_Parms
	{
		AWeaponBase* weapon;
		bool shouldCreateNewWeaponObj;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Picking up and equipping weapons\n" },
#endif
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Picking up and equipping weapons" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_weapon;
	static void NewProp_shouldCreateNewWeaponObj_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_shouldCreateNewWeaponObj;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AClassShooterCharacter_EquipWeapon_Statics::NewProp_weapon = { "weapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClassShooterCharacter_eventEquipWeapon_Parms, weapon), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AClassShooterCharacter_EquipWeapon_Statics::NewProp_shouldCreateNewWeaponObj_SetBit(void* Obj)
{
	((ClassShooterCharacter_eventEquipWeapon_Parms*)Obj)->shouldCreateNewWeaponObj = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AClassShooterCharacter_EquipWeapon_Statics::NewProp_shouldCreateNewWeaponObj = { "shouldCreateNewWeaponObj", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ClassShooterCharacter_eventEquipWeapon_Parms), &Z_Construct_UFunction_AClassShooterCharacter_EquipWeapon_Statics::NewProp_shouldCreateNewWeaponObj_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AClassShooterCharacter_EquipWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AClassShooterCharacter_EquipWeapon_Statics::NewProp_weapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AClassShooterCharacter_EquipWeapon_Statics::NewProp_shouldCreateNewWeaponObj,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_EquipWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_EquipWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "EquipWeapon", nullptr, nullptr, Z_Construct_UFunction_AClassShooterCharacter_EquipWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_EquipWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_AClassShooterCharacter_EquipWeapon_Statics::ClassShooterCharacter_eventEquipWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_EquipWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_EquipWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AClassShooterCharacter_EquipWeapon_Statics::ClassShooterCharacter_eventEquipWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AClassShooterCharacter_EquipWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_EquipWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execEquipWeapon)
{
	P_GET_OBJECT(AWeaponBase,Z_Param_weapon);
	P_GET_UBOOL(Z_Param_shouldCreateNewWeaponObj);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EquipWeapon(Z_Param_weapon,Z_Param_shouldCreateNewWeaponObj);
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function EquipWeapon

// Begin Class AClassShooterCharacter Function Multi_Death
static FName NAME_AClassShooterCharacter_Multi_Death = FName(TEXT("Multi_Death"));
void AClassShooterCharacter::Multi_Death()
{
	ProcessEvent(FindFunctionChecked(NAME_AClassShooterCharacter_Multi_Death),NULL);
}
struct Z_Construct_UFunction_AClassShooterCharacter_Multi_Death_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_Multi_Death_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "Multi_Death", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80084CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_Multi_Death_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_Multi_Death_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AClassShooterCharacter_Multi_Death()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_Multi_Death_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execMulti_Death)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Multi_Death_Validate())
	{
		RPC_ValidateFailed(TEXT("Multi_Death_Validate"));
		return;
	}
	P_THIS->Multi_Death_Implementation();
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function Multi_Death

// Begin Class AClassShooterCharacter Function OnRep_curWeapon
struct Z_Construct_UFunction_AClassShooterCharacter_OnRep_curWeapon_Statics
{
	struct ClassShooterCharacter_eventOnRep_curWeapon_Parms
	{
		AWeaponBase* weapon;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_weapon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AClassShooterCharacter_OnRep_curWeapon_Statics::NewProp_weapon = { "weapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClassShooterCharacter_eventOnRep_curWeapon_Parms, weapon), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AClassShooterCharacter_OnRep_curWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AClassShooterCharacter_OnRep_curWeapon_Statics::NewProp_weapon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_OnRep_curWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_OnRep_curWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "OnRep_curWeapon", nullptr, nullptr, Z_Construct_UFunction_AClassShooterCharacter_OnRep_curWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_OnRep_curWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_AClassShooterCharacter_OnRep_curWeapon_Statics::ClassShooterCharacter_eventOnRep_curWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_OnRep_curWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_OnRep_curWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AClassShooterCharacter_OnRep_curWeapon_Statics::ClassShooterCharacter_eventOnRep_curWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AClassShooterCharacter_OnRep_curWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_OnRep_curWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execOnRep_curWeapon)
{
	P_GET_OBJECT(AWeaponBase,Z_Param_weapon);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_curWeapon(Z_Param_weapon);
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function OnRep_curWeapon

// Begin Class AClassShooterCharacter Function OnRep_deathTriggered
struct Z_Construct_UFunction_AClassShooterCharacter_OnRep_deathTriggered_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_OnRep_deathTriggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "OnRep_deathTriggered", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_OnRep_deathTriggered_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_OnRep_deathTriggered_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AClassShooterCharacter_OnRep_deathTriggered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_OnRep_deathTriggered_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execOnRep_deathTriggered)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_deathTriggered();
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function OnRep_deathTriggered

// Begin Class AClassShooterCharacter Function OnRep_targetLocation
struct Z_Construct_UFunction_AClassShooterCharacter_OnRep_targetLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_OnRep_targetLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "OnRep_targetLocation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_OnRep_targetLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_OnRep_targetLocation_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AClassShooterCharacter_OnRep_targetLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_OnRep_targetLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execOnRep_targetLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_targetLocation();
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function OnRep_targetLocation

// Begin Class AClassShooterCharacter Function OnRep_weaponArray
struct Z_Construct_UFunction_AClassShooterCharacter_OnRep_weaponArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_OnRep_weaponArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "OnRep_weaponArray", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_OnRep_weaponArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_OnRep_weaponArray_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AClassShooterCharacter_OnRep_weaponArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_OnRep_weaponArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execOnRep_weaponArray)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_weaponArray();
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function OnRep_weaponArray

// Begin Class AClassShooterCharacter Function ProceduralRecoil
struct Z_Construct_UFunction_AClassShooterCharacter_ProceduralRecoil_Statics
{
	struct ClassShooterCharacter_eventProceduralRecoil_Parms
	{
		float multiplier;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon Functions" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_multiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AClassShooterCharacter_ProceduralRecoil_Statics::NewProp_multiplier = { "multiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClassShooterCharacter_eventProceduralRecoil_Parms, multiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AClassShooterCharacter_ProceduralRecoil_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AClassShooterCharacter_ProceduralRecoil_Statics::NewProp_multiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_ProceduralRecoil_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_ProceduralRecoil_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "ProceduralRecoil", nullptr, nullptr, Z_Construct_UFunction_AClassShooterCharacter_ProceduralRecoil_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_ProceduralRecoil_Statics::PropPointers), sizeof(Z_Construct_UFunction_AClassShooterCharacter_ProceduralRecoil_Statics::ClassShooterCharacter_eventProceduralRecoil_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_ProceduralRecoil_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_ProceduralRecoil_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AClassShooterCharacter_ProceduralRecoil_Statics::ClassShooterCharacter_eventProceduralRecoil_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AClassShooterCharacter_ProceduralRecoil()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_ProceduralRecoil_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execProceduralRecoil)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_multiplier);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ProceduralRecoil(Z_Param_multiplier);
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function ProceduralRecoil

// Begin Class AClassShooterCharacter Function RestoreCurWeapons
struct Z_Construct_UFunction_AClassShooterCharacter_RestoreCurWeapons_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon Functions" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_RestoreCurWeapons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "RestoreCurWeapons", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_RestoreCurWeapons_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_RestoreCurWeapons_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AClassShooterCharacter_RestoreCurWeapons()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_RestoreCurWeapons_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execRestoreCurWeapons)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RestoreCurWeapons();
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function RestoreCurWeapons

// Begin Class AClassShooterCharacter Function Server_ADS
static FName NAME_AClassShooterCharacter_Server_ADS = FName(TEXT("Server_ADS"));
void AClassShooterCharacter::Server_ADS()
{
	ProcessEvent(FindFunctionChecked(NAME_AClassShooterCharacter_Server_ADS),NULL);
}
struct Z_Construct_UFunction_AClassShooterCharacter_Server_ADS_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_Server_ADS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "Server_ADS", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_Server_ADS_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_Server_ADS_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AClassShooterCharacter_Server_ADS()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_Server_ADS_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execServer_ADS)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_ADS_Validate())
	{
		RPC_ValidateFailed(TEXT("Server_ADS_Validate"));
		return;
	}
	P_THIS->Server_ADS_Implementation();
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function Server_ADS

// Begin Class AClassShooterCharacter Function Server_Crouch
static FName NAME_AClassShooterCharacter_Server_Crouch = FName(TEXT("Server_Crouch"));
void AClassShooterCharacter::Server_Crouch()
{
	ProcessEvent(FindFunctionChecked(NAME_AClassShooterCharacter_Server_Crouch),NULL);
}
struct Z_Construct_UFunction_AClassShooterCharacter_Server_Crouch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_Server_Crouch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "Server_Crouch", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_Server_Crouch_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_Server_Crouch_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AClassShooterCharacter_Server_Crouch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_Server_Crouch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execServer_Crouch)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_Crouch_Validate())
	{
		RPC_ValidateFailed(TEXT("Server_Crouch_Validate"));
		return;
	}
	P_THIS->Server_Crouch_Implementation();
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function Server_Crouch

// Begin Class AClassShooterCharacter Function Server_EquipWeapon
struct ClassShooterCharacter_eventServer_EquipWeapon_Parms
{
	AWeaponBase* weapon;
	bool shouldCreateNewWeaponObj;
};
static FName NAME_AClassShooterCharacter_Server_EquipWeapon = FName(TEXT("Server_EquipWeapon"));
void AClassShooterCharacter::Server_EquipWeapon(AWeaponBase* weapon, bool shouldCreateNewWeaponObj)
{
	ClassShooterCharacter_eventServer_EquipWeapon_Parms Parms;
	Parms.weapon=weapon;
	Parms.shouldCreateNewWeaponObj=shouldCreateNewWeaponObj ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_AClassShooterCharacter_Server_EquipWeapon),&Parms);
}
struct Z_Construct_UFunction_AClassShooterCharacter_Server_EquipWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_weapon;
	static void NewProp_shouldCreateNewWeaponObj_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_shouldCreateNewWeaponObj;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AClassShooterCharacter_Server_EquipWeapon_Statics::NewProp_weapon = { "weapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClassShooterCharacter_eventServer_EquipWeapon_Parms, weapon), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AClassShooterCharacter_Server_EquipWeapon_Statics::NewProp_shouldCreateNewWeaponObj_SetBit(void* Obj)
{
	((ClassShooterCharacter_eventServer_EquipWeapon_Parms*)Obj)->shouldCreateNewWeaponObj = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AClassShooterCharacter_Server_EquipWeapon_Statics::NewProp_shouldCreateNewWeaponObj = { "shouldCreateNewWeaponObj", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ClassShooterCharacter_eventServer_EquipWeapon_Parms), &Z_Construct_UFunction_AClassShooterCharacter_Server_EquipWeapon_Statics::NewProp_shouldCreateNewWeaponObj_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AClassShooterCharacter_Server_EquipWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AClassShooterCharacter_Server_EquipWeapon_Statics::NewProp_weapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AClassShooterCharacter_Server_EquipWeapon_Statics::NewProp_shouldCreateNewWeaponObj,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_Server_EquipWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_Server_EquipWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "Server_EquipWeapon", nullptr, nullptr, Z_Construct_UFunction_AClassShooterCharacter_Server_EquipWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_Server_EquipWeapon_Statics::PropPointers), sizeof(ClassShooterCharacter_eventServer_EquipWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_Server_EquipWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_Server_EquipWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(ClassShooterCharacter_eventServer_EquipWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AClassShooterCharacter_Server_EquipWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_Server_EquipWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execServer_EquipWeapon)
{
	P_GET_OBJECT(AWeaponBase,Z_Param_weapon);
	P_GET_UBOOL(Z_Param_shouldCreateNewWeaponObj);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_EquipWeapon_Validate(Z_Param_weapon,Z_Param_shouldCreateNewWeaponObj))
	{
		RPC_ValidateFailed(TEXT("Server_EquipWeapon_Validate"));
		return;
	}
	P_THIS->Server_EquipWeapon_Implementation(Z_Param_weapon,Z_Param_shouldCreateNewWeaponObj);
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function Server_EquipWeapon

// Begin Class AClassShooterCharacter Function Server_Jump
static FName NAME_AClassShooterCharacter_Server_Jump = FName(TEXT("Server_Jump"));
void AClassShooterCharacter::Server_Jump()
{
	ProcessEvent(FindFunctionChecked(NAME_AClassShooterCharacter_Server_Jump),NULL);
}
struct Z_Construct_UFunction_AClassShooterCharacter_Server_Jump_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//override Jump\n" },
#endif
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "override Jump" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_Server_Jump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "Server_Jump", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_Server_Jump_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_Server_Jump_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AClassShooterCharacter_Server_Jump()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_Server_Jump_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execServer_Jump)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_Jump_Validate())
	{
		RPC_ValidateFailed(TEXT("Server_Jump_Validate"));
		return;
	}
	P_THIS->Server_Jump_Implementation();
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function Server_Jump

// Begin Class AClassShooterCharacter Function Server_Melee
static FName NAME_AClassShooterCharacter_Server_Melee = FName(TEXT("Server_Melee"));
void AClassShooterCharacter::Server_Melee()
{
	ProcessEvent(FindFunctionChecked(NAME_AClassShooterCharacter_Server_Melee),NULL);
}
struct Z_Construct_UFunction_AClassShooterCharacter_Server_Melee_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_Server_Melee_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "Server_Melee", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_Server_Melee_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_Server_Melee_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AClassShooterCharacter_Server_Melee()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_Server_Melee_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execServer_Melee)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_Melee_Validate())
	{
		RPC_ValidateFailed(TEXT("Server_Melee_Validate"));
		return;
	}
	P_THIS->Server_Melee_Implementation();
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function Server_Melee

// Begin Class AClassShooterCharacter Function Server_Reload
static FName NAME_AClassShooterCharacter_Server_Reload = FName(TEXT("Server_Reload"));
void AClassShooterCharacter::Server_Reload()
{
	ProcessEvent(FindFunctionChecked(NAME_AClassShooterCharacter_Server_Reload),NULL);
}
struct Z_Construct_UFunction_AClassShooterCharacter_Server_Reload_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_Server_Reload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "Server_Reload", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_Server_Reload_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_Server_Reload_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AClassShooterCharacter_Server_Reload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_Server_Reload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execServer_Reload)
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
// End Class AClassShooterCharacter Function Server_Reload

// Begin Class AClassShooterCharacter Function Server_ResetMovement
static FName NAME_AClassShooterCharacter_Server_ResetMovement = FName(TEXT("Server_ResetMovement"));
void AClassShooterCharacter::Server_ResetMovement()
{
	ProcessEvent(FindFunctionChecked(NAME_AClassShooterCharacter_Server_ResetMovement),NULL);
}
struct Z_Construct_UFunction_AClassShooterCharacter_Server_ResetMovement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_Server_ResetMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "Server_ResetMovement", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_Server_ResetMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_Server_ResetMovement_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AClassShooterCharacter_Server_ResetMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_Server_ResetMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execServer_ResetMovement)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_ResetMovement_Validate())
	{
		RPC_ValidateFailed(TEXT("Server_ResetMovement_Validate"));
		return;
	}
	P_THIS->Server_ResetMovement_Implementation();
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function Server_ResetMovement

// Begin Class AClassShooterCharacter Function Server_RestoreCurWeapons
static FName NAME_AClassShooterCharacter_Server_RestoreCurWeapons = FName(TEXT("Server_RestoreCurWeapons"));
void AClassShooterCharacter::Server_RestoreCurWeapons()
{
	ProcessEvent(FindFunctionChecked(NAME_AClassShooterCharacter_Server_RestoreCurWeapons),NULL);
}
struct Z_Construct_UFunction_AClassShooterCharacter_Server_RestoreCurWeapons_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_Server_RestoreCurWeapons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "Server_RestoreCurWeapons", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_Server_RestoreCurWeapons_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_Server_RestoreCurWeapons_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AClassShooterCharacter_Server_RestoreCurWeapons()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_Server_RestoreCurWeapons_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execServer_RestoreCurWeapons)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_RestoreCurWeapons_Validate())
	{
		RPC_ValidateFailed(TEXT("Server_RestoreCurWeapons_Validate"));
		return;
	}
	P_THIS->Server_RestoreCurWeapons_Implementation();
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function Server_RestoreCurWeapons

// Begin Class AClassShooterCharacter Function Server_SaveCurWeapons
static FName NAME_AClassShooterCharacter_Server_SaveCurWeapons = FName(TEXT("Server_SaveCurWeapons"));
void AClassShooterCharacter::Server_SaveCurWeapons()
{
	ProcessEvent(FindFunctionChecked(NAME_AClassShooterCharacter_Server_SaveCurWeapons),NULL);
}
struct Z_Construct_UFunction_AClassShooterCharacter_Server_SaveCurWeapons_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_Server_SaveCurWeapons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "Server_SaveCurWeapons", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_Server_SaveCurWeapons_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_Server_SaveCurWeapons_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AClassShooterCharacter_Server_SaveCurWeapons()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_Server_SaveCurWeapons_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execServer_SaveCurWeapons)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_SaveCurWeapons_Validate())
	{
		RPC_ValidateFailed(TEXT("Server_SaveCurWeapons_Validate"));
		return;
	}
	P_THIS->Server_SaveCurWeapons_Implementation();
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function Server_SaveCurWeapons

// Begin Class AClassShooterCharacter Function Server_Shoot
static FName NAME_AClassShooterCharacter_Server_Shoot = FName(TEXT("Server_Shoot"));
void AClassShooterCharacter::Server_Shoot()
{
	ProcessEvent(FindFunctionChecked(NAME_AClassShooterCharacter_Server_Shoot),NULL);
}
struct Z_Construct_UFunction_AClassShooterCharacter_Server_Shoot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_Server_Shoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "Server_Shoot", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_Server_Shoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_Server_Shoot_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AClassShooterCharacter_Server_Shoot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_Server_Shoot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execServer_Shoot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_Shoot_Validate())
	{
		RPC_ValidateFailed(TEXT("Server_Shoot_Validate"));
		return;
	}
	P_THIS->Server_Shoot_Implementation();
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function Server_Shoot

// Begin Class AClassShooterCharacter Function Server_ShowCurWeapon
struct ClassShooterCharacter_eventServer_ShowCurWeapon_Parms
{
	AWeaponBase* weapon;
};
static FName NAME_AClassShooterCharacter_Server_ShowCurWeapon = FName(TEXT("Server_ShowCurWeapon"));
void AClassShooterCharacter::Server_ShowCurWeapon(AWeaponBase* weapon)
{
	ClassShooterCharacter_eventServer_ShowCurWeapon_Parms Parms;
	Parms.weapon=weapon;
	ProcessEvent(FindFunctionChecked(NAME_AClassShooterCharacter_Server_ShowCurWeapon),&Parms);
}
struct Z_Construct_UFunction_AClassShooterCharacter_Server_ShowCurWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_weapon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AClassShooterCharacter_Server_ShowCurWeapon_Statics::NewProp_weapon = { "weapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClassShooterCharacter_eventServer_ShowCurWeapon_Parms, weapon), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AClassShooterCharacter_Server_ShowCurWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AClassShooterCharacter_Server_ShowCurWeapon_Statics::NewProp_weapon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_Server_ShowCurWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_Server_ShowCurWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "Server_ShowCurWeapon", nullptr, nullptr, Z_Construct_UFunction_AClassShooterCharacter_Server_ShowCurWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_Server_ShowCurWeapon_Statics::PropPointers), sizeof(ClassShooterCharacter_eventServer_ShowCurWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_Server_ShowCurWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_Server_ShowCurWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(ClassShooterCharacter_eventServer_ShowCurWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AClassShooterCharacter_Server_ShowCurWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_Server_ShowCurWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execServer_ShowCurWeapon)
{
	P_GET_OBJECT(AWeaponBase,Z_Param_weapon);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_ShowCurWeapon_Validate(Z_Param_weapon))
	{
		RPC_ValidateFailed(TEXT("Server_ShowCurWeapon_Validate"));
		return;
	}
	P_THIS->Server_ShowCurWeapon_Implementation(Z_Param_weapon);
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function Server_ShowCurWeapon

// Begin Class AClassShooterCharacter Function Server_Slide
static FName NAME_AClassShooterCharacter_Server_Slide = FName(TEXT("Server_Slide"));
void AClassShooterCharacter::Server_Slide()
{
	ProcessEvent(FindFunctionChecked(NAME_AClassShooterCharacter_Server_Slide),NULL);
}
struct Z_Construct_UFunction_AClassShooterCharacter_Server_Slide_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_Server_Slide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "Server_Slide", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_Server_Slide_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_Server_Slide_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AClassShooterCharacter_Server_Slide()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_Server_Slide_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execServer_Slide)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_Slide_Validate())
	{
		RPC_ValidateFailed(TEXT("Server_Slide_Validate"));
		return;
	}
	P_THIS->Server_Slide_Implementation();
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function Server_Slide

// Begin Class AClassShooterCharacter Function Server_Sprint
static FName NAME_AClassShooterCharacter_Server_Sprint = FName(TEXT("Server_Sprint"));
void AClassShooterCharacter::Server_Sprint()
{
	ProcessEvent(FindFunctionChecked(NAME_AClassShooterCharacter_Server_Sprint),NULL);
}
struct Z_Construct_UFunction_AClassShooterCharacter_Server_Sprint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_Server_Sprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "Server_Sprint", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_Server_Sprint_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_Server_Sprint_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AClassShooterCharacter_Server_Sprint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_Server_Sprint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execServer_Sprint)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_Sprint_Validate())
	{
		RPC_ValidateFailed(TEXT("Server_Sprint_Validate"));
		return;
	}
	P_THIS->Server_Sprint_Implementation();
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function Server_Sprint

// Begin Class AClassShooterCharacter Function Server_StartAbility1
static FName NAME_AClassShooterCharacter_Server_StartAbility1 = FName(TEXT("Server_StartAbility1"));
void AClassShooterCharacter::Server_StartAbility1()
{
	ProcessEvent(FindFunctionChecked(NAME_AClassShooterCharacter_Server_StartAbility1),NULL);
}
struct Z_Construct_UFunction_AClassShooterCharacter_Server_StartAbility1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_Server_StartAbility1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "Server_StartAbility1", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_Server_StartAbility1_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_Server_StartAbility1_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AClassShooterCharacter_Server_StartAbility1()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_Server_StartAbility1_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execServer_StartAbility1)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_StartAbility1_Validate())
	{
		RPC_ValidateFailed(TEXT("Server_StartAbility1_Validate"));
		return;
	}
	P_THIS->Server_StartAbility1_Implementation();
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function Server_StartAbility1

// Begin Class AClassShooterCharacter Function Server_StartAbility2
static FName NAME_AClassShooterCharacter_Server_StartAbility2 = FName(TEXT("Server_StartAbility2"));
void AClassShooterCharacter::Server_StartAbility2()
{
	ProcessEvent(FindFunctionChecked(NAME_AClassShooterCharacter_Server_StartAbility2),NULL);
}
struct Z_Construct_UFunction_AClassShooterCharacter_Server_StartAbility2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_Server_StartAbility2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "Server_StartAbility2", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_Server_StartAbility2_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_Server_StartAbility2_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AClassShooterCharacter_Server_StartAbility2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_Server_StartAbility2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execServer_StartAbility2)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_StartAbility2_Validate())
	{
		RPC_ValidateFailed(TEXT("Server_StartAbility2_Validate"));
		return;
	}
	P_THIS->Server_StartAbility2_Implementation();
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function Server_StartAbility2

// Begin Class AClassShooterCharacter Function Server_StartCrouch
static FName NAME_AClassShooterCharacter_Server_StartCrouch = FName(TEXT("Server_StartCrouch"));
void AClassShooterCharacter::Server_StartCrouch()
{
	ProcessEvent(FindFunctionChecked(NAME_AClassShooterCharacter_Server_StartCrouch),NULL);
}
struct Z_Construct_UFunction_AClassShooterCharacter_Server_StartCrouch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_Server_StartCrouch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "Server_StartCrouch", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_Server_StartCrouch_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_Server_StartCrouch_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AClassShooterCharacter_Server_StartCrouch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_Server_StartCrouch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execServer_StartCrouch)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_StartCrouch_Validate())
	{
		RPC_ValidateFailed(TEXT("Server_StartCrouch_Validate"));
		return;
	}
	P_THIS->Server_StartCrouch_Implementation();
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function Server_StartCrouch

// Begin Class AClassShooterCharacter Function Server_StartShooting
static FName NAME_AClassShooterCharacter_Server_StartShooting = FName(TEXT("Server_StartShooting"));
void AClassShooterCharacter::Server_StartShooting()
{
	ProcessEvent(FindFunctionChecked(NAME_AClassShooterCharacter_Server_StartShooting),NULL);
}
struct Z_Construct_UFunction_AClassShooterCharacter_Server_StartShooting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_Server_StartShooting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "Server_StartShooting", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_Server_StartShooting_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_Server_StartShooting_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AClassShooterCharacter_Server_StartShooting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_Server_StartShooting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execServer_StartShooting)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_StartShooting_Validate())
	{
		RPC_ValidateFailed(TEXT("Server_StartShooting_Validate"));
		return;
	}
	P_THIS->Server_StartShooting_Implementation();
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function Server_StartShooting

// Begin Class AClassShooterCharacter Function Server_StartUltimate
static FName NAME_AClassShooterCharacter_Server_StartUltimate = FName(TEXT("Server_StartUltimate"));
void AClassShooterCharacter::Server_StartUltimate()
{
	ProcessEvent(FindFunctionChecked(NAME_AClassShooterCharacter_Server_StartUltimate),NULL);
}
struct Z_Construct_UFunction_AClassShooterCharacter_Server_StartUltimate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_Server_StartUltimate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "Server_StartUltimate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_Server_StartUltimate_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_Server_StartUltimate_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AClassShooterCharacter_Server_StartUltimate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_Server_StartUltimate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execServer_StartUltimate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_StartUltimate_Validate())
	{
		RPC_ValidateFailed(TEXT("Server_StartUltimate_Validate"));
		return;
	}
	P_THIS->Server_StartUltimate_Implementation();
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function Server_StartUltimate

// Begin Class AClassShooterCharacter Function Server_StopAbility1
static FName NAME_AClassShooterCharacter_Server_StopAbility1 = FName(TEXT("Server_StopAbility1"));
void AClassShooterCharacter::Server_StopAbility1()
{
	ProcessEvent(FindFunctionChecked(NAME_AClassShooterCharacter_Server_StopAbility1),NULL);
}
struct Z_Construct_UFunction_AClassShooterCharacter_Server_StopAbility1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_Server_StopAbility1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "Server_StopAbility1", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_Server_StopAbility1_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_Server_StopAbility1_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AClassShooterCharacter_Server_StopAbility1()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_Server_StopAbility1_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execServer_StopAbility1)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_StopAbility1_Validate())
	{
		RPC_ValidateFailed(TEXT("Server_StopAbility1_Validate"));
		return;
	}
	P_THIS->Server_StopAbility1_Implementation();
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function Server_StopAbility1

// Begin Class AClassShooterCharacter Function Server_StopAbility2
static FName NAME_AClassShooterCharacter_Server_StopAbility2 = FName(TEXT("Server_StopAbility2"));
void AClassShooterCharacter::Server_StopAbility2()
{
	ProcessEvent(FindFunctionChecked(NAME_AClassShooterCharacter_Server_StopAbility2),NULL);
}
struct Z_Construct_UFunction_AClassShooterCharacter_Server_StopAbility2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_Server_StopAbility2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "Server_StopAbility2", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_Server_StopAbility2_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_Server_StopAbility2_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AClassShooterCharacter_Server_StopAbility2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_Server_StopAbility2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execServer_StopAbility2)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_StopAbility2_Validate())
	{
		RPC_ValidateFailed(TEXT("Server_StopAbility2_Validate"));
		return;
	}
	P_THIS->Server_StopAbility2_Implementation();
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function Server_StopAbility2

// Begin Class AClassShooterCharacter Function Server_StopADS
static FName NAME_AClassShooterCharacter_Server_StopADS = FName(TEXT("Server_StopADS"));
void AClassShooterCharacter::Server_StopADS()
{
	ProcessEvent(FindFunctionChecked(NAME_AClassShooterCharacter_Server_StopADS),NULL);
}
struct Z_Construct_UFunction_AClassShooterCharacter_Server_StopADS_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_Server_StopADS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "Server_StopADS", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_Server_StopADS_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_Server_StopADS_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AClassShooterCharacter_Server_StopADS()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_Server_StopADS_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execServer_StopADS)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_StopADS_Validate())
	{
		RPC_ValidateFailed(TEXT("Server_StopADS_Validate"));
		return;
	}
	P_THIS->Server_StopADS_Implementation();
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function Server_StopADS

// Begin Class AClassShooterCharacter Function Server_StopCrouching
static FName NAME_AClassShooterCharacter_Server_StopCrouching = FName(TEXT("Server_StopCrouching"));
void AClassShooterCharacter::Server_StopCrouching()
{
	ProcessEvent(FindFunctionChecked(NAME_AClassShooterCharacter_Server_StopCrouching),NULL);
}
struct Z_Construct_UFunction_AClassShooterCharacter_Server_StopCrouching_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_Server_StopCrouching_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "Server_StopCrouching", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_Server_StopCrouching_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_Server_StopCrouching_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AClassShooterCharacter_Server_StopCrouching()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_Server_StopCrouching_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execServer_StopCrouching)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_StopCrouching_Validate())
	{
		RPC_ValidateFailed(TEXT("Server_StopCrouching_Validate"));
		return;
	}
	P_THIS->Server_StopCrouching_Implementation();
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function Server_StopCrouching

// Begin Class AClassShooterCharacter Function Server_StopJumping
static FName NAME_AClassShooterCharacter_Server_StopJumping = FName(TEXT("Server_StopJumping"));
void AClassShooterCharacter::Server_StopJumping()
{
	ProcessEvent(FindFunctionChecked(NAME_AClassShooterCharacter_Server_StopJumping),NULL);
}
struct Z_Construct_UFunction_AClassShooterCharacter_Server_StopJumping_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//override StopJumping\n" },
#endif
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "override StopJumping" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_Server_StopJumping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "Server_StopJumping", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_Server_StopJumping_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_Server_StopJumping_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AClassShooterCharacter_Server_StopJumping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_Server_StopJumping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execServer_StopJumping)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_StopJumping_Validate())
	{
		RPC_ValidateFailed(TEXT("Server_StopJumping_Validate"));
		return;
	}
	P_THIS->Server_StopJumping_Implementation();
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function Server_StopJumping

// Begin Class AClassShooterCharacter Function Server_StopShooting
static FName NAME_AClassShooterCharacter_Server_StopShooting = FName(TEXT("Server_StopShooting"));
void AClassShooterCharacter::Server_StopShooting()
{
	ProcessEvent(FindFunctionChecked(NAME_AClassShooterCharacter_Server_StopShooting),NULL);
}
struct Z_Construct_UFunction_AClassShooterCharacter_Server_StopShooting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_Server_StopShooting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "Server_StopShooting", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_Server_StopShooting_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_Server_StopShooting_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AClassShooterCharacter_Server_StopShooting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_Server_StopShooting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execServer_StopShooting)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_StopShooting_Validate())
	{
		RPC_ValidateFailed(TEXT("Server_StopShooting_Validate"));
		return;
	}
	P_THIS->Server_StopShooting_Implementation();
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function Server_StopShooting

// Begin Class AClassShooterCharacter Function Server_StopSliding
static FName NAME_AClassShooterCharacter_Server_StopSliding = FName(TEXT("Server_StopSliding"));
void AClassShooterCharacter::Server_StopSliding()
{
	ProcessEvent(FindFunctionChecked(NAME_AClassShooterCharacter_Server_StopSliding),NULL);
}
struct Z_Construct_UFunction_AClassShooterCharacter_Server_StopSliding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_Server_StopSliding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "Server_StopSliding", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_Server_StopSliding_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_Server_StopSliding_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AClassShooterCharacter_Server_StopSliding()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_Server_StopSliding_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execServer_StopSliding)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_StopSliding_Validate())
	{
		RPC_ValidateFailed(TEXT("Server_StopSliding_Validate"));
		return;
	}
	P_THIS->Server_StopSliding_Implementation();
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function Server_StopSliding

// Begin Class AClassShooterCharacter Function Server_StopSprinting
static FName NAME_AClassShooterCharacter_Server_StopSprinting = FName(TEXT("Server_StopSprinting"));
void AClassShooterCharacter::Server_StopSprinting()
{
	ProcessEvent(FindFunctionChecked(NAME_AClassShooterCharacter_Server_StopSprinting),NULL);
}
struct Z_Construct_UFunction_AClassShooterCharacter_Server_StopSprinting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_Server_StopSprinting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "Server_StopSprinting", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_Server_StopSprinting_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_Server_StopSprinting_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AClassShooterCharacter_Server_StopSprinting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_Server_StopSprinting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execServer_StopSprinting)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_StopSprinting_Validate())
	{
		RPC_ValidateFailed(TEXT("Server_StopSprinting_Validate"));
		return;
	}
	P_THIS->Server_StopSprinting_Implementation();
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function Server_StopSprinting

// Begin Class AClassShooterCharacter Function Server_StopUltimate
static FName NAME_AClassShooterCharacter_Server_StopUltimate = FName(TEXT("Server_StopUltimate"));
void AClassShooterCharacter::Server_StopUltimate()
{
	ProcessEvent(FindFunctionChecked(NAME_AClassShooterCharacter_Server_StopUltimate),NULL);
}
struct Z_Construct_UFunction_AClassShooterCharacter_Server_StopUltimate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_Server_StopUltimate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "Server_StopUltimate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_Server_StopUltimate_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_Server_StopUltimate_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AClassShooterCharacter_Server_StopUltimate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_Server_StopUltimate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execServer_StopUltimate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_StopUltimate_Validate())
	{
		RPC_ValidateFailed(TEXT("Server_StopUltimate_Validate"));
		return;
	}
	P_THIS->Server_StopUltimate_Implementation();
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function Server_StopUltimate

// Begin Class AClassShooterCharacter Function Server_StowWeapon
struct ClassShooterCharacter_eventServer_StowWeapon_Parms
{
	AWeaponBase* weapon;
	FName socketName;
	bool shouldCreateNew;
	int32 pos;
};
static FName NAME_AClassShooterCharacter_Server_StowWeapon = FName(TEXT("Server_StowWeapon"));
void AClassShooterCharacter::Server_StowWeapon(AWeaponBase* weapon, FName const& socketName, bool shouldCreateNew, int32 pos)
{
	ClassShooterCharacter_eventServer_StowWeapon_Parms Parms;
	Parms.weapon=weapon;
	Parms.socketName=socketName;
	Parms.shouldCreateNew=shouldCreateNew ? true : false;
	Parms.pos=pos;
	ProcessEvent(FindFunctionChecked(NAME_AClassShooterCharacter_Server_StowWeapon),&Parms);
}
struct Z_Construct_UFunction_AClassShooterCharacter_Server_StowWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_socketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_weapon;
	static const UECodeGen_Private::FNamePropertyParams NewProp_socketName;
	static void NewProp_shouldCreateNew_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_shouldCreateNew;
	static const UECodeGen_Private::FIntPropertyParams NewProp_pos;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AClassShooterCharacter_Server_StowWeapon_Statics::NewProp_weapon = { "weapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClassShooterCharacter_eventServer_StowWeapon_Parms, weapon), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AClassShooterCharacter_Server_StowWeapon_Statics::NewProp_socketName = { "socketName", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClassShooterCharacter_eventServer_StowWeapon_Parms, socketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_socketName_MetaData), NewProp_socketName_MetaData) };
void Z_Construct_UFunction_AClassShooterCharacter_Server_StowWeapon_Statics::NewProp_shouldCreateNew_SetBit(void* Obj)
{
	((ClassShooterCharacter_eventServer_StowWeapon_Parms*)Obj)->shouldCreateNew = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AClassShooterCharacter_Server_StowWeapon_Statics::NewProp_shouldCreateNew = { "shouldCreateNew", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ClassShooterCharacter_eventServer_StowWeapon_Parms), &Z_Construct_UFunction_AClassShooterCharacter_Server_StowWeapon_Statics::NewProp_shouldCreateNew_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AClassShooterCharacter_Server_StowWeapon_Statics::NewProp_pos = { "pos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClassShooterCharacter_eventServer_StowWeapon_Parms, pos), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AClassShooterCharacter_Server_StowWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AClassShooterCharacter_Server_StowWeapon_Statics::NewProp_weapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AClassShooterCharacter_Server_StowWeapon_Statics::NewProp_socketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AClassShooterCharacter_Server_StowWeapon_Statics::NewProp_shouldCreateNew,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AClassShooterCharacter_Server_StowWeapon_Statics::NewProp_pos,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_Server_StowWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_Server_StowWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "Server_StowWeapon", nullptr, nullptr, Z_Construct_UFunction_AClassShooterCharacter_Server_StowWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_Server_StowWeapon_Statics::PropPointers), sizeof(ClassShooterCharacter_eventServer_StowWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_Server_StowWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_Server_StowWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(ClassShooterCharacter_eventServer_StowWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AClassShooterCharacter_Server_StowWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_Server_StowWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execServer_StowWeapon)
{
	P_GET_OBJECT(AWeaponBase,Z_Param_weapon);
	P_GET_PROPERTY(FNameProperty,Z_Param_socketName);
	P_GET_UBOOL(Z_Param_shouldCreateNew);
	P_GET_PROPERTY(FIntProperty,Z_Param_pos);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_StowWeapon_Validate(Z_Param_weapon,Z_Param_socketName,Z_Param_shouldCreateNew,Z_Param_pos))
	{
		RPC_ValidateFailed(TEXT("Server_StowWeapon_Validate"));
		return;
	}
	P_THIS->Server_StowWeapon_Implementation(Z_Param_weapon,Z_Param_socketName,Z_Param_shouldCreateNew,Z_Param_pos);
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function Server_StowWeapon

// Begin Class AClassShooterCharacter Function Server_SwapWeaponOver
struct ClassShooterCharacter_eventServer_SwapWeaponOver_Parms
{
	AWeaponBase* weapon;
	int32 pos;
};
static FName NAME_AClassShooterCharacter_Server_SwapWeaponOver = FName(TEXT("Server_SwapWeaponOver"));
void AClassShooterCharacter::Server_SwapWeaponOver(AWeaponBase* weapon, int32 pos)
{
	ClassShooterCharacter_eventServer_SwapWeaponOver_Parms Parms;
	Parms.weapon=weapon;
	Parms.pos=pos;
	ProcessEvent(FindFunctionChecked(NAME_AClassShooterCharacter_Server_SwapWeaponOver),&Parms);
}
struct Z_Construct_UFunction_AClassShooterCharacter_Server_SwapWeaponOver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_weapon;
	static const UECodeGen_Private::FIntPropertyParams NewProp_pos;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AClassShooterCharacter_Server_SwapWeaponOver_Statics::NewProp_weapon = { "weapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClassShooterCharacter_eventServer_SwapWeaponOver_Parms, weapon), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AClassShooterCharacter_Server_SwapWeaponOver_Statics::NewProp_pos = { "pos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClassShooterCharacter_eventServer_SwapWeaponOver_Parms, pos), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AClassShooterCharacter_Server_SwapWeaponOver_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AClassShooterCharacter_Server_SwapWeaponOver_Statics::NewProp_weapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AClassShooterCharacter_Server_SwapWeaponOver_Statics::NewProp_pos,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_Server_SwapWeaponOver_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_Server_SwapWeaponOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "Server_SwapWeaponOver", nullptr, nullptr, Z_Construct_UFunction_AClassShooterCharacter_Server_SwapWeaponOver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_Server_SwapWeaponOver_Statics::PropPointers), sizeof(ClassShooterCharacter_eventServer_SwapWeaponOver_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_Server_SwapWeaponOver_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_Server_SwapWeaponOver_Statics::Function_MetaDataParams) };
static_assert(sizeof(ClassShooterCharacter_eventServer_SwapWeaponOver_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AClassShooterCharacter_Server_SwapWeaponOver()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_Server_SwapWeaponOver_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execServer_SwapWeaponOver)
{
	P_GET_OBJECT(AWeaponBase,Z_Param_weapon);
	P_GET_PROPERTY(FIntProperty,Z_Param_pos);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_SwapWeaponOver_Validate(Z_Param_weapon,Z_Param_pos))
	{
		RPC_ValidateFailed(TEXT("Server_SwapWeaponOver_Validate"));
		return;
	}
	P_THIS->Server_SwapWeaponOver_Implementation(Z_Param_weapon,Z_Param_pos);
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function Server_SwapWeaponOver

// Begin Class AClassShooterCharacter Function Server_SwitchWeapon
struct ClassShooterCharacter_eventServer_SwitchWeapon_Parms
{
	FInputActionValue Value;
};
static FName NAME_AClassShooterCharacter_Server_SwitchWeapon = FName(TEXT("Server_SwitchWeapon"));
void AClassShooterCharacter::Server_SwitchWeapon(FInputActionValue const& Value)
{
	ClassShooterCharacter_eventServer_SwitchWeapon_Parms Parms;
	Parms.Value=Value;
	ProcessEvent(FindFunctionChecked(NAME_AClassShooterCharacter_Server_SwitchWeapon),&Parms);
}
struct Z_Construct_UFunction_AClassShooterCharacter_Server_SwitchWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AClassShooterCharacter_Server_SwitchWeapon_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClassShooterCharacter_eventServer_SwitchWeapon_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AClassShooterCharacter_Server_SwitchWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AClassShooterCharacter_Server_SwitchWeapon_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_Server_SwitchWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_Server_SwitchWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "Server_SwitchWeapon", nullptr, nullptr, Z_Construct_UFunction_AClassShooterCharacter_Server_SwitchWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_Server_SwitchWeapon_Statics::PropPointers), sizeof(ClassShooterCharacter_eventServer_SwitchWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_Server_SwitchWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_Server_SwitchWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(ClassShooterCharacter_eventServer_SwitchWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AClassShooterCharacter_Server_SwitchWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_Server_SwitchWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execServer_SwitchWeapon)
{
	P_GET_STRUCT(FInputActionValue,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_SwitchWeapon_Validate(Z_Param_Value))
	{
		RPC_ValidateFailed(TEXT("Server_SwitchWeapon_Validate"));
		return;
	}
	P_THIS->Server_SwitchWeapon_Implementation(Z_Param_Value);
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function Server_SwitchWeapon

// Begin Class AClassShooterCharacter Function Server_TakeCustomDamage
struct ClassShooterCharacter_eventServer_TakeCustomDamage_Parms
{
	float DamageAmount;
	AActor* source;
};
static FName NAME_AClassShooterCharacter_Server_TakeCustomDamage = FName(TEXT("Server_TakeCustomDamage"));
void AClassShooterCharacter::Server_TakeCustomDamage(float DamageAmount, AActor* source)
{
	ClassShooterCharacter_eventServer_TakeCustomDamage_Parms Parms;
	Parms.DamageAmount=DamageAmount;
	Parms.source=source;
	ProcessEvent(FindFunctionChecked(NAME_AClassShooterCharacter_Server_TakeCustomDamage),&Parms);
}
struct Z_Construct_UFunction_AClassShooterCharacter_Server_TakeCustomDamage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_source;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AClassShooterCharacter_Server_TakeCustomDamage_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClassShooterCharacter_eventServer_TakeCustomDamage_Parms, DamageAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AClassShooterCharacter_Server_TakeCustomDamage_Statics::NewProp_source = { "source", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClassShooterCharacter_eventServer_TakeCustomDamage_Parms, source), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AClassShooterCharacter_Server_TakeCustomDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AClassShooterCharacter_Server_TakeCustomDamage_Statics::NewProp_DamageAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AClassShooterCharacter_Server_TakeCustomDamage_Statics::NewProp_source,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_Server_TakeCustomDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_Server_TakeCustomDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "Server_TakeCustomDamage", nullptr, nullptr, Z_Construct_UFunction_AClassShooterCharacter_Server_TakeCustomDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_Server_TakeCustomDamage_Statics::PropPointers), sizeof(ClassShooterCharacter_eventServer_TakeCustomDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_Server_TakeCustomDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_Server_TakeCustomDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(ClassShooterCharacter_eventServer_TakeCustomDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AClassShooterCharacter_Server_TakeCustomDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_Server_TakeCustomDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execServer_TakeCustomDamage)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DamageAmount);
	P_GET_OBJECT(AActor,Z_Param_source);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_TakeCustomDamage_Validate(Z_Param_DamageAmount,Z_Param_source))
	{
		RPC_ValidateFailed(TEXT("Server_TakeCustomDamage_Validate"));
		return;
	}
	P_THIS->Server_TakeCustomDamage_Implementation(Z_Param_DamageAmount,Z_Param_source);
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function Server_TakeCustomDamage

// Begin Class AClassShooterCharacter Function ShowCurWeapon
struct Z_Construct_UFunction_AClassShooterCharacter_ShowCurWeapon_Statics
{
	struct ClassShooterCharacter_eventShowCurWeapon_Parms
	{
		AWeaponBase* weapon;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon Functions" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_weapon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AClassShooterCharacter_ShowCurWeapon_Statics::NewProp_weapon = { "weapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClassShooterCharacter_eventShowCurWeapon_Parms, weapon), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AClassShooterCharacter_ShowCurWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AClassShooterCharacter_ShowCurWeapon_Statics::NewProp_weapon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_ShowCurWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_ShowCurWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "ShowCurWeapon", nullptr, nullptr, Z_Construct_UFunction_AClassShooterCharacter_ShowCurWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_ShowCurWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_AClassShooterCharacter_ShowCurWeapon_Statics::ClassShooterCharacter_eventShowCurWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_ShowCurWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_ShowCurWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AClassShooterCharacter_ShowCurWeapon_Statics::ClassShooterCharacter_eventShowCurWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AClassShooterCharacter_ShowCurWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_ShowCurWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execShowCurWeapon)
{
	P_GET_OBJECT(AWeaponBase,Z_Param_weapon);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowCurWeapon(Z_Param_weapon);
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function ShowCurWeapon

// Begin Class AClassShooterCharacter Function SwitchWeapon
struct Z_Construct_UFunction_AClassShooterCharacter_SwitchWeapon_Statics
{
	struct ClassShooterCharacter_eventSwitchWeapon_Parms
	{
		FInputActionValue Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Switching weapons\n" },
#endif
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Switching weapons" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AClassShooterCharacter_SwitchWeapon_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClassShooterCharacter_eventSwitchWeapon_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AClassShooterCharacter_SwitchWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AClassShooterCharacter_SwitchWeapon_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_SwitchWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_SwitchWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "SwitchWeapon", nullptr, nullptr, Z_Construct_UFunction_AClassShooterCharacter_SwitchWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_SwitchWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_AClassShooterCharacter_SwitchWeapon_Statics::ClassShooterCharacter_eventSwitchWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_SwitchWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_SwitchWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AClassShooterCharacter_SwitchWeapon_Statics::ClassShooterCharacter_eventSwitchWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AClassShooterCharacter_SwitchWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_SwitchWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execSwitchWeapon)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchWeapon(Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function SwitchWeapon

// Begin Class AClassShooterCharacter
void AClassShooterCharacter::StaticRegisterNativesAClassShooterCharacter()
{
	UClass* Class = AClassShooterCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ADSCurWeapon", &AClassShooterCharacter::execADSCurWeapon },
		{ "EquipWeapon", &AClassShooterCharacter::execEquipWeapon },
		{ "Multi_Death", &AClassShooterCharacter::execMulti_Death },
		{ "OnRep_curWeapon", &AClassShooterCharacter::execOnRep_curWeapon },
		{ "OnRep_deathTriggered", &AClassShooterCharacter::execOnRep_deathTriggered },
		{ "OnRep_targetLocation", &AClassShooterCharacter::execOnRep_targetLocation },
		{ "OnRep_weaponArray", &AClassShooterCharacter::execOnRep_weaponArray },
		{ "ProceduralRecoil", &AClassShooterCharacter::execProceduralRecoil },
		{ "RestoreCurWeapons", &AClassShooterCharacter::execRestoreCurWeapons },
		{ "Server_ADS", &AClassShooterCharacter::execServer_ADS },
		{ "Server_Crouch", &AClassShooterCharacter::execServer_Crouch },
		{ "Server_EquipWeapon", &AClassShooterCharacter::execServer_EquipWeapon },
		{ "Server_Jump", &AClassShooterCharacter::execServer_Jump },
		{ "Server_Melee", &AClassShooterCharacter::execServer_Melee },
		{ "Server_Reload", &AClassShooterCharacter::execServer_Reload },
		{ "Server_ResetMovement", &AClassShooterCharacter::execServer_ResetMovement },
		{ "Server_RestoreCurWeapons", &AClassShooterCharacter::execServer_RestoreCurWeapons },
		{ "Server_SaveCurWeapons", &AClassShooterCharacter::execServer_SaveCurWeapons },
		{ "Server_Shoot", &AClassShooterCharacter::execServer_Shoot },
		{ "Server_ShowCurWeapon", &AClassShooterCharacter::execServer_ShowCurWeapon },
		{ "Server_Slide", &AClassShooterCharacter::execServer_Slide },
		{ "Server_Sprint", &AClassShooterCharacter::execServer_Sprint },
		{ "Server_StartAbility1", &AClassShooterCharacter::execServer_StartAbility1 },
		{ "Server_StartAbility2", &AClassShooterCharacter::execServer_StartAbility2 },
		{ "Server_StartCrouch", &AClassShooterCharacter::execServer_StartCrouch },
		{ "Server_StartShooting", &AClassShooterCharacter::execServer_StartShooting },
		{ "Server_StartUltimate", &AClassShooterCharacter::execServer_StartUltimate },
		{ "Server_StopAbility1", &AClassShooterCharacter::execServer_StopAbility1 },
		{ "Server_StopAbility2", &AClassShooterCharacter::execServer_StopAbility2 },
		{ "Server_StopADS", &AClassShooterCharacter::execServer_StopADS },
		{ "Server_StopCrouching", &AClassShooterCharacter::execServer_StopCrouching },
		{ "Server_StopJumping", &AClassShooterCharacter::execServer_StopJumping },
		{ "Server_StopShooting", &AClassShooterCharacter::execServer_StopShooting },
		{ "Server_StopSliding", &AClassShooterCharacter::execServer_StopSliding },
		{ "Server_StopSprinting", &AClassShooterCharacter::execServer_StopSprinting },
		{ "Server_StopUltimate", &AClassShooterCharacter::execServer_StopUltimate },
		{ "Server_StowWeapon", &AClassShooterCharacter::execServer_StowWeapon },
		{ "Server_SwapWeaponOver", &AClassShooterCharacter::execServer_SwapWeaponOver },
		{ "Server_SwitchWeapon", &AClassShooterCharacter::execServer_SwitchWeapon },
		{ "Server_TakeCustomDamage", &AClassShooterCharacter::execServer_TakeCustomDamage },
		{ "ShowCurWeapon", &AClassShooterCharacter::execShowCurWeapon },
		{ "SwitchWeapon", &AClassShooterCharacter::execSwitchWeapon },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AClassShooterCharacter);
UClass* Z_Construct_UClass_AClassShooterCharacter_NoRegister()
{
	return AClassShooterCharacter::StaticClass();
}
struct Z_Construct_UClass_AClassShooterCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ClassShooterCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pawn mesh: 1st person view (arms; seen only by self) */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** First person camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "First person camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sprint Input Action */" },
#endif
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sprint Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ADSAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** ADS input Action */" },
#endif
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ADS input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShootingAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Shooting/Melee input Action */" },
#endif
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Shooting/Melee input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwitchWeaponAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Switch weapon input Action */" },
#endif
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Switch weapon input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadWeaponAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reload weapon input Action */" },
#endif
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reload weapon input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrouchAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Drop weapon input Action */" },
#endif
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Drop weapon input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ability1Action_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Drop weapon input Action */" },
#endif
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Drop weapon input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ability2Action_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Crouch input Action */" },
#endif
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Crouch input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UltimateAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_currentStates_MetaData[] = {
		{ "Category", "Class Base Values" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bodyMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_curHealth_MetaData[] = {
		{ "Category", "Class Base Values" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maxHealth_MetaData[] = {
		{ "Category", "Class Base Values" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_xSens_MetaData[] = {
		{ "Category", "Class Base Values" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ySens_MetaData[] = {
		{ "Category", "Class Base Values" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_shotLocation_MetaData[] = {
		{ "Category", "Class Base Values" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_weaponArray_MetaData[] = {
		{ "Category", "Class Base Values" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//our array of weapons\n" },
#endif
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "our array of weapons" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_backupWeaponArray_MetaData[] = {
		{ "Category", "Class Base Values" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//backup array of weapons when in super\n" },
#endif
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "backup array of weapons when in super" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_curWeapon_MetaData[] = {
		{ "Category", "Class Base Values" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//currently equipped weapon\n" },
#endif
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "currently equipped weapon" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_weaponCopy_MetaData[] = {
		{ "Category", "Class Base Values" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_weaponLocation_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_targetLocation_MetaData[] = {
		{ "Category", "Class Base Values" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_targetRotation_MetaData[] = {
		{ "Category", "Class Base Values" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_springRecoilVal_MetaData[] = {
		{ "Category", "Gun Values" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_sideMove_MetaData[] = {
		{ "Category", "Gun Values" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mouseX_MetaData[] = {
		{ "Category", "Gun Values" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mouseY_MetaData[] = {
		{ "Category", "Gun Values" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_handSwayRotator_MetaData[] = {
		{ "Category", "Gun Values" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_recoilTransform_MetaData[] = {
		{ "Category", "Gun Values" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_recoil_MetaData[] = {
		{ "Category", "Gun Values" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_targetFov_MetaData[] = {
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_startFovChange_MetaData[] = {
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_originalCamPos_MetaData[] = {
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_weaponWorldObj_MetaData[] = {
		{ "Category", "ClassShooterCharacter" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_knifeSwingLocations_MetaData[] = {
		{ "Category", "Class Base Values" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isLeftSwing_MetaData[] = {
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_meleeLerp_MetaData[] = {
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_slashSpeed_MetaData[] = {
		{ "Category", "Class Base Values" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_originalBodyScale_MetaData[] = {
		{ "Category", "Class Base Values" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_curSpeed_MetaData[] = {
		{ "Category", "Movement Base Values" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_curSpeedMulti_MetaData[] = {
		{ "Category", "Movement Base Values" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_baseSpeedMulti_MetaData[] = {
		{ "Category", "Movement Base Values" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_baseSpeed_MetaData[] = {
		{ "Category", "Movement Base Values" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_jumpPow_MetaData[] = {
		{ "Category", "Movement Base Values" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_slidePow_MetaData[] = {
		{ "Category", "Movement Base Values" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_jumpAllowed_MetaData[] = {
		{ "Category", "Class Base Values" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isSprinting_MetaData[] = {
		{ "Category", "Class Base Values" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isADSing_MetaData[] = {
		{ "Category", "Movement Base Values" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_movementVector_MetaData[] = {
		{ "Category", "Movement Base Values" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_baseGroundFriction_MetaData[] = {
		{ "Category", "Movement Base Values" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_baseBrakingDeceleration_MetaData[] = {
		{ "Category", "Movement Base Values" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_baseGravity_MetaData[] = {
		{ "Category", "Movement Base Values" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isClone_MetaData[] = {
		{ "Category", "Class Base Values" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_shouldDestroyWeapon_MetaData[] = {
		{ "Category", "Movement Base Values" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ultimateTriggered_MetaData[] = {
		{ "Category", "Class Base Values" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bobTimer_MetaData[] = {
		{ "Category", "Class Base Values" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Headbob parameters\n" },
#endif
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Headbob parameters" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bobSpeed_MetaData[] = {
		{ "Category", "Class Base Values" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bobAmount_MetaData[] = {
		{ "Category", "Class Base Values" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_amplitude_MetaData[] = {
		{ "Category", "Class Base Values" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isMeleeHBOn_MetaData[] = {
		{ "Category", "Class Base Values" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_knifeHitDetected_MetaData[] = {
		{ "Category", "Class Base Values" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isSwitchingAfterPickup_MetaData[] = {
		{ "Category", "Class Base Values" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_deathTriggered_MetaData[] = {
		{ "Category", "Class Base Values" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_didCauseDmg_MetaData[] = {
		{ "Category", "Class Base Values" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_didGetKill_MetaData[] = {
		{ "Category", "Class Base Values" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_triggerScreenDmgEffect_MetaData[] = {
		{ "Category", "Class Base Values" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_deathExplosionVFX_MetaData[] = {
		{ "Category", "Class Base Values" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_baseBodyLocation_MetaData[] = {
		{ "Category", "Class Base Values" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_playerWhoDamagedMe_MetaData[] = {
		{ "Category", "Class Base Values" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_movementComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh1P;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SprintAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ADSAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShootingAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SwitchWeaponAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReloadWeaponAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CrouchAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Ability1Action;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Ability2Action;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UltimateAction;
	static const UECodeGen_Private::FBytePropertyParams NewProp_currentStates_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_currentStates_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_currentStates;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_bodyMesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_curHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_maxHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_xSens;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ySens;
	static const UECodeGen_Private::FStructPropertyParams NewProp_shotLocation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_weaponArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_weaponArray;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_backupWeaponArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_backupWeaponArray;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_curWeapon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_weaponCopy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_weaponLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_targetLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_targetRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_springRecoilVal;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_sideMove;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_mouseX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_mouseY;
	static const UECodeGen_Private::FStructPropertyParams NewProp_handSwayRotator;
	static const UECodeGen_Private::FStructPropertyParams NewProp_recoilTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_recoil;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_targetFov;
	static void NewProp_startFovChange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_startFovChange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_originalCamPos;
	static const UECodeGen_Private::FClassPropertyParams NewProp_weaponWorldObj;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_knifeSwingLocations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_knifeSwingLocations;
	static void NewProp_isLeftSwing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isLeftSwing;
	static void NewProp_meleeLerp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_meleeLerp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_slashSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_originalBodyScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_curSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_curSpeedMulti;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_baseSpeedMulti;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_baseSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_jumpPow;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_slidePow;
	static void NewProp_jumpAllowed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_jumpAllowed;
	static void NewProp_isSprinting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isSprinting;
	static void NewProp_isADSing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isADSing;
	static const UECodeGen_Private::FStructPropertyParams NewProp_movementVector;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_baseGroundFriction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_baseBrakingDeceleration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_baseGravity;
	static void NewProp_isClone_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isClone;
	static void NewProp_shouldDestroyWeapon_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_shouldDestroyWeapon;
	static void NewProp_ultimateTriggered_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ultimateTriggered;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_bobTimer;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_bobSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_bobAmount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_amplitude;
	static void NewProp_isMeleeHBOn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isMeleeHBOn;
	static void NewProp_knifeHitDetected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_knifeHitDetected;
	static void NewProp_isSwitchingAfterPickup_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isSwitchingAfterPickup;
	static void NewProp_deathTriggered_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_deathTriggered;
	static void NewProp_didCauseDmg_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_didCauseDmg;
	static void NewProp_didGetKill_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_didGetKill;
	static void NewProp_triggerScreenDmgEffect_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_triggerScreenDmgEffect;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_deathExplosionVFX;
	static const UECodeGen_Private::FStructPropertyParams NewProp_baseBodyLocation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_playerWhoDamagedMe;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_movementComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AClassShooterCharacter_ADSCurWeapon, "ADSCurWeapon" }, // 1315547297
		{ &Z_Construct_UFunction_AClassShooterCharacter_EquipWeapon, "EquipWeapon" }, // 284930467
		{ &Z_Construct_UFunction_AClassShooterCharacter_Multi_Death, "Multi_Death" }, // 1765020820
		{ &Z_Construct_UFunction_AClassShooterCharacter_OnRep_curWeapon, "OnRep_curWeapon" }, // 2679835360
		{ &Z_Construct_UFunction_AClassShooterCharacter_OnRep_deathTriggered, "OnRep_deathTriggered" }, // 3821261459
		{ &Z_Construct_UFunction_AClassShooterCharacter_OnRep_targetLocation, "OnRep_targetLocation" }, // 3063494526
		{ &Z_Construct_UFunction_AClassShooterCharacter_OnRep_weaponArray, "OnRep_weaponArray" }, // 732359659
		{ &Z_Construct_UFunction_AClassShooterCharacter_ProceduralRecoil, "ProceduralRecoil" }, // 2308756292
		{ &Z_Construct_UFunction_AClassShooterCharacter_RestoreCurWeapons, "RestoreCurWeapons" }, // 2612269295
		{ &Z_Construct_UFunction_AClassShooterCharacter_Server_ADS, "Server_ADS" }, // 3374005386
		{ &Z_Construct_UFunction_AClassShooterCharacter_Server_Crouch, "Server_Crouch" }, // 3880371703
		{ &Z_Construct_UFunction_AClassShooterCharacter_Server_EquipWeapon, "Server_EquipWeapon" }, // 80809060
		{ &Z_Construct_UFunction_AClassShooterCharacter_Server_Jump, "Server_Jump" }, // 2629687361
		{ &Z_Construct_UFunction_AClassShooterCharacter_Server_Melee, "Server_Melee" }, // 1454201379
		{ &Z_Construct_UFunction_AClassShooterCharacter_Server_Reload, "Server_Reload" }, // 179809570
		{ &Z_Construct_UFunction_AClassShooterCharacter_Server_ResetMovement, "Server_ResetMovement" }, // 3492557797
		{ &Z_Construct_UFunction_AClassShooterCharacter_Server_RestoreCurWeapons, "Server_RestoreCurWeapons" }, // 2694535317
		{ &Z_Construct_UFunction_AClassShooterCharacter_Server_SaveCurWeapons, "Server_SaveCurWeapons" }, // 1968221817
		{ &Z_Construct_UFunction_AClassShooterCharacter_Server_Shoot, "Server_Shoot" }, // 51230722
		{ &Z_Construct_UFunction_AClassShooterCharacter_Server_ShowCurWeapon, "Server_ShowCurWeapon" }, // 1790062458
		{ &Z_Construct_UFunction_AClassShooterCharacter_Server_Slide, "Server_Slide" }, // 1246824975
		{ &Z_Construct_UFunction_AClassShooterCharacter_Server_Sprint, "Server_Sprint" }, // 2049786273
		{ &Z_Construct_UFunction_AClassShooterCharacter_Server_StartAbility1, "Server_StartAbility1" }, // 1148903535
		{ &Z_Construct_UFunction_AClassShooterCharacter_Server_StartAbility2, "Server_StartAbility2" }, // 1247262085
		{ &Z_Construct_UFunction_AClassShooterCharacter_Server_StartCrouch, "Server_StartCrouch" }, // 803053138
		{ &Z_Construct_UFunction_AClassShooterCharacter_Server_StartShooting, "Server_StartShooting" }, // 714237433
		{ &Z_Construct_UFunction_AClassShooterCharacter_Server_StartUltimate, "Server_StartUltimate" }, // 2657500111
		{ &Z_Construct_UFunction_AClassShooterCharacter_Server_StopAbility1, "Server_StopAbility1" }, // 4097954589
		{ &Z_Construct_UFunction_AClassShooterCharacter_Server_StopAbility2, "Server_StopAbility2" }, // 3286040135
		{ &Z_Construct_UFunction_AClassShooterCharacter_Server_StopADS, "Server_StopADS" }, // 629494181
		{ &Z_Construct_UFunction_AClassShooterCharacter_Server_StopCrouching, "Server_StopCrouching" }, // 3117090560
		{ &Z_Construct_UFunction_AClassShooterCharacter_Server_StopJumping, "Server_StopJumping" }, // 687776250
		{ &Z_Construct_UFunction_AClassShooterCharacter_Server_StopShooting, "Server_StopShooting" }, // 2068370224
		{ &Z_Construct_UFunction_AClassShooterCharacter_Server_StopSliding, "Server_StopSliding" }, // 1229048900
		{ &Z_Construct_UFunction_AClassShooterCharacter_Server_StopSprinting, "Server_StopSprinting" }, // 3112198531
		{ &Z_Construct_UFunction_AClassShooterCharacter_Server_StopUltimate, "Server_StopUltimate" }, // 2666038458
		{ &Z_Construct_UFunction_AClassShooterCharacter_Server_StowWeapon, "Server_StowWeapon" }, // 760698915
		{ &Z_Construct_UFunction_AClassShooterCharacter_Server_SwapWeaponOver, "Server_SwapWeaponOver" }, // 1615988279
		{ &Z_Construct_UFunction_AClassShooterCharacter_Server_SwitchWeapon, "Server_SwitchWeapon" }, // 2714535687
		{ &Z_Construct_UFunction_AClassShooterCharacter_Server_TakeCustomDamage, "Server_TakeCustomDamage" }, // 3995769629
		{ &Z_Construct_UFunction_AClassShooterCharacter_ShowCurWeapon, "ShowCurWeapon" }, // 1248625749
		{ &Z_Construct_UFunction_AClassShooterCharacter_SwitchWeapon, "SwitchWeapon" }, // 2942042266
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AClassShooterCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_Mesh1P = { "Mesh1P", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh1P_MetaData), NewProp_Mesh1P_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstPersonCameraComponent_MetaData), NewProp_FirstPersonCameraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_SprintAction = { "SprintAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, SprintAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintAction_MetaData), NewProp_SprintAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_ADSAction = { "ADSAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, ADSAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ADSAction_MetaData), NewProp_ADSAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_ShootingAction = { "ShootingAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, ShootingAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShootingAction_MetaData), NewProp_ShootingAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_SwitchWeaponAction = { "SwitchWeaponAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, SwitchWeaponAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwitchWeaponAction_MetaData), NewProp_SwitchWeaponAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_ReloadWeaponAction = { "ReloadWeaponAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, ReloadWeaponAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadWeaponAction_MetaData), NewProp_ReloadWeaponAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_CrouchAction = { "CrouchAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, CrouchAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrouchAction_MetaData), NewProp_CrouchAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_Ability1Action = { "Ability1Action", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, Ability1Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ability1Action_MetaData), NewProp_Ability1Action_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_Ability2Action = { "Ability2Action", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, Ability2Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ability2Action_MetaData), NewProp_Ability2Action_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_UltimateAction = { "UltimateAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, UltimateAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UltimateAction_MetaData), NewProp_UltimateAction_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_currentStates_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_currentStates_Inner = { "currentStates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_ClassShooter_PlayerGameState, METADATA_PARAMS(0, nullptr) }; // 436607797
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_currentStates = { "currentStates", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, currentStates), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_currentStates_MetaData), NewProp_currentStates_MetaData) }; // 436607797
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_bodyMesh = { "bodyMesh", nullptr, (EPropertyFlags)0x00100000000a003d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, bodyMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bodyMesh_MetaData), NewProp_bodyMesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_curHealth = { "curHealth", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, curHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_curHealth_MetaData), NewProp_curHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_maxHealth = { "maxHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, maxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxHealth_MetaData), NewProp_maxHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_xSens = { "xSens", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, xSens), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_xSens_MetaData), NewProp_xSens_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_ySens = { "ySens", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, ySens), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ySens_MetaData), NewProp_ySens_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_shotLocation = { "shotLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, shotLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_shotLocation_MetaData), NewProp_shotLocation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_weaponArray_Inner = { "weaponArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_weaponArray = { "weaponArray", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, weaponArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_weaponArray_MetaData), NewProp_weaponArray_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_backupWeaponArray_Inner = { "backupWeaponArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_backupWeaponArray = { "backupWeaponArray", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, backupWeaponArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_backupWeaponArray_MetaData), NewProp_backupWeaponArray_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_curWeapon = { "curWeapon", "OnRep_curWeapon", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, curWeapon), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_curWeapon_MetaData), NewProp_curWeapon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_weaponCopy = { "weaponCopy", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, weaponCopy), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_weaponCopy_MetaData), NewProp_weaponCopy_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_weaponLocation = { "weaponLocation", nullptr, (EPropertyFlags)0x001000000008002d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, weaponLocation), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_weaponLocation_MetaData), NewProp_weaponLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_targetLocation = { "targetLocation", "OnRep_targetLocation", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, targetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_targetLocation_MetaData), NewProp_targetLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_targetRotation = { "targetRotation", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, targetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_targetRotation_MetaData), NewProp_targetRotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_springRecoilVal = { "springRecoilVal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, springRecoilVal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_springRecoilVal_MetaData), NewProp_springRecoilVal_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_sideMove = { "sideMove", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, sideMove), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_sideMove_MetaData), NewProp_sideMove_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_mouseX = { "mouseX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, mouseX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mouseX_MetaData), NewProp_mouseX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_mouseY = { "mouseY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, mouseY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mouseY_MetaData), NewProp_mouseY_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_handSwayRotator = { "handSwayRotator", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, handSwayRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_handSwayRotator_MetaData), NewProp_handSwayRotator_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_recoilTransform = { "recoilTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, recoilTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_recoilTransform_MetaData), NewProp_recoilTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_recoil = { "recoil", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, recoil), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_recoil_MetaData), NewProp_recoil_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_targetFov = { "targetFov", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, targetFov), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_targetFov_MetaData), NewProp_targetFov_MetaData) };
void Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_startFovChange_SetBit(void* Obj)
{
	((AClassShooterCharacter*)Obj)->startFovChange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_startFovChange = { "startFovChange", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AClassShooterCharacter), &Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_startFovChange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_startFovChange_MetaData), NewProp_startFovChange_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_originalCamPos = { "originalCamPos", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, originalCamPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_originalCamPos_MetaData), NewProp_originalCamPos_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_weaponWorldObj = { "weaponWorldObj", nullptr, (EPropertyFlags)0x0014000000000025, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, weaponWorldObj), Z_Construct_UClass_UClass, Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_weaponWorldObj_MetaData), NewProp_weaponWorldObj_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_knifeSwingLocations_Inner = { "knifeSwingLocations", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_knifeSwingLocations = { "knifeSwingLocations", nullptr, (EPropertyFlags)0x001000800000002d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, knifeSwingLocations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_knifeSwingLocations_MetaData), NewProp_knifeSwingLocations_MetaData) };
void Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_isLeftSwing_SetBit(void* Obj)
{
	((AClassShooterCharacter*)Obj)->isLeftSwing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_isLeftSwing = { "isLeftSwing", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AClassShooterCharacter), &Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_isLeftSwing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isLeftSwing_MetaData), NewProp_isLeftSwing_MetaData) };
void Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_meleeLerp_SetBit(void* Obj)
{
	((AClassShooterCharacter*)Obj)->meleeLerp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_meleeLerp = { "meleeLerp", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AClassShooterCharacter), &Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_meleeLerp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_meleeLerp_MetaData), NewProp_meleeLerp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_slashSpeed = { "slashSpeed", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, slashSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_slashSpeed_MetaData), NewProp_slashSpeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_originalBodyScale = { "originalBodyScale", nullptr, (EPropertyFlags)0x0010000000020035, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, originalBodyScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_originalBodyScale_MetaData), NewProp_originalBodyScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_curSpeed = { "curSpeed", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, curSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_curSpeed_MetaData), NewProp_curSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_curSpeedMulti = { "curSpeedMulti", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, curSpeedMulti), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_curSpeedMulti_MetaData), NewProp_curSpeedMulti_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_baseSpeedMulti = { "baseSpeedMulti", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, baseSpeedMulti), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_baseSpeedMulti_MetaData), NewProp_baseSpeedMulti_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_baseSpeed = { "baseSpeed", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, baseSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_baseSpeed_MetaData), NewProp_baseSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_jumpPow = { "jumpPow", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, jumpPow), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_jumpPow_MetaData), NewProp_jumpPow_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_slidePow = { "slidePow", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, slidePow), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_slidePow_MetaData), NewProp_slidePow_MetaData) };
void Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_jumpAllowed_SetBit(void* Obj)
{
	((AClassShooterCharacter*)Obj)->jumpAllowed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_jumpAllowed = { "jumpAllowed", nullptr, (EPropertyFlags)0x0010000000020025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AClassShooterCharacter), &Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_jumpAllowed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_jumpAllowed_MetaData), NewProp_jumpAllowed_MetaData) };
void Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_isSprinting_SetBit(void* Obj)
{
	((AClassShooterCharacter*)Obj)->isSprinting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_isSprinting = { "isSprinting", nullptr, (EPropertyFlags)0x0010000000020025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AClassShooterCharacter), &Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_isSprinting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isSprinting_MetaData), NewProp_isSprinting_MetaData) };
void Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_isADSing_SetBit(void* Obj)
{
	((AClassShooterCharacter*)Obj)->isADSing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_isADSing = { "isADSing", nullptr, (EPropertyFlags)0x0010000000020035, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AClassShooterCharacter), &Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_isADSing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isADSing_MetaData), NewProp_isADSing_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_movementVector = { "movementVector", nullptr, (EPropertyFlags)0x0010000000020035, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, movementVector), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_movementVector_MetaData), NewProp_movementVector_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_baseGroundFriction = { "baseGroundFriction", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, baseGroundFriction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_baseGroundFriction_MetaData), NewProp_baseGroundFriction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_baseBrakingDeceleration = { "baseBrakingDeceleration", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, baseBrakingDeceleration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_baseBrakingDeceleration_MetaData), NewProp_baseBrakingDeceleration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_baseGravity = { "baseGravity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, baseGravity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_baseGravity_MetaData), NewProp_baseGravity_MetaData) };
void Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_isClone_SetBit(void* Obj)
{
	((AClassShooterCharacter*)Obj)->isClone = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_isClone = { "isClone", nullptr, (EPropertyFlags)0x0010000000020025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AClassShooterCharacter), &Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_isClone_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isClone_MetaData), NewProp_isClone_MetaData) };
void Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_shouldDestroyWeapon_SetBit(void* Obj)
{
	((AClassShooterCharacter*)Obj)->shouldDestroyWeapon = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_shouldDestroyWeapon = { "shouldDestroyWeapon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AClassShooterCharacter), &Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_shouldDestroyWeapon_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_shouldDestroyWeapon_MetaData), NewProp_shouldDestroyWeapon_MetaData) };
void Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_ultimateTriggered_SetBit(void* Obj)
{
	((AClassShooterCharacter*)Obj)->ultimateTriggered = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_ultimateTriggered = { "ultimateTriggered", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AClassShooterCharacter), &Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_ultimateTriggered_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ultimateTriggered_MetaData), NewProp_ultimateTriggered_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_bobTimer = { "bobTimer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, bobTimer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bobTimer_MetaData), NewProp_bobTimer_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_bobSpeed = { "bobSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, bobSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bobSpeed_MetaData), NewProp_bobSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_bobAmount = { "bobAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, bobAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bobAmount_MetaData), NewProp_bobAmount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_amplitude = { "amplitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, amplitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_amplitude_MetaData), NewProp_amplitude_MetaData) };
void Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_isMeleeHBOn_SetBit(void* Obj)
{
	((AClassShooterCharacter*)Obj)->isMeleeHBOn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_isMeleeHBOn = { "isMeleeHBOn", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AClassShooterCharacter), &Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_isMeleeHBOn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isMeleeHBOn_MetaData), NewProp_isMeleeHBOn_MetaData) };
void Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_knifeHitDetected_SetBit(void* Obj)
{
	((AClassShooterCharacter*)Obj)->knifeHitDetected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_knifeHitDetected = { "knifeHitDetected", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AClassShooterCharacter), &Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_knifeHitDetected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_knifeHitDetected_MetaData), NewProp_knifeHitDetected_MetaData) };
void Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_isSwitchingAfterPickup_SetBit(void* Obj)
{
	((AClassShooterCharacter*)Obj)->isSwitchingAfterPickup = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_isSwitchingAfterPickup = { "isSwitchingAfterPickup", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AClassShooterCharacter), &Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_isSwitchingAfterPickup_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isSwitchingAfterPickup_MetaData), NewProp_isSwitchingAfterPickup_MetaData) };
void Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_deathTriggered_SetBit(void* Obj)
{
	((AClassShooterCharacter*)Obj)->deathTriggered = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_deathTriggered = { "deathTriggered", "OnRep_deathTriggered", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AClassShooterCharacter), &Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_deathTriggered_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_deathTriggered_MetaData), NewProp_deathTriggered_MetaData) };
void Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_didCauseDmg_SetBit(void* Obj)
{
	((AClassShooterCharacter*)Obj)->didCauseDmg = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_didCauseDmg = { "didCauseDmg", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AClassShooterCharacter), &Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_didCauseDmg_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_didCauseDmg_MetaData), NewProp_didCauseDmg_MetaData) };
void Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_didGetKill_SetBit(void* Obj)
{
	((AClassShooterCharacter*)Obj)->didGetKill = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_didGetKill = { "didGetKill", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AClassShooterCharacter), &Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_didGetKill_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_didGetKill_MetaData), NewProp_didGetKill_MetaData) };
void Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_triggerScreenDmgEffect_SetBit(void* Obj)
{
	((AClassShooterCharacter*)Obj)->triggerScreenDmgEffect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_triggerScreenDmgEffect = { "triggerScreenDmgEffect", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AClassShooterCharacter), &Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_triggerScreenDmgEffect_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_triggerScreenDmgEffect_MetaData), NewProp_triggerScreenDmgEffect_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_deathExplosionVFX = { "deathExplosionVFX", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, deathExplosionVFX), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_deathExplosionVFX_MetaData), NewProp_deathExplosionVFX_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_baseBodyLocation = { "baseBodyLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, baseBodyLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_baseBodyLocation_MetaData), NewProp_baseBodyLocation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_playerWhoDamagedMe = { "playerWhoDamagedMe", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, playerWhoDamagedMe), Z_Construct_UClass_AClassShooterCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_playerWhoDamagedMe_MetaData), NewProp_playerWhoDamagedMe_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_movementComponent = { "movementComponent", nullptr, (EPropertyFlags)0x0020080000080028, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, movementComponent), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_movementComponent_MetaData), NewProp_movementComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AClassShooterCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_Mesh1P,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_FirstPersonCameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_SprintAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_ADSAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_ShootingAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_SwitchWeaponAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_ReloadWeaponAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_CrouchAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_Ability1Action,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_Ability2Action,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_UltimateAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_currentStates_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_currentStates_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_currentStates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_bodyMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_curHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_maxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_xSens,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_ySens,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_shotLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_weaponArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_weaponArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_backupWeaponArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_backupWeaponArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_curWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_weaponCopy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_weaponLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_targetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_targetRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_springRecoilVal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_sideMove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_mouseX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_mouseY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_handSwayRotator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_recoilTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_recoil,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_targetFov,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_startFovChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_originalCamPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_weaponWorldObj,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_knifeSwingLocations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_knifeSwingLocations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_isLeftSwing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_meleeLerp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_slashSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_originalBodyScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_curSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_curSpeedMulti,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_baseSpeedMulti,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_baseSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_jumpPow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_slidePow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_jumpAllowed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_isSprinting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_isADSing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_movementVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_baseGroundFriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_baseBrakingDeceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_baseGravity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_isClone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_shouldDestroyWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_ultimateTriggered,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_bobTimer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_bobSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_bobAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_amplitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_isMeleeHBOn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_knifeHitDetected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_isSwitchingAfterPickup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_deathTriggered,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_didCauseDmg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_didGetKill,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_triggerScreenDmgEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_deathExplosionVFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_baseBodyLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_playerWhoDamagedMe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_movementComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_LookAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AClassShooterCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AClassShooterCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_ClassShooter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AClassShooterCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AClassShooterCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UDamageable_NoRegister, (int32)VTABLE_OFFSET(AClassShooterCharacter, IDamageable), false },  // 468886777
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AClassShooterCharacter_Statics::ClassParams = {
	&AClassShooterCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AClassShooterCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AClassShooterCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AClassShooterCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AClassShooterCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AClassShooterCharacter()
{
	if (!Z_Registration_Info_UClass_AClassShooterCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AClassShooterCharacter.OuterSingleton, Z_Construct_UClass_AClassShooterCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AClassShooterCharacter.OuterSingleton;
}
template<> CLASSSHOOTER_API UClass* StaticClass<AClassShooterCharacter>()
{
	return AClassShooterCharacter::StaticClass();
}
void AClassShooterCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_currentStates(TEXT("currentStates"));
	static const FName Name_bodyMesh(TEXT("bodyMesh"));
	static const FName Name_curHealth(TEXT("curHealth"));
	static const FName Name_xSens(TEXT("xSens"));
	static const FName Name_ySens(TEXT("ySens"));
	static const FName Name_weaponArray(TEXT("weaponArray"));
	static const FName Name_backupWeaponArray(TEXT("backupWeaponArray"));
	static const FName Name_curWeapon(TEXT("curWeapon"));
	static const FName Name_weaponCopy(TEXT("weaponCopy"));
	static const FName Name_weaponLocation(TEXT("weaponLocation"));
	static const FName Name_targetLocation(TEXT("targetLocation"));
	static const FName Name_targetRotation(TEXT("targetRotation"));
	static const FName Name_targetFov(TEXT("targetFov"));
	static const FName Name_startFovChange(TEXT("startFovChange"));
	static const FName Name_originalCamPos(TEXT("originalCamPos"));
	static const FName Name_weaponWorldObj(TEXT("weaponWorldObj"));
	static const FName Name_knifeSwingLocations(TEXT("knifeSwingLocations"));
	static const FName Name_isLeftSwing(TEXT("isLeftSwing"));
	static const FName Name_meleeLerp(TEXT("meleeLerp"));
	static const FName Name_slashSpeed(TEXT("slashSpeed"));
	static const FName Name_originalBodyScale(TEXT("originalBodyScale"));
	static const FName Name_curSpeed(TEXT("curSpeed"));
	static const FName Name_curSpeedMulti(TEXT("curSpeedMulti"));
	static const FName Name_baseSpeedMulti(TEXT("baseSpeedMulti"));
	static const FName Name_baseSpeed(TEXT("baseSpeed"));
	static const FName Name_jumpPow(TEXT("jumpPow"));
	static const FName Name_slidePow(TEXT("slidePow"));
	static const FName Name_jumpAllowed(TEXT("jumpAllowed"));
	static const FName Name_isSprinting(TEXT("isSprinting"));
	static const FName Name_isADSing(TEXT("isADSing"));
	static const FName Name_movementVector(TEXT("movementVector"));
	static const FName Name_baseGroundFriction(TEXT("baseGroundFriction"));
	static const FName Name_baseBrakingDeceleration(TEXT("baseBrakingDeceleration"));
	static const FName Name_isClone(TEXT("isClone"));
	static const FName Name_ultimateTriggered(TEXT("ultimateTriggered"));
	static const FName Name_isMeleeHBOn(TEXT("isMeleeHBOn"));
	static const FName Name_knifeHitDetected(TEXT("knifeHitDetected"));
	static const FName Name_deathTriggered(TEXT("deathTriggered"));
	static const FName Name_didCauseDmg(TEXT("didCauseDmg"));
	static const FName Name_didGetKill(TEXT("didGetKill"));
	static const FName Name_triggerScreenDmgEffect(TEXT("triggerScreenDmgEffect"));
	static const FName Name_deathExplosionVFX(TEXT("deathExplosionVFX"));
	static const FName Name_playerWhoDamagedMe(TEXT("playerWhoDamagedMe"));
	static const FName Name_movementComponent(TEXT("movementComponent"));
	const bool bIsValid = true
		&& Name_currentStates == ClassReps[(int32)ENetFields_Private::currentStates].Property->GetFName()
		&& Name_bodyMesh == ClassReps[(int32)ENetFields_Private::bodyMesh].Property->GetFName()
		&& Name_curHealth == ClassReps[(int32)ENetFields_Private::curHealth].Property->GetFName()
		&& Name_xSens == ClassReps[(int32)ENetFields_Private::xSens].Property->GetFName()
		&& Name_ySens == ClassReps[(int32)ENetFields_Private::ySens].Property->GetFName()
		&& Name_weaponArray == ClassReps[(int32)ENetFields_Private::weaponArray].Property->GetFName()
		&& Name_backupWeaponArray == ClassReps[(int32)ENetFields_Private::backupWeaponArray].Property->GetFName()
		&& Name_curWeapon == ClassReps[(int32)ENetFields_Private::curWeapon].Property->GetFName()
		&& Name_weaponCopy == ClassReps[(int32)ENetFields_Private::weaponCopy].Property->GetFName()
		&& Name_weaponLocation == ClassReps[(int32)ENetFields_Private::weaponLocation].Property->GetFName()
		&& Name_targetLocation == ClassReps[(int32)ENetFields_Private::targetLocation].Property->GetFName()
		&& Name_targetRotation == ClassReps[(int32)ENetFields_Private::targetRotation].Property->GetFName()
		&& Name_targetFov == ClassReps[(int32)ENetFields_Private::targetFov].Property->GetFName()
		&& Name_startFovChange == ClassReps[(int32)ENetFields_Private::startFovChange].Property->GetFName()
		&& Name_originalCamPos == ClassReps[(int32)ENetFields_Private::originalCamPos].Property->GetFName()
		&& Name_weaponWorldObj == ClassReps[(int32)ENetFields_Private::weaponWorldObj].Property->GetFName()
		&& Name_knifeSwingLocations == ClassReps[(int32)ENetFields_Private::knifeSwingLocations].Property->GetFName()
		&& Name_isLeftSwing == ClassReps[(int32)ENetFields_Private::isLeftSwing].Property->GetFName()
		&& Name_meleeLerp == ClassReps[(int32)ENetFields_Private::meleeLerp].Property->GetFName()
		&& Name_slashSpeed == ClassReps[(int32)ENetFields_Private::slashSpeed].Property->GetFName()
		&& Name_originalBodyScale == ClassReps[(int32)ENetFields_Private::originalBodyScale].Property->GetFName()
		&& Name_curSpeed == ClassReps[(int32)ENetFields_Private::curSpeed].Property->GetFName()
		&& Name_curSpeedMulti == ClassReps[(int32)ENetFields_Private::curSpeedMulti].Property->GetFName()
		&& Name_baseSpeedMulti == ClassReps[(int32)ENetFields_Private::baseSpeedMulti].Property->GetFName()
		&& Name_baseSpeed == ClassReps[(int32)ENetFields_Private::baseSpeed].Property->GetFName()
		&& Name_jumpPow == ClassReps[(int32)ENetFields_Private::jumpPow].Property->GetFName()
		&& Name_slidePow == ClassReps[(int32)ENetFields_Private::slidePow].Property->GetFName()
		&& Name_jumpAllowed == ClassReps[(int32)ENetFields_Private::jumpAllowed].Property->GetFName()
		&& Name_isSprinting == ClassReps[(int32)ENetFields_Private::isSprinting].Property->GetFName()
		&& Name_isADSing == ClassReps[(int32)ENetFields_Private::isADSing].Property->GetFName()
		&& Name_movementVector == ClassReps[(int32)ENetFields_Private::movementVector].Property->GetFName()
		&& Name_baseGroundFriction == ClassReps[(int32)ENetFields_Private::baseGroundFriction].Property->GetFName()
		&& Name_baseBrakingDeceleration == ClassReps[(int32)ENetFields_Private::baseBrakingDeceleration].Property->GetFName()
		&& Name_isClone == ClassReps[(int32)ENetFields_Private::isClone].Property->GetFName()
		&& Name_ultimateTriggered == ClassReps[(int32)ENetFields_Private::ultimateTriggered].Property->GetFName()
		&& Name_isMeleeHBOn == ClassReps[(int32)ENetFields_Private::isMeleeHBOn].Property->GetFName()
		&& Name_knifeHitDetected == ClassReps[(int32)ENetFields_Private::knifeHitDetected].Property->GetFName()
		&& Name_deathTriggered == ClassReps[(int32)ENetFields_Private::deathTriggered].Property->GetFName()
		&& Name_didCauseDmg == ClassReps[(int32)ENetFields_Private::didCauseDmg].Property->GetFName()
		&& Name_didGetKill == ClassReps[(int32)ENetFields_Private::didGetKill].Property->GetFName()
		&& Name_triggerScreenDmgEffect == ClassReps[(int32)ENetFields_Private::triggerScreenDmgEffect].Property->GetFName()
		&& Name_deathExplosionVFX == ClassReps[(int32)ENetFields_Private::deathExplosionVFX].Property->GetFName()
		&& Name_playerWhoDamagedMe == ClassReps[(int32)ENetFields_Private::playerWhoDamagedMe].Property->GetFName()
		&& Name_movementComponent == ClassReps[(int32)ENetFields_Private::movementComponent].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AClassShooterCharacter"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AClassShooterCharacter);
AClassShooterCharacter::~AClassShooterCharacter() {}
// End Class AClassShooterCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_ClassShooterCharacter_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ PlayerGameState_StaticEnum, TEXT("PlayerGameState"), &Z_Registration_Info_UEnum_PlayerGameState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 436607797U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AClassShooterCharacter, AClassShooterCharacter::StaticClass, TEXT("AClassShooterCharacter"), &Z_Registration_Info_UClass_AClassShooterCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AClassShooterCharacter), 3905809278U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_ClassShooterCharacter_h_3054041613(TEXT("/Script/ClassShooter"),
	Z_CompiledInDeferFile_FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_ClassShooterCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_ClassShooterCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_ClassShooterCharacter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_ClassShooterCharacter_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
