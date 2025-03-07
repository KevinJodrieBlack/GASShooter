// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapons/WeaponActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GASSHOOTER_WeaponActor_generated_h
#error "WeaponActor.generated.h already included, missing '#pragma once' in WeaponActor.h"
#endif
#define GASSHOOTER_WeaponActor_generated_h

#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Weapons_WeaponActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeaponActor(); \
	friend struct Z_Construct_UClass_AWeaponActor_Statics; \
public: \
	DECLARE_CLASS(AWeaponActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GASShooter"), NO_API) \
	DECLARE_SERIALIZER(AWeaponActor)


#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Weapons_WeaponActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AWeaponActor(AWeaponActor&&); \
	AWeaponActor(const AWeaponActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeaponActor) \
	NO_API virtual ~AWeaponActor();


#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Weapons_WeaponActor_h_9_PROLOG
#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Weapons_WeaponActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Weapons_WeaponActor_h_12_INCLASS_NO_PURE_DECLS \
	FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Weapons_WeaponActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASSHOOTER_API UClass* StaticClass<class AWeaponActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Weapons_WeaponActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
