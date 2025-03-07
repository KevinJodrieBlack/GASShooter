// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapons/MasterWeaponList.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GASSHOOTER_MasterWeaponList_generated_h
#error "MasterWeaponList.generated.h already included, missing '#pragma once' in MasterWeaponList.h"
#endif
#define GASSHOOTER_MasterWeaponList_generated_h

#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Weapons_MasterWeaponList_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWeaponListItem_Statics; \
	GASSHOOTER_API static class UScriptStruct* StaticStruct();


template<> GASSHOOTER_API UScriptStruct* StaticStruct<struct FWeaponListItem>();

#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Weapons_MasterWeaponList_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMasterWeaponList(); \
	friend struct Z_Construct_UClass_UMasterWeaponList_Statics; \
public: \
	DECLARE_CLASS(UMasterWeaponList, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GASShooter"), NO_API) \
	DECLARE_SERIALIZER(UMasterWeaponList)


#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Weapons_MasterWeaponList_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMasterWeaponList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMasterWeaponList(UMasterWeaponList&&); \
	UMasterWeaponList(const UMasterWeaponList&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMasterWeaponList); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMasterWeaponList); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMasterWeaponList) \
	NO_API virtual ~UMasterWeaponList();


#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Weapons_MasterWeaponList_h_25_PROLOG
#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Weapons_MasterWeaponList_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Weapons_MasterWeaponList_h_28_INCLASS_NO_PURE_DECLS \
	FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Weapons_MasterWeaponList_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASSHOOTER_API UClass* StaticClass<class UMasterWeaponList>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Weapons_MasterWeaponList_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
