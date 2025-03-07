// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASShooter/Public/Utilities/CharacterUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterUtils() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
GASSHOOTER_API UClass* Z_Construct_UClass_UCharacterUtils();
GASSHOOTER_API UClass* Z_Construct_UClass_UCharacterUtils_NoRegister();
UPackage* Z_Construct_UPackage__Script_GASShooter();
// End Cross Module References

// Begin Class UCharacterUtils Function GetCharacterCardinalVelocity
struct Z_Construct_UFunction_UCharacterUtils_GetCharacterCardinalVelocity_Statics
{
	struct CharacterUtils_eventGetCharacterCardinalVelocity_Parms
	{
		ACharacter* Character;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utilities/CharacterUtils.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterUtils_GetCharacterCardinalVelocity_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterUtils_eventGetCharacterCardinalVelocity_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterUtils_GetCharacterCardinalVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterUtils_eventGetCharacterCardinalVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterUtils_GetCharacterCardinalVelocity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterUtils_GetCharacterCardinalVelocity_Statics::NewProp_Character,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterUtils_GetCharacterCardinalVelocity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterUtils_GetCharacterCardinalVelocity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterUtils_GetCharacterCardinalVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterUtils, nullptr, "GetCharacterCardinalVelocity", nullptr, nullptr, Z_Construct_UFunction_UCharacterUtils_GetCharacterCardinalVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterUtils_GetCharacterCardinalVelocity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterUtils_GetCharacterCardinalVelocity_Statics::CharacterUtils_eventGetCharacterCardinalVelocity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterUtils_GetCharacterCardinalVelocity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterUtils_GetCharacterCardinalVelocity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterUtils_GetCharacterCardinalVelocity_Statics::CharacterUtils_eventGetCharacterCardinalVelocity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterUtils_GetCharacterCardinalVelocity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterUtils_GetCharacterCardinalVelocity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterUtils::execGetCharacterCardinalVelocity)
{
	P_GET_OBJECT(ACharacter,Z_Param_Character);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=UCharacterUtils::GetCharacterCardinalVelocity(Z_Param_Character);
	P_NATIVE_END;
}
// End Class UCharacterUtils Function GetCharacterCardinalVelocity

// Begin Class UCharacterUtils
void UCharacterUtils::StaticRegisterNativesUCharacterUtils()
{
	UClass* Class = UCharacterUtils::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCharacterCardinalVelocity", &UCharacterUtils::execGetCharacterCardinalVelocity },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterUtils);
UClass* Z_Construct_UClass_UCharacterUtils_NoRegister()
{
	return UCharacterUtils::StaticClass();
}
struct Z_Construct_UClass_UCharacterUtils_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Utilities/CharacterUtils.h" },
		{ "ModuleRelativePath", "Public/Utilities/CharacterUtils.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharacterUtils_GetCharacterCardinalVelocity, "GetCharacterCardinalVelocity" }, // 3945885476
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterUtils>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCharacterUtils_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GASShooter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterUtils_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterUtils_Statics::ClassParams = {
	&UCharacterUtils::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterUtils_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterUtils_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterUtils()
{
	if (!Z_Registration_Info_UClass_UCharacterUtils.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterUtils.OuterSingleton, Z_Construct_UClass_UCharacterUtils_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterUtils.OuterSingleton;
}
template<> GASSHOOTER_API UClass* StaticClass<UCharacterUtils>()
{
	return UCharacterUtils::StaticClass();
}
UCharacterUtils::UCharacterUtils(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterUtils);
UCharacterUtils::~UCharacterUtils() {}
// End Class UCharacterUtils

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Utilities_CharacterUtils_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterUtils, UCharacterUtils::StaticClass, TEXT("UCharacterUtils"), &Z_Registration_Info_UClass_UCharacterUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterUtils), 2465299888U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Utilities_CharacterUtils_h_3682317723(TEXT("/Script/GASShooter"),
	Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Utilities_CharacterUtils_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Utilities_CharacterUtils_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
