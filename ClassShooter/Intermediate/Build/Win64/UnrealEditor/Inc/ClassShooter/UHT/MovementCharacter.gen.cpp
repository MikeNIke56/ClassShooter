// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClassShooter/Public/MovementCharacter.h"
#include "Runtime/Engine/Classes/Engine/TimerHandle.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovementCharacter() {}

// Begin Cross Module References
CABLECOMPONENT_API UClass* Z_Construct_UClass_UCableComponent_NoRegister();
CLASSSHOOTER_API UClass* Z_Construct_UClass_AClassShooterCharacter();
CLASSSHOOTER_API UClass* Z_Construct_UClass_AMovementCharacter();
CLASSSHOOTER_API UClass* Z_Construct_UClass_AMovementCharacter_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
UPackage* Z_Construct_UPackage__Script_ClassShooter();
// End Cross Module References

// Begin Class AMovementCharacter Function Server_BlockWallRun
static FName NAME_AMovementCharacter_Server_BlockWallRun = FName(TEXT("Server_BlockWallRun"));
void AMovementCharacter::Server_BlockWallRun()
{
	ProcessEvent(FindFunctionChecked(NAME_AMovementCharacter_Server_BlockWallRun),NULL);
}
struct Z_Construct_UFunction_AMovementCharacter_Server_BlockWallRun_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovementCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMovementCharacter_Server_BlockWallRun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMovementCharacter, nullptr, "Server_BlockWallRun", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMovementCharacter_Server_BlockWallRun_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMovementCharacter_Server_BlockWallRun_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMovementCharacter_Server_BlockWallRun()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMovementCharacter_Server_BlockWallRun_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMovementCharacter::execServer_BlockWallRun)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_BlockWallRun_Validate())
	{
		RPC_ValidateFailed(TEXT("Server_BlockWallRun_Validate"));
		return;
	}
	P_THIS->Server_BlockWallRun_Implementation();
	P_NATIVE_END;
}
// End Class AMovementCharacter Function Server_BlockWallRun

// Begin Class AMovementCharacter Function Server_Dash
static FName NAME_AMovementCharacter_Server_Dash = FName(TEXT("Server_Dash"));
void AMovementCharacter::Server_Dash()
{
	ProcessEvent(FindFunctionChecked(NAME_AMovementCharacter_Server_Dash),NULL);
}
struct Z_Construct_UFunction_AMovementCharacter_Server_Dash_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovementCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMovementCharacter_Server_Dash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMovementCharacter, nullptr, "Server_Dash", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMovementCharacter_Server_Dash_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMovementCharacter_Server_Dash_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMovementCharacter_Server_Dash()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMovementCharacter_Server_Dash_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMovementCharacter::execServer_Dash)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_Dash_Validate())
	{
		RPC_ValidateFailed(TEXT("Server_Dash_Validate"));
		return;
	}
	P_THIS->Server_Dash_Implementation();
	P_NATIVE_END;
}
// End Class AMovementCharacter Function Server_Dash

// Begin Class AMovementCharacter Function Server_Grapple
static FName NAME_AMovementCharacter_Server_Grapple = FName(TEXT("Server_Grapple"));
void AMovementCharacter::Server_Grapple()
{
	ProcessEvent(FindFunctionChecked(NAME_AMovementCharacter_Server_Grapple),NULL);
}
struct Z_Construct_UFunction_AMovementCharacter_Server_Grapple_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovementCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMovementCharacter_Server_Grapple_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMovementCharacter, nullptr, "Server_Grapple", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMovementCharacter_Server_Grapple_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMovementCharacter_Server_Grapple_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMovementCharacter_Server_Grapple()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMovementCharacter_Server_Grapple_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMovementCharacter::execServer_Grapple)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_Grapple_Validate())
	{
		RPC_ValidateFailed(TEXT("Server_Grapple_Validate"));
		return;
	}
	P_THIS->Server_Grapple_Implementation();
	P_NATIVE_END;
}
// End Class AMovementCharacter Function Server_Grapple

// Begin Class AMovementCharacter Function Server_GrappleAttack
static FName NAME_AMovementCharacter_Server_GrappleAttack = FName(TEXT("Server_GrappleAttack"));
void AMovementCharacter::Server_GrappleAttack()
{
	ProcessEvent(FindFunctionChecked(NAME_AMovementCharacter_Server_GrappleAttack),NULL);
}
struct Z_Construct_UFunction_AMovementCharacter_Server_GrappleAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovementCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMovementCharacter_Server_GrappleAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMovementCharacter, nullptr, "Server_GrappleAttack", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMovementCharacter_Server_GrappleAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMovementCharacter_Server_GrappleAttack_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMovementCharacter_Server_GrappleAttack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMovementCharacter_Server_GrappleAttack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMovementCharacter::execServer_GrappleAttack)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_GrappleAttack_Validate())
	{
		RPC_ValidateFailed(TEXT("Server_GrappleAttack_Validate"));
		return;
	}
	P_THIS->Server_GrappleAttack_Implementation();
	P_NATIVE_END;
}
// End Class AMovementCharacter Function Server_GrappleAttack

