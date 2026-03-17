// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClassShooter/Public/ShieldCharacter.h"
#include "Runtime/Engine/Classes/Engine/TimerHandle.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShieldCharacter() {}

// Begin Cross Module References
CLASSSHOOTER_API UClass* Z_Construct_UClass_AClassShooterCharacter();
CLASSSHOOTER_API UClass* Z_Construct_UClass_AShield_NoRegister();
CLASSSHOOTER_API UClass* Z_Construct_UClass_AShieldCharacter();
CLASSSHOOTER_API UClass* Z_Construct_UClass_AShieldCharacter_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
UPackage* Z_Construct_UPackage__Script_ClassShooter();
// End Cross Module References

// Begin Class AShieldCharacter Function ADS
struct Z_Construct_UFunction_AShieldCharacter_ADS_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Shield Functions" },
		{ "ModuleRelativePath", "Public/ShieldCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShieldCharacter_ADS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShieldCharacter, nullptr, "ADS", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShieldCharacter_ADS_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShieldCharacter_ADS_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AShieldCharacter_ADS()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShieldCharacter_ADS_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AShieldCharacter::execADS)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ADS();
	P_NATIVE_END;
}
// End Class AShieldCharacter Function ADS

// Begin Class AShieldCharacter Function Block
struct Z_Construct_UFunction_AShieldCharacter_Block_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Shield Functions" },
		{ "ModuleRelativePath", "Public/ShieldCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShieldCharacter_Block_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShieldCharacter, nullptr, "Block", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShieldCharacter_Block_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShieldCharacter_Block_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AShieldCharacter_Block()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShieldCharacter_Block_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AShieldCharacter::execBlock)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Block();
	P_NATIVE_END;
}
// End Class AShieldCharacter Function Block

// Begin Class AShieldCharacter Function Multi_ShieldBash
static FName NAME_AShieldCharacter_Multi_ShieldBash = FName(TEXT("Multi_ShieldBash"));
void AShieldCharacter::Multi_ShieldBash()
{
	ProcessEvent(FindFunctionChecked(NAME_AShieldCharacter_Multi_ShieldBash),NULL);
}
struct Z_Construct_UFunction_AShieldCharacter_Multi_ShieldBash_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShieldCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShieldCharacter_Multi_ShieldBash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShieldCharacter, nullptr, "Multi_ShieldBash", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80084CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShieldCharacter_Multi_ShieldBash_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShieldCharacter_Multi_ShieldBash_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AShieldCharacter_Multi_ShieldBash()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShieldCharacter_Multi_ShieldBash_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AShieldCharacter::execMulti_ShieldBash)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Multi_ShieldBash_Validate())
	{
		RPC_ValidateFailed(TEXT("Multi_ShieldBash_Validate"));
		return;
	}
	P_THIS->Multi_ShieldBash_Implementation();
	P_NATIVE_END;
}
// End Class AShieldCharacter Function Multi_ShieldBash

// Begin Class AShieldCharacter Function Server_Block
static FName NAME_AShieldCharacter_Server_Block = FName(TEXT("Server_Block"));
void AShieldCharacter::Server_Block()
{
	ProcessEvent(FindFunctionChecked(NAME_AShieldCharacter_Server_Block),NULL);
}
struct Z_Construct_UFunction_AShieldCharacter_Server_Block_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShieldCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShieldCharacter_Server_Block_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShieldCharacter, nullptr, "Server_Block", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShieldCharacter_Server_Block_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShieldCharacter_Server_Block_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AShieldCharacter_Server_Block()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShieldCharacter_Server_Block_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AShieldCharacter::execServer_Block)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_Block_Validate())
	{
		RPC_ValidateFailed(TEXT("Server_Block_Validate"));
		return;
	}
	P_THIS->Server_Block_Implementation();
	P_NATIVE_END;
}
// End Class AShieldCharacter Function Server_Block

// Begin Class AShieldCharacter Function Server_ShieldADS
static FName NAME_AShieldCharacter_Server_ShieldADS = FName(TEXT("Server_ShieldADS"));
void AShieldCharacter::Server_ShieldADS()
{
	ProcessEvent(FindFunctionChecked(NAME_AShieldCharacter_Server_ShieldADS),NULL);
}
struct Z_Construct_UFunction_AShieldCharacter_Server_ShieldADS_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShieldCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShieldCharacter_Server_ShieldADS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShieldCharacter, nullptr, "Server_ShieldADS", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShieldCharacter_Server_ShieldADS_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShieldCharacter_Server_ShieldADS_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AShieldCharacter_Server_ShieldADS()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShieldCharacter_Server_ShieldADS_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AShieldCharacter::execServer_ShieldADS)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_ShieldADS_Validate())
	{
		RPC_ValidateFailed(TEXT("Server_ShieldADS_Validate"));
		return;
	}
	P_THIS->Server_ShieldADS_Implementation();
	P_NATIVE_END;
}
// End Class AShieldCharacter Function Server_ShieldADS

// Begin Class AShieldCharacter Function Server_ShieldBash
static FName NAME_AShieldCharacter_Server_ShieldBash = FName(TEXT("Server_ShieldBash"));
void AShieldCharacter::Server_ShieldBash()
{
	ProcessEvent(FindFunctionChecked(NAME_AShieldCharacter_Server_ShieldBash),NULL);
}
struct Z_Construct_UFunction_AShieldCharacter_Server_ShieldBash_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShieldCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShieldCharacter_Server_ShieldBash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShieldCharacter, nullptr, "Server_ShieldBash", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShieldCharacter_Server_ShieldBash_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShieldCharacter_Server_ShieldBash_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AShieldCharacter_Server_ShieldBash()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShieldCharacter_Server_ShieldBash_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AShieldCharacter::execServer_ShieldBash)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_ShieldBash_Validate())
	{
		RPC_ValidateFailed(TEXT("Server_ShieldBash_Validate"));
		return;
	}
	P_THIS->Server_ShieldBash_Implementation();
	P_NATIVE_END;
}
// End Class AShieldCharacter Function Server_ShieldBash

