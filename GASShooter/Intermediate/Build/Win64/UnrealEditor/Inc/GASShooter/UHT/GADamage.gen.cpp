// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASShooter/Public/Abilities/GADamage.h"
#include "GASShooter/Public/Abilities/DamageInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGADamage() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GASSHOOTER_API UClass* Z_Construct_UClass_UGADamage();
GASSHOOTER_API UClass* Z_Construct_UClass_UGADamage_NoRegister();
GASSHOOTER_API UClass* Z_Construct_UClass_UInputAbility();
GASSHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FDamageInfo();
UPackage* Z_Construct_UPackage__Script_GASShooter();
// End Cross Module References

// Begin Class UGADamage
void UGADamage::StaticRegisterNativesUGADamage()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGADamage);
UClass* Z_Construct_UClass_UGADamage_NoRegister()
{
	return UGADamage::StaticClass();
}
struct Z_Construct_UClass_UGADamage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Abilities/GADamage.h" },
		{ "ModuleRelativePath", "Public/Abilities/GADamage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GADamage" },
		{ "ModuleRelativePath", "Public/Abilities/GADamage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/GADamage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageEffect_MetaData[] = {
		{ "Category", "GADamage" },
		{ "ModuleRelativePath", "Public/Abilities/GADamage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamageInfo;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DamageEffect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGADamage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGADamage_Statics::NewProp_DamageInfo = { "DamageInfo", nullptr, (EPropertyFlags)0x0040008000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGADamage, DamageInfo), Z_Construct_UScriptStruct_FDamageInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageInfo_MetaData), NewProp_DamageInfo_MetaData) }; // 3864186119
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGADamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGADamage, Damage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damage_MetaData), NewProp_Damage_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGADamage_Statics::NewProp_DamageEffect = { "DamageEffect", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGADamage, DamageEffect), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageEffect_MetaData), NewProp_DamageEffect_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGADamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGADamage_Statics::NewProp_DamageInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGADamage_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGADamage_Statics::NewProp_DamageEffect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGADamage_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGADamage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInputAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_GASShooter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGADamage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGADamage_Statics::ClassParams = {
	&UGADamage::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGADamage_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGADamage_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGADamage_Statics::Class_MetaDataParams), Z_Construct_UClass_UGADamage_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGADamage()
{
	if (!Z_Registration_Info_UClass_UGADamage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGADamage.OuterSingleton, Z_Construct_UClass_UGADamage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGADamage.OuterSingleton;
}
template<> GASSHOOTER_API UClass* StaticClass<UGADamage>()
{
	return UGADamage::StaticClass();
}
UGADamage::UGADamage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGADamage);
UGADamage::~UGADamage() {}
// End Class UGADamage

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Abilities_GADamage_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGADamage, UGADamage::StaticClass, TEXT("UGADamage"), &Z_Registration_Info_UClass_UGADamage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGADamage), 1771716000U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Abilities_GADamage_h_3814564030(TEXT("/Script/GASShooter"),
	Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Abilities_GADamage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Abilities_GADamage_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