// Begin Class AMovementCharacter Function Server_LandEvent
static FName NAME_AMovementCharacter_Server_LandEvent = FName(TEXT("Server_LandEvent"));
void AMovementCharacter::Server_LandEvent()
{
	ProcessEvent(FindFunctionChecked(NAME_AMovementCharacter_Server_LandEvent),NULL);
}
struct Z_Construct_UFunction_AMovementCharacter_Server_LandEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovementCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMovementCharacter_Server_LandEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMovementCharacter, nullptr, "Server_LandEvent", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMovementCharacter_Server_LandEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMovementCharacter_Server_LandEvent_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMovementCharacter_Server_LandEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMovementCharacter_Server_LandEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMovementCharacter::execServer_LandEvent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_LandEvent_Validate())
	{
		RPC_ValidateFailed(TEXT("Server_LandEvent_Validate"));
		return;
	}
	P_THIS->Server_LandEvent_Implementation();
	P_NATIVE_END;
}
// End Class AMovementCharacter Function Server_LandEvent

// Begin Class AMovementCharacter Function Server_UpdateCooldownValues
static FName NAME_AMovementCharacter_Server_UpdateCooldownValues = FName(TEXT("Server_UpdateCooldownValues"));
void AMovementCharacter::Server_UpdateCooldownValues()
{
	ProcessEvent(FindFunctionChecked(NAME_AMovementCharacter_Server_UpdateCooldownValues),NULL);
}
struct Z_Construct_UFunction_AMovementCharacter_Server_UpdateCooldownValues_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovementCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMovementCharacter_Server_UpdateCooldownValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMovementCharacter, nullptr, "Server_UpdateCooldownValues", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMovementCharacter_Server_UpdateCooldownValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMovementCharacter_Server_UpdateCooldownValues_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMovementCharacter_Server_UpdateCooldownValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMovementCharacter_Server_UpdateCooldownValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMovementCharacter::execServer_UpdateCooldownValues)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_UpdateCooldownValues_Validate())
	{
		RPC_ValidateFailed(TEXT("Server_UpdateCooldownValues_Validate"));
		return;
	}
	P_THIS->Server_UpdateCooldownValues_Implementation();
	P_NATIVE_END;
}
// End Class AMovementCharacter Function Server_UpdateCooldownValues

// Begin Class AMovementCharacter Function Server_WallRunUpdate
static FName NAME_AMovementCharacter_Server_WallRunUpdate = FName(TEXT("Server_WallRunUpdate"));
void AMovementCharacter::Server_WallRunUpdate()
{
	ProcessEvent(FindFunctionChecked(NAME_AMovementCharacter_Server_WallRunUpdate),NULL);
}
struct Z_Construct_UFunction_AMovementCharacter_Server_WallRunUpdate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovementCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMovementCharacter_Server_WallRunUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMovementCharacter, nullptr, "Server_WallRunUpdate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMovementCharacter_Server_WallRunUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMovementCharacter_Server_WallRunUpdate_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMovementCharacter_Server_WallRunUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMovementCharacter_Server_WallRunUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMovementCharacter::execServer_WallRunUpdate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_WallRunUpdate_Validate())
	{
		RPC_ValidateFailed(TEXT("Server_WallRunUpdate_Validate"));
		return;
	}
	P_THIS->Server_WallRunUpdate_Implementation();
	P_NATIVE_END;
}
// End Class AMovementCharacter Function Server_WallRunUpdate

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

