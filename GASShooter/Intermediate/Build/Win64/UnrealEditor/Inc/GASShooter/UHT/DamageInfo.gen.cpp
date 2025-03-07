// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASShooter/Public/Abilities/DamageInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDamageInfo() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GASSHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FDamageInfo();
UPackage* Z_Construct_UPackage__Script_GASShooter();
// End Cross Module References

// Begin ScriptStruct FDamageInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DamageInfo;
class UScriptStruct* FDamageInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DamageInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DamageInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDamageInfo, (UObject*)Z_Construct_UPackage__Script_GASShooter(), TEXT("DamageInfo"));
	}
	return Z_Registration_Info_UScriptStruct_DamageInfo.OuterSingleton;
}
template<> GASSHOOTER_API UScriptStruct* StaticStruct<FDamageInfo>()
{
	return FDamageInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDamageInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Abilities/DamageInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceASC_MetaData[] = {
		{ "Category", "DamageInfo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Abilities/DamageInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetASC_MetaData[] = {
		{ "Category", "DamageInfo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Abilities/DamageInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageEffect_MetaData[] = {
		{ "Category", "DamageInfo" },
		{ "ModuleRelativePath", "Public/Abilities/DamageInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageAmount_MetaData[] = {
		{ "Category", "DamageInfo" },
		{ "ModuleRelativePath", "Public/Abilities/DamageInfo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceASC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetASC;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DamageEffect;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDamageInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDamageInfo_Statics::NewProp_SourceASC = { "SourceASC", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageInfo, SourceASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceASC_MetaData), NewProp_SourceASC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDamageInfo_Statics::NewProp_TargetASC = { "TargetASC", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageInfo, TargetASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetASC_MetaData), NewProp_TargetASC_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FDamageInfo_Statics::NewProp_DamageEffect = { "DamageEffect", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageInfo, DamageEffect), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageEffect_MetaData), NewProp_DamageEffect_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDamageInfo_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageInfo, DamageAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageAmount_MetaData), NewProp_DamageAmount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDamageInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageInfo_Statics::NewProp_SourceASC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageInfo_Statics::NewProp_TargetASC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageInfo_Statics::NewProp_DamageEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageInfo_Statics::NewProp_DamageAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDamageInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GASShooter,
	nullptr,
	&NewStructOps,
	"DamageInfo",
	Z_Construct_UScriptStruct_FDamageInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageInfo_Statics::PropPointers),
	sizeof(FDamageInfo),
	alignof(FDamageInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDamageInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDamageInfo()
{
	if (!Z_Registration_Info_UScriptStruct_DamageInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DamageInfo.InnerSingleton, Z_Construct_UScriptStruct_FDamageInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DamageInfo.InnerSingleton;
}
// End ScriptStruct FDamageInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Abilities_DamageInfo_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDamageInfo::StaticStruct, Z_Construct_UScriptStruct_FDamageInfo_Statics::NewStructOps, TEXT("DamageInfo"), &Z_Registration_Info_UScriptStruct_DamageInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDamageInfo), 3864186119U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Abilities_DamageInfo_h_1540173736(TEXT("/Script/GASShooter"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Abilities_DamageInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Abilities_DamageInfo_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
