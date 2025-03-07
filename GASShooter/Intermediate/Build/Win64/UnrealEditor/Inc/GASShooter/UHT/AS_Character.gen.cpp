// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASShooter/Public/Attributes/AS_Character.h"
#include "GameplayAbilities/Public/AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAS_Character() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
GASSHOOTER_API UClass* Z_Construct_UClass_UAS_Character();
GASSHOOTER_API UClass* Z_Construct_UClass_UAS_Character_NoRegister();
UPackage* Z_Construct_UPackage__Script_GASShooter();
// End Cross Module References

// Begin Class UAS_Character Function OnRep_Health
struct Z_Construct_UFunction_UAS_Character_OnRep_Health_Statics
{
	struct AS_Character_eventOnRep_Health_Parms
	{
		FGameplayAttributeData OldHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/AS_Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAS_Character_OnRep_Health_Statics::NewProp_OldHealth = { "OldHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AS_Character_eventOnRep_Health_Parms, OldHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldHealth_MetaData), NewProp_OldHealth_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAS_Character_OnRep_Health_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAS_Character_OnRep_Health_Statics::NewProp_OldHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Character_OnRep_Health_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAS_Character_OnRep_Health_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAS_Character, nullptr, "OnRep_Health", nullptr, nullptr, Z_Construct_UFunction_UAS_Character_OnRep_Health_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Character_OnRep_Health_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAS_Character_OnRep_Health_Statics::AS_Character_eventOnRep_Health_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Character_OnRep_Health_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAS_Character_OnRep_Health_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAS_Character_OnRep_Health_Statics::AS_Character_eventOnRep_Health_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAS_Character_OnRep_Health()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAS_Character_OnRep_Health_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAS_Character::execOnRep_Health)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Health(Z_Param_Out_OldHealth);
	P_NATIVE_END;
}
// End Class UAS_Character Function OnRep_Health

// Begin Class UAS_Character Function OnRep_MaxHealth
struct Z_Construct_UFunction_UAS_Character_OnRep_MaxHealth_Statics
{
	struct AS_Character_eventOnRep_MaxHealth_Parms
	{
		FGameplayAttributeData OldMaxHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/AS_Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAS_Character_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth = { "OldMaxHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AS_Character_eventOnRep_MaxHealth_Parms, OldMaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaxHealth_MetaData), NewProp_OldMaxHealth_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAS_Character_OnRep_MaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAS_Character_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Character_OnRep_MaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAS_Character_OnRep_MaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAS_Character, nullptr, "OnRep_MaxHealth", nullptr, nullptr, Z_Construct_UFunction_UAS_Character_OnRep_MaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Character_OnRep_MaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAS_Character_OnRep_MaxHealth_Statics::AS_Character_eventOnRep_MaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Character_OnRep_MaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAS_Character_OnRep_MaxHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAS_Character_OnRep_MaxHealth_Statics::AS_Character_eventOnRep_MaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAS_Character_OnRep_MaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAS_Character_OnRep_MaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAS_Character::execOnRep_MaxHealth)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxHealth(Z_Param_Out_OldMaxHealth);
	P_NATIVE_END;
}
// End Class UAS_Character Function OnRep_MaxHealth

// Begin Class UAS_Character
void UAS_Character::StaticRegisterNativesUAS_Character()
{
	UClass* Class = UAS_Character::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_Health", &UAS_Character::execOnRep_Health },
		{ "OnRep_MaxHealth", &UAS_Character::execOnRep_MaxHealth },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAS_Character);
UClass* Z_Construct_UClass_UAS_Character_NoRegister()
{
	return UAS_Character::StaticClass();
}
struct Z_Construct_UClass_UAS_Character_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Attributes/AS_Character.h" },
		{ "ModuleRelativePath", "Public/Attributes/AS_Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "AS_Character" },
		{ "ModuleRelativePath", "Public/Attributes/AS_Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "AS_Character" },
		{ "ModuleRelativePath", "Public/Attributes/AS_Character.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Health;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAS_Character_OnRep_Health, "OnRep_Health" }, // 639555476
		{ &Z_Construct_UFunction_UAS_Character_OnRep_MaxHealth, "OnRep_MaxHealth" }, // 769167986
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAS_Character>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAS_Character_Statics::NewProp_Health = { "Health", "OnRep_Health", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAS_Character, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAS_Character_Statics::NewProp_MaxHealth = { "MaxHealth", "OnRep_MaxHealth", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAS_Character, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAS_Character_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAS_Character_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAS_Character_Statics::NewProp_MaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAS_Character_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAS_Character_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_GASShooter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAS_Character_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAS_Character_Statics::ClassParams = {
	&UAS_Character::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAS_Character_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAS_Character_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAS_Character_Statics::Class_MetaDataParams), Z_Construct_UClass_UAS_Character_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAS_Character()
{
	if (!Z_Registration_Info_UClass_UAS_Character.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAS_Character.OuterSingleton, Z_Construct_UClass_UAS_Character_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAS_Character.OuterSingleton;
}
template<> GASSHOOTER_API UClass* StaticClass<UAS_Character>()
{
	return UAS_Character::StaticClass();
}
void UAS_Character::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_Health(TEXT("Health"));
	static const FName Name_MaxHealth(TEXT("MaxHealth"));
	const bool bIsValid = true
		&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
		&& Name_MaxHealth == ClassReps[(int32)ENetFields_Private::MaxHealth].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UAS_Character"));
}
UAS_Character::UAS_Character(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAS_Character);
UAS_Character::~UAS_Character() {}
// End Class UAS_Character

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Attributes_AS_Character_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAS_Character, UAS_Character::StaticClass, TEXT("UAS_Character"), &Z_Registration_Info_UClass_UAS_Character, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAS_Character), 2268179131U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Attributes_AS_Character_h_3072799438(TEXT("/Script/GASShooter"),
	Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Attributes_AS_Character_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Attributes_AS_Character_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