// Begin Class AMovementCharacter Function StartAbility2
struct Z_Construct_UFunction_AMovementCharacter_StartAbility2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stealth Functions" },
		{ "ModuleRelativePath", "Public/MovementCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMovementCharacter_StartAbility2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMovementCharacter, nullptr, "StartAbility2", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMovementCharacter_StartAbility2_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMovementCharacter_StartAbility2_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMovementCharacter_StartAbility2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMovementCharacter_StartAbility2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMovementCharacter::execStartAbility2)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartAbility2();
	P_NATIVE_END;
}
// End Class AMovementCharacter Function StartAbility2

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
		{ "Server_BlockWallRun", &AMovementCharacter::execServer_BlockWallRun },
		{ "Server_Dash", &AMovementCharacter::execServer_Dash },
		{ "Server_Grapple", &AMovementCharacter::execServer_Grapple },
		{ "Server_GrappleAttack", &AMovementCharacter::execServer_GrappleAttack },
		{ "Server_LandEvent", &AMovementCharacter::execServer_LandEvent },
		{ "Server_UpdateCooldownValues", &AMovementCharacter::execServer_UpdateCooldownValues },
		{ "Server_WallRunUpdate", &AMovementCharacter::execServer_WallRunUpdate },
		{ "StartAbility1", &AMovementCharacter::execStartAbility1 },
		{ "StartAbility2", &AMovementCharacter::execStartAbility2 },
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
#if !UE_BUILD_SHIPPING
		{ "Comment", "//grapple variables\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovementCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "grapple variables" },
#endif
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_canGrapple_MetaData[] = {
		{ "Category", "MovementCharacter" },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_grappleAtkLerp_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovementCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_targetGrappleAtkLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovementCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_grappleRemainingTime_MetaData[] = {
		{ "Category", "Movement Class Base Values" },
		{ "ModuleRelativePath", "Public/MovementCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_grappleAtkDist_MetaData[] = {
		{ "Category", "Movement Class Base Values" },
		{ "ModuleRelativePath", "Public/MovementCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_grappleAtkKnockbackAmnt_MetaData[] = {
		{ "Category", "Movement Class Base Values" },
		{ "ModuleRelativePath", "Public/MovementCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_grappleObj_MetaData[] = {
		{ "Category", "MovementCharacter" },
		{ "ModuleRelativePath", "Public/MovementCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_dashCooldownTimer_MetaData[] = {
		{ "Category", "Movement Class Base Values" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//dash variables\n" },
#endif
		{ "ModuleRelativePath", "Public/MovementCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "dash variables" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_curDashCooldown_MetaData[] = {
		{ "Category", "Movement Class Base Values" },
		{ "ModuleRelativePath", "Public/MovementCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_baseDashCooldown_MetaData[] = {
		{ "Category", "Movement Class Base Values" },
		{ "ModuleRelativePath", "Public/MovementCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_dashDist_MetaData[] = {
		{ "Category", "Movement Class Base Values" },
		{ "ModuleRelativePath", "Public/MovementCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_dashTime_MetaData[] = {
		{ "Category", "Movement Class Base Values" },
		{ "ModuleRelativePath", "Public/MovementCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_targetDashLocation_MetaData[] = {
		{ "Category", "Movement Class Base Values" },
		{ "ModuleRelativePath", "Public/MovementCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_dashingLerp_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovementCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_canDash_MetaData[] = {
		{ "Category", "MovementCharacter" },
		{ "ModuleRelativePath", "Public/MovementCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_dashTimer_MetaData[] = {
		{ "Category", "Movement Class Base Values" },
		{ "ModuleRelativePath", "Public/MovementCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_dashRemainingTime_MetaData[] = {
		{ "Category", "Movement Class Base Values" },
		{ "ModuleRelativePath", "Public/MovementCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ultTimer_MetaData[] = {
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ultCooldownTimer_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovementCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ultCooldown_MetaData[] = {
		{ "Category", "Movement Class Base Values" },
		{ "ModuleRelativePath", "Public/MovementCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_recallPositions_MetaData[] = {
		{ "Category", "Movement Class Base Values" },
		{ "ModuleRelativePath", "Public/MovementCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_canSetRecallPos_MetaData[] = {
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_wallRunNormal_MetaData[] = {
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
	static void NewProp_canGrapple_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_canGrapple;
	static const UECodeGen_Private::FStructPropertyParams NewProp_grappleTimer;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_grappleSpd;
	static void NewProp_didGrappleAtk_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_didGrappleAtk;
	static void NewProp_grappleAtkLerp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_grappleAtkLerp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_targetGrappleAtkLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_grappleRemainingTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_grappleAtkDist;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_grappleAtkKnockbackAmnt;
	static const UECodeGen_Private::FClassPropertyParams NewProp_grappleObj;
	static const UECodeGen_Private::FStructPropertyParams NewProp_dashCooldownTimer;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_curDashCooldown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_baseDashCooldown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_dashDist;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_dashTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_targetDashLocation;
	static void NewProp_dashingLerp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_dashingLerp;
	static void NewProp_canDash_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_canDash;
	static const UECodeGen_Private::FStructPropertyParams NewProp_dashTimer;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_dashRemainingTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ultTimer;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ultLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ultRemainingTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ultCooldownTimer;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ultCooldown;
	static const UECodeGen_Private::FStructPropertyParams NewProp_recallPositions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_recallPositions;
	static void NewProp_canSetRecallPos_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_canSetRecallPos;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_movementVFX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_baseBodyMat;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ultimateMat;
	static void NewProp_cameraRotateLerp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_cameraRotateLerp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_targetRoll;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_baseRoll;
	static const UECodeGen_Private::FStructPropertyParams NewProp_wallRunNormal;
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
		{ &Z_Construct_UFunction_AMovementCharacter_Server_BlockWallRun, "Server_BlockWallRun" }, // 3731481249
		{ &Z_Construct_UFunction_AMovementCharacter_Server_Dash, "Server_Dash" }, // 3511360969
		{ &Z_Construct_UFunction_AMovementCharacter_Server_Grapple, "Server_Grapple" }, // 4131204916
		{ &Z_Construct_UFunction_AMovementCharacter_Server_GrappleAttack, "Server_GrappleAttack" }, // 2621211945
		{ &Z_Construct_UFunction_AMovementCharacter_Server_LandEvent, "Server_LandEvent" }, // 4097328090
		{ &Z_Construct_UFunction_AMovementCharacter_Server_UpdateCooldownValues, "Server_UpdateCooldownValues" }, // 1795834552
		{ &Z_Construct_UFunction_AMovementCharacter_Server_WallRunUpdate, "Server_WallRunUpdate" }, // 880572195
		{ &Z_Construct_UFunction_AMovementCharacter_StartAbility1, "StartAbility1" }, // 2296075615
		{ &Z_Construct_UFunction_AMovementCharacter_StartAbility2, "StartAbility2" }, // 1186396655
		{ &Z_Construct_UFunction_AMovementCharacter_StartUltimate, "StartUltimate" }, // 3253523057
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovementCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_cableComponent = { "cableComponent", nullptr, (EPropertyFlags)0x001000000008002d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharacter, cableComponent), Z_Construct_UClass_UCableComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_cableComponent_MetaData), NewProp_cableComponent_MetaData) };
void Z_Construct_UClass_AMovementCharacter_Statics::NewProp_bAttachEnd_SetBit(void* Obj)
{
	((AMovementCharacter*)Obj)->bAttachEnd = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_bAttachEnd = { "bAttachEnd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMovementCharacter), &Z_Construct_UClass_AMovementCharacter_Statics::NewProp_bAttachEnd_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAttachEnd_MetaData), NewProp_bAttachEnd_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_grappleCooldownTimer = { "grappleCooldownTimer", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharacter, grappleCooldownTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_grappleCooldownTimer_MetaData), NewProp_grappleCooldownTimer_MetaData) }; // 756291145
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_grappleCooldown = { "grappleCooldown", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharacter, grappleCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_grappleCooldown_MetaData), NewProp_grappleCooldown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_baseGrappleCooldown = { "baseGrappleCooldown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharacter, baseGrappleCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_baseGrappleCooldown_MetaData), NewProp_baseGrappleCooldown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_grappleTime = { "grappleTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharacter, grappleTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_grappleTime_MetaData), NewProp_grappleTime_MetaData) };
void Z_Construct_UClass_AMovementCharacter_Statics::NewProp_canGrapple_SetBit(void* Obj)
{
	((AMovementCharacter*)Obj)->canGrapple = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_canGrapple = { "canGrapple", nullptr, (EPropertyFlags)0x0010000000020021, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMovementCharacter), &Z_Construct_UClass_AMovementCharacter_Statics::NewProp_canGrapple_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_canGrapple_MetaData), NewProp_canGrapple_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_grappleTimer = { "grappleTimer", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharacter, grappleTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_grappleTimer_MetaData), NewProp_grappleTimer_MetaData) }; // 756291145
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_grappleSpd = { "grappleSpd", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharacter, grappleSpd), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_grappleSpd_MetaData), NewProp_grappleSpd_MetaData) };
void Z_Construct_UClass_AMovementCharacter_Statics::NewProp_didGrappleAtk_SetBit(void* Obj)
{
	((AMovementCharacter*)Obj)->didGrappleAtk = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_didGrappleAtk = { "didGrappleAtk", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMovementCharacter), &Z_Construct_UClass_AMovementCharacter_Statics::NewProp_didGrappleAtk_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_didGrappleAtk_MetaData), NewProp_didGrappleAtk_MetaData) };
void Z_Construct_UClass_AMovementCharacter_Statics::NewProp_grappleAtkLerp_SetBit(void* Obj)
{
	((AMovementCharacter*)Obj)->grappleAtkLerp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_grappleAtkLerp = { "grappleAtkLerp", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMovementCharacter), &Z_Construct_UClass_AMovementCharacter_Statics::NewProp_grappleAtkLerp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_grappleAtkLerp_MetaData), NewProp_grappleAtkLerp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_targetGrappleAtkLocation = { "targetGrappleAtkLocation", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharacter, targetGrappleAtkLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_targetGrappleAtkLocation_MetaData), NewProp_targetGrappleAtkLocation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_grappleRemainingTime = { "grappleRemainingTime", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharacter, grappleRemainingTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_grappleRemainingTime_MetaData), NewProp_grappleRemainingTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_grappleAtkDist = { "grappleAtkDist", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharacter, grappleAtkDist), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_grappleAtkDist_MetaData), NewProp_grappleAtkDist_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_grappleAtkKnockbackAmnt = { "grappleAtkKnockbackAmnt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharacter, grappleAtkKnockbackAmnt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_grappleAtkKnockbackAmnt_MetaData), NewProp_grappleAtkKnockbackAmnt_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_grappleObj = { "grappleObj", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharacter, grappleObj), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_grappleObj_MetaData), NewProp_grappleObj_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_dashCooldownTimer = { "dashCooldownTimer", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharacter, dashCooldownTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_dashCooldownTimer_MetaData), NewProp_dashCooldownTimer_MetaData) }; // 756291145
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_curDashCooldown = { "curDashCooldown", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharacter, curDashCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_curDashCooldown_MetaData), NewProp_curDashCooldown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_baseDashCooldown = { "baseDashCooldown", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharacter, baseDashCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_baseDashCooldown_MetaData), NewProp_baseDashCooldown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_dashDist = { "dashDist", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharacter, dashDist), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_dashDist_MetaData), NewProp_dashDist_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_dashTime = { "dashTime", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharacter, dashTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_dashTime_MetaData), NewProp_dashTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_targetDashLocation = { "targetDashLocation", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharacter, targetDashLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_targetDashLocation_MetaData), NewProp_targetDashLocation_MetaData) };
void Z_Construct_UClass_AMovementCharacter_Statics::NewProp_dashingLerp_SetBit(void* Obj)
{
	((AMovementCharacter*)Obj)->dashingLerp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_dashingLerp = { "dashingLerp", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMovementCharacter), &Z_Construct_UClass_AMovementCharacter_Statics::NewProp_dashingLerp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_dashingLerp_MetaData), NewProp_dashingLerp_MetaData) };
void Z_Construct_UClass_AMovementCharacter_Statics::NewProp_canDash_SetBit(void* Obj)
{
	((AMovementCharacter*)Obj)->canDash = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_canDash = { "canDash", nullptr, (EPropertyFlags)0x0010000000020021, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMovementCharacter), &Z_Construct_UClass_AMovementCharacter_Statics::NewProp_canDash_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_canDash_MetaData), NewProp_canDash_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_dashTimer = { "dashTimer", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharacter, dashTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_dashTimer_MetaData), NewProp_dashTimer_MetaData) }; // 756291145
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_dashRemainingTime = { "dashRemainingTime", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharacter, dashRemainingTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_dashRemainingTime_MetaData), NewProp_dashRemainingTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_ultTimer = { "ultTimer", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharacter, ultTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ultTimer_MetaData), NewProp_ultTimer_MetaData) }; // 756291145
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_ultLength = { "ultLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharacter, ultLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ultLength_MetaData), NewProp_ultLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_ultRemainingTime = { "ultRemainingTime", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharacter, ultRemainingTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ultRemainingTime_MetaData), NewProp_ultRemainingTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_ultCooldownTimer = { "ultCooldownTimer", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharacter, ultCooldownTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ultCooldownTimer_MetaData), NewProp_ultCooldownTimer_MetaData) }; // 756291145
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_ultCooldown = { "ultCooldown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharacter, ultCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ultCooldown_MetaData), NewProp_ultCooldown_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_recallPositions_Inner = { "recallPositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_recallPositions = { "recallPositions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharacter, recallPositions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_recallPositions_MetaData), NewProp_recallPositions_MetaData) };
void Z_Construct_UClass_AMovementCharacter_Statics::NewProp_canSetRecallPos_SetBit(void* Obj)
{
	((AMovementCharacter*)Obj)->canSetRecallPos = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_canSetRecallPos = { "canSetRecallPos", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMovementCharacter), &Z_Construct_UClass_AMovementCharacter_Statics::NewProp_canSetRecallPos_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_canSetRecallPos_MetaData), NewProp_canSetRecallPos_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_movementVFX = { "movementVFX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharacter, movementVFX), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_movementVFX_MetaData), NewProp_movementVFX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_baseBodyMat = { "baseBodyMat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharacter, baseBodyMat), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_baseBodyMat_MetaData), NewProp_baseBodyMat_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_ultimateMat = { "ultimateMat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharacter, ultimateMat), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ultimateMat_MetaData), NewProp_ultimateMat_MetaData) };
void Z_Construct_UClass_AMovementCharacter_Statics::NewProp_cameraRotateLerp_SetBit(void* Obj)
{
	((AMovementCharacter*)Obj)->cameraRotateLerp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_cameraRotateLerp = { "cameraRotateLerp", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMovementCharacter), &Z_Construct_UClass_AMovementCharacter_Statics::NewProp_cameraRotateLerp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_cameraRotateLerp_MetaData), NewProp_cameraRotateLerp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_targetRoll = { "targetRoll", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharacter, targetRoll), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_targetRoll_MetaData), NewProp_targetRoll_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_baseRoll = { "baseRoll", nullptr, (EPropertyFlags)0x0010000000020035, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharacter, baseRoll), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_baseRoll_MetaData), NewProp_baseRoll_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_wallRunNormal = { "wallRunNormal", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharacter, wallRunNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_wallRunNormal_MetaData), NewProp_wallRunNormal_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_wallRunSpd = { "wallRunSpd", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharacter, wallRunSpd), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_wallRunSpd_MetaData), NewProp_wallRunSpd_MetaData) };
