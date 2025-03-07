// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASShooter/Public/Characters/GS_Character_Base.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGS_Character_Base() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GASSHOOTER_API UClass* Z_Construct_UClass_AGS_Character_Base();
GASSHOOTER_API UClass* Z_Construct_UClass_AGS_Character_Base_NoRegister();
GASSHOOTER_API UClass* Z_Construct_UClass_UAS_Character_NoRegister();
GASSHOOTER_API UClass* Z_Construct_UClass_UCharacterHelperInterface_NoRegister();
GASSHOOTER_API UClass* Z_Construct_UClass_UInputASC_NoRegister();
GASSHOOTER_API UClass* Z_Construct_UClass_UWeaponComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_GASShooter();
// End Cross Module References

// Begin Class AGS_Character_Base Function BroadcastHealthValue
struct Z_Construct_UFunction_AGS_Character_Base_BroadcastHealthValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/GS_Character_Base.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGS_Character_Base_BroadcastHealthValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGS_Character_Base, nullptr, "BroadcastHealthValue", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGS_Character_Base_BroadcastHealthValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGS_Character_Base_BroadcastHealthValue_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGS_Character_Base_BroadcastHealthValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGS_Character_Base_BroadcastHealthValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGS_Character_Base::execBroadcastHealthValue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BroadcastHealthValue();
	P_NATIVE_END;
}
// End Class AGS_Character_Base Function BroadcastHealthValue

// Begin Class AGS_Character_Base Function OnDeath
static FName NAME_AGS_Character_Base_OnDeath = FName(TEXT("OnDeath"));
void AGS_Character_Base::OnDeath()
{
	ProcessEvent(FindFunctionChecked(NAME_AGS_Character_Base_OnDeath),NULL);
}
struct Z_Construct_UFunction_AGS_Character_Base_OnDeath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/GS_Character_Base.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGS_Character_Base_OnDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGS_Character_Base, nullptr, "OnDeath", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGS_Character_Base_OnDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGS_Character_Base_OnDeath_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGS_Character_Base_OnDeath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGS_Character_Base_OnDeath_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AGS_Character_Base Function OnDeath

