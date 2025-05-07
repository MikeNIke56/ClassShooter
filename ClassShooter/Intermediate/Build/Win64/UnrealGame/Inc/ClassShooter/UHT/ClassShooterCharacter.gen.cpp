// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClassShooter/ClassShooterCharacter.h"
#include "EnhancedInput/Public/InputActionValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClassShooterCharacter() {}

// Begin Cross Module References
CLASSSHOOTER_API UClass* Z_Construct_UClass_AClassShooterCharacter();
CLASSSHOOTER_API UClass* Z_Construct_UClass_AClassShooterCharacter_NoRegister();
CLASSSHOOTER_API UClass* Z_Construct_UClass_AWeaponBase_NoRegister();
CLASSSHOOTER_API UClass* Z_Construct_UClass_UDamageable_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_ClassShooter();
// End Cross Module References

// Begin Class AClassShooterCharacter Function HandleADSCurWeapon
struct Z_Construct_UFunction_AClassShooterCharacter_HandleADSCurWeapon_Statics
{
	struct ClassShooterCharacter_eventHandleADSCurWeapon_Parms
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AClassShooterCharacter_HandleADSCurWeapon_Statics::NewProp_weapon = { "weapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClassShooterCharacter_eventHandleADSCurWeapon_Parms, weapon), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AClassShooterCharacter_HandleADSCurWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AClassShooterCharacter_HandleADSCurWeapon_Statics::NewProp_weapon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_HandleADSCurWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_HandleADSCurWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "HandleADSCurWeapon", nullptr, nullptr, Z_Construct_UFunction_AClassShooterCharacter_HandleADSCurWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_HandleADSCurWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_AClassShooterCharacter_HandleADSCurWeapon_Statics::ClassShooterCharacter_eventHandleADSCurWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_HandleADSCurWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_HandleADSCurWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AClassShooterCharacter_HandleADSCurWeapon_Statics::ClassShooterCharacter_eventHandleADSCurWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AClassShooterCharacter_HandleADSCurWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_HandleADSCurWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execHandleADSCurWeapon)
{
	P_GET_OBJECT(AWeaponBase,Z_Param_weapon);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleADSCurWeapon(Z_Param_weapon);
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function HandleADSCurWeapon

// Begin Class AClassShooterCharacter Function HandleEquipWeapon
struct Z_Construct_UFunction_AClassShooterCharacter_HandleEquipWeapon_Statics
{
	struct ClassShooterCharacter_eventHandleEquipWeapon_Parms
	{
		AWeaponBase* weapon;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon Functions" },
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
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AClassShooterCharacter_HandleEquipWeapon_Statics::NewProp_weapon = { "weapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClassShooterCharacter_eventHandleEquipWeapon_Parms, weapon), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AClassShooterCharacter_HandleEquipWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AClassShooterCharacter_HandleEquipWeapon_Statics::NewProp_weapon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_HandleEquipWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_HandleEquipWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "HandleEquipWeapon", nullptr, nullptr, Z_Construct_UFunction_AClassShooterCharacter_HandleEquipWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_HandleEquipWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_AClassShooterCharacter_HandleEquipWeapon_Statics::ClassShooterCharacter_eventHandleEquipWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_HandleEquipWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_HandleEquipWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AClassShooterCharacter_HandleEquipWeapon_Statics::ClassShooterCharacter_eventHandleEquipWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AClassShooterCharacter_HandleEquipWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_HandleEquipWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execHandleEquipWeapon)
{
	P_GET_OBJECT(AWeaponBase,Z_Param_weapon);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleEquipWeapon(Z_Param_weapon);
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function HandleEquipWeapon

// Begin Class AClassShooterCharacter Function HandleRecoil
struct Z_Construct_UFunction_AClassShooterCharacter_HandleRecoil_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Reload and Recoil\n" },
#endif
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reload and Recoil" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_HandleRecoil_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "HandleRecoil", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_HandleRecoil_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_HandleRecoil_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AClassShooterCharacter_HandleRecoil()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_HandleRecoil_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execHandleRecoil)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleRecoil();
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function HandleRecoil

// Begin Class AClassShooterCharacter Function HandleShowCurWeapon
struct Z_Construct_UFunction_AClassShooterCharacter_HandleShowCurWeapon_Statics
{
	struct ClassShooterCharacter_eventHandleShowCurWeapon_Parms
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AClassShooterCharacter_HandleShowCurWeapon_Statics::NewProp_weapon = { "weapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClassShooterCharacter_eventHandleShowCurWeapon_Parms, weapon), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AClassShooterCharacter_HandleShowCurWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AClassShooterCharacter_HandleShowCurWeapon_Statics::NewProp_weapon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_HandleShowCurWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_HandleShowCurWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "HandleShowCurWeapon", nullptr, nullptr, Z_Construct_UFunction_AClassShooterCharacter_HandleShowCurWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_HandleShowCurWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_AClassShooterCharacter_HandleShowCurWeapon_Statics::ClassShooterCharacter_eventHandleShowCurWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_HandleShowCurWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_HandleShowCurWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AClassShooterCharacter_HandleShowCurWeapon_Statics::ClassShooterCharacter_eventHandleShowCurWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AClassShooterCharacter_HandleShowCurWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_HandleShowCurWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execHandleShowCurWeapon)
{
	P_GET_OBJECT(AWeaponBase,Z_Param_weapon);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleShowCurWeapon(Z_Param_weapon);
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function HandleShowCurWeapon

// Begin Class AClassShooterCharacter Function HandleStowWeapon
struct Z_Construct_UFunction_AClassShooterCharacter_HandleStowWeapon_Statics
{
	struct ClassShooterCharacter_eventHandleStowWeapon_Parms
	{
		AWeaponBase* weapon;
		FName socketName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Stowing weapons\n" },
#endif
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stowing weapons" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_socketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_weapon;
	static const UECodeGen_Private::FNamePropertyParams NewProp_socketName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AClassShooterCharacter_HandleStowWeapon_Statics::NewProp_weapon = { "weapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClassShooterCharacter_eventHandleStowWeapon_Parms, weapon), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AClassShooterCharacter_HandleStowWeapon_Statics::NewProp_socketName = { "socketName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClassShooterCharacter_eventHandleStowWeapon_Parms, socketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_socketName_MetaData), NewProp_socketName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AClassShooterCharacter_HandleStowWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AClassShooterCharacter_HandleStowWeapon_Statics::NewProp_weapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AClassShooterCharacter_HandleStowWeapon_Statics::NewProp_socketName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_HandleStowWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_HandleStowWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "HandleStowWeapon", nullptr, nullptr, Z_Construct_UFunction_AClassShooterCharacter_HandleStowWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_HandleStowWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_AClassShooterCharacter_HandleStowWeapon_Statics::ClassShooterCharacter_eventHandleStowWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_HandleStowWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_HandleStowWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AClassShooterCharacter_HandleStowWeapon_Statics::ClassShooterCharacter_eventHandleStowWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AClassShooterCharacter_HandleStowWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_HandleStowWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execHandleStowWeapon)
{
	P_GET_OBJECT(AWeaponBase,Z_Param_weapon);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_socketName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleStowWeapon(Z_Param_weapon,Z_Param_Out_socketName);
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function HandleStowWeapon

// Begin Class AClassShooterCharacter Function HandleSwitchWeapon
struct Z_Construct_UFunction_AClassShooterCharacter_HandleSwitchWeapon_Statics
{
	struct ClassShooterCharacter_eventHandleSwitchWeapon_Parms
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AClassShooterCharacter_HandleSwitchWeapon_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClassShooterCharacter_eventHandleSwitchWeapon_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AClassShooterCharacter_HandleSwitchWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AClassShooterCharacter_HandleSwitchWeapon_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_HandleSwitchWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_HandleSwitchWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "HandleSwitchWeapon", nullptr, nullptr, Z_Construct_UFunction_AClassShooterCharacter_HandleSwitchWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_HandleSwitchWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_AClassShooterCharacter_HandleSwitchWeapon_Statics::ClassShooterCharacter_eventHandleSwitchWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_HandleSwitchWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_HandleSwitchWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AClassShooterCharacter_HandleSwitchWeapon_Statics::ClassShooterCharacter_eventHandleSwitchWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AClassShooterCharacter_HandleSwitchWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_HandleSwitchWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execHandleSwitchWeapon)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleSwitchWeapon(Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function HandleSwitchWeapon

// Begin Class AClassShooterCharacter Function PickupWeapon
struct Z_Construct_UFunction_AClassShooterCharacter_PickupWeapon_Statics
{
	struct ClassShooterCharacter_eventPickupWeapon_Parms
	{
		AWeaponBase* weapon;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon Functions" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_weapon;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AClassShooterCharacter_PickupWeapon_Statics::NewProp_weapon = { "weapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClassShooterCharacter_eventPickupWeapon_Parms, weapon), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AClassShooterCharacter_PickupWeapon_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ClassShooterCharacter_eventPickupWeapon_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AClassShooterCharacter_PickupWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ClassShooterCharacter_eventPickupWeapon_Parms), &Z_Construct_UFunction_AClassShooterCharacter_PickupWeapon_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AClassShooterCharacter_PickupWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AClassShooterCharacter_PickupWeapon_Statics::NewProp_weapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AClassShooterCharacter_PickupWeapon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_PickupWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_PickupWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "PickupWeapon", nullptr, nullptr, Z_Construct_UFunction_AClassShooterCharacter_PickupWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_PickupWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_AClassShooterCharacter_PickupWeapon_Statics::ClassShooterCharacter_eventPickupWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_PickupWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_PickupWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AClassShooterCharacter_PickupWeapon_Statics::ClassShooterCharacter_eventPickupWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AClassShooterCharacter_PickupWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_PickupWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execPickupWeapon)
{
	P_GET_OBJECT(AWeaponBase,Z_Param_weapon);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PickupWeapon(Z_Param_weapon);
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function PickupWeapon

// Begin Class AClassShooterCharacter Function ServerADS
static FName NAME_AClassShooterCharacter_ServerADS = FName(TEXT("ServerADS"));
void AClassShooterCharacter::ServerADS()
{
	ProcessEvent(FindFunctionChecked(NAME_AClassShooterCharacter_ServerADS),NULL);
}
struct Z_Construct_UFunction_AClassShooterCharacter_ServerADS_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_ServerADS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "ServerADS", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_ServerADS_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_ServerADS_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AClassShooterCharacter_ServerADS()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_ServerADS_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execServerADS)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerADS_Implementation();
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function ServerADS

// Begin Class AClassShooterCharacter Function ServerADSCurWeapon
struct ClassShooterCharacter_eventServerADSCurWeapon_Parms
{
	AWeaponBase* weapon;
};
static FName NAME_AClassShooterCharacter_ServerADSCurWeapon = FName(TEXT("ServerADSCurWeapon"));
void AClassShooterCharacter::ServerADSCurWeapon(AWeaponBase* weapon)
{
	ClassShooterCharacter_eventServerADSCurWeapon_Parms Parms;
	Parms.weapon=weapon;
	ProcessEvent(FindFunctionChecked(NAME_AClassShooterCharacter_ServerADSCurWeapon),&Parms);
}
struct Z_Construct_UFunction_AClassShooterCharacter_ServerADSCurWeapon_Statics
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AClassShooterCharacter_ServerADSCurWeapon_Statics::NewProp_weapon = { "weapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClassShooterCharacter_eventServerADSCurWeapon_Parms, weapon), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AClassShooterCharacter_ServerADSCurWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AClassShooterCharacter_ServerADSCurWeapon_Statics::NewProp_weapon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_ServerADSCurWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_ServerADSCurWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "ServerADSCurWeapon", nullptr, nullptr, Z_Construct_UFunction_AClassShooterCharacter_ServerADSCurWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_ServerADSCurWeapon_Statics::PropPointers), sizeof(ClassShooterCharacter_eventServerADSCurWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_ServerADSCurWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_ServerADSCurWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(ClassShooterCharacter_eventServerADSCurWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AClassShooterCharacter_ServerADSCurWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_ServerADSCurWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execServerADSCurWeapon)
{
	P_GET_OBJECT(AWeaponBase,Z_Param_weapon);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerADSCurWeapon_Implementation(Z_Param_weapon);
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function ServerADSCurWeapon

// Begin Class AClassShooterCharacter Function ServerCrouch
static FName NAME_AClassShooterCharacter_ServerCrouch = FName(TEXT("ServerCrouch"));
void AClassShooterCharacter::ServerCrouch()
{
	ProcessEvent(FindFunctionChecked(NAME_AClassShooterCharacter_ServerCrouch),NULL);
}
struct Z_Construct_UFunction_AClassShooterCharacter_ServerCrouch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_ServerCrouch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "ServerCrouch", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_ServerCrouch_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_ServerCrouch_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AClassShooterCharacter_ServerCrouch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_ServerCrouch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execServerCrouch)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerCrouch_Implementation();
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function ServerCrouch

// Begin Class AClassShooterCharacter Function ServerDie
static FName NAME_AClassShooterCharacter_ServerDie = FName(TEXT("ServerDie"));
void AClassShooterCharacter::ServerDie()
{
	ProcessEvent(FindFunctionChecked(NAME_AClassShooterCharacter_ServerDie),NULL);
}
struct Z_Construct_UFunction_AClassShooterCharacter_ServerDie_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_ServerDie_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "ServerDie", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_ServerDie_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_ServerDie_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AClassShooterCharacter_ServerDie()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_ServerDie_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execServerDie)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerDie_Implementation();
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function ServerDie

// Begin Class AClassShooterCharacter Function ServerDropWeapon
static FName NAME_AClassShooterCharacter_ServerDropWeapon = FName(TEXT("ServerDropWeapon"));
void AClassShooterCharacter::ServerDropWeapon()
{
	ProcessEvent(FindFunctionChecked(NAME_AClassShooterCharacter_ServerDropWeapon),NULL);
}
struct Z_Construct_UFunction_AClassShooterCharacter_ServerDropWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_ServerDropWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "ServerDropWeapon", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_ServerDropWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_ServerDropWeapon_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AClassShooterCharacter_ServerDropWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_ServerDropWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execServerDropWeapon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerDropWeapon_Implementation();
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function ServerDropWeapon

// Begin Class AClassShooterCharacter Function ServerEquipWeapon
struct ClassShooterCharacter_eventServerEquipWeapon_Parms
{
	AWeaponBase* weapon;
};
static FName NAME_AClassShooterCharacter_ServerEquipWeapon = FName(TEXT("ServerEquipWeapon"));
void AClassShooterCharacter::ServerEquipWeapon(AWeaponBase* weapon)
{
	ClassShooterCharacter_eventServerEquipWeapon_Parms Parms;
	Parms.weapon=weapon;
	ProcessEvent(FindFunctionChecked(NAME_AClassShooterCharacter_ServerEquipWeapon),&Parms);
}
struct Z_Construct_UFunction_AClassShooterCharacter_ServerEquipWeapon_Statics
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AClassShooterCharacter_ServerEquipWeapon_Statics::NewProp_weapon = { "weapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClassShooterCharacter_eventServerEquipWeapon_Parms, weapon), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AClassShooterCharacter_ServerEquipWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AClassShooterCharacter_ServerEquipWeapon_Statics::NewProp_weapon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_ServerEquipWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_ServerEquipWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "ServerEquipWeapon", nullptr, nullptr, Z_Construct_UFunction_AClassShooterCharacter_ServerEquipWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_ServerEquipWeapon_Statics::PropPointers), sizeof(ClassShooterCharacter_eventServerEquipWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_ServerEquipWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_ServerEquipWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(ClassShooterCharacter_eventServerEquipWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AClassShooterCharacter_ServerEquipWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_ServerEquipWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execServerEquipWeapon)
{
	P_GET_OBJECT(AWeaponBase,Z_Param_weapon);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerEquipWeapon_Implementation(Z_Param_weapon);
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function ServerEquipWeapon

// Begin Class AClassShooterCharacter Function ServerLook
struct ClassShooterCharacter_eventServerLook_Parms
{
	FInputActionValue Value;
};
static FName NAME_AClassShooterCharacter_ServerLook = FName(TEXT("ServerLook"));
void AClassShooterCharacter::ServerLook(FInputActionValue const& Value)
{
	ClassShooterCharacter_eventServerLook_Parms Parms;
	Parms.Value=Value;
	ProcessEvent(FindFunctionChecked(NAME_AClassShooterCharacter_ServerLook),&Parms);
}
struct Z_Construct_UFunction_AClassShooterCharacter_ServerLook_Statics
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AClassShooterCharacter_ServerLook_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClassShooterCharacter_eventServerLook_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AClassShooterCharacter_ServerLook_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AClassShooterCharacter_ServerLook_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_ServerLook_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_ServerLook_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "ServerLook", nullptr, nullptr, Z_Construct_UFunction_AClassShooterCharacter_ServerLook_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_ServerLook_Statics::PropPointers), sizeof(ClassShooterCharacter_eventServerLook_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_ServerLook_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_ServerLook_Statics::Function_MetaDataParams) };
static_assert(sizeof(ClassShooterCharacter_eventServerLook_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AClassShooterCharacter_ServerLook()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_ServerLook_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execServerLook)
{
	P_GET_STRUCT(FInputActionValue,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerLook_Implementation(Z_Param_Value);
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function ServerLook

// Begin Class AClassShooterCharacter Function ServerMelee
static FName NAME_AClassShooterCharacter_ServerMelee = FName(TEXT("ServerMelee"));
void AClassShooterCharacter::ServerMelee()
{
	ProcessEvent(FindFunctionChecked(NAME_AClassShooterCharacter_ServerMelee),NULL);
}
struct Z_Construct_UFunction_AClassShooterCharacter_ServerMelee_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_ServerMelee_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "ServerMelee", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_ServerMelee_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_ServerMelee_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AClassShooterCharacter_ServerMelee()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_ServerMelee_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execServerMelee)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerMelee_Implementation();
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function ServerMelee

// Begin Class AClassShooterCharacter Function ServerRecoil
static FName NAME_AClassShooterCharacter_ServerRecoil = FName(TEXT("ServerRecoil"));
void AClassShooterCharacter::ServerRecoil()
{
	ProcessEvent(FindFunctionChecked(NAME_AClassShooterCharacter_ServerRecoil),NULL);
}
struct Z_Construct_UFunction_AClassShooterCharacter_ServerRecoil_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_ServerRecoil_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "ServerRecoil", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_ServerRecoil_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_ServerRecoil_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AClassShooterCharacter_ServerRecoil()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_ServerRecoil_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execServerRecoil)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerRecoil_Implementation();
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function ServerRecoil

// Begin Class AClassShooterCharacter Function ServerReload
static FName NAME_AClassShooterCharacter_ServerReload = FName(TEXT("ServerReload"));
void AClassShooterCharacter::ServerReload()
{
	ProcessEvent(FindFunctionChecked(NAME_AClassShooterCharacter_ServerReload),NULL);
}
struct Z_Construct_UFunction_AClassShooterCharacter_ServerReload_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_ServerReload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "ServerReload", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_ServerReload_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_ServerReload_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AClassShooterCharacter_ServerReload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_ServerReload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execServerReload)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerReload_Implementation();
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function ServerReload

// Begin Class AClassShooterCharacter Function ServerResetMovement
static FName NAME_AClassShooterCharacter_ServerResetMovement = FName(TEXT("ServerResetMovement"));
void AClassShooterCharacter::ServerResetMovement()
{
	ProcessEvent(FindFunctionChecked(NAME_AClassShooterCharacter_ServerResetMovement),NULL);
}
struct Z_Construct_UFunction_AClassShooterCharacter_ServerResetMovement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_ServerResetMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "ServerResetMovement", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_ServerResetMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_ServerResetMovement_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AClassShooterCharacter_ServerResetMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_ServerResetMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execServerResetMovement)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerResetMovement_Implementation();
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function ServerResetMovement

// Begin Class AClassShooterCharacter Function ServerRestoreCurWeapons
static FName NAME_AClassShooterCharacter_ServerRestoreCurWeapons = FName(TEXT("ServerRestoreCurWeapons"));
void AClassShooterCharacter::ServerRestoreCurWeapons()
{
	ProcessEvent(FindFunctionChecked(NAME_AClassShooterCharacter_ServerRestoreCurWeapons),NULL);
}
struct Z_Construct_UFunction_AClassShooterCharacter_ServerRestoreCurWeapons_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_ServerRestoreCurWeapons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "ServerRestoreCurWeapons", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_ServerRestoreCurWeapons_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_ServerRestoreCurWeapons_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AClassShooterCharacter_ServerRestoreCurWeapons()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_ServerRestoreCurWeapons_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execServerRestoreCurWeapons)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerRestoreCurWeapons_Implementation();
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function ServerRestoreCurWeapons

// Begin Class AClassShooterCharacter Function ServerSaveCurWeapons
static FName NAME_AClassShooterCharacter_ServerSaveCurWeapons = FName(TEXT("ServerSaveCurWeapons"));
void AClassShooterCharacter::ServerSaveCurWeapons()
{
	ProcessEvent(FindFunctionChecked(NAME_AClassShooterCharacter_ServerSaveCurWeapons),NULL);
}
struct Z_Construct_UFunction_AClassShooterCharacter_ServerSaveCurWeapons_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_ServerSaveCurWeapons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "ServerSaveCurWeapons", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_ServerSaveCurWeapons_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_ServerSaveCurWeapons_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AClassShooterCharacter_ServerSaveCurWeapons()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_ServerSaveCurWeapons_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execServerSaveCurWeapons)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerSaveCurWeapons_Implementation();
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function ServerSaveCurWeapons

// Begin Class AClassShooterCharacter Function ServerShoot
static FName NAME_AClassShooterCharacter_ServerShoot = FName(TEXT("ServerShoot"));
void AClassShooterCharacter::ServerShoot()
{
	ProcessEvent(FindFunctionChecked(NAME_AClassShooterCharacter_ServerShoot),NULL);
}
struct Z_Construct_UFunction_AClassShooterCharacter_ServerShoot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_ServerShoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "ServerShoot", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_ServerShoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_ServerShoot_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AClassShooterCharacter_ServerShoot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_ServerShoot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execServerShoot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerShoot_Implementation();
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function ServerShoot

// Begin Class AClassShooterCharacter Function ServerShowCurWeapon
struct ClassShooterCharacter_eventServerShowCurWeapon_Parms
{
	AWeaponBase* weapon;
};
static FName NAME_AClassShooterCharacter_ServerShowCurWeapon = FName(TEXT("ServerShowCurWeapon"));
void AClassShooterCharacter::ServerShowCurWeapon(AWeaponBase* weapon)
{
	ClassShooterCharacter_eventServerShowCurWeapon_Parms Parms;
	Parms.weapon=weapon;
	ProcessEvent(FindFunctionChecked(NAME_AClassShooterCharacter_ServerShowCurWeapon),&Parms);
}
struct Z_Construct_UFunction_AClassShooterCharacter_ServerShowCurWeapon_Statics
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AClassShooterCharacter_ServerShowCurWeapon_Statics::NewProp_weapon = { "weapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClassShooterCharacter_eventServerShowCurWeapon_Parms, weapon), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AClassShooterCharacter_ServerShowCurWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AClassShooterCharacter_ServerShowCurWeapon_Statics::NewProp_weapon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_ServerShowCurWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_ServerShowCurWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "ServerShowCurWeapon", nullptr, nullptr, Z_Construct_UFunction_AClassShooterCharacter_ServerShowCurWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_ServerShowCurWeapon_Statics::PropPointers), sizeof(ClassShooterCharacter_eventServerShowCurWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_ServerShowCurWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_ServerShowCurWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(ClassShooterCharacter_eventServerShowCurWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AClassShooterCharacter_ServerShowCurWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_ServerShowCurWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execServerShowCurWeapon)
{
	P_GET_OBJECT(AWeaponBase,Z_Param_weapon);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerShowCurWeapon_Implementation(Z_Param_weapon);
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function ServerShowCurWeapon

// Begin Class AClassShooterCharacter Function ServerSlide
static FName NAME_AClassShooterCharacter_ServerSlide = FName(TEXT("ServerSlide"));
void AClassShooterCharacter::ServerSlide()
{
	ProcessEvent(FindFunctionChecked(NAME_AClassShooterCharacter_ServerSlide),NULL);
}
struct Z_Construct_UFunction_AClassShooterCharacter_ServerSlide_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_ServerSlide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "ServerSlide", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_ServerSlide_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_ServerSlide_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AClassShooterCharacter_ServerSlide()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_ServerSlide_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execServerSlide)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerSlide_Implementation();
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function ServerSlide

// Begin Class AClassShooterCharacter Function ServerStartAbility1
static FName NAME_AClassShooterCharacter_ServerStartAbility1 = FName(TEXT("ServerStartAbility1"));
void AClassShooterCharacter::ServerStartAbility1()
{
	ProcessEvent(FindFunctionChecked(NAME_AClassShooterCharacter_ServerStartAbility1),NULL);
}
struct Z_Construct_UFunction_AClassShooterCharacter_ServerStartAbility1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_ServerStartAbility1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "ServerStartAbility1", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_ServerStartAbility1_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_ServerStartAbility1_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AClassShooterCharacter_ServerStartAbility1()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_ServerStartAbility1_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execServerStartAbility1)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerStartAbility1_Implementation();
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function ServerStartAbility1

// Begin Class AClassShooterCharacter Function ServerStartAbility2
static FName NAME_AClassShooterCharacter_ServerStartAbility2 = FName(TEXT("ServerStartAbility2"));
void AClassShooterCharacter::ServerStartAbility2()
{
	ProcessEvent(FindFunctionChecked(NAME_AClassShooterCharacter_ServerStartAbility2),NULL);
}
struct Z_Construct_UFunction_AClassShooterCharacter_ServerStartAbility2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_ServerStartAbility2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "ServerStartAbility2", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_ServerStartAbility2_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_ServerStartAbility2_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AClassShooterCharacter_ServerStartAbility2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_ServerStartAbility2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execServerStartAbility2)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerStartAbility2_Implementation();
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function ServerStartAbility2

// Begin Class AClassShooterCharacter Function ServerStartCrouch
static FName NAME_AClassShooterCharacter_ServerStartCrouch = FName(TEXT("ServerStartCrouch"));
void AClassShooterCharacter::ServerStartCrouch()
{
	ProcessEvent(FindFunctionChecked(NAME_AClassShooterCharacter_ServerStartCrouch),NULL);
}
struct Z_Construct_UFunction_AClassShooterCharacter_ServerStartCrouch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_ServerStartCrouch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "ServerStartCrouch", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_ServerStartCrouch_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_ServerStartCrouch_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AClassShooterCharacter_ServerStartCrouch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_ServerStartCrouch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execServerStartCrouch)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerStartCrouch_Implementation();
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function ServerStartCrouch

// Begin Class AClassShooterCharacter Function ServerStartShooting
static FName NAME_AClassShooterCharacter_ServerStartShooting = FName(TEXT("ServerStartShooting"));
void AClassShooterCharacter::ServerStartShooting()
{
	ProcessEvent(FindFunctionChecked(NAME_AClassShooterCharacter_ServerStartShooting),NULL);
}
struct Z_Construct_UFunction_AClassShooterCharacter_ServerStartShooting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_ServerStartShooting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "ServerStartShooting", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_ServerStartShooting_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_ServerStartShooting_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AClassShooterCharacter_ServerStartShooting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_ServerStartShooting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execServerStartShooting)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerStartShooting_Implementation();
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function ServerStartShooting

// Begin Class AClassShooterCharacter Function ServerStartUltimate
static FName NAME_AClassShooterCharacter_ServerStartUltimate = FName(TEXT("ServerStartUltimate"));
void AClassShooterCharacter::ServerStartUltimate()
{
	ProcessEvent(FindFunctionChecked(NAME_AClassShooterCharacter_ServerStartUltimate),NULL);
}
struct Z_Construct_UFunction_AClassShooterCharacter_ServerStartUltimate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_ServerStartUltimate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "ServerStartUltimate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_ServerStartUltimate_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_ServerStartUltimate_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AClassShooterCharacter_ServerStartUltimate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_ServerStartUltimate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execServerStartUltimate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerStartUltimate_Implementation();
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function ServerStartUltimate

// Begin Class AClassShooterCharacter Function ServerStopAbility1
static FName NAME_AClassShooterCharacter_ServerStopAbility1 = FName(TEXT("ServerStopAbility1"));
void AClassShooterCharacter::ServerStopAbility1()
{
	ProcessEvent(FindFunctionChecked(NAME_AClassShooterCharacter_ServerStopAbility1),NULL);
}
struct Z_Construct_UFunction_AClassShooterCharacter_ServerStopAbility1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_ServerStopAbility1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "ServerStopAbility1", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_ServerStopAbility1_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_ServerStopAbility1_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AClassShooterCharacter_ServerStopAbility1()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_ServerStopAbility1_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execServerStopAbility1)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerStopAbility1_Implementation();
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function ServerStopAbility1

// Begin Class AClassShooterCharacter Function ServerStopAbility2
static FName NAME_AClassShooterCharacter_ServerStopAbility2 = FName(TEXT("ServerStopAbility2"));
void AClassShooterCharacter::ServerStopAbility2()
{
	ProcessEvent(FindFunctionChecked(NAME_AClassShooterCharacter_ServerStopAbility2),NULL);
}
struct Z_Construct_UFunction_AClassShooterCharacter_ServerStopAbility2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_ServerStopAbility2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "ServerStopAbility2", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_ServerStopAbility2_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_ServerStopAbility2_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AClassShooterCharacter_ServerStopAbility2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_ServerStopAbility2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execServerStopAbility2)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerStopAbility2_Implementation();
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function ServerStopAbility2

// Begin Class AClassShooterCharacter Function ServerStopADS
static FName NAME_AClassShooterCharacter_ServerStopADS = FName(TEXT("ServerStopADS"));
void AClassShooterCharacter::ServerStopADS()
{
	ProcessEvent(FindFunctionChecked(NAME_AClassShooterCharacter_ServerStopADS),NULL);
}
struct Z_Construct_UFunction_AClassShooterCharacter_ServerStopADS_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_ServerStopADS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "ServerStopADS", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_ServerStopADS_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_ServerStopADS_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AClassShooterCharacter_ServerStopADS()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_ServerStopADS_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execServerStopADS)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerStopADS_Implementation();
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function ServerStopADS

// Begin Class AClassShooterCharacter Function ServerStopCrouching
static FName NAME_AClassShooterCharacter_ServerStopCrouching = FName(TEXT("ServerStopCrouching"));
void AClassShooterCharacter::ServerStopCrouching()
{
	ProcessEvent(FindFunctionChecked(NAME_AClassShooterCharacter_ServerStopCrouching),NULL);
}
struct Z_Construct_UFunction_AClassShooterCharacter_ServerStopCrouching_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_ServerStopCrouching_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "ServerStopCrouching", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_ServerStopCrouching_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_ServerStopCrouching_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AClassShooterCharacter_ServerStopCrouching()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_ServerStopCrouching_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execServerStopCrouching)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerStopCrouching_Implementation();
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function ServerStopCrouching

// Begin Class AClassShooterCharacter Function ServerStopShooting
static FName NAME_AClassShooterCharacter_ServerStopShooting = FName(TEXT("ServerStopShooting"));
void AClassShooterCharacter::ServerStopShooting()
{
	ProcessEvent(FindFunctionChecked(NAME_AClassShooterCharacter_ServerStopShooting),NULL);
}
struct Z_Construct_UFunction_AClassShooterCharacter_ServerStopShooting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_ServerStopShooting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "ServerStopShooting", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_ServerStopShooting_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_ServerStopShooting_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AClassShooterCharacter_ServerStopShooting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_ServerStopShooting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execServerStopShooting)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerStopShooting_Implementation();
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function ServerStopShooting

// Begin Class AClassShooterCharacter Function ServerStopSliding
static FName NAME_AClassShooterCharacter_ServerStopSliding = FName(TEXT("ServerStopSliding"));
void AClassShooterCharacter::ServerStopSliding()
{
	ProcessEvent(FindFunctionChecked(NAME_AClassShooterCharacter_ServerStopSliding),NULL);
}
struct Z_Construct_UFunction_AClassShooterCharacter_ServerStopSliding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_ServerStopSliding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "ServerStopSliding", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_ServerStopSliding_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_ServerStopSliding_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AClassShooterCharacter_ServerStopSliding()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_ServerStopSliding_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execServerStopSliding)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerStopSliding_Implementation();
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function ServerStopSliding

