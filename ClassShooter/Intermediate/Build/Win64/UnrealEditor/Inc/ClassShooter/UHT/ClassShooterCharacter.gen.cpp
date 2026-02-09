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

// Begin Class AClassShooterCharacter Function BindDelegate
struct Z_Construct_UFunction_AClassShooterCharacter_BindDelegate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassShooterCharacter_BindDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassShooterCharacter, nullptr, "BindDelegate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClassShooterCharacter_BindDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClassShooterCharacter_BindDelegate_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AClassShooterCharacter_BindDelegate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClassShooterCharacter_BindDelegate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClassShooterCharacter::execBindDelegate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BindDelegate();
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function BindDelegate

// Begin Class AClassShooterCharacter Function PickupWeapon
struct Z_Construct_UFunction_AClassShooterCharacter_PickupWeapon_Statics
{
	struct ClassShooterCharacter_eventPickupWeapon_Parms
	{
		AWeaponBase* weapon;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Picking up weapon\n" },
#endif
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Picking up weapon" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_weapon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AClassShooterCharacter_PickupWeapon_Statics::NewProp_weapon = { "weapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClassShooterCharacter_eventPickupWeapon_Parms, weapon), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AClassShooterCharacter_PickupWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AClassShooterCharacter_PickupWeapon_Statics::NewProp_weapon,
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
	P_THIS->PickupWeapon(Z_Param_weapon);
	P_NATIVE_END;
}
// End Class AClassShooterCharacter Function PickupWeapon

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
		{ "BindDelegate", &AClassShooterCharacter::execBindDelegate },
		{ "PickupWeapon", &AClassShooterCharacter::execPickupWeapon },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_controllerID_MetaData[] = {
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isJumping_MetaData[] = {
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isSwitchingAfterPickup_MetaData[] = {
		{ "Category", "Class Base Values" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isDead_MetaData[] = {
		{ "Category", "Class Base Values" },
		{ "ModuleRelativePath", "ClassShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_deathTriggered_MetaData[] = {
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
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SwitchWeaponAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReloadWeaponAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DropWeaponAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CrouchAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Ability1Action;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Ability2Action;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UltimateAction;
	static const UECodeGen_Private::FIntPropertyParams NewProp_controllerID;
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
	static void NewProp_isJumping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isJumping;
	static void NewProp_isSprinting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isSprinting;
	static void NewProp_isCrouching_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isCrouching;
	static void NewProp_isSliding_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isSliding;
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
	static void NewProp_isSwitchingAfterPickup_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isSwitchingAfterPickup;
	static void NewProp_isDead_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isDead;
	static void NewProp_deathTriggered_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_deathTriggered;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AClassShooterCharacter_ADSCurWeapon, "ADSCurWeapon" }, // 1315547297
		{ &Z_Construct_UFunction_AClassShooterCharacter_BindDelegate, "BindDelegate" }, // 4237363750
		{ &Z_Construct_UFunction_AClassShooterCharacter_PickupWeapon, "PickupWeapon" }, // 2623252635
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_DropWeaponAction = { "DropWeaponAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, DropWeaponAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DropWeaponAction_MetaData), NewProp_DropWeaponAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_CrouchAction = { "CrouchAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, CrouchAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrouchAction_MetaData), NewProp_CrouchAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_Ability1Action = { "Ability1Action", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, Ability1Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ability1Action_MetaData), NewProp_Ability1Action_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_Ability2Action = { "Ability2Action", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, Ability2Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ability2Action_MetaData), NewProp_Ability2Action_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_UltimateAction = { "UltimateAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, UltimateAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UltimateAction_MetaData), NewProp_UltimateAction_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_controllerID = { "controllerID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, controllerID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_controllerID_MetaData), NewProp_controllerID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_bodyMesh = { "bodyMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, bodyMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bodyMesh_MetaData), NewProp_bodyMesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_curHealth = { "curHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, curHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_curHealth_MetaData), NewProp_curHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_maxHealth = { "maxHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, maxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxHealth_MetaData), NewProp_maxHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_xSens = { "xSens", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, xSens), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_xSens_MetaData), NewProp_xSens_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_ySens = { "ySens", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, ySens), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ySens_MetaData), NewProp_ySens_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_shotLocation = { "shotLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, shotLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_shotLocation_MetaData), NewProp_shotLocation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_weaponArray_Inner = { "weaponArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_weaponArray = { "weaponArray", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, weaponArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_weaponArray_MetaData), NewProp_weaponArray_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_backupWeaponArray_Inner = { "backupWeaponArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_backupWeaponArray = { "backupWeaponArray", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, backupWeaponArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_backupWeaponArray_MetaData), NewProp_backupWeaponArray_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_curWeapon = { "curWeapon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, curWeapon), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_curWeapon_MetaData), NewProp_curWeapon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_weaponCopy = { "weaponCopy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClassShooterCharacter, weaponCopy), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_weaponCopy_MetaData), NewProp_weaponCopy_MetaData) };
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
void Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_isJumping_SetBit(void* Obj)
{
	((AClassShooterCharacter*)Obj)->isJumping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_isJumping = { "isJumping", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AClassShooterCharacter), &Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_isJumping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isJumping_MetaData), NewProp_isJumping_MetaData) };
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
void Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_isADSing_SetBit(void* Obj)
{
	((AClassShooterCharacter*)Obj)->isADSing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_isADSing = { "isADSing", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AClassShooterCharacter), &Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_isADSing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isADSing_MetaData), NewProp_isADSing_MetaData) };
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
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_isMeleeHBOn = { "isMeleeHBOn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AClassShooterCharacter), &Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_isMeleeHBOn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isMeleeHBOn_MetaData), NewProp_isMeleeHBOn_MetaData) };
void Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_knifeHitDetected_SetBit(void* Obj)
{
	((AClassShooterCharacter*)Obj)->knifeHitDetected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_knifeHitDetected = { "knifeHitDetected", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AClassShooterCharacter), &Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_knifeHitDetected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_knifeHitDetected_MetaData), NewProp_knifeHitDetected_MetaData) };
void Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_isSwitchingAfterPickup_SetBit(void* Obj)
{
	((AClassShooterCharacter*)Obj)->isSwitchingAfterPickup = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_isSwitchingAfterPickup = { "isSwitchingAfterPickup", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AClassShooterCharacter), &Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_isSwitchingAfterPickup_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isSwitchingAfterPickup_MetaData), NewProp_isSwitchingAfterPickup_MetaData) };
void Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_isDead_SetBit(void* Obj)
{
	((AClassShooterCharacter*)Obj)->isDead = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_isDead = { "isDead", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AClassShooterCharacter), &Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_isDead_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isDead_MetaData), NewProp_isDead_MetaData) };
void Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_deathTriggered_SetBit(void* Obj)
{
	((AClassShooterCharacter*)Obj)->deathTriggered = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_deathTriggered = { "deathTriggered", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AClassShooterCharacter), &Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_deathTriggered_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_deathTriggered_MetaData), NewProp_deathTriggered_MetaData) };
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
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_DropWeaponAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_CrouchAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_Ability1Action,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_Ability2Action,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_UltimateAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_controllerID,
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
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_isJumping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_isSprinting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_isCrouching,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_isSliding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_isADSing,
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
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_isSwitchingAfterPickup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_isDead,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassShooterCharacter_Statics::NewProp_deathTriggered,
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
DEFINE_VTABLE_PTR_HELPER_CTOR(AClassShooterCharacter);
AClassShooterCharacter::~AClassShooterCharacter() {}
// End Class AClassShooterCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_ClassShooterCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AClassShooterCharacter, AClassShooterCharacter::StaticClass, TEXT("AClassShooterCharacter"), &Z_Registration_Info_UClass_AClassShooterCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AClassShooterCharacter), 4061349676U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_ClassShooterCharacter_h_3583521680(TEXT("/Script/ClassShooter"),
	Z_CompiledInDeferFile_FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_ClassShooterCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_ClassShooterCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
