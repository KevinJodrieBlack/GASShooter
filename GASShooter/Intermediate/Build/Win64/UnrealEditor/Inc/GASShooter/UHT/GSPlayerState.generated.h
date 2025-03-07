// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/GSPlayerState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GASSHOOTER_GSPlayerState_generated_h
#error "GSPlayerState.generated.h already included, missing '#pragma once' in GSPlayerState.h"
#endif
#define GASSHOOTER_GSPlayerState_generated_h

#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Player_GSPlayerState_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGSPlayerState(); \
	friend struct Z_Construct_UClass_AGSPlayerState_Statics; \
public: \
	DECLARE_CLASS(AGSPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GASShooter"), NO_API) \
	DECLARE_SERIALIZER(AGSPlayerState)


#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Player_GSPlayerState_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGSPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGSPlayerState(AGSPlayerState&&); \
	AGSPlayerState(const AGSPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGSPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGSPlayerState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGSPlayerState) \
	NO_API virtual ~AGSPlayerState();


#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Player_GSPlayerState_h_16_PROLOG
#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Player_GSPlayerState_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Player_GSPlayerState_h_19_INCLASS_NO_PURE_DECLS \
	FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Player_GSPlayerState_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASSHOOTER_API UClass* StaticClass<class AGSPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Player_GSPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
