// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Utilities/CharacterUtils.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACharacter;
#ifdef GASSHOOTER_CharacterUtils_generated_h
#error "CharacterUtils.generated.h already included, missing '#pragma once' in CharacterUtils.h"
#endif
#define GASSHOOTER_CharacterUtils_generated_h

#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Utilities_CharacterUtils_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCharacterCardinalVelocity);


#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Utilities_CharacterUtils_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterUtils(); \
	friend struct Z_Construct_UClass_UCharacterUtils_Statics; \
public: \
	DECLARE_CLASS(UCharacterUtils, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GASShooter"), NO_API) \
	DECLARE_SERIALIZER(UCharacterUtils)


#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Utilities_CharacterUtils_h_8_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharacterUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCharacterUtils(UCharacterUtils&&); \
	UCharacterUtils(const UCharacterUtils&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterUtils); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterUtils) \
	NO_API virtual ~UCharacterUtils();


#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Utilities_CharacterUtils_h_5_PROLOG
#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Utilities_CharacterUtils_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Utilities_CharacterUtils_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Utilities_CharacterUtils_h_8_INCLASS_NO_PURE_DECLS \
	FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Utilities_CharacterUtils_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASSHOOTER_API UClass* StaticClass<class UCharacterUtils>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Utilities_CharacterUtils_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
