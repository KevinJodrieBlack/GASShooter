// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Input/InputSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GASSHOOTER_InputSet_generated_h
#error "InputSet.generated.h already included, missing '#pragma once' in InputSet.h"
#endif
#define GASSHOOTER_InputSet_generated_h

#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Input_InputSet_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputAbilityBinding_Statics; \
	GASSHOOTER_API static class UScriptStruct* StaticStruct();


template<> GASSHOOTER_API UScriptStruct* StaticStruct<struct FInputAbilityBinding>();

#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Input_InputSet_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputSet(); \
	friend struct Z_Construct_UClass_UInputSet_Statics; \
public: \
	DECLARE_CLASS(UInputSet, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GASShooter"), NO_API) \
	DECLARE_SERIALIZER(UInputSet)


#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Input_InputSet_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInputSet(UInputSet&&); \
	UInputSet(const UInputSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputSet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputSet) \
	NO_API virtual ~UInputSet();


#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Input_InputSet_h_24_PROLOG
#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Input_InputSet_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Input_InputSet_h_27_INCLASS_NO_PURE_DECLS \
	FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Input_InputSet_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASSHOOTER_API UClass* StaticClass<class UInputSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Input_InputSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
