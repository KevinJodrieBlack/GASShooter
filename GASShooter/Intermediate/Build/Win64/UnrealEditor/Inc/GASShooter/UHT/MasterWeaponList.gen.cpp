// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASShooter/Public/Weapons/MasterWeaponList.h"
#include "GASShooter/Public/Weapons/WeaponInfo.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMasterWeaponList() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GASSHOOTER_API UClass* Z_Construct_UClass_UMasterWeaponList();
GASSHOOTER_API UClass* Z_Construct_UClass_UMasterWeaponList_NoRegister();
GASSHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponInfo();
GASSHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponListItem();
UPackage* Z_Construct_UPackage__Script_GASShooter();
// End Cross Module References

// Begin ScriptStruct FWeaponListItem
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WeaponListItem;
class UScriptStruct* FWeaponListItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WeaponListItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WeaponListItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponListItem, (UObject*)Z_Construct_UPackage__Script_GASShooter(), TEXT("WeaponListItem"));
	}
	return Z_Registration_Info_UScriptStruct_WeaponListItem.OuterSingleton;
}
template<> GASSHOOTER_API UScriptStruct* StaticStruct<FWeaponListItem>()
{
	return FWeaponListItem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWeaponListItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Weapons/MasterWeaponList.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponTag_MetaData[] = {
		{ "Category", "WeaponListItem" },
		{ "ModuleRelativePath", "Public/Weapons/MasterWeaponList.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponInfo_MetaData[] = {
		{ "Category", "WeaponListItem" },
		{ "ModuleRelativePath", "Public/Weapons/MasterWeaponList.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeaponTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeaponInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponListItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWeaponListItem_Statics::NewProp_WeaponTag = { "WeaponTag", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponListItem, WeaponTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponTag_MetaData), NewProp_WeaponTag_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWeaponListItem_Statics::NewProp_WeaponInfo = { "WeaponInfo", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponListItem, WeaponInfo), Z_Construct_UScriptStruct_FWeaponInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponInfo_MetaData), NewProp_WeaponInfo_MetaData) }; // 4112851673
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponListItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponListItem_Statics::NewProp_WeaponTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponListItem_Statics::NewProp_WeaponInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponListItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponListItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GASShooter,
	nullptr,
	&NewStructOps,
	"WeaponListItem",
	Z_Construct_UScriptStruct_FWeaponListItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponListItem_Statics::PropPointers),
	sizeof(FWeaponListItem),
	alignof(FWeaponListItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponListItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWeaponListItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWeaponListItem()
{
	if (!Z_Registration_Info_UScriptStruct_WeaponListItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WeaponListItem.InnerSingleton, Z_Construct_UScriptStruct_FWeaponListItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WeaponListItem.InnerSingleton;
}
// End ScriptStruct FWeaponListItem

// Begin Class UMasterWeaponList
void UMasterWeaponList::StaticRegisterNativesUMasterWeaponList()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMasterWeaponList);
UClass* Z_Construct_UClass_UMasterWeaponList_NoRegister()
{
	return UMasterWeaponList::StaticClass();
}
struct Z_Construct_UClass_UMasterWeaponList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Weapons/MasterWeaponList.h" },
		{ "ModuleRelativePath", "Public/Weapons/MasterWeaponList.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponItemList_MetaData[] = {
		{ "Category", "MasterWeaponList" },
		{ "ModuleRelativePath", "Public/Weapons/MasterWeaponList.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeaponItemList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WeaponItemList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMasterWeaponList>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMasterWeaponList_Statics::NewProp_WeaponItemList_Inner = { "WeaponItemList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWeaponListItem, METADATA_PARAMS(0, nullptr) }; // 2993920402
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMasterWeaponList_Statics::NewProp_WeaponItemList = { "WeaponItemList", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMasterWeaponList, WeaponItemList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponItemList_MetaData), NewProp_WeaponItemList_MetaData) }; // 2993920402
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMasterWeaponList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMasterWeaponList_Statics::NewProp_WeaponItemList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMasterWeaponList_Statics::NewProp_WeaponItemList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMasterWeaponList_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMasterWeaponList_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_GASShooter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMasterWeaponList_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMasterWeaponList_Statics::ClassParams = {
	&UMasterWeaponList::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMasterWeaponList_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMasterWeaponList_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMasterWeaponList_Statics::Class_MetaDataParams), Z_Construct_UClass_UMasterWeaponList_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMasterWeaponList()
{
	if (!Z_Registration_Info_UClass_UMasterWeaponList.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMasterWeaponList.OuterSingleton, Z_Construct_UClass_UMasterWeaponList_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMasterWeaponList.OuterSingleton;
}
template<> GASSHOOTER_API UClass* StaticClass<UMasterWeaponList>()
{
	return UMasterWeaponList::StaticClass();
}
UMasterWeaponList::UMasterWeaponList(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMasterWeaponList);
UMasterWeaponList::~UMasterWeaponList() {}
// End Class UMasterWeaponList

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Weapons_MasterWeaponList_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWeaponListItem::StaticStruct, Z_Construct_UScriptStruct_FWeaponListItem_Statics::NewStructOps, TEXT("WeaponListItem"), &Z_Registration_Info_UScriptStruct_WeaponListItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWeaponListItem), 2993920402U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMasterWeaponList, UMasterWeaponList::StaticClass, TEXT("UMasterWeaponList"), &Z_Registration_Info_UClass_UMasterWeaponList, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMasterWeaponList), 1345687401U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Weapons_MasterWeaponList_h_4140573626(TEXT("/Script/GASShooter"),
	Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Weapons_MasterWeaponList_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Weapons_MasterWeaponList_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Weapons_MasterWeaponList_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Weapons_MasterWeaponList_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