// Begin Class AGS_Character_Base Function OnHealthChanged
struct GS_Character_Base_eventOnHealthChanged_Parms
{
	float CurrentHealth;
	float MaxHealth;
};
static FName NAME_AGS_Character_Base_OnHealthChanged = FName(TEXT("OnHealthChanged"));
void AGS_Character_Base::OnHealthChanged(float CurrentHealth, float MaxHealth)
{
	GS_Character_Base_eventOnHealthChanged_Parms Parms;
	Parms.CurrentHealth=CurrentHealth;
	Parms.MaxHealth=MaxHealth;
	ProcessEvent(FindFunctionChecked(NAME_AGS_Character_Base_OnHealthChanged),&Parms);
}
struct Z_Construct_UFunction_AGS_Character_Base_OnHealthChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/GS_Character_Base.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGS_Character_Base_OnHealthChanged_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GS_Character_Base_eventOnHealthChanged_Parms, CurrentHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGS_Character_Base_OnHealthChanged_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GS_Character_Base_eventOnHealthChanged_Parms, MaxHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGS_Character_Base_OnHealthChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGS_Character_Base_OnHealthChanged_Statics::NewProp_CurrentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGS_Character_Base_OnHealthChanged_Statics::NewProp_MaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGS_Character_Base_OnHealthChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGS_Character_Base_OnHealthChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGS_Character_Base, nullptr, "OnHealthChanged", nullptr, nullptr, Z_Construct_UFunction_AGS_Character_Base_OnHealthChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGS_Character_Base_OnHealthChanged_Statics::PropPointers), sizeof(GS_Character_Base_eventOnHealthChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGS_Character_Base_OnHealthChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGS_Character_Base_OnHealthChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(GS_Character_Base_eventOnHealthChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGS_Character_Base_OnHealthChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGS_Character_Base_OnHealthChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AGS_Character_Base Function OnHealthChanged

// Begin Class AGS_Character_Base
void AGS_Character_Base::StaticRegisterNativesAGS_Character_Base()
{
	UClass* Class = AGS_Character_Base::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BroadcastHealthValue", &AGS_Character_Base::execBroadcastHealthValue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGS_Character_Base);
UClass* Z_Construct_UClass_AGS_Character_Base_NoRegister()
{
	return AGS_Character_Base::StaticClass();
}
struct Z_Construct_UClass_AGS_Character_Base_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/GS_Character_Base.h" },
		{ "ModuleRelativePath", "Public/Characters/GS_Character_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GS_Character_Base" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/GS_Character_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GS_Character_Base" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/GS_Character_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GS_Character_Base" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/GS_Character_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartingAttributes_MetaData[] = {
		{ "Category", "GS_Character_Base" },
		{ "ModuleRelativePath", "Public/Characters/GS_Character_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartingAbilities_MetaData[] = {
		{ "Category", "GS_Character_Base" },
		{ "ModuleRelativePath", "Public/Characters/GS_Character_Base.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeSet;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponComponent;
	static const UECodeGen_Private::FClassPropertyParams NewProp_StartingAttributes;
	static const UECodeGen_Private::FClassPropertyParams NewProp_StartingAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StartingAbilities;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGS_Character_Base_BroadcastHealthValue, "BroadcastHealthValue" }, // 269984557
		{ &Z_Construct_UFunction_AGS_Character_Base_OnDeath, "OnDeath" }, // 459791512
		{ &Z_Construct_UFunction_AGS_Character_Base_OnHealthChanged, "OnHealthChanged" }, // 2167059205
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGS_Character_Base>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGS_Character_Base_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x014400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGS_Character_Base, AbilitySystemComponent), Z_Construct_UClass_UInputASC_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGS_Character_Base_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x014400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGS_Character_Base, AttributeSet), Z_Construct_UClass_UAS_Character_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeSet_MetaData), NewProp_AttributeSet_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGS_Character_Base_Statics::NewProp_WeaponComponent = { "WeaponComponent", nullptr, (EPropertyFlags)0x014400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGS_Character_Base, WeaponComponent), Z_Construct_UClass_UWeaponComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponComponent_MetaData), NewProp_WeaponComponent_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGS_Character_Base_Statics::NewProp_StartingAttributes = { "StartingAttributes", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGS_Character_Base, StartingAttributes), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartingAttributes_MetaData), NewProp_StartingAttributes_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGS_Character_Base_Statics::NewProp_StartingAbilities_Inner = { "StartingAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGS_Character_Base_Statics::NewProp_StartingAbilities = { "StartingAbilities", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGS_Character_Base, StartingAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartingAbilities_MetaData), NewProp_StartingAbilities_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGS_Character_Base_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGS_Character_Base_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGS_Character_Base_Statics::NewProp_AttributeSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGS_Character_Base_Statics::NewProp_WeaponComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGS_Character_Base_Statics::NewProp_StartingAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGS_Character_Base_Statics::NewProp_StartingAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGS_Character_Base_Statics::NewProp_StartingAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGS_Character_Base_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGS_Character_Base_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_GASShooter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGS_Character_Base_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AGS_Character_Base_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AGS_Character_Base, IAbilitySystemInterface), false },  // 2272790346
	{ Z_Construct_UClass_UCharacterHelperInterface_NoRegister, (int32)VTABLE_OFFSET(AGS_Character_Base, ICharacterHelperInterface), false },  // 884695792
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGS_Character_Base_Statics::ClassParams = {
	&AGS_Character_Base::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGS_Character_Base_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGS_Character_Base_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGS_Character_Base_Statics::Class_MetaDataParams), Z_Construct_UClass_AGS_Character_Base_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGS_Character_Base()
{
	if (!Z_Registration_Info_UClass_AGS_Character_Base.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGS_Character_Base.OuterSingleton, Z_Construct_UClass_AGS_Character_Base_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGS_Character_Base.OuterSingleton;
}
template<> GASSHOOTER_API UClass* StaticClass<AGS_Character_Base>()
{
	return AGS_Character_Base::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGS_Character_Base);
AGS_Character_Base::~AGS_Character_Base() {}
// End Class AGS_Character_Base

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Characters_GS_Character_Base_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGS_Character_Base, AGS_Character_Base::StaticClass, TEXT("AGS_Character_Base"), &Z_Registration_Info_UClass_AGS_Character_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGS_Character_Base), 4108646656U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Characters_GS_Character_Base_h_2499457405(TEXT("/Script/GASShooter"),
	Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Characters_GS_Character_Base_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Characters_GS_Character_Base_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
