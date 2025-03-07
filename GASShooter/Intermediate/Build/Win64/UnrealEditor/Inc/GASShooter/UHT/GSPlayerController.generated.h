// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Input/GSPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GASSHOOTER_GSPlayerController_generated_h
#error "GSPlayerController.generated.h already included, missing '#pragma once' in GSPlayerController.h"
#endif
#define GASSHOOTER_GSPlayerController_generated_h

#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Input_GSPlayerController_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGSPlayerController(); \
	friend struct Z_Construct_UClass_AGSPlayerController_Statics; \
public: \
	DECLARE_CLASS(AGSPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GASShooter"), NO_API) \
	DECLARE_SERIALIZER(AGSPlayerController)


#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Input_GSPlayerController_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGSPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGSPlayerController(AGSPlayerController&&); \
	AGSPlayerController(const AGSPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGSPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGSPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGSPlayerController) \
	NO_API virtual ~AGSPlayerController();


#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Input_GSPlayerController_h_16_PROLOG
#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Input_GSPlayerController_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Input_GSPlayerController_h_19_INCLASS_NO_PURE_DECLS \
	FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Input_GSPlayerController_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASSHOOTER_API UClass* StaticClass<class AGSPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Input_GSPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