void Z_Construct_UClass_AMovementCharacter_Statics::NewProp_wallRunGravity_SetBit(void* Obj)
{
	((AMovementCharacter*)Obj)->wallRunGravity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_wallRunGravity = { "wallRunGravity", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMovementCharacter), &Z_Construct_UClass_AMovementCharacter_Statics::NewProp_wallRunGravity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_wallRunGravity_MetaData), NewProp_wallRunGravity_MetaData) };
void Z_Construct_UClass_AMovementCharacter_Statics::NewProp_isWallRunning_SetBit(void* Obj)
{
	((AMovementCharacter*)Obj)->isWallRunning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_isWallRunning = { "isWallRunning", nullptr, (EPropertyFlags)0x0010000000020035, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMovementCharacter), &Z_Construct_UClass_AMovementCharacter_Statics::NewProp_isWallRunning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isWallRunning_MetaData), NewProp_isWallRunning_MetaData) };
void Z_Construct_UClass_AMovementCharacter_Statics::NewProp_isWallRunningR_SetBit(void* Obj)
{
	((AMovementCharacter*)Obj)->isWallRunningR = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_isWallRunningR = { "isWallRunningR", nullptr, (EPropertyFlags)0x0010000000020035, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMovementCharacter), &Z_Construct_UClass_AMovementCharacter_Statics::NewProp_isWallRunningR_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isWallRunningR_MetaData), NewProp_isWallRunningR_MetaData) };
