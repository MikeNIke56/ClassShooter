// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClassShooter/Public/MovementCharacter.h"
#include "Runtime/Engine/Classes/Engine/TimerHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovementCharacter() {}

// Begin Cross Module References
CABLECOMPONENT_API UClass* Z_Construct_UClass_UCableComponent_NoRegister();
CLASSSHOOTER_API UClass* Z_Construct_UClass_AClassShooterCharacter();
CLASSSHOOTER_API UClass* Z_Construct_UClass_AMovementCharacter();
CLASSSHOOTER_API UClass* Z_Construct_UClass_AMovementCharacter_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
UPackage* Z_Construct_UPackage__Script_ClassShooter();
// End Cross Module References

// Begin Class AMovementCharacter Function StartAbility1
struct Z_Construct_UFunction_AMovementCharacter_StartAbility1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement Functions" },
		{ "ModuleRelativePath", "Public/MovementCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMovementCharacter_StartAbility1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMovementCharacter, nullptr, "StartAbility1", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMovementCharacter_StartAbility1_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMovementCharacter_StartAbility1_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMovementCharacter_StartAbility1()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMovementCharacter_StartAbility1_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMovementCharacter::execStartAbility1)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartAbility1();
	P_NATIVE_END;
}
// End Class AMovementCharacter Function StartAbility1

// Begin Class AMovementCharacter Function StartUltimate
struct Z_Construct_UFunction_AMovementCharacter_StartUltimate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement Functions" },
		{ "ModuleRelativePath", "Public/MovementCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMovementCharacter_StartUltimate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMovementCharacter, nullptr, "StartUltimate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMovementCharacter_StartUltimate_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMovementCharacter_StartUltimate_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMovementCharacter_StartUltimate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMovementCharacter_StartUltimate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMovementCharacter::execStartUltimate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartUltimate();
	P_NATIVE_END;
}
// End Class AMovementCharacter Function StartUltimate

// Begin Class AMovementCharacter
void AMovementCharacter::StaticRegisterNativesAMovementCharacter()
{
	UClass* Class = AMovementCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "StartAbility1", &AMovementCharacter::execStartAbility1 },
		{ "StartUltimate", &AMovementCharacter::execStartUltimate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMovementCharacter);
