// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASShooter/Public/Input/GSPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSPlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
GASSHOOTER_API UClass* Z_Construct_UClass_AGSPlayerController();
GASSHOOTER_API UClass* Z_Construct_UClass_AGSPlayerController_NoRegister();
GASSHOOTER_API UClass* Z_Construct_UClass_UInputASC_NoRegister();
GASSHOOTER_API UClass* Z_Construct_UClass_UInputSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_GASShooter();
// End Cross Module References

// Begin Class AGSPlayerController
void AGSPlayerController::StaticRegisterNativesAGSPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGSPlayerController);
UClass* Z_Construct_UClass_AGSPlayerController_NoRegister()
{
	return AGSPlayerController::StaticClass();
}
struct Z_Construct_UClass_AGSPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Input/GSPlayerController.h" },
		{ "ModuleRelativePath", "Public/Input/GSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputSet_MetaData[] = {
		{ "Category", "GSPlayerController" },
		{ "ModuleRelativePath", "Public/Input/GSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputASC_MetaData[] = {
		{ "Category", "GSPlayerController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Input/GSPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputSet;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputASC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGSPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGSPlayerController_Statics::NewProp_InputSet = { "InputSet", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGSPlayerController, InputSet), Z_Construct_UClass_UInputSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputSet_MetaData), NewProp_InputSet_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGSPlayerController_Statics::NewProp_InputASC = { "InputASC", nullptr, (EPropertyFlags)0x012408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGSPlayerController, InputASC), Z_Construct_UClass_UInputASC_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputASC_MetaData), NewProp_InputASC_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGSPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGSPlayerController_Statics::NewProp_InputSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGSPlayerController_Statics::NewProp_InputASC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGSPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGSPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_GASShooter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGSPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGSPlayerController_Statics::ClassParams = {
	&AGSPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGSPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGSPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGSPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AGSPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGSPlayerController()
{
	if (!Z_Registration_Info_UClass_AGSPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGSPlayerController.OuterSingleton, Z_Construct_UClass_AGSPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGSPlayerController.OuterSingleton;
}
template<> GASSHOOTER_API UClass* StaticClass<AGSPlayerController>()
{
	return AGSPlayerController::StaticClass();
}
AGSPlayerController::AGSPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGSPlayerController);
AGSPlayerController::~AGSPlayerController() {}
// End Class AGSPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Input_GSPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGSPlayerController, AGSPlayerController::StaticClass, TEXT("AGSPlayerController"), &Z_Registration_Info_UClass_AGSPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGSPlayerController), 3474430551U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Input_GSPlayerController_h_2177144490(TEXT("/Script/GASShooter"),
	Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Input_GSPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Input_GSPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
