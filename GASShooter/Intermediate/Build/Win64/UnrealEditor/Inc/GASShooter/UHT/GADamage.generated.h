// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/GADamage.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GASSHOOTER_GADamage_generated_h
#error "GADamage.generated.h already included, missing '#pragma once' in GADamage.h"
#endif
#define GASSHOOTER_GADamage_generated_h

#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Abilities_GADamage_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGADamage(); \
	friend struct Z_Construct_UClass_UGADamage_Statics; \
public: \
	DECLARE_CLASS(UGADamage, UInputAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GASShooter"), NO_API) \
	DECLARE_SERIALIZER(UGADamage)


#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Abilities_GADamage_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGADamage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGADamage(UGADamage&&); \
	UGADamage(const UGADamage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGADamage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGADamage); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGADamage) \
	NO_API virtual ~UGADamage();


#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Abilities_GADamage_h_14_PROLOG
#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Abilities_GADamage_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Abilities_GADamage_h_17_INCLASS_NO_PURE_DECLS \
	FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Abilities_GADamage_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASSHOOTER_API UClass* StaticClass<class UGADamage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Abilities_GADamage_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
