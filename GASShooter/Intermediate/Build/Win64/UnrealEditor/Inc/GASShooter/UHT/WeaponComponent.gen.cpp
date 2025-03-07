// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASShooter/Public/Weapons/WeaponComponent.h"
#include "GASShooter/Public/Weapons/WeaponInfo.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GASSHOOTER_API UClass* Z_Construct_UClass_AWeaponActor_NoRegister();
GASSHOOTER_API UClass* Z_Construct_UClass_UWeaponComponent();
GASSHOOTER_API UClass* Z_Construct_UClass_UWeaponComponent_NoRegister();
GASSHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponEntry();
GASSHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponInfo();
UPackage* Z_Construct_UPackage__Script_GASShooter();
// End Cross Module References

// Begin ScriptStruct FWeaponEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WeaponEntry;
class UScriptStruct* FWeaponEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WeaponEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WeaponEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponEntry, (UObject*)Z_Construct_UPackage__Script_GASShooter(), TEXT("WeaponEntry"));
	}
	return Z_Registration_Info_UScriptStruct_WeaponEntry.OuterSingleton;
}
template<> GASSHOOTER_API UScriptStruct* StaticStruct<FWeaponEntry>()
{
	return FWeaponEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWeaponEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMagAmmo_MetaData[] = {
		{ "Category", "WeaponEntry" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReserveAmmo_MetaData[] = {
		{ "Category", "WeaponEntry" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponInfo_MetaData[] = {
		{ "Category", "WeaponEntry" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentMagAmmo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReserveAmmo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeaponInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWeaponEntry_Statics::NewProp_CurrentMagAmmo = { "CurrentMagAmmo", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponEntry, CurrentMagAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMagAmmo_MetaData), NewProp_CurrentMagAmmo_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWeaponEntry_Statics::NewProp_ReserveAmmo = { "ReserveAmmo", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponEntry, ReserveAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReserveAmmo_MetaData), NewProp_ReserveAmmo_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWeaponEntry_Statics::NewProp_WeaponInfo = { "WeaponInfo", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponEntry, WeaponInfo), Z_Construct_UScriptStruct_FWeaponInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponInfo_MetaData), NewProp_WeaponInfo_MetaData) }; // 4112851673
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponEntry_Statics::NewProp_CurrentMagAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponEntry_Statics::NewProp_ReserveAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponEntry_Statics::NewProp_WeaponInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GASShooter,
	nullptr,
	&NewStructOps,
	"WeaponEntry",
	Z_Construct_UScriptStruct_FWeaponEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponEntry_Statics::PropPointers),
	sizeof(FWeaponEntry),
	alignof(FWeaponEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWeaponEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWeaponEntry()
{
	if (!Z_Registration_Info_UScriptStruct_WeaponEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WeaponEntry.InnerSingleton, Z_Construct_UScriptStruct_FWeaponEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WeaponEntry.InnerSingleton;
}
// End ScriptStruct FWeaponEntry

// Begin Class UWeaponComponent Function AddWeapon
struct Z_Construct_UFunction_UWeaponComponent_AddWeapon_Statics
{
	struct WeaponComponent_eventAddWeapon_Parms
	{
		FGameplayTag WeaponTag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeaponTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWeaponComponent_AddWeapon_Statics::NewProp_WeaponTag = { "WeaponTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponComponent_eventAddWeapon_Parms, WeaponTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponComponent_AddWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponComponent_AddWeapon_Statics::NewProp_WeaponTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_AddWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponComponent_AddWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponComponent, nullptr, "AddWeapon", nullptr, nullptr, Z_Construct_UFunction_UWeaponComponent_AddWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_AddWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeaponComponent_AddWeapon_Statics::WeaponComponent_eventAddWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_AddWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponComponent_AddWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWeaponComponent_AddWeapon_Statics::WeaponComponent_eventAddWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponComponent_AddWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponComponent_AddWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponComponent::execAddWeapon)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_WeaponTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddWeapon(Z_Param_WeaponTag);
	P_NATIVE_END;
}
// End Class UWeaponComponent Function AddWeapon

// Begin Class UWeaponComponent Function EquipWeapon
struct Z_Construct_UFunction_UWeaponComponent_EquipWeapon_Statics
{
	struct WeaponComponent_eventEquipWeapon_Parms
	{
		FWeaponEntry Entry;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entry;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWeaponComponent_EquipWeapon_Statics::NewProp_Entry = { "Entry", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponComponent_eventEquipWeapon_Parms, Entry), Z_Construct_UScriptStruct_FWeaponEntry, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entry_MetaData), NewProp_Entry_MetaData) }; // 455940283
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponComponent_EquipWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponComponent_EquipWeapon_Statics::NewProp_Entry,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_EquipWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponComponent_EquipWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponComponent, nullptr, "EquipWeapon", nullptr, nullptr, Z_Construct_UFunction_UWeaponComponent_EquipWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_EquipWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeaponComponent_EquipWeapon_Statics::WeaponComponent_eventEquipWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_EquipWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponComponent_EquipWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWeaponComponent_EquipWeapon_Statics::WeaponComponent_eventEquipWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponComponent_EquipWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponComponent_EquipWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponComponent::execEquipWeapon)
{
	P_GET_STRUCT_REF(FWeaponEntry,Z_Param_Out_Entry);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EquipWeapon(Z_Param_Out_Entry);
	P_NATIVE_END;
}
// End Class UWeaponComponent Function EquipWeapon

// Begin Class UWeaponComponent Function OnRep_CurrentWeapon
struct Z_Construct_UFunction_UWeaponComponent_OnRep_CurrentWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponComponent_OnRep_CurrentWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponComponent, nullptr, "OnRep_CurrentWeapon", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_OnRep_CurrentWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponComponent_OnRep_CurrentWeapon_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWeaponComponent_OnRep_CurrentWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponComponent_OnRep_CurrentWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponComponent::execOnRep_CurrentWeapon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CurrentWeapon();
	P_NATIVE_END;
}
// End Class UWeaponComponent Function OnRep_CurrentWeapon

// Begin Class UWeaponComponent Function Server_AddWeapon
struct WeaponComponent_eventServer_AddWeapon_Parms
{
	FGameplayTag WeaponTag;
};
static FName NAME_UWeaponComponent_Server_AddWeapon = FName(TEXT("Server_AddWeapon"));
void UWeaponComponent::Server_AddWeapon(FGameplayTag const& WeaponTag)
{
	WeaponComponent_eventServer_AddWeapon_Parms Parms;
	Parms.WeaponTag=WeaponTag;
	ProcessEvent(FindFunctionChecked(NAME_UWeaponComponent_Server_AddWeapon),&Parms);
}
struct Z_Construct_UFunction_UWeaponComponent_Server_AddWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeaponTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWeaponComponent_Server_AddWeapon_Statics::NewProp_WeaponTag = { "WeaponTag", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponComponent_eventServer_AddWeapon_Parms, WeaponTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponTag_MetaData), NewProp_WeaponTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponComponent_Server_AddWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponComponent_Server_AddWeapon_Statics::NewProp_WeaponTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_Server_AddWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponComponent_Server_AddWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponComponent, nullptr, "Server_AddWeapon", nullptr, nullptr, Z_Construct_UFunction_UWeaponComponent_Server_AddWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_Server_AddWeapon_Statics::PropPointers), sizeof(WeaponComponent_eventServer_AddWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_Server_AddWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponComponent_Server_AddWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(WeaponComponent_eventServer_AddWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponComponent_Server_AddWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponComponent_Server_AddWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponComponent::execServer_AddWeapon)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_WeaponTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_AddWeapon_Implementation(Z_Param_WeaponTag);
	P_NATIVE_END;
}
// End Class UWeaponComponent Function Server_AddWeapon

// Begin Class UWeaponComponent
void UWeaponComponent::StaticRegisterNativesUWeaponComponent()
{
	UClass* Class = UWeaponComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddWeapon", &UWeaponComponent::execAddWeapon },
		{ "EquipWeapon", &UWeaponComponent::execEquipWeapon },
		{ "OnRep_CurrentWeapon", &UWeaponComponent::execOnRep_CurrentWeapon },
		{ "Server_AddWeapon", &UWeaponComponent::execServer_AddWeapon },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWeaponComponent);
UClass* Z_Construct_UClass_UWeaponComponent_NoRegister()
{
	return UWeaponComponent::StaticClass();
}
struct Z_Construct_UClass_UWeaponComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Weapons/WeaponComponent.h" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWeapon_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWeaponActor1P_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWeaponActor3P_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentWeapon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentWeaponActor1P;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentWeaponActor3P;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWeaponComponent_AddWeapon, "AddWeapon" }, // 760750530
		{ &Z_Construct_UFunction_UWeaponComponent_EquipWeapon, "EquipWeapon" }, // 554201620
		{ &Z_Construct_UFunction_UWeaponComponent_OnRep_CurrentWeapon, "OnRep_CurrentWeapon" }, // 923567285
		{ &Z_Construct_UFunction_UWeaponComponent_Server_AddWeapon, "Server_AddWeapon" }, // 1647369357
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeaponComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_CurrentWeapon = { "CurrentWeapon", "OnRep_CurrentWeapon", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponent, CurrentWeapon), Z_Construct_UScriptStruct_FWeaponEntry, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentWeapon_MetaData), NewProp_CurrentWeapon_MetaData) }; // 455940283
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_CurrentWeaponActor1P = { "CurrentWeaponActor1P", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponent, CurrentWeaponActor1P), Z_Construct_UClass_AWeaponActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentWeaponActor1P_MetaData), NewProp_CurrentWeaponActor1P_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_CurrentWeaponActor3P = { "CurrentWeaponActor3P", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponent, CurrentWeaponActor3P), Z_Construct_UClass_AWeaponActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentWeaponActor3P_MetaData), NewProp_CurrentWeaponActor3P_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeaponComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_CurrentWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_CurrentWeaponActor1P,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_CurrentWeaponActor3P,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWeaponComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GASShooter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeaponComponent_Statics::ClassParams = {
	&UWeaponComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWeaponComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UWeaponComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWeaponComponent()
{
	if (!Z_Registration_Info_UClass_UWeaponComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeaponComponent.OuterSingleton, Z_Construct_UClass_UWeaponComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWeaponComponent.OuterSingleton;
}
template<> GASSHOOTER_API UClass* StaticClass<UWeaponComponent>()
{
	return UWeaponComponent::StaticClass();
}
void UWeaponComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_CurrentWeapon(TEXT("CurrentWeapon"));
	const bool bIsValid = true
		&& Name_CurrentWeapon == ClassReps[(int32)ENetFields_Private::CurrentWeapon].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UWeaponComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponComponent);
UWeaponComponent::~UWeaponComponent() {}
// End Class UWeaponComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Weapons_WeaponComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWeaponEntry::StaticStruct, Z_Construct_UScriptStruct_FWeaponEntry_Statics::NewStructOps, TEXT("WeaponEntry"), &Z_Registration_Info_UScriptStruct_WeaponEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWeaponEntry), 455940283U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWeaponComponent, UWeaponComponent::StaticClass, TEXT("UWeaponComponent"), &Z_Registration_Info_UClass_UWeaponComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeaponComponent), 1415184273U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Weapons_WeaponComponent_h_2865085200(TEXT("/Script/GASShooter"),
	Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Weapons_WeaponComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Weapons_WeaponComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Weapons_WeaponComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Weapons_WeaponComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