// Begin Class AShieldCharacter Function Server_ShieldStopADS
static FName NAME_AShieldCharacter_Server_ShieldStopADS = FName(TEXT("Server_ShieldStopADS"));
void AShieldCharacter::Server_ShieldStopADS()
{
	ProcessEvent(FindFunctionChecked(NAME_AShieldCharacter_Server_ShieldStopADS),NULL);
}
struct Z_Construct_UFunction_AShieldCharacter_Server_ShieldStopADS_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShieldCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShieldCharacter_Server_ShieldStopADS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShieldCharacter, nullptr, "Server_ShieldStopADS", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShieldCharacter_Server_ShieldStopADS_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShieldCharacter_Server_ShieldStopADS_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AShieldCharacter_Server_ShieldStopADS()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShieldCharacter_Server_ShieldStopADS_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AShieldCharacter::execServer_ShieldStopADS)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_ShieldStopADS_Validate())
	{
		RPC_ValidateFailed(TEXT("Server_ShieldStopADS_Validate"));
		return;
	}
	P_THIS->Server_ShieldStopADS_Implementation();
	P_NATIVE_END;
}
// End Class AShieldCharacter Function Server_ShieldStopADS

// Begin Class AShieldCharacter Function Server_ShieldThrow
static FName NAME_AShieldCharacter_Server_ShieldThrow = FName(TEXT("Server_ShieldThrow"));
void AShieldCharacter::Server_ShieldThrow()
{
	ProcessEvent(FindFunctionChecked(NAME_AShieldCharacter_Server_ShieldThrow),NULL);
}
struct Z_Construct_UFunction_AShieldCharacter_Server_ShieldThrow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShieldCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShieldCharacter_Server_ShieldThrow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShieldCharacter, nullptr, "Server_ShieldThrow", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShieldCharacter_Server_ShieldThrow_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShieldCharacter_Server_ShieldThrow_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AShieldCharacter_Server_ShieldThrow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShieldCharacter_Server_ShieldThrow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AShieldCharacter::execServer_ShieldThrow)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_ShieldThrow_Validate())
	{
		RPC_ValidateFailed(TEXT("Server_ShieldThrow_Validate"));
		return;
	}
	P_THIS->Server_ShieldThrow_Implementation();
	P_NATIVE_END;
}
// End Class AShieldCharacter Function Server_ShieldThrow

// Begin Class AShieldCharacter Function Server_StopBlocking
static FName NAME_AShieldCharacter_Server_StopBlocking = FName(TEXT("Server_StopBlocking"));
void AShieldCharacter::Server_StopBlocking()
{
	ProcessEvent(FindFunctionChecked(NAME_AShieldCharacter_Server_StopBlocking),NULL);
}
struct Z_Construct_UFunction_AShieldCharacter_Server_StopBlocking_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShieldCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShieldCharacter_Server_StopBlocking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShieldCharacter, nullptr, "Server_StopBlocking", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShieldCharacter_Server_StopBlocking_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShieldCharacter_Server_StopBlocking_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AShieldCharacter_Server_StopBlocking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShieldCharacter_Server_StopBlocking_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AShieldCharacter::execServer_StopBlocking)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_StopBlocking_Validate())
	{
		RPC_ValidateFailed(TEXT("Server_StopBlocking_Validate"));
		return;
	}
	P_THIS->Server_StopBlocking_Implementation();
	P_NATIVE_END;
}
// End Class AShieldCharacter Function Server_StopBlocking

// Begin Class AShieldCharacter Function Server_UpdateCooldownValues
static FName NAME_AShieldCharacter_Server_UpdateCooldownValues = FName(TEXT("Server_UpdateCooldownValues"));
void AShieldCharacter::Server_UpdateCooldownValues()
{
	ProcessEvent(FindFunctionChecked(NAME_AShieldCharacter_Server_UpdateCooldownValues),NULL);
}
struct Z_Construct_UFunction_AShieldCharacter_Server_UpdateCooldownValues_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShieldCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShieldCharacter_Server_UpdateCooldownValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShieldCharacter, nullptr, "Server_UpdateCooldownValues", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShieldCharacter_Server_UpdateCooldownValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShieldCharacter_Server_UpdateCooldownValues_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AShieldCharacter_Server_UpdateCooldownValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShieldCharacter_Server_UpdateCooldownValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AShieldCharacter::execServer_UpdateCooldownValues)
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
// End Class AShieldCharacter Function Server_UpdateCooldownValues

// Begin Class AShieldCharacter Function ShieldBash
struct Z_Construct_UFunction_AShieldCharacter_ShieldBash_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Shield Functions" },
		{ "ModuleRelativePath", "Public/ShieldCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShieldCharacter_ShieldBash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShieldCharacter, nullptr, "ShieldBash", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShieldCharacter_ShieldBash_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShieldCharacter_ShieldBash_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AShieldCharacter_ShieldBash()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShieldCharacter_ShieldBash_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AShieldCharacter::execShieldBash)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShieldBash();
	P_NATIVE_END;
}
// End Class AShieldCharacter Function ShieldBash

