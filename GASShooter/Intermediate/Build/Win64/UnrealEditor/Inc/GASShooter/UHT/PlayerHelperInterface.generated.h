// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/PlayerHelperInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMeshComponent;
#ifdef GASSHOOTER_PlayerHelperInterface_generated_h
#error "PlayerHelperInterface.generated.h already included, missing '#pragma once' in PlayerHelperInterface.h"
#endif
#define GASSHOOTER_PlayerHelperInterface_generated_h

#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Player_PlayerHelperInterface_h_13_CALLBACK_WRAPPERS
#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Player_PlayerHelperInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerHelperInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlayerHelperInterface(UPlayerHelperInterface&&); \
	UPlayerHelperInterface(const UPlayerHelperInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerHelperInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerHelperInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerHelperInterface) \
	NO_API virtual ~UPlayerHelperInterface();


#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Player_PlayerHelperInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPlayerHelperInterface(); \
	friend struct Z_Construct_UClass_UPlayerHelperInterface_Statics; \
public: \
	DECLARE_CLASS(UPlayerHelperInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/GASShooter"), NO_API) \
	DECLARE_SERIALIZER(UPlayerHelperInterface)


#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Player_PlayerHelperInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Player_PlayerHelperInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Player_PlayerHelperInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Player_PlayerHelperInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPlayerHelperInterface() {} \
public: \
	typedef UPlayerHelperInterface UClassType; \
	typedef IPlayerHelperInterface ThisClass; \
	static FVector Execute_GetCameraLocation(UObject* O); \
	static USkeletalMeshComponent* Execute_GetFirstPersonMesh(UObject* O); \
	static FRotator Execute_GetLookRotation(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Player_PlayerHelperInterface_h_10_PROLOG
#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Player_PlayerHelperInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Player_PlayerHelperInterface_h_13_CALLBACK_WRAPPERS \
	FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Player_PlayerHelperInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASSHOOTER_API UClass* StaticClass<class UPlayerHelperInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Player_PlayerHelperInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