UClass* Z_Construct_UClass_AMovementCharacter_NoRegister()
{
	return AMovementCharacter::StaticClass();
}
struct Z_Construct_UClass_AMovementCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MovementCharacter.h" },
		{ "ModuleRelativePath", "Public/MovementCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_cableComponent_MetaData[] = {
		{ "Category", "Movement Class Base Values" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovementCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAttachEnd_MetaData[] = {
		{ "Category", "Cable" },
		{ "ModuleRelativePath", "Public/MovementCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_grappleCooldownTimer_MetaData[] = {
		{ "Category", "Movement Class Base Values" },
		{ "ModuleRelativePath", "Public/MovementCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_grappleCooldown_MetaData[] = {
		{ "Category", "Movement Class Base Values" },
		{ "ModuleRelativePath", "Public/MovementCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_baseGrappleCooldown_MetaData[] = {
		{ "Category", "Movement Class Base Values" },
		{ "ModuleRelativePath", "Public/MovementCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_grappleTime_MetaData[] = {
		{ "Category", "Movement Class Base Values" },
		{ "ModuleRelativePath", "Public/MovementCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_grappleTimer_MetaData[] = {
		{ "Category", "Movement Class Base Values" },
		{ "ModuleRelativePath", "Public/MovementCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_grappleSpd_MetaData[] = {
		{ "Category", "Movement Class Base Values" },
		{ "ModuleRelativePath", "Public/MovementCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_didGrappleAtk_MetaData[] = {
		{ "Category", "Movement Class Base Values" },
		{ "ModuleRelativePath", "Public/MovementCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_grappleRemainingTime_MetaData[] = {
		{ "Category", "Movement Class Base Values" },
		{ "ModuleRelativePath", "Public/MovementCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_grappleObj_MetaData[] = {
		{ "Category", "MovementCharacter" },
		{ "ModuleRelativePath", "Public/MovementCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_grappleAtkDist_MetaData[] = {
		{ "Category", "Movement Class Base Values" },
		{ "ModuleRelativePath", "Public/MovementCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ultLength_MetaData[] = {
		{ "Category", "Movement Class Base Values" },
		{ "ModuleRelativePath", "Public/MovementCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ultRemainingTime_MetaData[] = {
		{ "Category", "Movement Class Base Values" },
		{ "ModuleRelativePath", "Public/MovementCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ultCooldown_MetaData[] = {
		{ "Category", "Movement Class Base Values" },
		{ "ModuleRelativePath", "Public/MovementCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_movementVFX_MetaData[] = {
		{ "Category", "Movement Class Base Values" },
		{ "ModuleRelativePath", "Public/MovementCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_baseBodyMat_MetaData[] = {
		{ "Category", "Movement Class Base Values" },
		{ "ModuleRelativePath", "Public/MovementCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ultimateMat_MetaData[] = {
		{ "Category", "Movement Class Base Values" },
		{ "ModuleRelativePath", "Public/MovementCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_cameraRotateLerp_MetaData[] = {
		{ "Category", "Movement Class Base Values" },
		{ "ModuleRelativePath", "Public/MovementCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_targetRoll_MetaData[] = {
		{ "Category", "Movement Class Base Values" },
		{ "ModuleRelativePath", "Public/MovementCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_baseRoll_MetaData[] = {
		{ "Category", "Movement Class Base Values" },
		{ "ModuleRelativePath", "Public/MovementCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_wallRunSpd_MetaData[] = {
		{ "Category", "Movement Class Base Values" },
		{ "ModuleRelativePath", "Public/MovementCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_wallRunGravity_MetaData[] = {
		{ "Category", "Movement Class Base Values" },
		{ "ModuleRelativePath", "Public/MovementCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isWallRunning_MetaData[] = {
		{ "Category", "Movement Class Base Values" },
		{ "ModuleRelativePath", "Public/MovementCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isWallRunningR_MetaData[] = {
		{ "Category", "Movement Class Base Values" },
		{ "ModuleRelativePath", "Public/MovementCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isWallRunningL_MetaData[] = {
		{ "Category", "Movement Class Base Values" },
		{ "ModuleRelativePath", "Public/MovementCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_targetWallRunGrav_MetaData[] = {
		{ "Category", "Movement Class Base Values" },
		{ "ModuleRelativePath", "Public/MovementCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_canWallRun_MetaData[] = {
		{ "Category", "Movement Class Base Values" },
		{ "ModuleRelativePath", "Public/MovementCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_wallRunDelay_MetaData[] = {
		{ "Category", "Movement Class Base Values" },
		{ "ModuleRelativePath", "Public/MovementCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_wallRunJumpDist_MetaData[] = {
		{ "Category", "Movement Class Base Values" },
		{ "ModuleRelativePath", "Public/MovementCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_wallRunJumpHeight_MetaData[] = {
		{ "Category", "Movement Class Base Values" },
		{ "ModuleRelativePath", "Public/MovementCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isGrappleAtkHBOn_MetaData[] = {
		{ "Category", "Class Base Values" },
		{ "ModuleRelativePath", "Public/MovementCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_grappleAtkHitDetected_MetaData[] = {
		{ "Category", "Class Base Values" },
		{ "ModuleRelativePath", "Public/MovementCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_cableComponent;
	static void NewProp_bAttachEnd_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAttachEnd;
	static const UECodeGen_Private::FStructPropertyParams NewProp_grappleCooldownTimer;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_grappleCooldown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_baseGrappleCooldown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_grappleTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_grappleTimer;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_grappleSpd;
	static void NewProp_didGrappleAtk_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_didGrappleAtk;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_grappleRemainingTime;
	static const UECodeGen_Private::FClassPropertyParams NewProp_grappleObj;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_grappleAtkDist;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ultLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ultRemainingTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ultCooldown;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_movementVFX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_baseBodyMat;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ultimateMat;
	static void NewProp_cameraRotateLerp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_cameraRotateLerp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_targetRoll;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_baseRoll;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_wallRunSpd;
	static void NewProp_wallRunGravity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_wallRunGravity;
	static void NewProp_isWallRunning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isWallRunning;
	static void NewProp_isWallRunningR_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isWallRunningR;
	static void NewProp_isWallRunningL_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isWallRunningL;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_targetWallRunGrav;
	static void NewProp_canWallRun_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_canWallRun;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_wallRunDelay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_wallRunJumpDist;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_wallRunJumpHeight;
	static void NewProp_isGrappleAtkHBOn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isGrappleAtkHBOn;
	static void NewProp_grappleAtkHitDetected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_grappleAtkHitDetected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMovementCharacter_StartAbility1, "StartAbility1" }, // 2296075615
		{ &Z_Construct_UFunction_AMovementCharacter_StartUltimate, "StartUltimate" }, // 3253523057
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovementCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_cableComponent = { "cableComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharacter, cableComponent), Z_Construct_UClass_UCableComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_cableComponent_MetaData), NewProp_cableComponent_MetaData) };
void Z_Construct_UClass_AMovementCharacter_Statics::NewProp_bAttachEnd_SetBit(void* Obj)
{
	((AMovementCharacter*)Obj)->bAttachEnd = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_bAttachEnd = { "bAttachEnd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMovementCharacter), &Z_Construct_UClass_AMovementCharacter_Statics::NewProp_bAttachEnd_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAttachEnd_MetaData), NewProp_bAttachEnd_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_grappleCooldownTimer = { "grappleCooldownTimer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharacter, grappleCooldownTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_grappleCooldownTimer_MetaData), NewProp_grappleCooldownTimer_MetaData) }; // 756291145
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_grappleCooldown = { "grappleCooldown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharacter, grappleCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_grappleCooldown_MetaData), NewProp_grappleCooldown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_baseGrappleCooldown = { "baseGrappleCooldown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharacter, baseGrappleCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_baseGrappleCooldown_MetaData), NewProp_baseGrappleCooldown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_grappleTime = { "grappleTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharacter, grappleTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_grappleTime_MetaData), NewProp_grappleTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_grappleTimer = { "grappleTimer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharacter, grappleTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_grappleTimer_MetaData), NewProp_grappleTimer_MetaData) }; // 756291145
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_grappleSpd = { "grappleSpd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharacter, grappleSpd), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_grappleSpd_MetaData), NewProp_grappleSpd_MetaData) };
void Z_Construct_UClass_AMovementCharacter_Statics::NewProp_didGrappleAtk_SetBit(void* Obj)
{
	((AMovementCharacter*)Obj)->didGrappleAtk = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_didGrappleAtk = { "didGrappleAtk", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMovementCharacter), &Z_Construct_UClass_AMovementCharacter_Statics::NewProp_didGrappleAtk_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_didGrappleAtk_MetaData), NewProp_didGrappleAtk_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_grappleRemainingTime = { "grappleRemainingTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharacter, grappleRemainingTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_grappleRemainingTime_MetaData), NewProp_grappleRemainingTime_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_grappleObj = { "grappleObj", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharacter, grappleObj), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_grappleObj_MetaData), NewProp_grappleObj_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_grappleAtkDist = { "grappleAtkDist", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharacter, grappleAtkDist), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_grappleAtkDist_MetaData), NewProp_grappleAtkDist_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_ultLength = { "ultLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharacter, ultLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ultLength_MetaData), NewProp_ultLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_ultRemainingTime = { "ultRemainingTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharacter, ultRemainingTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ultRemainingTime_MetaData), NewProp_ultRemainingTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_ultCooldown = { "ultCooldown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharacter, ultCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ultCooldown_MetaData), NewProp_ultCooldown_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_movementVFX = { "movementVFX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharacter, movementVFX), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_movementVFX_MetaData), NewProp_movementVFX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_baseBodyMat = { "baseBodyMat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharacter, baseBodyMat), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_baseBodyMat_MetaData), NewProp_baseBodyMat_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_ultimateMat = { "ultimateMat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharacter, ultimateMat), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ultimateMat_MetaData), NewProp_ultimateMat_MetaData) };
void Z_Construct_UClass_AMovementCharacter_Statics::NewProp_cameraRotateLerp_SetBit(void* Obj)
{
	((AMovementCharacter*)Obj)->cameraRotateLerp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_cameraRotateLerp = { "cameraRotateLerp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMovementCharacter), &Z_Construct_UClass_AMovementCharacter_Statics::NewProp_cameraRotateLerp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_cameraRotateLerp_MetaData), NewProp_cameraRotateLerp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_targetRoll = { "targetRoll", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharacter, targetRoll), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_targetRoll_MetaData), NewProp_targetRoll_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_baseRoll = { "baseRoll", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharacter, baseRoll), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_baseRoll_MetaData), NewProp_baseRoll_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_wallRunSpd = { "wallRunSpd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharacter, wallRunSpd), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_wallRunSpd_MetaData), NewProp_wallRunSpd_MetaData) };
void Z_Construct_UClass_AMovementCharacter_Statics::NewProp_wallRunGravity_SetBit(void* Obj)
{
	((AMovementCharacter*)Obj)->wallRunGravity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_wallRunGravity = { "wallRunGravity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMovementCharacter), &Z_Construct_UClass_AMovementCharacter_Statics::NewProp_wallRunGravity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_wallRunGravity_MetaData), NewProp_wallRunGravity_MetaData) };
void Z_Construct_UClass_AMovementCharacter_Statics::NewProp_isWallRunning_SetBit(void* Obj)
{
	((AMovementCharacter*)Obj)->isWallRunning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_isWallRunning = { "isWallRunning", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMovementCharacter), &Z_Construct_UClass_AMovementCharacter_Statics::NewProp_isWallRunning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isWallRunning_MetaData), NewProp_isWallRunning_MetaData) };
void Z_Construct_UClass_AMovementCharacter_Statics::NewProp_isWallRunningR_SetBit(void* Obj)
{
	((AMovementCharacter*)Obj)->isWallRunningR = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_isWallRunningR = { "isWallRunningR", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMovementCharacter), &Z_Construct_UClass_AMovementCharacter_Statics::NewProp_isWallRunningR_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isWallRunningR_MetaData), NewProp_isWallRunningR_MetaData) };
void Z_Construct_UClass_AMovementCharacter_Statics::NewProp_isWallRunningL_SetBit(void* Obj)
{
	((AMovementCharacter*)Obj)->isWallRunningL = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_isWallRunningL = { "isWallRunningL", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMovementCharacter), &Z_Construct_UClass_AMovementCharacter_Statics::NewProp_isWallRunningL_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isWallRunningL_MetaData), NewProp_isWallRunningL_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_targetWallRunGrav = { "targetWallRunGrav", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharacter, targetWallRunGrav), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_targetWallRunGrav_MetaData), NewProp_targetWallRunGrav_MetaData) };
void Z_Construct_UClass_AMovementCharacter_Statics::NewProp_canWallRun_SetBit(void* Obj)
{
	((AMovementCharacter*)Obj)->canWallRun = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_canWallRun = { "canWallRun", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMovementCharacter), &Z_Construct_UClass_AMovementCharacter_Statics::NewProp_canWallRun_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_canWallRun_MetaData), NewProp_canWallRun_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_wallRunDelay = { "wallRunDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharacter, wallRunDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_wallRunDelay_MetaData), NewProp_wallRunDelay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_wallRunJumpDist = { "wallRunJumpDist", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharacter, wallRunJumpDist), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_wallRunJumpDist_MetaData), NewProp_wallRunJumpDist_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_wallRunJumpHeight = { "wallRunJumpHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharacter, wallRunJumpHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_wallRunJumpHeight_MetaData), NewProp_wallRunJumpHeight_MetaData) };
void Z_Construct_UClass_AMovementCharacter_Statics::NewProp_isGrappleAtkHBOn_SetBit(void* Obj)
{
	((AMovementCharacter*)Obj)->isGrappleAtkHBOn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_isGrappleAtkHBOn = { "isGrappleAtkHBOn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMovementCharacter), &Z_Construct_UClass_AMovementCharacter_Statics::NewProp_isGrappleAtkHBOn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isGrappleAtkHBOn_MetaData), NewProp_isGrappleAtkHBOn_MetaData) };
void Z_Construct_UClass_AMovementCharacter_Statics::NewProp_grappleAtkHitDetected_SetBit(void* Obj)
{
	((AMovementCharacter*)Obj)->grappleAtkHitDetected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_grappleAtkHitDetected = { "grappleAtkHitDetected", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMovementCharacter), &Z_Construct_UClass_AMovementCharacter_Statics::NewProp_grappleAtkHitDetected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_grappleAtkHitDetected_MetaData), NewProp_grappleAtkHitDetected_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMovementCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_cableComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_bAttachEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_grappleCooldownTimer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_grappleCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_baseGrappleCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_grappleTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_grappleTimer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_grappleSpd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_didGrappleAtk,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_grappleRemainingTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_grappleObj,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_grappleAtkDist,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_ultLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_ultRemainingTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_ultCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_movementVFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_baseBodyMat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_ultimateMat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_cameraRotateLerp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_targetRoll,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_baseRoll,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_wallRunSpd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_wallRunGravity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_isWallRunning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_isWallRunningR,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_isWallRunningL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_targetWallRunGrav,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_canWallRun,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_wallRunDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_wallRunJumpDist,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_wallRunJumpHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_isGrappleAtkHBOn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_grappleAtkHitDetected,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovementCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMovementCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AClassShooterCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_ClassShooter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovementCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMovementCharacter_Statics::ClassParams = {
	&AMovementCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMovementCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMovementCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMovementCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMovementCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMovementCharacter()
{
	if (!Z_Registration_Info_UClass_AMovementCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMovementCharacter.OuterSingleton, Z_Construct_UClass_AMovementCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMovementCharacter.OuterSingleton;
}
template<> CLASSSHOOTER_API UClass* StaticClass<AMovementCharacter>()
{
	return AMovementCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMovementCharacter);
AMovementCharacter::~AMovementCharacter() {}
// End Class AMovementCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_MovementCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMovementCharacter, AMovementCharacter::StaticClass, TEXT("AMovementCharacter"), &Z_Registration_Info_UClass_AMovementCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMovementCharacter), 374834819U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_MovementCharacter_h_909646367(TEXT("/Script/ClassShooter"),
	Z_CompiledInDeferFile_FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_MovementCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_MovementCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
