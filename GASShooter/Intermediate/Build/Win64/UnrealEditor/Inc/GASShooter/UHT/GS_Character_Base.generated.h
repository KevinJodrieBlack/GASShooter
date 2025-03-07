// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/GS_Character_Base.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GASSHOOTER_GS_Character_Base_generated_h
#error "GS_Character_Base.generated.h already included, missing '#pragma once' in GS_Character_Base.h"
#endif
#define GASSHOOTER_GS_Character_Base_generated_h

#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Characters_GS_Character_Base_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBroadcastHealthValue);


#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Characters_GS_Character_Base_h_20_CALLBACK_WRAPPERS
#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Characters_GS_Character_Base_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGS_Character_Base(); \
	friend struct Z_Construct_UClass_AGS_Character_Base_Statics; \
public: \
	DECLARE_CLASS(AGS_Character_Base, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GASShooter"), NO_API) \
	DECLARE_SERIALIZER(AGS_Character_Base) \
	virtual UObject* _getUObject() const override { return const_cast<AGS_Character_Base*>(this); }


#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Characters_GS_Character_Base_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGS_Character_Base(AGS_Character_Base&&); \
	AGS_Character_Base(const AGS_Character_Base&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGS_Character_Base); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGS_Character_Base); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGS_Character_Base) \
	NO_API virtual ~AGS_Character_Base();


#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Characters_GS_Character_Base_h_17_PROLOG
#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Characters_GS_Character_Base_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Characters_GS_Character_Base_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Characters_GS_Character_Base_h_20_CALLBACK_WRAPPERS \
	FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Characters_GS_Character_Base_h_20_INCLASS_NO_PURE_DECLS \
	FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Characters_GS_Character_Base_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASSHOOTER_API UClass* StaticClass<class AGS_Character_Base>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Characters_GS_Character_Base_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
