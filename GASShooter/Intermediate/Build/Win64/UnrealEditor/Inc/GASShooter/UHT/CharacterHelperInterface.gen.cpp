// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASShooter/Public/Characters/CharacterHelperInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterHelperInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
GASSHOOTER_API UClass* Z_Construct_UClass_UCharacterHelperInterface();
GASSHOOTER_API UClass* Z_Construct_UClass_UCharacterHelperInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_GASShooter();
// End Cross Module References

// Begin Interface UCharacterHelperInterface Function GetCurrentDamage
struct CharacterHelperInterface_eventGetCurrentDamage_Parms
{
	float ReturnValue;

	/** Constructor, initializes return property only **/
	CharacterHelperInterface_eventGetCurrentDamage_Parms()
		: ReturnValue(0)
	{
	}
};
float ICharacterHelperInterface::GetCurrentDamage()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetCurrentDamage instead.");
	CharacterHelperInterface_eventGetCurrentDamage_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCharacterHelperInterface_GetCurrentDamage = FName(TEXT("GetCurrentDamage"));
float ICharacterHelperInterface::Execute_GetCurrentDamage(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCharacterHelperInterface::StaticClass()));
	CharacterHelperInterface_eventGetCurrentDamage_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCharacterHelperInterface_GetCurrentDamage);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICharacterHelperInterface*)(O->GetNativeInterfaceAddress(UCharacterHelperInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetCurrentDamage_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCharacterHelperInterface_GetCurrentDamage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/CharacterHelperInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCharacterHelperInterface_GetCurrentDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterHelperInterface_eventGetCurrentDamage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterHelperInterface_GetCurrentDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterHelperInterface_GetCurrentDamage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterHelperInterface_GetCurrentDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterHelperInterface_GetCurrentDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterHelperInterface, nullptr, "GetCurrentDamage", nullptr, nullptr, Z_Construct_UFunction_UCharacterHelperInterface_GetCurrentDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterHelperInterface_GetCurrentDamage_Statics::PropPointers), sizeof(CharacterHelperInterface_eventGetCurrentDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterHelperInterface_GetCurrentDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterHelperInterface_GetCurrentDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(CharacterHelperInterface_eventGetCurrentDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterHelperInterface_GetCurrentDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterHelperInterface_GetCurrentDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICharacterHelperInterface::execGetCurrentDamage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCurrentDamage_Implementation();
	P_NATIVE_END;
}
// End Interface UCharacterHelperInterface Function GetCurrentDamage

// Begin Interface UCharacterHelperInterface Function GetThirdPersonMesh
struct CharacterHelperInterface_eventGetThirdPersonMesh_Parms
{
	USkeletalMeshComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	CharacterHelperInterface_eventGetThirdPersonMesh_Parms()
		: ReturnValue(NULL)
	{
	}
};
USkeletalMeshComponent* ICharacterHelperInterface::GetThirdPersonMesh()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetThirdPersonMesh instead.");
	CharacterHelperInterface_eventGetThirdPersonMesh_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCharacterHelperInterface_GetThirdPersonMesh = FName(TEXT("GetThirdPersonMesh"));
USkeletalMeshComponent* ICharacterHelperInterface::Execute_GetThirdPersonMesh(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCharacterHelperInterface::StaticClass()));
	CharacterHelperInterface_eventGetThirdPersonMesh_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCharacterHelperInterface_GetThirdPersonMesh);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCharacterHelperInterface_GetThirdPersonMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/CharacterHelperInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterHelperInterface_GetThirdPersonMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterHelperInterface_eventGetThirdPersonMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterHelperInterface_GetThirdPersonMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterHelperInterface_GetThirdPersonMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterHelperInterface_GetThirdPersonMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterHelperInterface_GetThirdPersonMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterHelperInterface, nullptr, "GetThirdPersonMesh", nullptr, nullptr, Z_Construct_UFunction_UCharacterHelperInterface_GetThirdPersonMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterHelperInterface_GetThirdPersonMesh_Statics::PropPointers), sizeof(CharacterHelperInterface_eventGetThirdPersonMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterHelperInterface_GetThirdPersonMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterHelperInterface_GetThirdPersonMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(CharacterHelperInterface_eventGetThirdPersonMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterHelperInterface_GetThirdPersonMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterHelperInterface_GetThirdPersonMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Interface UCharacterHelperInterface Function GetThirdPersonMesh

// Begin Interface UCharacterHelperInterface
void UCharacterHelperInterface::StaticRegisterNativesUCharacterHelperInterface()
{
	UClass* Class = UCharacterHelperInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentDamage", &ICharacterHelperInterface::execGetCurrentDamage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterHelperInterface);
UClass* Z_Construct_UClass_UCharacterHelperInterface_NoRegister()
{
	return UCharacterHelperInterface::StaticClass();
}
struct Z_Construct_UClass_UCharacterHelperInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Characters/CharacterHelperInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharacterHelperInterface_GetCurrentDamage, "GetCurrentDamage" }, // 166015481
		{ &Z_Construct_UFunction_UCharacterHelperInterface_GetThirdPersonMesh, "GetThirdPersonMesh" }, // 4229508820
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICharacterHelperInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCharacterHelperInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_GASShooter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterHelperInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterHelperInterface_Statics::ClassParams = {
	&UCharacterHelperInterface::StaticClass,
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
	0x000040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterHelperInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterHelperInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterHelperInterface()
{
	if (!Z_Registration_Info_UClass_UCharacterHelperInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterHelperInterface.OuterSingleton, Z_Construct_UClass_UCharacterHelperInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterHelperInterface.OuterSingleton;
}
template<> GASSHOOTER_API UClass* StaticClass<UCharacterHelperInterface>()
{
	return UCharacterHelperInterface::StaticClass();
}
UCharacterHelperInterface::UCharacterHelperInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterHelperInterface);
UCharacterHelperInterface::~UCharacterHelperInterface() {}
// End Interface UCharacterHelperInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Characters_CharacterHelperInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterHelperInterface, UCharacterHelperInterface::StaticClass, TEXT("UCharacterHelperInterface"), &Z_Registration_Info_UClass_UCharacterHelperInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterHelperInterface), 884695792U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Characters_CharacterHelperInterface_h_513016186(TEXT("/Script/GASShooter"),
	Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Characters_CharacterHelperInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Characters_CharacterHelperInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
