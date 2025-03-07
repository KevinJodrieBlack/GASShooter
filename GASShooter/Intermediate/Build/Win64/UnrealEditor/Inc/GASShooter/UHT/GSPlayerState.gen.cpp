// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASShooter/Public/Player/GSPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSPlayerState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
GASSHOOTER_API UClass* Z_Construct_UClass_AGSPlayerState();
GASSHOOTER_API UClass* Z_Construct_UClass_AGSPlayerState_NoRegister();
GASSHOOTER_API UClass* Z_Construct_UClass_UMasterWeaponList_NoRegister();
UPackage* Z_Construct_UPackage__Script_GASShooter();
// End Cross Module References

// Begin Class AGSPlayerState
void AGSPlayerState::StaticRegisterNativesAGSPlayerState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGSPlayerState);
UClass* Z_Construct_UClass_AGSPlayerState_NoRegister()
{
	return AGSPlayerState::StaticClass();
}
struct Z_Construct_UClass_AGSPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Player/GSPlayerState.h" },
		{ "ModuleRelativePath", "Public/Player/GSPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MasterWeaponList_MetaData[] = {
		{ "Category", "GSPlayerState" },
		{ "ModuleRelativePath", "Public/Player/GSPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MasterWeaponList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGSPlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGSPlayerState_Statics::NewProp_MasterWeaponList = { "MasterWeaponList", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGSPlayerState, MasterWeaponList), Z_Construct_UClass_UMasterWeaponList_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MasterWeaponList_MetaData), NewProp_MasterWeaponList_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGSPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGSPlayerState_Statics::NewProp_MasterWeaponList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGSPlayerState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGSPlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_GASShooter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGSPlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGSPlayerState_Statics::ClassParams = {
	&AGSPlayerState::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGSPlayerState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGSPlayerState_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGSPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_AGSPlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGSPlayerState()
{
	if (!Z_Registration_Info_UClass_AGSPlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGSPlayerState.OuterSingleton, Z_Construct_UClass_AGSPlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGSPlayerState.OuterSingleton;
}
template<> GASSHOOTER_API UClass* StaticClass<AGSPlayerState>()
{
	return AGSPlayerState::StaticClass();
}
AGSPlayerState::AGSPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGSPlayerState);
AGSPlayerState::~AGSPlayerState() {}
// End Class AGSPlayerState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Player_GSPlayerState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGSPlayerState, AGSPlayerState::StaticClass, TEXT("AGSPlayerState"), &Z_Registration_Info_UClass_AGSPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGSPlayerState), 2589941561U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Player_GSPlayerState_h_1641805220(TEXT("/Script/GASShooter"),
	Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Player_GSPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Player_GSPlayerState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
