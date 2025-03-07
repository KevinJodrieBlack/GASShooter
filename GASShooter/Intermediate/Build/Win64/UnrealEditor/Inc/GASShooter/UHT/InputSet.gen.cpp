// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASShooter/Public/Input/InputSet.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputSet() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GASSHOOTER_API UClass* Z_Construct_UClass_UInputSet();
GASSHOOTER_API UClass* Z_Construct_UClass_UInputSet_NoRegister();
GASSHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FInputAbilityBinding();
UPackage* Z_Construct_UPackage__Script_GASShooter();
// End Cross Module References

// Begin ScriptStruct FInputAbilityBinding
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputAbilityBinding;
class UScriptStruct* FInputAbilityBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputAbilityBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputAbilityBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputAbilityBinding, (UObject*)Z_Construct_UPackage__Script_GASShooter(), TEXT("InputAbilityBinding"));
	}
	return Z_Registration_Info_UScriptStruct_InputAbilityBinding.OuterSingleton;
}
template<> GASSHOOTER_API UScriptStruct* StaticStruct<FInputAbilityBinding>()
{
	return FInputAbilityBinding::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInputAbilityBinding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Input/InputSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[] = {
		{ "Category", "InputAbilityBinding" },
		{ "ModuleRelativePath", "Public/Input/InputSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityTag_MetaData[] = {
		{ "Category", "InputAbilityBinding" },
		{ "ModuleRelativePath", "Public/Input/InputSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputAbilityBinding>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInputAbilityBinding_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0114000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputAbilityBinding, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputAction_MetaData), NewProp_InputAction_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputAbilityBinding_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputAbilityBinding, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityTag_MetaData), NewProp_AbilityTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputAbilityBinding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAbilityBinding_Statics::NewProp_InputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAbilityBinding_Statics::NewProp_AbilityTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAbilityBinding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputAbilityBinding_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GASShooter,
	nullptr,
	&NewStructOps,
	"InputAbilityBinding",
	Z_Construct_UScriptStruct_FInputAbilityBinding_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAbilityBinding_Statics::PropPointers),
	sizeof(FInputAbilityBinding),
	alignof(FInputAbilityBinding),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAbilityBinding_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputAbilityBinding_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInputAbilityBinding()
{
	if (!Z_Registration_Info_UScriptStruct_InputAbilityBinding.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputAbilityBinding.InnerSingleton, Z_Construct_UScriptStruct_FInputAbilityBinding_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InputAbilityBinding.InnerSingleton;
}
// End ScriptStruct FInputAbilityBinding

// Begin Class UInputSet
void UInputSet::StaticRegisterNativesUInputSet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputSet);
UClass* Z_Construct_UClass_UInputSet_NoRegister()
{
	return UInputSet::StaticClass();
}
struct Z_Construct_UClass_UInputSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Input/InputSet.h" },
		{ "ModuleRelativePath", "Public/Input/InputSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputBindings_MetaData[] = {
		{ "Category", "InputSet" },
		{ "ModuleRelativePath", "Public/Input/InputSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputBindings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InputBindings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputSet_Statics::NewProp_InputBindings_Inner = { "InputBindings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputAbilityBinding, METADATA_PARAMS(0, nullptr) }; // 1548588370
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputSet_Statics::NewProp_InputBindings = { "InputBindings", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputSet, InputBindings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputBindings_MetaData), NewProp_InputBindings_MetaData) }; // 1548588370
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSet_Statics::NewProp_InputBindings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSet_Statics::NewProp_InputBindings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInputSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_GASShooter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputSet_Statics::ClassParams = {
	&UInputSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInputSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInputSet_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputSet()
{
	if (!Z_Registration_Info_UClass_UInputSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputSet.OuterSingleton, Z_Construct_UClass_UInputSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputSet.OuterSingleton;
}
template<> GASSHOOTER_API UClass* StaticClass<UInputSet>()
{
	return UInputSet::StaticClass();
}
UInputSet::UInputSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputSet);
UInputSet::~UInputSet() {}
// End Class UInputSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Input_InputSet_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInputAbilityBinding::StaticStruct, Z_Construct_UScriptStruct_FInputAbilityBinding_Statics::NewStructOps, TEXT("InputAbilityBinding"), &Z_Registration_Info_UScriptStruct_InputAbilityBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputAbilityBinding), 1548588370U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInputSet, UInputSet::StaticClass, TEXT("UInputSet"), &Z_Registration_Info_UClass_UInputSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputSet), 3862661934U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Input_InputSet_h_986314103(TEXT("/Script/GASShooter"),
	Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Input_InputSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Input_InputSet_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Input_InputSet_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Input_InputSet_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
