// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASShooter/Public/Weapons/WeaponInfo.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponInfo() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GASSHOOTER_API UClass* Z_Construct_UClass_AWeaponActor_NoRegister();
GASSHOOTER_API UClass* Z_Construct_UClass_UWeaponDefinition_NoRegister();
GASSHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponInfo();
UPackage* Z_Construct_UPackage__Script_GASShooter();
// End Cross Module References

// Begin ScriptStruct FWeaponInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WeaponInfo;
class UScriptStruct* FWeaponInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WeaponInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WeaponInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponInfo, (UObject*)Z_Construct_UPackage__Script_GASShooter(), TEXT("WeaponInfo"));
	}
	return Z_Registration_Info_UScriptStruct_WeaponInfo.OuterSingleton;
}
template<> GASSHOOTER_API UScriptStruct* StaticStruct<FWeaponInfo>()
{
	return FWeaponInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWeaponInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponName_MetaData[] = {
		{ "Category", "WeaponInfo" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMagAmmo_MetaData[] = {
		{ "Category", "WeaponInfo" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[] = {
		{ "Category", "WeaponInfo" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialReserveAmmo_MetaData[] = {
		{ "Category", "WeaponInfo" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponDefinition_MetaData[] = {
		{ "Category", "WeaponInfo" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponActor1PClass_MetaData[] = {
		{ "Category", "WeaponInfo" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponActor3PClass_MetaData[] = {
		{ "Category", "WeaponInfo" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponTag_MetaData[] = {
		{ "Category", "WeaponInfo" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponInfo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_WeaponName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxMagAmmo;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InitialReserveAmmo;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponDefinition;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponActor1PClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponActor3PClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeaponTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_WeaponName = { "WeaponName", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponInfo, WeaponName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponName_MetaData), NewProp_WeaponName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_MaxMagAmmo = { "MaxMagAmmo", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponInfo, MaxMagAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMagAmmo_MetaData), NewProp_MaxMagAmmo_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponInfo, Damage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damage_MetaData), NewProp_Damage_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_InitialReserveAmmo = { "InitialReserveAmmo", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponInfo, InitialReserveAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialReserveAmmo_MetaData), NewProp_InitialReserveAmmo_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_WeaponDefinition = { "WeaponDefinition", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponInfo, WeaponDefinition), Z_Construct_UClass_UClass, Z_Construct_UClass_UWeaponDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponDefinition_MetaData), NewProp_WeaponDefinition_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_WeaponActor1PClass = { "WeaponActor1PClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponInfo, WeaponActor1PClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AWeaponActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponActor1PClass_MetaData), NewProp_WeaponActor1PClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_WeaponActor3PClass = { "WeaponActor3PClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponInfo, WeaponActor3PClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AWeaponActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponActor3PClass_MetaData), NewProp_WeaponActor3PClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_WeaponTag = { "WeaponTag", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponInfo, WeaponTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponTag_MetaData), NewProp_WeaponTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_WeaponName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_MaxMagAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_InitialReserveAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_WeaponDefinition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_WeaponActor1PClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_WeaponActor3PClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_WeaponTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GASShooter,
	nullptr,
	&NewStructOps,
	"WeaponInfo",
	Z_Construct_UScriptStruct_FWeaponInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponInfo_Statics::PropPointers),
	sizeof(FWeaponInfo),
	alignof(FWeaponInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWeaponInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWeaponInfo()
{
	if (!Z_Registration_Info_UScriptStruct_WeaponInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WeaponInfo.InnerSingleton, Z_Construct_UScriptStruct_FWeaponInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WeaponInfo.InnerSingleton;
}
// End ScriptStruct FWeaponInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Weapons_WeaponInfo_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWeaponInfo::StaticStruct, Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewStructOps, TEXT("WeaponInfo"), &Z_Registration_Info_UScriptStruct_WeaponInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWeaponInfo), 4112851673U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Weapons_WeaponInfo_h_3274727324(TEXT("/Script/GASShooter"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Weapons_WeaponInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Weapons_WeaponInfo_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
