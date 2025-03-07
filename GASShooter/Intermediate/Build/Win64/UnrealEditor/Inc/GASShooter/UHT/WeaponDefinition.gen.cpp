// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASShooter/Public/Weapons/WeaponDefinition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponDefinition() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
GASSHOOTER_API UClass* Z_Construct_UClass_UWeaponDefinition();
GASSHOOTER_API UClass* Z_Construct_UClass_UWeaponDefinition_NoRegister();
UPackage* Z_Construct_UPackage__Script_GASShooter();
// End Cross Module References

// Begin Class UWeaponDefinition
void UWeaponDefinition::StaticRegisterNativesUWeaponDefinition()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWeaponDefinition);
UClass* Z_Construct_UClass_UWeaponDefinition_NoRegister()
{
	return UWeaponDefinition::StaticClass();
}
struct Z_Construct_UClass_UWeaponDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Weapons/WeaponDefinition.h" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponDefinition.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeaponDefinition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWeaponDefinition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GASShooter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponDefinition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeaponDefinition_Statics::ClassParams = {
	&UWeaponDefinition::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponDefinition_Statics::Class_MetaDataParams), Z_Construct_UClass_UWeaponDefinition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWeaponDefinition()
{
	if (!Z_Registration_Info_UClass_UWeaponDefinition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeaponDefinition.OuterSingleton, Z_Construct_UClass_UWeaponDefinition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWeaponDefinition.OuterSingleton;
}
template<> GASSHOOTER_API UClass* StaticClass<UWeaponDefinition>()
{
	return UWeaponDefinition::StaticClass();
}
UWeaponDefinition::UWeaponDefinition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponDefinition);
UWeaponDefinition::~UWeaponDefinition() {}
// End Class UWeaponDefinition

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Weapons_WeaponDefinition_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWeaponDefinition, UWeaponDefinition::StaticClass, TEXT("UWeaponDefinition"), &Z_Registration_Info_UClass_UWeaponDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeaponDefinition), 2918815099U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Weapons_WeaponDefinition_h_3014056456(TEXT("/Script/GASShooter"),
	Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Weapons_WeaponDefinition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Weapons_WeaponDefinition_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