void Z_Construct_UClass_AMovementCharacter_Statics::NewProp_isWallRunningL_SetBit(void* Obj)
{
	((AMovementCharacter*)Obj)->isWallRunningL = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_isWallRunningL = { "isWallRunningL", nullptr, (EPropertyFlags)0x0010000000020035, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMovementCharacter), &Z_Construct_UClass_AMovementCharacter_Statics::NewProp_isWallRunningL_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isWallRunningL_MetaData), NewProp_isWallRunningL_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_targetWallRunGrav = { "targetWallRunGrav", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharacter, targetWallRunGrav), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_targetWallRunGrav_MetaData), NewProp_targetWallRunGrav_MetaData) };
void Z_Construct_UClass_AMovementCharacter_Statics::NewProp_canWallRun_SetBit(void* Obj)
{
	((AMovementCharacter*)Obj)->canWallRun = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_canWallRun = { "canWallRun", nullptr, (EPropertyFlags)0x0010000000020035, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMovementCharacter), &Z_Construct_UClass_AMovementCharacter_Statics::NewProp_canWallRun_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_canWallRun_MetaData), NewProp_canWallRun_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_wallRunDelay = { "wallRunDelay", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharacter, wallRunDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_wallRunDelay_MetaData), NewProp_wallRunDelay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_wallRunJumpDist = { "wallRunJumpDist", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharacter, wallRunJumpDist), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_wallRunJumpDist_MetaData), NewProp_wallRunJumpDist_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_wallRunJumpHeight = { "wallRunJumpHeight", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharacter, wallRunJumpHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_wallRunJumpHeight_MetaData), NewProp_wallRunJumpHeight_MetaData) };
