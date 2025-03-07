// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/InputAbility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GASSHOOTER_InputAbility_generated_h
#error "InputAbility.generated.h already included, missing '#pragma once' in InputAbility.h"
#endif
#define GASSHOOTER_InputAbility_generated_h

#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Abilities_InputAbility_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputAbility(); \
	friend struct Z_Construct_UClass_UInputAbility_Statics; \
public: \
	DECLARE_CLASS(UInputAbility, UGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GASShooter"), NO_API) \
	DECLARE_SERIALIZER(UInputAbility)


#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Abilities_InputAbility_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInputAbility(UInputAbility&&); \
	UInputAbility(const UInputAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputAbility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputAbility) \
	NO_API virtual ~UInputAbility();


#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Abilities_InputAbility_h_12_PROLOG
#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Abilities_InputAbility_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Abilities_InputAbility_h_15_INCLASS_NO_PURE_DECLS \
	FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Abilities_InputAbility_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASSHOOTER_API UClass* StaticClass<class UInputAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Abilities_InputAbility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