// Begin Class AClassShooterCharacter Function ServerStopUltimate
static FName NAME_AClassShooterCharacter_ServerStopUltimate = FName(TEXT("ServerStopUltimate"));
void AClassShooterCharacter::ServerStopUltimate()
{
	ProcessEvent(FindFunctionChecked(NAME_AClassShooterCharacter_ServerStopUltimate),NULL);
}
struct Z_Construct_UFunction_AClassShooterCharacter_ServerStopUltimate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_ServerStopUltimate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "ServerStopUltimate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_ServerStopUltimate_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_ServerStopUltimate_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AClassShooterCharacter_ServerStopUltimate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_ServerStopUltimate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execServerStopUltimate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerStopUltimate_Implementation();
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function ServerStopUltimate

// Begin Class AClassShooterCharacter Function ServerStowWeapon
struct ClassShooterCharacter_eventServerStowWeapon_Parms
{
	AWeaponBase* weapon;
	FName socketName;
};
static FName NAME_AClassShooterCharacter_ServerStowWeapon = FName(TEXT("ServerStowWeapon"));
void AClassShooterCharacter::ServerStowWeapon(AWeaponBase* weapon, FName const& socketName)
{
	ClassShooterCharacter_eventServerStowWeapon_Parms Parms;
	Parms.weapon=weapon;
	Parms.socketName=socketName;
	ProcessEvent(FindFunctionChecked(NAME_AClassShooterCharacter_ServerStowWeapon),&Parms);
}
struct Z_Construct_UFunction_AClassShooterCharacter_ServerStowWeapon_Statics
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
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AClassShooterCharacter_ServerStowWeapon_Statics::NewProp_weapon = { "weapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClassShooterCharacter_eventServerStowWeapon_Parms, weapon), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AClassShooterCharacter_ServerStowWeapon_Statics::NewProp_socketName = { "socketName", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClassShooterCharacter_eventServerStowWeapon_Parms, socketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_socketName_MetaData), NewProp_socketName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AClassShooterCharacter_ServerStowWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AClassShooterCharacter_ServerStowWeapon_Statics::NewProp_weapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AClassShooterCharacter_ServerStowWeapon_Statics::NewProp_socketName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_ServerStowWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_ServerStowWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "ServerStowWeapon", nullptr, nullptr, Z_Construct_UFunction_AClassShooterCharacter_ServerStowWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_ServerStowWeapon_Statics::PropPointers), sizeof(ClassShooterCharacter_eventServerStowWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_ServerStowWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_ServerStowWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(ClassShooterCharacter_eventServerStowWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AClassShooterCharacter_ServerStowWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_ServerStowWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execServerStowWeapon)
{
	P_GET_OBJECT(AWeaponBase,Z_Param_weapon);
	P_GET_PROPERTY(FNameProperty,Z_Param_socketName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerStowWeapon_Implementation(Z_Param_weapon,Z_Param_socketName);
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function ServerStowWeapon

// Begin Class AClassShooterCharacter Function ServerSwitchWeapon
struct ClassShooterCharacter_eventServerSwitchWeapon_Parms
{
	FInputActionValue Value;
};
static FName NAME_AClassShooterCharacter_ServerSwitchWeapon = FName(TEXT("ServerSwitchWeapon"));
void AClassShooterCharacter::ServerSwitchWeapon(FInputActionValue const& Value)
{
	ClassShooterCharacter_eventServerSwitchWeapon_Parms Parms;
	Parms.Value=Value;
	ProcessEvent(FindFunctionChecked(NAME_AClassShooterCharacter_ServerSwitchWeapon),&Parms);
}
struct Z_Construct_UFunction_AClassShooterCharacter_ServerSwitchWeapon_Statics
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AClassShooterCharacter_ServerSwitchWeapon_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClassShooterCharacter_eventServerSwitchWeapon_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AClassShooterCharacter_ServerSwitchWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AClassShooterCharacter_ServerSwitchWeapon_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_ServerSwitchWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_ServerSwitchWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "ServerSwitchWeapon", nullptr, nullptr, Z_Construct_UFunction_AClassShooterCharacter_ServerSwitchWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_ServerSwitchWeapon_Statics::PropPointers), sizeof(ClassShooterCharacter_eventServerSwitchWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_ServerSwitchWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_ServerSwitchWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(ClassShooterCharacter_eventServerSwitchWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AClassShooterCharacter_ServerSwitchWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_ServerSwitchWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execServerSwitchWeapon)
{
	P_GET_STRUCT(FInputActionValue,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerSwitchWeapon_Implementation(Z_Param_Value);
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function ServerSwitchWeapon

// Begin Class AClassShooterCharacter Function ServerTakeCustomDamage
struct ClassShooterCharacter_eventServerTakeCustomDamage_Parms
{
	float DamageAmount;
};
static FName NAME_AClassShooterCharacter_ServerTakeCustomDamage = FName(TEXT("ServerTakeCustomDamage"));
void AClassShooterCharacter::ServerTakeCustomDamage(float DamageAmount)
{
	ClassShooterCharacter_eventServerTakeCustomDamage_Parms Parms;
	Parms.DamageAmount=DamageAmount;
	ProcessEvent(FindFunctionChecked(NAME_AClassShooterCharacter_ServerTakeCustomDamage),&Parms);
}
struct Z_Construct_UFunction_AClassShooterCharacter_ServerTakeCustomDamage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AClassShooterCharacter_ServerTakeCustomDamage_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClassShooterCharacter_eventServerTakeCustomDamage_Parms, DamageAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AClassShooterCharacter_ServerTakeCustomDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AClassShooterCharacter_ServerTakeCustomDamage_Statics::NewProp_DamageAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_ServerTakeCustomDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_ServerTakeCustomDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "ServerTakeCustomDamage", nullptr, nullptr, Z_Construct_UFunction_AClassShooterCharacter_ServerTakeCustomDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_ServerTakeCustomDamage_Statics::PropPointers), sizeof(ClassShooterCharacter_eventServerTakeCustomDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_ServerTakeCustomDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_ServerTakeCustomDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(ClassShooterCharacter_eventServerTakeCustomDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AClassShooterCharacter_ServerTakeCustomDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_ServerTakeCustomDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execServerTakeCustomDamage)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DamageAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerTakeCustomDamage_Implementation(Z_Param_DamageAmount);
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function ServerTakeCustomDamage

// Begin Class AClassShooterCharacter
void AClassShooterCharacter::StaticRegisterNativesAClassShooterCharacter()
{
	UClass* Class = AClassShooterCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleADSCurWeapon", &AClassShooterCharacter::execHandleADSCurWeapon },
		{ "HandleEquipWeapon", &AClassShooterCharacter::execHandleEquipWeapon },
		{ "HandleRecoil", &AClassShooterCharacter::execHandleRecoil },
		{ "HandleShowCurWeapon", &AClassShooterCharacter::execHandleShowCurWeapon },
		{ "HandleStowWeapon", &AClassShooterCharacter::execHandleStowWeapon },
		{ "HandleSwitchWeapon", &AClassShooterCharacter::execHandleSwitchWeapon },
		{ "PickupWeapon", &AClassShooterCharacter::execPickupWeapon },
		{ "ServerADS", &AClassShooterCharacter::execServerADS },
		{ "ServerADSCurWeapon", &AClassShooterCharacter::execServerADSCurWeapon },
		{ "ServerCrouch", &AClassShooterCharacter::execServerCrouch },
		{ "ServerDie", &AClassShooterCharacter::execServerDie },
		{ "ServerDropWeapon", &AClassShooterCharacter::execServerDropWeapon },
		{ "ServerEquipWeapon", &AClassShooterCharacter::execServerEquipWeapon },
		{ "ServerLook", &AClassShooterCharacter::execServerLook },
		{ "ServerMelee", &AClassShooterCharacter::execServerMelee },
		{ "ServerRecoil", &AClassShooterCharacter::execServerRecoil },
		{ "ServerReload", &AClassShooterCharacter::execServerReload },
		{ "ServerResetMovement", &AClassShooterCharacter::execServerResetMovement },
		{ "ServerRestoreCurWeapons", &AClassShooterCharacter::execServerRestoreCurWeapons },
		{ "ServerSaveCurWeapons", &AClassShooterCharacter::execServerSaveCurWeapons },
		{ "ServerShoot", &AClassShooterCharacter::execServerShoot },
		{ "ServerShowCurWeapon", &AClassShooterCharacter::execServerShowCurWeapon },
		{ "ServerSlide", &AClassShooterCharacter::execServerSlide },
		{ "ServerStartAbility1", &AClassShooterCharacter::execServerStartAbility1 },
		{ "ServerStartAbility2", &AClassShooterCharacter::execServerStartAbility2 },
		{ "ServerStartCrouch", &AClassShooterCharacter::execServerStartCrouch },
		{ "ServerStartShooting", &AClassShooterCharacter::execServerStartShooting },
		{ "ServerStartUltimate", &AClassShooterCharacter::execServerStartUltimate },
		{ "ServerStopAbility1", &AClassShooterCharacter::execServerStopAbility1 },
		{ "ServerStopAbility2", &AClassShooterCharacter::execServerStopAbility2 },
		{ "ServerStopADS", &AClassShooterCharacter::execServerStopADS },
		{ "ServerStopCrouching", &AClassShooterCharacter::execServerStopCrouching },
		{ "ServerStopShooting", &AClassShooterCharacter::execServerStopShooting },
		{ "ServerStopSliding", &AClassShooterCharacter::execServerStopSliding },
		{ "ServerStopUltimate", &AClassShooterCharacter::execServerStopUltimate },
		{ "ServerStowWeapon", &AClassShooterCharacter::execServerStowWeapon },
		{ "ServerSwitchWeapon", &AClassShooterCharacter::execServerSwitchWeapon },
		{ "ServerTakeCustomDamage", &AClassShooterCharacter::execServerTakeCustomDamage },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrenadeAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Throw Grenade input Action */" },
#endif
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Throw Grenade input Action" },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DropWeaponAction_MetaData[] = {
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrouchAction_MetaData[] = {
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_curCamLocation_MetaData[] = {
		{ "Category", "Class Base Values" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_curCamRotation_MetaData[] = {
		{ "Category", "Class Base Values" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_unADSWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_unADSWidget_MetaData[] = {
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_sniperWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_sniperWidget_MetaData[] = {
		{ "Category", "UI" },
		{ "EditInline", "true" },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_speedMulti_MetaData[] = {
		{ "Category", "Movement Base Values" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_baseSpeed_MetaData[] = {
		{ "Category", "Movement Base Values" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_sprintSpeed_MetaData[] = {
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
		{ "Category", "Movement Base Values" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isCrouching_MetaData[] = {
		{ "Category", "Movement Base Values" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isSliding_MetaData[] = {
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isInUltimate_MetaData[] = {
		{ "Category", "Class Base Values" },
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
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GrenadeAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SwitchWeaponAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReloadWeaponAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DropWeaponAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CrouchAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Ability1Action;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Ability2Action;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UltimateAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_bodyMesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_curHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_maxHealth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_shotLocation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_weaponArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_weaponArray;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_backupWeaponArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_backupWeaponArray;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_curWeapon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_weaponLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_targetLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_targetRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_curCamLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_curCamRotation;
	static const UECodeGen_Private::FClassPropertyParams NewProp_unADSWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_unADSWidget;
	static const UECodeGen_Private::FClassPropertyParams NewProp_sniperWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_sniperWidget;
	static const UECodeGen_Private::FClassPropertyParams NewProp_weaponWorldObj;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_knifeSwingLocations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_knifeSwingLocations;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_slashSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_originalBodyScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_curSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_speedMulti;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_baseSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_sprintSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_jumpPow;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_slidePow;
	static void NewProp_jumpAllowed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_jumpAllowed;
	static void NewProp_isSprinting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isSprinting;
	static void NewProp_isCrouching_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isCrouching;
	static void NewProp_isSliding_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isSliding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_movementVector;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_baseGroundFriction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_baseBrakingDeceleration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_baseGravity;
	static void NewProp_isClone_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isClone;
	static void NewProp_shouldDestroyWeapon_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_shouldDestroyWeapon;
	static void NewProp_isInUltimate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isInUltimate;
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
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AClassShooterCharacter_HandleADSCurWeapon, "HandleADSCurWeapon" }, // 3984247041
		{ &Z_Construct_UFunction_AClassShooterCharacter_HandleEquipWeapon, "HandleEquipWeapon" }, // 1918991793
		{ &Z_Construct_UFunction_AClassShooterCharacter_HandleRecoil, "HandleRecoil" }, // 3902787890
		{ &Z_Construct_UFunction_AClassShooterCharacter_HandleShowCurWeapon, "HandleShowCurWeapon" }, // 546676436
		{ &Z_Construct_UFunction_AClassShooterCharacter_HandleStowWeapon, "HandleStowWeapon" }, // 1307963383
		{ &Z_Construct_UFunction_AClassShooterCharacter_HandleSwitchWeapon, "HandleSwitchWeapon" }, // 456789297
		{ &Z_Construct_UFunction_AClassShooterCharacter_PickupWeapon, "PickupWeapon" }, // 990694135
		{ &Z_Construct_UFunction_AClassShooterCharacter_ServerADS, "ServerADS" }, // 2223062278
		{ &Z_Construct_UFunction_AClassShooterCharacter_ServerADSCurWeapon, "ServerADSCurWeapon" }, // 4043462938
		{ &Z_Construct_UFunction_AClassShooterCharacter_ServerCrouch, "ServerCrouch" }, // 3081797441
		{ &Z_Construct_UFunction_AClassShooterCharacter_ServerDie, "ServerDie" }, // 2677861263
		{ &Z_Construct_UFunction_AClassShooterCharacter_ServerDropWeapon, "ServerDropWeapon" }, // 2307725572
		{ &Z_Construct_UFunction_AClassShooterCharacter_ServerEquipWeapon, "ServerEquipWeapon" }, // 2787540278
		{ &Z_Construct_UFunction_AClassShooterCharacter_ServerLook, "ServerLook" }, // 275800986
		{ &Z_Construct_UFunction_AClassShooterCharacter_ServerMelee, "ServerMelee" }, // 1055524867
		{ &Z_Construct_UFunction_AClassShooterCharacter_ServerRecoil, "ServerRecoil" }, // 612471455
		{ &Z_Construct_UFunction_AClassShooterCharacter_ServerReload, "ServerReload" }, // 454195163
		{ &Z_Construct_UFunction_AClassShooterCharacter_ServerResetMovement, "ServerResetMovement" }, // 2165640799
		{ &Z_Construct_UFunction_AClassShooterCharacter_ServerRestoreCurWeapons, "ServerRestoreCurWeapons" }, // 2783951151
		{ &Z_Construct_UFunction_AClassShooterCharacter_ServerSaveCurWeapons, "ServerSaveCurWeapons" }, // 2358790320
		{ &Z_Construct_UFunction_AClassShooterCharacter_ServerShoot, "ServerShoot" }, // 3310635311
		{ &Z_Construct_UFunction_AClassShooterCharacter_ServerShowCurWeapon, "ServerShowCurWeapon" }, // 1868004795
		{ &Z_Construct_UFunction_AClassShooterCharacter_ServerSlide, "ServerSlide" }, // 4241081469
		{ &Z_Construct_UFunction_AClassShooterCharacter_ServerStartAbility1, "ServerStartAbility1" }, // 332677946
		{ &Z_Construct_UFunction_AClassShooterCharacter_ServerStartAbility2, "ServerStartAbility2" }, // 2978887084
		{ &Z_Construct_UFunction_AClassShooterCharacter_ServerStartCrouch, "ServerStartCrouch" }, // 3549771133
		{ &Z_Construct_UFunction_AClassShooterCharacter_ServerStartShooting, "ServerStartShooting" }, // 3687996676
		{ &Z_Construct_UFunction_AClassShooterCharacter_ServerStartUltimate, "ServerStartUltimate" }, // 2015663839
		{ &Z_Construct_UFunction_AClassShooterCharacter_ServerStopAbility1, "ServerStopAbility1" }, // 4108682259
		{ &Z_Construct_UFunction_AClassShooterCharacter_ServerStopAbility2, "ServerStopAbility2" }, // 1456535973
		{ &Z_Construct_UFunction_AClassShooterCharacter_ServerStopADS, "ServerStopADS" }, // 3449847810
		{ &Z_Construct_UFunction_AClassShooterCharacter_ServerStopCrouching, "ServerStopCrouching" }, // 3399327301
		{ &Z_Construct_UFunction_AClassShooterCharacter_ServerStopShooting, "ServerStopShooting" }, // 178124925
		{ &Z_Construct_UFunction_AClassShooterCharacter_ServerStopSliding, "ServerStopSliding" }, // 1555096005
		{ &Z_Construct_UFunction_AClassShooterCharacter_ServerStopUltimate, "ServerStopUltimate" }, // 3325483435
		{ &Z_Construct_UFunction_AClassShooterCharacter_ServerStowWeapon, "ServerStowWeapon" }, // 2034119651
		{ &Z_Construct_UFunction_AClassShooterCharacter_ServerSwitchWeapon, "ServerSwitchWeapon" }, // 1295279265
		{ &Z_Construct_UFunction_AClassShooterCharacter_ServerTakeCustomDamage, "ServerTakeCustomDamage" }, // 3748097502
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_GrenadeAction = { "GrenadeAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, GrenadeAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrenadeAction_MetaData), NewProp_GrenadeAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_SwitchWeaponAction = { "SwitchWeaponAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, SwitchWeaponAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwitchWeaponAction_MetaData), NewProp_SwitchWeaponAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_ReloadWeaponAction = { "ReloadWeaponAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, ReloadWeaponAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadWeaponAction_MetaData), NewProp_ReloadWeaponAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_DropWeaponAction = { "DropWeaponAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, DropWeaponAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DropWeaponAction_MetaData), NewProp_DropWeaponAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_CrouchAction = { "CrouchAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, CrouchAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrouchAction_MetaData), NewProp_CrouchAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_Ability1Action = { "Ability1Action", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, Ability1Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ability1Action_MetaData), NewProp_Ability1Action_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_Ability2Action = { "Ability2Action", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, Ability2Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ability2Action_MetaData), NewProp_Ability2Action_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_UltimateAction = { "UltimateAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, UltimateAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UltimateAction_MetaData), NewProp_UltimateAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_bodyMesh = { "bodyMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, bodyMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bodyMesh_MetaData), NewProp_bodyMesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_curHealth = { "curHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, curHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_curHealth_MetaData), NewProp_curHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_maxHealth = { "maxHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, maxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxHealth_MetaData), NewProp_maxHealth_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_shotLocation = { "shotLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, shotLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_shotLocation_MetaData), NewProp_shotLocation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_weaponArray_Inner = { "weaponArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_weaponArray = { "weaponArray", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, weaponArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_weaponArray_MetaData), NewProp_weaponArray_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_backupWeaponArray_Inner = { "backupWeaponArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_backupWeaponArray = { "backupWeaponArray", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, backupWeaponArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_backupWeaponArray_MetaData), NewProp_backupWeaponArray_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_curWeapon = { "curWeapon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, curWeapon), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_curWeapon_MetaData), NewProp_curWeapon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_weaponLocation = { "weaponLocation", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, weaponLocation), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_weaponLocation_MetaData), NewProp_weaponLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_targetLocation = { "targetLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, targetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_targetLocation_MetaData), NewProp_targetLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_targetRotation = { "targetRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, targetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_targetRotation_MetaData), NewProp_targetRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_curCamLocation = { "curCamLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, curCamLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_curCamLocation_MetaData), NewProp_curCamLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_curCamRotation = { "curCamRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, curCamRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_curCamRotation_MetaData), NewProp_curCamRotation_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_unADSWidgetClass = { "unADSWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, unADSWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_unADSWidgetClass_MetaData), NewProp_unADSWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_unADSWidget = { "unADSWidget", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, unADSWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_unADSWidget_MetaData), NewProp_unADSWidget_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_sniperWidgetClass = { "sniperWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, sniperWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_sniperWidgetClass_MetaData), NewProp_sniperWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_sniperWidget = { "sniperWidget", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, sniperWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_sniperWidget_MetaData), NewProp_sniperWidget_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_weaponWorldObj = { "weaponWorldObj", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, weaponWorldObj), Z_Construct_UClass_UClass, Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_weaponWorldObj_MetaData), NewProp_weaponWorldObj_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_knifeSwingLocations_Inner = { "knifeSwingLocations", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_knifeSwingLocations = { "knifeSwingLocations", nullptr, (EPropertyFlags)0x001000800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, knifeSwingLocations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_knifeSwingLocations_MetaData), NewProp_knifeSwingLocations_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_slashSpeed = { "slashSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, slashSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_slashSpeed_MetaData), NewProp_slashSpeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_originalBodyScale = { "originalBodyScale", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, originalBodyScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_originalBodyScale_MetaData), NewProp_originalBodyScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_curSpeed = { "curSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, curSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_curSpeed_MetaData), NewProp_curSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_speedMulti = { "speedMulti", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, speedMulti), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_speedMulti_MetaData), NewProp_speedMulti_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_baseSpeed = { "baseSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, baseSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_baseSpeed_MetaData), NewProp_baseSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_sprintSpeed = { "sprintSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, sprintSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_sprintSpeed_MetaData), NewProp_sprintSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_jumpPow = { "jumpPow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, jumpPow), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_jumpPow_MetaData), NewProp_jumpPow_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_slidePow = { "slidePow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, slidePow), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_slidePow_MetaData), NewProp_slidePow_MetaData) };
void Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_jumpAllowed_SetBit(void* Obj)
{
	((AClassShooterCharacter*)Obj)->jumpAllowed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_jumpAllowed = { "jumpAllowed", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AClassShooterCharacter), &Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_jumpAllowed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_jumpAllowed_MetaData), NewProp_jumpAllowed_MetaData) };
void Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_isSprinting_SetBit(void* Obj)
{
	((AClassShooterCharacter*)Obj)->isSprinting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_isSprinting = { "isSprinting", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AClassShooterCharacter), &Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_isSprinting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isSprinting_MetaData), NewProp_isSprinting_MetaData) };
void Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_isCrouching_SetBit(void* Obj)
{
	((AClassShooterCharacter*)Obj)->isCrouching = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_isCrouching = { "isCrouching", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AClassShooterCharacter), &Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_isCrouching_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isCrouching_MetaData), NewProp_isCrouching_MetaData) };
void Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_isSliding_SetBit(void* Obj)
{
	((AClassShooterCharacter*)Obj)->isSliding = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_isSliding = { "isSliding", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AClassShooterCharacter), &Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_isSliding_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isSliding_MetaData), NewProp_isSliding_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_movementVector = { "movementVector", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, movementVector), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_movementVector_MetaData), NewProp_movementVector_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_baseGroundFriction = { "baseGroundFriction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, baseGroundFriction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_baseGroundFriction_MetaData), NewProp_baseGroundFriction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_baseBrakingDeceleration = { "baseBrakingDeceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, baseBrakingDeceleration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_baseBrakingDeceleration_MetaData), NewProp_baseBrakingDeceleration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_baseGravity = { "baseGravity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, baseGravity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_baseGravity_MetaData), NewProp_baseGravity_MetaData) };
void Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_isClone_SetBit(void* Obj)
{
	((AClassShooterCharacter*)Obj)->isClone = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_isClone = { "isClone", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AClassShooterCharacter), &Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_isClone_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isClone_MetaData), NewProp_isClone_MetaData) };
void Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_shouldDestroyWeapon_SetBit(void* Obj)
{
	((AClassShooterCharacter*)Obj)->shouldDestroyWeapon = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_shouldDestroyWeapon = { "shouldDestroyWeapon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AClassShooterCharacter), &Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_shouldDestroyWeapon_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_shouldDestroyWeapon_MetaData), NewProp_shouldDestroyWeapon_MetaData) };
void Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_isInUltimate_SetBit(void* Obj)
{
	((AClassShooterCharacter*)Obj)->isInUltimate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_isInUltimate = { "isInUltimate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AClassShooterCharacter), &Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_isInUltimate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isInUltimate_MetaData), NewProp_isInUltimate_MetaData) };
void Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_ultimateTriggered_SetBit(void* Obj)
{
	((AClassShooterCharacter*)Obj)->ultimateTriggered = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_ultimateTriggered = { "ultimateTriggered", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AClassShooterCharacter), &Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_ultimateTriggered_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ultimateTriggered_MetaData), NewProp_ultimateTriggered_MetaData) };
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AClassShooterCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_Mesh1P,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_FirstPersonCameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_SprintAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_ADSAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_ShootingAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_GrenadeAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_SwitchWeaponAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_ReloadWeaponAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_DropWeaponAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_CrouchAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_Ability1Action,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_Ability2Action,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_UltimateAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_bodyMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_curHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_maxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_shotLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_weaponArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_weaponArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_backupWeaponArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_backupWeaponArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_curWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_weaponLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_targetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_targetRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_curCamLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_curCamRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_unADSWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_unADSWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_sniperWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_sniperWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_weaponWorldObj,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_knifeSwingLocations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_knifeSwingLocations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_slashSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_originalBodyScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_curSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_speedMulti,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_baseSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_sprintSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_jumpPow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_slidePow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_jumpAllowed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_isSprinting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_isCrouching,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_isSliding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_movementVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_baseGroundFriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_baseBrakingDeceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_baseGravity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_isClone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_shouldDestroyWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_isInUltimate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_ultimateTriggered,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_bobTimer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_bobSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_bobAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_amplitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_isMeleeHBOn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_knifeHitDetected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_LookAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AClassShooterCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AClassShooterCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_ClassShooter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AClassShooterCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AClassShooterCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UDamageable_NoRegister, (int32)VTABLE_OFFSET(AClassShooterCharacter, IDamageable), false },  // 1094516381
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
	static const FName Name_isMeleeHBOn(TEXT("isMeleeHBOn"));
	static const FName Name_knifeHitDetected(TEXT("knifeHitDetected"));
	const bool bIsValid = true
		&& Name_isMeleeHBOn == ClassReps[(int32)ENetFields_Private::isMeleeHBOn].Property->GetFName()
		&& Name_knifeHitDetected == ClassReps[(int32)ENetFields_Private::knifeHitDetected].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AClassShooterCharacter"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AClassShooterCharacter);
AClassShooterCharacter::~AClassShooterCharacter() {}
// End Class AClassShooterCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_ClassShooterCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AClassShooterCharacter, AClassShooterCharacter::StaticClass, TEXT("AClassShooterCharacter"), &Z_Registration_Info_UClass_AClassShooterCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AClassShooterCharacter), 2069737384U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_ClassShooterCharacter_h_2899471744(TEXT("/Script/ClassShooter"),
	Z_CompiledInDeferFile_FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_ClassShooterCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_ClassShooterCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