void Z_Construct_UClass_AMovementCharacter_Statics::NewProp_isGrappleAtkHBOn_SetBit(void* Obj)
{
	((AMovementCharacter*)Obj)->isGrappleAtkHBOn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_isGrappleAtkHBOn = { "isGrappleAtkHBOn", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMovementCharacter), &Z_Construct_UClass_AMovementCharacter_Statics::NewProp_isGrappleAtkHBOn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isGrappleAtkHBOn_MetaData), NewProp_isGrappleAtkHBOn_MetaData) };
void Z_Construct_UClass_AMovementCharacter_Statics::NewProp_grappleAtkHitDetected_SetBit(void* Obj)
{
	((AMovementCharacter*)Obj)->grappleAtkHitDetected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMovementCharacter_Statics::NewProp_grappleAtkHitDetected = { "grappleAtkHitDetected", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMovementCharacter), &Z_Construct_UClass_AMovementCharacter_Statics::NewProp_grappleAtkHitDetected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_grappleAtkHitDetected_MetaData), NewProp_grappleAtkHitDetected_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMovementCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_cableComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_bAttachEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_grappleCooldownTimer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_grappleCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_baseGrappleCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_grappleTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_canGrapple,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_grappleTimer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_grappleSpd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_didGrappleAtk,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_grappleAtkLerp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_targetGrappleAtkLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_grappleRemainingTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_grappleAtkDist,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_grappleAtkKnockbackAmnt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_grappleObj,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_dashCooldownTimer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_curDashCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_baseDashCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_dashDist,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_dashTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_targetDashLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_dashingLerp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_canDash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_dashTimer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_dashRemainingTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_ultTimer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_ultLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_ultRemainingTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_ultCooldownTimer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_ultCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_recallPositions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_recallPositions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_canSetRecallPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_movementVFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_baseBodyMat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_ultimateMat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_cameraRotateLerp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_targetRoll,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_baseRoll,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharacter_Statics::NewProp_wallRunNormal,
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
void AMovementCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_cableComponent(TEXT("cableComponent"));
	static const FName Name_grappleCooldownTimer(TEXT("grappleCooldownTimer"));
	static const FName Name_grappleCooldown(TEXT("grappleCooldown"));
	static const FName Name_canGrapple(TEXT("canGrapple"));
	static const FName Name_grappleTimer(TEXT("grappleTimer"));
	static const FName Name_grappleSpd(TEXT("grappleSpd"));
	static const FName Name_didGrappleAtk(TEXT("didGrappleAtk"));
	static const FName Name_grappleAtkLerp(TEXT("grappleAtkLerp"));
	static const FName Name_targetGrappleAtkLocation(TEXT("targetGrappleAtkLocation"));
	static const FName Name_grappleRemainingTime(TEXT("grappleRemainingTime"));
	static const FName Name_grappleAtkDist(TEXT("grappleAtkDist"));
	static const FName Name_dashCooldownTimer(TEXT("dashCooldownTimer"));
	static const FName Name_curDashCooldown(TEXT("curDashCooldown"));
	static const FName Name_baseDashCooldown(TEXT("baseDashCooldown"));
	static const FName Name_dashTime(TEXT("dashTime"));
	static const FName Name_targetDashLocation(TEXT("targetDashLocation"));
	static const FName Name_dashingLerp(TEXT("dashingLerp"));
	static const FName Name_canDash(TEXT("canDash"));
	static const FName Name_dashTimer(TEXT("dashTimer"));
	static const FName Name_dashRemainingTime(TEXT("dashRemainingTime"));
	static const FName Name_ultTimer(TEXT("ultTimer"));
	static const FName Name_ultRemainingTime(TEXT("ultRemainingTime"));
	static const FName Name_ultCooldownTimer(TEXT("ultCooldownTimer"));
	static const FName Name_cameraRotateLerp(TEXT("cameraRotateLerp"));
	static const FName Name_targetRoll(TEXT("targetRoll"));
	static const FName Name_baseRoll(TEXT("baseRoll"));
	static const FName Name_wallRunNormal(TEXT("wallRunNormal"));
	static const FName Name_wallRunSpd(TEXT("wallRunSpd"));
	static const FName Name_wallRunGravity(TEXT("wallRunGravity"));
	static const FName Name_isWallRunning(TEXT("isWallRunning"));
	static const FName Name_isWallRunningR(TEXT("isWallRunningR"));
	static const FName Name_isWallRunningL(TEXT("isWallRunningL"));
	static const FName Name_targetWallRunGrav(TEXT("targetWallRunGrav"));
	static const FName Name_canWallRun(TEXT("canWallRun"));
	static const FName Name_wallRunDelay(TEXT("wallRunDelay"));
	static const FName Name_wallRunJumpDist(TEXT("wallRunJumpDist"));
	static const FName Name_wallRunJumpHeight(TEXT("wallRunJumpHeight"));
	static const FName Name_isGrappleAtkHBOn(TEXT("isGrappleAtkHBOn"));
	static const FName Name_grappleAtkHitDetected(TEXT("grappleAtkHitDetected"));
	const bool bIsValid = true
		&& Name_cableComponent == ClassReps[(int32)ENetFields_Private::cableComponent].Property->GetFName()
		&& Name_grappleCooldownTimer == ClassReps[(int32)ENetFields_Private::grappleCooldownTimer].Property->GetFName()
		&& Name_grappleCooldown == ClassReps[(int32)ENetFields_Private::grappleCooldown].Property->GetFName()
		&& Name_canGrapple == ClassReps[(int32)ENetFields_Private::canGrapple].Property->GetFName()
		&& Name_grappleTimer == ClassReps[(int32)ENetFields_Private::grappleTimer].Property->GetFName()
		&& Name_grappleSpd == ClassReps[(int32)ENetFields_Private::grappleSpd].Property->GetFName()
		&& Name_didGrappleAtk == ClassReps[(int32)ENetFields_Private::didGrappleAtk].Property->GetFName()
		&& Name_grappleAtkLerp == ClassReps[(int32)ENetFields_Private::grappleAtkLerp].Property->GetFName()
		&& Name_targetGrappleAtkLocation == ClassReps[(int32)ENetFields_Private::targetGrappleAtkLocation].Property->GetFName()
		&& Name_grappleRemainingTime == ClassReps[(int32)ENetFields_Private::grappleRemainingTime].Property->GetFName()
		&& Name_grappleAtkDist == ClassReps[(int32)ENetFields_Private::grappleAtkDist].Property->GetFName()
		&& Name_dashCooldownTimer == ClassReps[(int32)ENetFields_Private::dashCooldownTimer].Property->GetFName()
		&& Name_curDashCooldown == ClassReps[(int32)ENetFields_Private::curDashCooldown].Property->GetFName()
		&& Name_baseDashCooldown == ClassReps[(int32)ENetFields_Private::baseDashCooldown].Property->GetFName()
		&& Name_dashTime == ClassReps[(int32)ENetFields_Private::dashTime].Property->GetFName()
		&& Name_targetDashLocation == ClassReps[(int32)ENetFields_Private::targetDashLocation].Property->GetFName()
		&& Name_dashingLerp == ClassReps[(int32)ENetFields_Private::dashingLerp].Property->GetFName()
		&& Name_canDash == ClassReps[(int32)ENetFields_Private::canDash].Property->GetFName()
		&& Name_dashTimer == ClassReps[(int32)ENetFields_Private::dashTimer].Property->GetFName()
		&& Name_dashRemainingTime == ClassReps[(int32)ENetFields_Private::dashRemainingTime].Property->GetFName()
		&& Name_ultTimer == ClassReps[(int32)ENetFields_Private::ultTimer].Property->GetFName()
		&& Name_ultRemainingTime == ClassReps[(int32)ENetFields_Private::ultRemainingTime].Property->GetFName()
		&& Name_ultCooldownTimer == ClassReps[(int32)ENetFields_Private::ultCooldownTimer].Property->GetFName()
		&& Name_cameraRotateLerp == ClassReps[(int32)ENetFields_Private::cameraRotateLerp].Property->GetFName()
		&& Name_targetRoll == ClassReps[(int32)ENetFields_Private::targetRoll].Property->GetFName()
		&& Name_baseRoll == ClassReps[(int32)ENetFields_Private::baseRoll].Property->GetFName()
		&& Name_wallRunNormal == ClassReps[(int32)ENetFields_Private::wallRunNormal].Property->GetFName()
		&& Name_wallRunSpd == ClassReps[(int32)ENetFields_Private::wallRunSpd].Property->GetFName()
		&& Name_wallRunGravity == ClassReps[(int32)ENetFields_Private::wallRunGravity].Property->GetFName()
		&& Name_isWallRunning == ClassReps[(int32)ENetFields_Private::isWallRunning].Property->GetFName()
		&& Name_isWallRunningR == ClassReps[(int32)ENetFields_Private::isWallRunningR].Property->GetFName()
		&& Name_isWallRunningL == ClassReps[(int32)ENetFields_Private::isWallRunningL].Property->GetFName()
		&& Name_targetWallRunGrav == ClassReps[(int32)ENetFields_Private::targetWallRunGrav].Property->GetFName()
		&& Name_canWallRun == ClassReps[(int32)ENetFields_Private::canWallRun].Property->GetFName()
		&& Name_wallRunDelay == ClassReps[(int32)ENetFields_Private::wallRunDelay].Property->GetFName()
		&& Name_wallRunJumpDist == ClassReps[(int32)ENetFields_Private::wallRunJumpDist].Property->GetFName()
		&& Name_wallRunJumpHeight == ClassReps[(int32)ENetFields_Private::wallRunJumpHeight].Property->GetFName()
		&& Name_isGrappleAtkHBOn == ClassReps[(int32)ENetFields_Private::isGrappleAtkHBOn].Property->GetFName()
		&& Name_grappleAtkHitDetected == ClassReps[(int32)ENetFields_Private::grappleAtkHitDetected].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AMovementCharacter"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMovementCharacter);
AMovementCharacter::~AMovementCharacter() {}
// End Class AMovementCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_MovementCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMovementCharacter, AMovementCharacter::StaticClass, TEXT("AMovementCharacter"), &Z_Registration_Info_UClass_AMovementCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMovementCharacter), 1676167510U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_MovementCharacter_h_1078822128(TEXT("/Script/ClassShooter"),
	Z_CompiledInDeferFile_FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_MovementCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_MovementCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
