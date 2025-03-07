// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASShooter/Private/Abilities/GA_Damage_LineTrace.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGA_Damage_LineTrace() {}

// Begin Cross Module References
GASSHOOTER_API UClass* Z_Construct_UClass_UGA_Damage_LineTrace();
GASSHOOTER_API UClass* Z_Construct_UClass_UGA_Damage_LineTrace_NoRegister();
GASSHOOTER_API UClass* Z_Construct_UClass_UGADamage();
UPackage* Z_Construct_UPackage__Script_GASShooter();
// End Cross Module References

// Begin Class UGA_Damage_LineTrace
void UGA_Damage_LineTrace::StaticRegisterNativesUGA_Damage_LineTrace()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGA_Damage_LineTrace);
UClass* Z_Construct_UClass_UGA_Damage_LineTrace_NoRegister()
{
	return UGA_Damage_LineTrace::StaticClass();
}
struct Z_Construct_UClass_UGA_Damage_LineTrace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Abilities/GA_Damage_LineTrace.h" },
		{ "ModuleRelativePath", "Private/Abilities/GA_Damage_LineTrace.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGA_Damage_LineTrace>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGA_Damage_LineTrace_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGADamage,
	(UObject* (*)())Z_Construct_UPackage__Script_GASShooter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_Damage_LineTrace_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGA_Damage_LineTrace_Statics::ClassParams = {
	&UGA_Damage_LineTrace::StaticClass,
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
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_Damage_LineTrace_Statics::Class_MetaDataParams), Z_Construct_UClass_UGA_Damage_LineTrace_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGA_Damage_LineTrace()
{
	if (!Z_Registration_Info_UClass_UGA_Damage_LineTrace.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGA_Damage_LineTrace.OuterSingleton, Z_Construct_UClass_UGA_Damage_LineTrace_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGA_Damage_LineTrace.OuterSingleton;
}
template<> GASSHOOTER_API UClass* StaticClass<UGA_Damage_LineTrace>()
{
	return UGA_Damage_LineTrace::StaticClass();
}
UGA_Damage_LineTrace::UGA_Damage_LineTrace(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGA_Damage_LineTrace);
UGA_Damage_LineTrace::~UGA_Damage_LineTrace() {}
// End Class UGA_Damage_LineTrace

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Private_Abilities_GA_Damage_LineTrace_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGA_Damage_LineTrace, UGA_Damage_LineTrace::StaticClass, TEXT("UGA_Damage_LineTrace"), &Z_Registration_Info_UClass_UGA_Damage_LineTrace, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGA_Damage_LineTrace), 3970174530U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Private_Abilities_GA_Damage_LineTrace_h_2997804177(TEXT("/Script/GASShooter"),
	Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Private_Abilities_GA_Damage_LineTrace_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Private_Abilities_GA_Damage_LineTrace_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
