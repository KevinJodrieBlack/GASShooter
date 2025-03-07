// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/CharacterHelperInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMeshComponent;
#ifdef GASSHOOTER_CharacterHelperInterface_generated_h
#error "CharacterHelperInterface.generated.h already included, missing '#pragma once' in CharacterHelperInterface.h"
#endif
#define GASSHOOTER_CharacterHelperInterface_generated_h

#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Characters_CharacterHelperInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual float GetCurrentDamage_Implementation() { return 0; }; \
	DECLARE_FUNCTION(execGetCurrentDamage);


#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Characters_CharacterHelperInterface_h_14_CALLBACK_WRAPPERS
#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Characters_CharacterHelperInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharacterHelperInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCharacterHelperInterface(UCharacterHelperInterface&&); \
	UCharacterHelperInterface(const UCharacterHelperInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterHelperInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterHelperInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterHelperInterface) \
	NO_API virtual ~UCharacterHelperInterface();


#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Characters_CharacterHelperInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCharacterHelperInterface(); \
	friend struct Z_Construct_UClass_UCharacterHelperInterface_Statics; \
public: \
	DECLARE_CLASS(UCharacterHelperInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/GASShooter"), NO_API) \
	DECLARE_SERIALIZER(UCharacterHelperInterface)


#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Characters_CharacterHelperInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Characters_CharacterHelperInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Characters_CharacterHelperInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Characters_CharacterHelperInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICharacterHelperInterface() {} \
public: \
	typedef UCharacterHelperInterface UClassType; \
	typedef ICharacterHelperInterface ThisClass; \
	static float Execute_GetCurrentDamage(UObject* O); \
	static USkeletalMeshComponent* Execute_GetThirdPersonMesh(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Characters_CharacterHelperInterface_h_11_PROLOG
#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Characters_CharacterHelperInterface_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Characters_CharacterHelperInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Characters_CharacterHelperInterface_h_14_CALLBACK_WRAPPERS \
	FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Characters_CharacterHelperInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASSHOOTER_API UClass* StaticClass<class UCharacterHelperInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Characters_CharacterHelperInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
