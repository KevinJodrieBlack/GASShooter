// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASShooter/Public/Abilities/InputAbility.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputAbility() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GASSHOOTER_API UClass* Z_Construct_UClass_UInputAbility();
GASSHOOTER_API UClass* Z_Construct_UClass_UInputAbility_NoRegister();
UPackage* Z_Construct_UPackage__Script_GASShooter();
// End Cross Module References

// Begin Class UInputAbility
void UInputAbility::StaticRegisterNativesUInputAbility()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputAbility);
UClass* Z_Construct_UClass_UInputAbility_NoRegister()
{
	return UInputAbility::StaticClass();
}
struct Z_Construct_UClass_UInputAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Abilities/InputAbility.h" },
		{ "ModuleRelativePath", "Public/Abilities/InputAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputTag_MetaData[] = {
		{ "Category", "InputAbility" },
		{ "ModuleRelativePath", "Public/Abilities/InputAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputAbility_Statics::NewProp_InputTag = { "InputTag", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputAbility, InputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputTag_MetaData), NewProp_InputTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputAbility_Statics::NewProp_InputTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputAbility_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInputAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_GASShooter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputAbility_Statics::ClassParams = {
	&UInputAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInputAbility_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInputAbility_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputAbility()
{
	if (!Z_Registration_Info_UClass_UInputAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputAbility.OuterSingleton, Z_Construct_UClass_UInputAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputAbility.OuterSingleton;
}
template<> GASSHOOTER_API UClass* StaticClass<UInputAbility>()
{
	return UInputAbility::StaticClass();
}
UInputAbility::UInputAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputAbility);
UInputAbility::~UInputAbility() {}
// End Class UInputAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Abilities_InputAbility_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInputAbility, UInputAbility::StaticClass, TEXT("UInputAbility"), &Z_Registration_Info_UClass_UInputAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputAbility), 1560450697U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Abilities_InputAbility_h_1120309624(TEXT("/Script/GASShooter"),
	Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Abilities_InputAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Abilities_InputAbility_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