// Begin Class AShieldCharacter Function ShieldThrow
struct Z_Construct_UFunction_AShieldCharacter_ShieldThrow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Shield Functions" },
		{ "ModuleRelativePath", "Public/ShieldCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShieldCharacter_ShieldThrow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShieldCharacter, nullptr, "ShieldThrow", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShieldCharacter_ShieldThrow_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShieldCharacter_ShieldThrow_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AShieldCharacter_ShieldThrow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShieldCharacter_ShieldThrow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AShieldCharacter::execShieldThrow)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShieldThrow();
	P_NATIVE_END;
}
// End Class AShieldCharacter Function ShieldThrow

// Begin Class AShieldCharacter Function StartAbility1
struct Z_Construct_UFunction_AShieldCharacter_StartAbility1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Shield Functions" },
		{ "ModuleRelativePath", "Public/ShieldCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShieldCharacter_StartAbility1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShieldCharacter, nullptr, "StartAbility1", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShieldCharacter_StartAbility1_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShieldCharacter_StartAbility1_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AShieldCharacter_StartAbility1()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShieldCharacter_StartAbility1_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AShieldCharacter::execStartAbility1)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartAbility1();
	P_NATIVE_END;
}
// End Class AShieldCharacter Function StartAbility1

// Begin Class AShieldCharacter Function StartAbility2
struct Z_Construct_UFunction_AShieldCharacter_StartAbility2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Shield Functions" },
		{ "ModuleRelativePath", "Public/ShieldCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShieldCharacter_StartAbility2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShieldCharacter, nullptr, "StartAbility2", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShieldCharacter_StartAbility2_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShieldCharacter_StartAbility2_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AShieldCharacter_StartAbility2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShieldCharacter_StartAbility2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AShieldCharacter::execStartAbility2)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartAbility2();
	P_NATIVE_END;
}
// End Class AShieldCharacter Function StartAbility2

// Begin Class AShieldCharacter Function StartUltimate
struct Z_Construct_UFunction_AShieldCharacter_StartUltimate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Shield Functions" },
		{ "ModuleRelativePath", "Public/ShieldCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShieldCharacter_StartUltimate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShieldCharacter, nullptr, "StartUltimate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShieldCharacter_StartUltimate_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShieldCharacter_StartUltimate_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AShieldCharacter_StartUltimate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShieldCharacter_StartUltimate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AShieldCharacter::execStartUltimate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartUltimate();
	P_NATIVE_END;
}
// End Class AShieldCharacter Function StartUltimate

// Begin Class AShieldCharacter Function StopADS
struct Z_Construct_UFunction_AShieldCharacter_StopADS_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Shield Functions" },
		{ "ModuleRelativePath", "Public/ShieldCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShieldCharacter_StopADS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShieldCharacter, nullptr, "StopADS", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShieldCharacter_StopADS_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShieldCharacter_StopADS_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AShieldCharacter_StopADS()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShieldCharacter_StopADS_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AShieldCharacter::execStopADS)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopADS();
	P_NATIVE_END;
}
// End Class AShieldCharacter Function StopADS

// Begin Class AShieldCharacter Function StopBlocking
struct Z_Construct_UFunction_AShieldCharacter_StopBlocking_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Shield Functions" },
		{ "ModuleRelativePath", "Public/ShieldCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShieldCharacter_StopBlocking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShieldCharacter, nullptr, "StopBlocking", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShieldCharacter_StopBlocking_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShieldCharacter_StopBlocking_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AShieldCharacter_StopBlocking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShieldCharacter_StopBlocking_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AShieldCharacter::execStopBlocking)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopBlocking();
	P_NATIVE_END;
}
// End Class AShieldCharacter Function StopBlocking

// Begin Class AShieldCharacter
void AShieldCharacter::StaticRegisterNativesAShieldCharacter()
{
	UClass* Class = AShieldCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ADS", &AShieldCharacter::execADS },
		{ "Block", &AShieldCharacter::execBlock },
		{ "Multi_ShieldBash", &AShieldCharacter::execMulti_ShieldBash },
		{ "Server_Block", &AShieldCharacter::execServer_Block },
		{ "Server_ShieldADS", &AShieldCharacter::execServer_ShieldADS },
		{ "Server_ShieldBash", &AShieldCharacter::execServer_ShieldBash },
		{ "Server_ShieldStopADS", &AShieldCharacter::execServer_ShieldStopADS },
		{ "Server_ShieldThrow", &AShieldCharacter::execServer_ShieldThrow },
		{ "Server_StopBlocking", &AShieldCharacter::execServer_StopBlocking },
		{ "Server_UpdateCooldownValues", &AShieldCharacter::execServer_UpdateCooldownValues },
		{ "ShieldBash", &AShieldCharacter::execShieldBash },
		{ "ShieldThrow", &AShieldCharacter::execShieldThrow },
		{ "StartAbility1", &AShieldCharacter::execStartAbility1 },
		{ "StartAbility2", &AShieldCharacter::execStartAbility2 },
		{ "StartUltimate", &AShieldCharacter::execStartUltimate },
		{ "StopADS", &AShieldCharacter::execStopADS },
		{ "StopBlocking", &AShieldCharacter::execStopBlocking },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShieldCharacter);
