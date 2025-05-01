// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClassShooter/Public/Damageable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDamageable() {}

// Begin Cross Module References
CLASSSHOOTER_API UClass* Z_Construct_UClass_UDamageable();
CLASSSHOOTER_API UClass* Z_Construct_UClass_UDamageable_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_ClassShooter();
// End Cross Module References

// Begin Interface UDamageable Function TakeCustomDamage
struct Damageable_eventTakeCustomDamage_Parms
{
	float Amount;
};
void IDamageable::TakeCustomDamage(float Amount)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_TakeCustomDamage instead.");
}
static FName NAME_UDamageable_TakeCustomDamage = FName(TEXT("TakeCustomDamage"));
void IDamageable::Execute_TakeCustomDamage(UObject* O, float Amount)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDamageable::StaticClass()));
	Damageable_eventTakeCustomDamage_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDamageable_TakeCustomDamage);
	if (Func)
	{
		Parms.Amount=Amount;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IDamageable*)(O->GetNativeInterfaceAddress(UDamageable::StaticClass())))
	{
		I->TakeCustomDamage_Implementation(Amount);
	}
}
struct Z_Construct_UFunction_UDamageable_TakeCustomDamage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/Damageable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDamageable_TakeCustomDamage_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Damageable_eventTakeCustomDamage_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDamageable_TakeCustomDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamageable_TakeCustomDamage_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageable_TakeCustomDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDamageable_TakeCustomDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDamageable, nullptr, "TakeCustomDamage", nullptr, nullptr, Z_Construct_UFunction_UDamageable_TakeCustomDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageable_TakeCustomDamage_Statics::PropPointers), sizeof(Damageable_eventTakeCustomDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageable_TakeCustomDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDamageable_TakeCustomDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Damageable_eventTakeCustomDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDamageable_TakeCustomDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDamageable_TakeCustomDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IDamageable::execTakeCustomDamage)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TakeCustomDamage_Implementation(Z_Param_Amount);
	P_NATIVE_END;
}
// End Interface UDamageable Function TakeCustomDamage

// Begin Interface UDamageable
void UDamageable::StaticRegisterNativesUDamageable()
{
	UClass* Class = UDamageable::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "TakeCustomDamage", &IDamageable::execTakeCustomDamage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDamageable);
UClass* Z_Construct_UClass_UDamageable_NoRegister()
{
	return UDamageable::StaticClass();
}
struct Z_Construct_UClass_UDamageable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Damageable.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDamageable_TakeCustomDamage, "TakeCustomDamage" }, // 3314959516
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDamageable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDamageable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ClassShooter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDamageable_Statics::ClassParams = {
	&UDamageable::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageable_Statics::Class_MetaDataParams), Z_Construct_UClass_UDamageable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDamageable()
{
	if (!Z_Registration_Info_UClass_UDamageable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDamageable.OuterSingleton, Z_Construct_UClass_UDamageable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDamageable.OuterSingleton;
}
template<> CLASSSHOOTER_API UClass* StaticClass<UDamageable>()
{
	return UDamageable::StaticClass();
}
UDamageable::UDamageable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDamageable);
UDamageable::~UDamageable() {}
// End Interface UDamageable

// Begin Registration
struct Z_CompiledInDeferFile_FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_Damageable_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDamageable, UDamageable::StaticClass, TEXT("UDamageable"), &Z_Registration_Info_UClass_UDamageable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDamageable), 1187914633U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_Damageable_h_1473777918(TEXT("/Script/ClassShooter"),
	Z_CompiledInDeferFile_FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_Damageable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClassShooter_ClassShooter_ClassShooter_Source_ClassShooter_Public_Damageable_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
