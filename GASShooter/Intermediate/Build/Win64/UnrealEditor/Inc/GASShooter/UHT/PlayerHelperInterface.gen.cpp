// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASShooter/Public/Player/PlayerHelperInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerHelperInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
GASSHOOTER_API UClass* Z_Construct_UClass_UPlayerHelperInterface();
GASSHOOTER_API UClass* Z_Construct_UClass_UPlayerHelperInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_GASShooter();
// End Cross Module References

// Begin Interface UPlayerHelperInterface Function GetCameraLocation
struct PlayerHelperInterface_eventGetCameraLocation_Parms
{
	FVector ReturnValue;

	/** Constructor, initializes return property only **/
	PlayerHelperInterface_eventGetCameraLocation_Parms()
		: ReturnValue(ForceInit)
	{
	}
};
FVector IPlayerHelperInterface::GetCameraLocation()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetCameraLocation instead.");
	PlayerHelperInterface_eventGetCameraLocation_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UPlayerHelperInterface_GetCameraLocation = FName(TEXT("GetCameraLocation"));
FVector IPlayerHelperInterface::Execute_GetCameraLocation(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UPlayerHelperInterface::StaticClass()));
	PlayerHelperInterface_eventGetCameraLocation_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UPlayerHelperInterface_GetCameraLocation);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UPlayerHelperInterface_GetCameraLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/PlayerHelperInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerHelperInterface_GetCameraLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerHelperInterface_eventGetCameraLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerHelperInterface_GetCameraLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerHelperInterface_GetCameraLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHelperInterface_GetCameraLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerHelperInterface_GetCameraLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerHelperInterface, nullptr, "GetCameraLocation", nullptr, nullptr, Z_Construct_UFunction_UPlayerHelperInterface_GetCameraLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHelperInterface_GetCameraLocation_Statics::PropPointers), sizeof(PlayerHelperInterface_eventGetCameraLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHelperInterface_GetCameraLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerHelperInterface_GetCameraLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerHelperInterface_eventGetCameraLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerHelperInterface_GetCameraLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerHelperInterface_GetCameraLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Interface UPlayerHelperInterface Function GetCameraLocation

// Begin Interface UPlayerHelperInterface Function GetFirstPersonMesh
struct PlayerHelperInterface_eventGetFirstPersonMesh_Parms
{
	USkeletalMeshComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	PlayerHelperInterface_eventGetFirstPersonMesh_Parms()
		: ReturnValue(NULL)
	{
	}
};
USkeletalMeshComponent* IPlayerHelperInterface::GetFirstPersonMesh()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetFirstPersonMesh instead.");
	PlayerHelperInterface_eventGetFirstPersonMesh_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UPlayerHelperInterface_GetFirstPersonMesh = FName(TEXT("GetFirstPersonMesh"));
USkeletalMeshComponent* IPlayerHelperInterface::Execute_GetFirstPersonMesh(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UPlayerHelperInterface::StaticClass()));
	PlayerHelperInterface_eventGetFirstPersonMesh_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UPlayerHelperInterface_GetFirstPersonMesh);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UPlayerHelperInterface_GetFirstPersonMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/PlayerHelperInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerHelperInterface_GetFirstPersonMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerHelperInterface_eventGetFirstPersonMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerHelperInterface_GetFirstPersonMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerHelperInterface_GetFirstPersonMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHelperInterface_GetFirstPersonMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerHelperInterface_GetFirstPersonMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerHelperInterface, nullptr, "GetFirstPersonMesh", nullptr, nullptr, Z_Construct_UFunction_UPlayerHelperInterface_GetFirstPersonMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHelperInterface_GetFirstPersonMesh_Statics::PropPointers), sizeof(PlayerHelperInterface_eventGetFirstPersonMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHelperInterface_GetFirstPersonMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerHelperInterface_GetFirstPersonMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerHelperInterface_eventGetFirstPersonMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerHelperInterface_GetFirstPersonMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerHelperInterface_GetFirstPersonMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Interface UPlayerHelperInterface Function GetFirstPersonMesh

// Begin Interface UPlayerHelperInterface Function GetLookRotation
struct PlayerHelperInterface_eventGetLookRotation_Parms
{
	FRotator ReturnValue;

	/** Constructor, initializes return property only **/
	PlayerHelperInterface_eventGetLookRotation_Parms()
		: ReturnValue(ForceInit)
	{
	}
};
FRotator IPlayerHelperInterface::GetLookRotation()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetLookRotation instead.");
	PlayerHelperInterface_eventGetLookRotation_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UPlayerHelperInterface_GetLookRotation = FName(TEXT("GetLookRotation"));
FRotator IPlayerHelperInterface::Execute_GetLookRotation(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UPlayerHelperInterface::StaticClass()));
	PlayerHelperInterface_eventGetLookRotation_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UPlayerHelperInterface_GetLookRotation);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UPlayerHelperInterface_GetLookRotation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/PlayerHelperInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerHelperInterface_GetLookRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerHelperInterface_eventGetLookRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerHelperInterface_GetLookRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerHelperInterface_GetLookRotation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHelperInterface_GetLookRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerHelperInterface_GetLookRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerHelperInterface, nullptr, "GetLookRotation", nullptr, nullptr, Z_Construct_UFunction_UPlayerHelperInterface_GetLookRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHelperInterface_GetLookRotation_Statics::PropPointers), sizeof(PlayerHelperInterface_eventGetLookRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHelperInterface_GetLookRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerHelperInterface_GetLookRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerHelperInterface_eventGetLookRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerHelperInterface_GetLookRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerHelperInterface_GetLookRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Interface UPlayerHelperInterface Function GetLookRotation

// Begin Interface UPlayerHelperInterface
void UPlayerHelperInterface::StaticRegisterNativesUPlayerHelperInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerHelperInterface);
UClass* Z_Construct_UClass_UPlayerHelperInterface_NoRegister()
{
	return UPlayerHelperInterface::StaticClass();
}
struct Z_Construct_UClass_UPlayerHelperInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/PlayerHelperInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerHelperInterface_GetCameraLocation, "GetCameraLocation" }, // 3553992741
		{ &Z_Construct_UFunction_UPlayerHelperInterface_GetFirstPersonMesh, "GetFirstPersonMesh" }, // 1201884500
		{ &Z_Construct_UFunction_UPlayerHelperInterface_GetLookRotation, "GetLookRotation" }, // 3893734062
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPlayerHelperInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPlayerHelperInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_GASShooter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHelperInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerHelperInterface_Statics::ClassParams = {
	&UPlayerHelperInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHelperInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerHelperInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerHelperInterface()
{
	if (!Z_Registration_Info_UClass_UPlayerHelperInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerHelperInterface.OuterSingleton, Z_Construct_UClass_UPlayerHelperInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerHelperInterface.OuterSingleton;
}
template<> GASSHOOTER_API UClass* StaticClass<UPlayerHelperInterface>()
{
	return UPlayerHelperInterface::StaticClass();
}
UPlayerHelperInterface::UPlayerHelperInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerHelperInterface);
UPlayerHelperInterface::~UPlayerHelperInterface() {}
// End Interface UPlayerHelperInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Player_PlayerHelperInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerHelperInterface, UPlayerHelperInterface::StaticClass, TEXT("UPlayerHelperInterface"), &Z_Registration_Info_UClass_UPlayerHelperInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerHelperInterface), 1125502625U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Player_PlayerHelperInterface_h_2335893531(TEXT("/Script/GASShooter"),
	Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Player_PlayerHelperInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Player_PlayerHelperInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