UClass* Z_Construct_UClass_AShieldCharacter_NoRegister()
{
	return AShieldCharacter::StaticClass();
}
struct Z_Construct_UClass_AShieldCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ShieldCharacter.h" },
		{ "ModuleRelativePath", "Public/ShieldCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_shieldWorldObj_MetaData[] = {
		{ "Category", "ShieldCharacter" },
		{ "ModuleRelativePath", "Public/ShieldCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_shieldThrowWorldObj_MetaData[] = {
		{ "Category", "ShieldCharacter" },
		{ "ModuleRelativePath", "Public/ShieldCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_equippedShield_MetaData[] = {
		{ "Category", "Shield Class Base Values" },
		{ "ModuleRelativePath", "Public/ShieldCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_thrownShield_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShieldCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_originalShieldLoc_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShieldCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_shieldThrowLoc_MetaData[] = {
		{ "Category", "Shield Class Base Values" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ShieldCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_shieldBashTimer_MetaData[] = {
		{ "Category", "Shield Class Base Values" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//shield bash variables\n" },
#endif
		{ "ModuleRelativePath", "Public/ShieldCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "shield bash variables" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_shieldBashDist_MetaData[] = {
		{ "Category", "Shield Class Base Values" },
		{ "ModuleRelativePath", "Public/ShieldCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_shieldBashCooldown_MetaData[] = {
		{ "Category", "Shield Class Base Values" },
		{ "ModuleRelativePath", "Public/ShieldCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_baseShieldBashCooldown_MetaData[] = {
		{ "Category", "Shield Class Base Values" },
		{ "ModuleRelativePath", "Public/ShieldCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_baseShieldBashRemainingTime_MetaData[] = {
		{ "Category", "Shield Class Base Values" },
		{ "ModuleRelativePath", "Public/ShieldCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_targetShieldBashLocation_MetaData[] = {
		{ "Category", "Shield Class Base Values" },
		{ "ModuleRelativePath", "Public/ShieldCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_shieldBashLerp_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShieldCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_shieldThrowTimer_MetaData[] = {
		{ "Category", "Shield Class Base Values" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//shield throw variables\n" },
#endif
		{ "ModuleRelativePath", "Public/ShieldCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "shield throw variables" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_shieldThrowPow_MetaData[] = {
		{ "Category", "Shield Class Base Values" },
		{ "ModuleRelativePath", "Public/ShieldCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_shieldThrowCooldown_MetaData[] = {
		{ "Category", "Shield Class Base Values" },
		{ "ModuleRelativePath", "Public/ShieldCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_baseShieldThrowCooldown_MetaData[] = {
		{ "Category", "Shield Class Base Values" },
		{ "ModuleRelativePath", "Public/ShieldCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_baseShieldThrowRemainingTime_MetaData[] = {
		{ "Category", "Shield Class Base Values" },
		{ "ModuleRelativePath", "Public/ShieldCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ultTimer_MetaData[] = {
		{ "Category", "Shield Class Base Values" },
		{ "ModuleRelativePath", "Public/ShieldCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ultLength_MetaData[] = {
		{ "Category", "Shield Class Base Values" },
		{ "ModuleRelativePath", "Public/ShieldCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ultCooldownTimer_MetaData[] = {
		{ "Category", "Shield Class Base Values" },
		{ "ModuleRelativePath", "Public/ShieldCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ultCooldown_MetaData[] = {
		{ "Category", "Shield Class Base Values" },
		{ "ModuleRelativePath", "Public/ShieldCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ultRemainingTime_MetaData[] = {
		{ "Category", "Shield Class Base Values" },
		{ "ModuleRelativePath", "Public/ShieldCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_shieldBashVFX_MetaData[] = {
		{ "Category", "Shield Class Base Values" },
		{ "ModuleRelativePath", "Public/ShieldCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_baseBodyMat_MetaData[] = {
		{ "Category", "Shield Class Base Values" },
		{ "ModuleRelativePath", "Public/ShieldCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ultimateMat_MetaData[] = {
		{ "Category", "Shield Class Base Values" },
		{ "ModuleRelativePath", "Public/ShieldCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_shieldADSLerp_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShieldCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_shieldUnADSLerp_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShieldCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_shieldLocation_MetaData[] = {
		{ "Category", "Shield Class Base Values" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ShieldCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_unADSshieldLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShieldCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ADSshieldLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShieldCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_hasShield_MetaData[] = {
		{ "Category", "Shield Class Base Values" },
		{ "ModuleRelativePath", "Public/ShieldCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isShieldBashHBOn_MetaData[] = {
		{ "Category", "Class Base Values" },
		{ "ModuleRelativePath", "Public/ShieldCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_shieldBashHitDetected_MetaData[] = {
		{ "Category", "Class Base Values" },
		{ "ModuleRelativePath", "Public/ShieldCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_shieldWorldObj;
	static const UECodeGen_Private::FClassPropertyParams NewProp_shieldThrowWorldObj;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_equippedShield;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_thrownShield;
	static const UECodeGen_Private::FStructPropertyParams NewProp_originalShieldLoc;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_shieldThrowLoc;
	static const UECodeGen_Private::FStructPropertyParams NewProp_shieldBashTimer;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_shieldBashDist;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_shieldBashCooldown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_baseShieldBashCooldown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_baseShieldBashRemainingTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_targetShieldBashLocation;
	static void NewProp_shieldBashLerp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_shieldBashLerp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_shieldThrowTimer;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_shieldThrowPow;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_shieldThrowCooldown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_baseShieldThrowCooldown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_baseShieldThrowRemainingTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ultTimer;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ultLength;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ultCooldownTimer;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ultCooldown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ultRemainingTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_shieldBashVFX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_baseBodyMat;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ultimateMat;
	static void NewProp_shieldADSLerp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_shieldADSLerp;
	static void NewProp_shieldUnADSLerp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_shieldUnADSLerp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_shieldLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_unADSshieldLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ADSshieldLocation;
	static void NewProp_hasShield_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_hasShield;
	static void NewProp_isShieldBashHBOn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isShieldBashHBOn;
	static void NewProp_shieldBashHitDetected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_shieldBashHitDetected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AShieldCharacter_ADS, "ADS" }, // 1215942994
		{ &Z_Construct_UFunction_AShieldCharacter_Block, "Block" }, // 570295080
		{ &Z_Construct_UFunction_AShieldCharacter_Multi_ShieldBash, "Multi_ShieldBash" }, // 3514365498
		{ &Z_Construct_UFunction_AShieldCharacter_Server_Block, "Server_Block" }, // 1906205071
		{ &Z_Construct_UFunction_AShieldCharacter_Server_ShieldADS, "Server_ShieldADS" }, // 33356270
		{ &Z_Construct_UFunction_AShieldCharacter_Server_ShieldBash, "Server_ShieldBash" }, // 1492895061
		{ &Z_Construct_UFunction_AShieldCharacter_Server_ShieldStopADS, "Server_ShieldStopADS" }, // 1802436862
		{ &Z_Construct_UFunction_AShieldCharacter_Server_ShieldThrow, "Server_ShieldThrow" }, // 52474429
		{ &Z_Construct_UFunction_AShieldCharacter_Server_StopBlocking, "Server_StopBlocking" }, // 3074636601
		{ &Z_Construct_UFunction_AShieldCharacter_Server_UpdateCooldownValues, "Server_UpdateCooldownValues" }, // 3154434590
		{ &Z_Construct_UFunction_AShieldCharacter_ShieldBash, "ShieldBash" }, // 2728441072
		{ &Z_Construct_UFunction_AShieldCharacter_ShieldThrow, "ShieldThrow" }, // 2740348914
		{ &Z_Construct_UFunction_AShieldCharacter_StartAbility1, "StartAbility1" }, // 1806528261
		{ &Z_Construct_UFunction_AShieldCharacter_StartAbility2, "StartAbility2" }, // 3908906435
		{ &Z_Construct_UFunction_AShieldCharacter_StartUltimate, "StartUltimate" }, // 3567900083
		{ &Z_Construct_UFunction_AShieldCharacter_StopADS, "StopADS" }, // 3995191460
		{ &Z_Construct_UFunction_AShieldCharacter_StopBlocking, "StopBlocking" }, // 324290158
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShieldCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShieldCharacter_Statics::NewProp_shieldWorldObj = { "shieldWorldObj", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShieldCharacter, shieldWorldObj), Z_Construct_UClass_UClass, Z_Construct_UClass_AShield_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_shieldWorldObj_MetaData), NewProp_shieldWorldObj_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShieldCharacter_Statics::NewProp_shieldThrowWorldObj = { "shieldThrowWorldObj", nullptr, (EPropertyFlags)0x0014000000000025, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShieldCharacter, shieldThrowWorldObj), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_shieldThrowWorldObj_MetaData), NewProp_shieldThrowWorldObj_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShieldCharacter_Statics::NewProp_equippedShield = { "equippedShield", nullptr, (EPropertyFlags)0x0010000000020035, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShieldCharacter, equippedShield), Z_Construct_UClass_AShield_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_equippedShield_MetaData), NewProp_equippedShield_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShieldCharacter_Statics::NewProp_thrownShield = { "thrownShield", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShieldCharacter, thrownShield), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_thrownShield_MetaData), NewProp_thrownShield_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShieldCharacter_Statics::NewProp_originalShieldLoc = { "originalShieldLoc", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShieldCharacter, originalShieldLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_originalShieldLoc_MetaData), NewProp_originalShieldLoc_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShieldCharacter_Statics::NewProp_shieldThrowLoc = { "shieldThrowLoc", nullptr, (EPropertyFlags)0x001000000008002d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShieldCharacter, shieldThrowLoc), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_shieldThrowLoc_MetaData), NewProp_shieldThrowLoc_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShieldCharacter_Statics::NewProp_shieldBashTimer = { "shieldBashTimer", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShieldCharacter, shieldBashTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_shieldBashTimer_MetaData), NewProp_shieldBashTimer_MetaData) }; // 756291145
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShieldCharacter_Statics::NewProp_shieldBashDist = { "shieldBashDist", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShieldCharacter, shieldBashDist), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_shieldBashDist_MetaData), NewProp_shieldBashDist_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShieldCharacter_Statics::NewProp_shieldBashCooldown = { "shieldBashCooldown", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShieldCharacter, shieldBashCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_shieldBashCooldown_MetaData), NewProp_shieldBashCooldown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShieldCharacter_Statics::NewProp_baseShieldBashCooldown = { "baseShieldBashCooldown", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShieldCharacter, baseShieldBashCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_baseShieldBashCooldown_MetaData), NewProp_baseShieldBashCooldown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShieldCharacter_Statics::NewProp_baseShieldBashRemainingTime = { "baseShieldBashRemainingTime", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShieldCharacter, baseShieldBashRemainingTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_baseShieldBashRemainingTime_MetaData), NewProp_baseShieldBashRemainingTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShieldCharacter_Statics::NewProp_targetShieldBashLocation = { "targetShieldBashLocation", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShieldCharacter, targetShieldBashLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_targetShieldBashLocation_MetaData), NewProp_targetShieldBashLocation_MetaData) };
void Z_Construct_UClass_AShieldCharacter_Statics::NewProp_shieldBashLerp_SetBit(void* Obj)
{
	((AShieldCharacter*)Obj)->shieldBashLerp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShieldCharacter_Statics::NewProp_shieldBashLerp = { "shieldBashLerp", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AShieldCharacter), &Z_Construct_UClass_AShieldCharacter_Statics::NewProp_shieldBashLerp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_shieldBashLerp_MetaData), NewProp_shieldBashLerp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShieldCharacter_Statics::NewProp_shieldThrowTimer = { "shieldThrowTimer", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShieldCharacter, shieldThrowTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_shieldThrowTimer_MetaData), NewProp_shieldThrowTimer_MetaData) }; // 756291145
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShieldCharacter_Statics::NewProp_shieldThrowPow = { "shieldThrowPow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShieldCharacter, shieldThrowPow), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_shieldThrowPow_MetaData), NewProp_shieldThrowPow_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShieldCharacter_Statics::NewProp_shieldThrowCooldown = { "shieldThrowCooldown", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShieldCharacter, shieldThrowCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_shieldThrowCooldown_MetaData), NewProp_shieldThrowCooldown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShieldCharacter_Statics::NewProp_baseShieldThrowCooldown = { "baseShieldThrowCooldown", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShieldCharacter, baseShieldThrowCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_baseShieldThrowCooldown_MetaData), NewProp_baseShieldThrowCooldown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShieldCharacter_Statics::NewProp_baseShieldThrowRemainingTime = { "baseShieldThrowRemainingTime", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShieldCharacter, baseShieldThrowRemainingTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_baseShieldThrowRemainingTime_MetaData), NewProp_baseShieldThrowRemainingTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShieldCharacter_Statics::NewProp_ultTimer = { "ultTimer", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShieldCharacter, ultTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ultTimer_MetaData), NewProp_ultTimer_MetaData) }; // 756291145
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShieldCharacter_Statics::NewProp_ultLength = { "ultLength", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShieldCharacter, ultLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ultLength_MetaData), NewProp_ultLength_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShieldCharacter_Statics::NewProp_ultCooldownTimer = { "ultCooldownTimer", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShieldCharacter, ultCooldownTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ultCooldownTimer_MetaData), NewProp_ultCooldownTimer_MetaData) }; // 756291145
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShieldCharacter_Statics::NewProp_ultCooldown = { "ultCooldown", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShieldCharacter, ultCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ultCooldown_MetaData), NewProp_ultCooldown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShieldCharacter_Statics::NewProp_ultRemainingTime = { "ultRemainingTime", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShieldCharacter, ultRemainingTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ultRemainingTime_MetaData), NewProp_ultRemainingTime_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShieldCharacter_Statics::NewProp_shieldBashVFX = { "shieldBashVFX", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShieldCharacter, shieldBashVFX), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_shieldBashVFX_MetaData), NewProp_shieldBashVFX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShieldCharacter_Statics::NewProp_baseBodyMat = { "baseBodyMat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShieldCharacter, baseBodyMat), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_baseBodyMat_MetaData), NewProp_baseBodyMat_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShieldCharacter_Statics::NewProp_ultimateMat = { "ultimateMat", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShieldCharacter, ultimateMat), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ultimateMat_MetaData), NewProp_ultimateMat_MetaData) };
void Z_Construct_UClass_AShieldCharacter_Statics::NewProp_shieldADSLerp_SetBit(void* Obj)
{
	((AShieldCharacter*)Obj)->shieldADSLerp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShieldCharacter_Statics::NewProp_shieldADSLerp = { "shieldADSLerp", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AShieldCharacter), &Z_Construct_UClass_AShieldCharacter_Statics::NewProp_shieldADSLerp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_shieldADSLerp_MetaData), NewProp_shieldADSLerp_MetaData) };
void Z_Construct_UClass_AShieldCharacter_Statics::NewProp_shieldUnADSLerp_SetBit(void* Obj)
{
	((AShieldCharacter*)Obj)->shieldUnADSLerp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShieldCharacter_Statics::NewProp_shieldUnADSLerp = { "shieldUnADSLerp", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AShieldCharacter), &Z_Construct_UClass_AShieldCharacter_Statics::NewProp_shieldUnADSLerp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_shieldUnADSLerp_MetaData), NewProp_shieldUnADSLerp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShieldCharacter_Statics::NewProp_shieldLocation = { "shieldLocation", nullptr, (EPropertyFlags)0x001000000008002d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShieldCharacter, shieldLocation), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_shieldLocation_MetaData), NewProp_shieldLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShieldCharacter_Statics::NewProp_unADSshieldLocation = { "unADSshieldLocation", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShieldCharacter, unADSshieldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_unADSshieldLocation_MetaData), NewProp_unADSshieldLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShieldCharacter_Statics::NewProp_ADSshieldLocation = { "ADSshieldLocation", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShieldCharacter, ADSshieldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ADSshieldLocation_MetaData), NewProp_ADSshieldLocation_MetaData) };
void Z_Construct_UClass_AShieldCharacter_Statics::NewProp_hasShield_SetBit(void* Obj)
{
	((AShieldCharacter*)Obj)->hasShield = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShieldCharacter_Statics::NewProp_hasShield = { "hasShield", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AShieldCharacter), &Z_Construct_UClass_AShieldCharacter_Statics::NewProp_hasShield_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_hasShield_MetaData), NewProp_hasShield_MetaData) };
void Z_Construct_UClass_AShieldCharacter_Statics::NewProp_isShieldBashHBOn_SetBit(void* Obj)
{
	((AShieldCharacter*)Obj)->isShieldBashHBOn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShieldCharacter_Statics::NewProp_isShieldBashHBOn = { "isShieldBashHBOn", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AShieldCharacter), &Z_Construct_UClass_AShieldCharacter_Statics::NewProp_isShieldBashHBOn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isShieldBashHBOn_MetaData), NewProp_isShieldBashHBOn_MetaData) };
void Z_Construct_UClass_AShieldCharacter_Statics::NewProp_shieldBashHitDetected_SetBit(void* Obj)
{
	((AShieldCharacter*)Obj)->shieldBashHitDetected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShieldCharacter_Statics::NewProp_shieldBashHitDetected = { "shieldBashHitDetected", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AShieldCharacter), &Z_Construct_UClass_AShieldCharacter_Statics::NewProp_shieldBashHitDetected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_shieldBashHitDetected_MetaData), NewProp_shieldBashHitDetected_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShieldCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShieldCharacter_Statics::NewProp_shieldWorldObj,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShieldCharacter_Statics::NewProp_shieldThrowWorldObj,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShieldCharacter_Statics::NewProp_equippedShield,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShieldCharacter_Statics::NewProp_thrownShield,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShieldCharacter_Statics::NewProp_originalShieldLoc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShieldCharacter_Statics::NewProp_shieldThrowLoc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShieldCharacter_Statics::NewProp_shieldBashTimer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShieldCharacter_Statics::NewProp_shieldBashDist,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShieldCharacter_Statics::NewProp_shieldBashCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShieldCharacter_Statics::NewProp_baseShieldBashCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShieldCharacter_Statics::NewProp_baseShieldBashRemainingTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShieldCharacter_Statics::NewProp_targetShieldBashLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShieldCharacter_Statics::NewProp_shieldBashLerp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShieldCharacter_Statics::NewProp_shieldThrowTimer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShieldCharacter_Statics::NewProp_shieldThrowPow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShieldCharacter_Statics::NewProp_shieldThrowCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShieldCharacter_Statics::NewProp_baseShieldThrowCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShieldCharacter_Statics::NewProp_baseShieldThrowRemainingTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShieldCharacter_Statics::NewProp_ultTimer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShieldCharacter_Statics::NewProp_ultLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShieldCharacter_Statics::NewProp_ultCooldownTimer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShieldCharacter_Statics::NewProp_ultCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShieldCharacter_Statics::NewProp_ultRemainingTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShieldCharacter_Statics::NewProp_shieldBashVFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShieldCharacter_Statics::NewProp_baseBodyMat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShieldCharacter_Statics::NewProp_ultimateMat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShieldCharacter_Statics::NewProp_shieldADSLerp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShieldCharacter_Statics::NewProp_shieldUnADSLerp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShieldCharacter_Statics::NewProp_shieldLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShieldCharacter_Statics::NewProp_unADSshieldLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShieldCharacter_Statics::NewProp_ADSshieldLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShieldCharacter_Statics::NewProp_hasShield,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShieldCharacter_Statics::NewProp_isShieldBashHBOn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShieldCharacter_Statics::NewProp_shieldBashHitDetected,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShieldCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AShieldCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AClassShooterCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_ClassShooter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShieldCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AShieldCharacter_Statics::ClassParams = {
	&AShieldCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AShieldCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AShieldCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShieldCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AShieldCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AShieldCharacter()
{
	if (!Z_Registration_Info_UClass_AShieldCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShieldCharacter.OuterSingleton, Z_Construct_UClass_AShieldCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AShieldCharacter.OuterSingleton;
}
template<> CLASSSHOOTER_API UClass* StaticClass<AShieldCharacter>()
{
	return AShieldCharacter::StaticClass();
}
void AShieldCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_shieldThrowWorldObj(TEXT("shieldThrowWorldObj"));
	static const FName Name_equippedShield(TEXT("equippedShield"));
	static const FName Name_thrownShield(TEXT("thrownShield"));
	static const FName Name_originalShieldLoc(TEXT("originalShieldLoc"));
	static const FName Name_shieldThrowLoc(TEXT("shieldThrowLoc"));
	static const FName Name_shieldBashTimer(TEXT("shieldBashTimer"));
	static const FName Name_shieldBashDist(TEXT("shieldBashDist"));
	static const FName Name_shieldBashCooldown(TEXT("shieldBashCooldown"));
	static const FName Name_baseShieldBashCooldown(TEXT("baseShieldBashCooldown"));
	static const FName Name_baseShieldBashRemainingTime(TEXT("baseShieldBashRemainingTime"));
	static const FName Name_targetShieldBashLocation(TEXT("targetShieldBashLocation"));
	static const FName Name_shieldBashLerp(TEXT("shieldBashLerp"));
	static const FName Name_shieldThrowTimer(TEXT("shieldThrowTimer"));
	static const FName Name_shieldThrowCooldown(TEXT("shieldThrowCooldown"));
	static const FName Name_baseShieldThrowCooldown(TEXT("baseShieldThrowCooldown"));
	static const FName Name_baseShieldThrowRemainingTime(TEXT("baseShieldThrowRemainingTime"));
	static const FName Name_ultTimer(TEXT("ultTimer"));
	static const FName Name_ultLength(TEXT("ultLength"));
	static const FName Name_ultCooldownTimer(TEXT("ultCooldownTimer"));
	static const FName Name_ultCooldown(TEXT("ultCooldown"));
	static const FName Name_ultRemainingTime(TEXT("ultRemainingTime"));
	static const FName Name_shieldBashVFX(TEXT("shieldBashVFX"));
	static const FName Name_ultimateMat(TEXT("ultimateMat"));
	static const FName Name_shieldADSLerp(TEXT("shieldADSLerp"));
	static const FName Name_shieldUnADSLerp(TEXT("shieldUnADSLerp"));
	static const FName Name_shieldLocation(TEXT("shieldLocation"));
	static const FName Name_unADSshieldLocation(TEXT("unADSshieldLocation"));
	static const FName Name_ADSshieldLocation(TEXT("ADSshieldLocation"));
	static const FName Name_hasShield(TEXT("hasShield"));
	static const FName Name_isShieldBashHBOn(TEXT("isShieldBashHBOn"));
	static const FName Name_shieldBashHitDetected(TEXT("shieldBashHitDetected"));
	const bool bIsValid = true
		&& Name_shieldThrowWorldObj == ClassReps[(int32)ENetFields_Private::shieldThrowWorldObj].Property->GetFName()
		&& Name_equippedShield == ClassReps[(int32)ENetFields_Private::equippedShield].Property->GetFName()
		&& Name_thrownShield == ClassReps[(int32)ENetFields_Private::thrownShield].Property->GetFName()
		&& Name_originalShieldLoc == ClassReps[(int32)ENetFields_Private::originalShieldLoc].Property->GetFName()
		&& Name_shieldThrowLoc == ClassReps[(int32)ENetFields_Private::shieldThrowLoc].Property->GetFName()
		&& Name_shieldBashTimer == ClassReps[(int32)ENetFields_Private::shieldBashTimer].Property->GetFName()
		&& Name_shieldBashDist == ClassReps[(int32)ENetFields_Private::shieldBashDist].Property->GetFName()
		&& Name_shieldBashCooldown == ClassReps[(int32)ENetFields_Private::shieldBashCooldown].Property->GetFName()
		&& Name_baseShieldBashCooldown == ClassReps[(int32)ENetFields_Private::baseShieldBashCooldown].Property->GetFName()
		&& Name_baseShieldBashRemainingTime == ClassReps[(int32)ENetFields_Private::baseShieldBashRemainingTime].Property->GetFName()
		&& Name_targetShieldBashLocation == ClassReps[(int32)ENetFields_Private::targetShieldBashLocation].Property->GetFName()
		&& Name_shieldBashLerp == ClassReps[(int32)ENetFields_Private::shieldBashLerp].Property->GetFName()
		&& Name_shieldThrowTimer == ClassReps[(int32)ENetFields_Private::shieldThrowTimer].Property->GetFName()
		&& Name_shieldThrowCooldown == ClassReps[(int32)ENetFields_Private::shieldThrowCooldown].Property->GetFName()
		&& Name_baseShieldThrowCooldown == ClassReps[(int32)ENetFields_Private::baseShieldThrowCooldown].Property->GetFName()
		&& Name_baseShieldThrowRemainingTime == ClassReps[(int32)ENetFields_Private::baseShieldThrowRemainingTime].Property->GetFName()
		&& Name_ultTimer == ClassReps[(int32)ENetFields_Private::ultTimer].Property->GetFName()
		&& Name_ultLength == ClassReps[(int32)ENetFields_Private::ultLength].Property->GetFName()
		&& Name_ultCooldownTimer == ClassReps[(int32)ENetFields_Private::ultCooldownTimer].Property->GetFName()
		&& Name_ultCooldown == ClassReps[(int32)ENetFields_Private::ultCooldown].Property->GetFName()
		&& Name_ultRemainingTime == ClassReps[(int32)ENetFields_Private::ultRemainingTime].Property->GetFName()
		&& Name_shieldBashVFX == ClassReps[(int32)ENetFields_Private::shieldBashVFX].Property->GetFName()
		&& Name_ultimateMat == ClassReps[(int32)ENetFields_Private::ultimateMat].Property->GetFName()
		&& Name_shieldADSLerp == ClassReps[(int32)ENetFields_Private::shieldADSLerp].Property->GetFName()
		&& Name_shieldUnADSLerp == ClassReps[(int32)ENetFields_Private::shieldUnADSLerp].Property->GetFName()
		&& Name_shieldLocation == ClassReps[(int32)ENetFields_Private::shieldLocation].Property->GetFName()
		&& Name_unADSshieldLocation == ClassReps[(int32)ENetFields_Private::unADSshieldLocation].Property->GetFName()
		&& Name_ADSshieldLocation == ClassReps[(int32)ENetFields_Private::ADSshieldLocation].Property->GetFName()
		&& Name_hasShield == ClassReps[(int32)ENetFields_Private::hasShield].Property->GetFName()
		&& Name_isShieldBashHBOn == ClassReps[(int32)ENetFields_Private::isShieldBashHBOn].Property->GetFName()
		&& Name_shieldBashHitDetected == ClassReps[(int32)ENetFields_Private::shieldBashHitDetected].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AShieldCharacter"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AShieldCharacter);
AShieldCharacter::~AShieldCharacter() {}
// End Class AShieldCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_ShieldCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AShieldCharacter, AShieldCharacter::StaticClass, TEXT("AShieldCharacter"), &Z_Registration_Info_UClass_AShieldCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShieldCharacter), 3696709848U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_ShieldCharacter_h_1293173226(TEXT("/Script/ClassShooter"),
	Z_CompiledInDeferFile_FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_ShieldCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_17038_Desktop_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_ShieldCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
