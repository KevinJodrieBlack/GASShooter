// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapons/WeaponComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
struct FWeaponEntry;
#ifdef GASSHOOTER_WeaponComponent_generated_h
#error "WeaponComponent.generated.h already included, missing '#pragma once' in WeaponComponent.h"
#endif
#define GASSHOOTER_WeaponComponent_generated_h

#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Weapons_WeaponComponent_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWeaponEntry_Statics; \
	GASSHOOTER_API static class UScriptStruct* StaticStruct();


template<> GASSHOOTER_API UScriptStruct* StaticStruct<struct FWeaponEntry>();

#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Weapons_WeaponComponent_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Server_AddWeapon_Implementation(FGameplayTag const& WeaponTag); \
	DECLARE_FUNCTION(execOnRep_CurrentWeapon); \
	DECLARE_FUNCTION(execServer_AddWeapon); \
	DECLARE_FUNCTION(execEquipWeapon); \
	DECLARE_FUNCTION(execAddWeapon);


#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Weapons_WeaponComponent_h_34_CALLBACK_WRAPPERS
#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Weapons_WeaponComponent_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeaponComponent(); \
	friend struct Z_Construct_UClass_UWeaponComponent_Statics; \
public: \
	DECLARE_CLASS(UWeaponComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GASShooter"), NO_API) \
	DECLARE_SERIALIZER(UWeaponComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentWeapon=NETFIELD_REP_START, \
		NETFIELD_REP_END=CurrentWeapon	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Weapons_WeaponComponent_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWeaponComponent(UWeaponComponent&&); \
	UWeaponComponent(const UWeaponComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWeaponComponent) \
	NO_API virtual ~UWeaponComponent();


#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Weapons_WeaponComponent_h_31_PROLOG
#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Weapons_WeaponComponent_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Weapons_WeaponComponent_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Weapons_WeaponComponent_h_34_CALLBACK_WRAPPERS \
	FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Weapons_WeaponComponent_h_34_INCLASS_NO_PURE_DECLS \
	FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Weapons_WeaponComponent_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASSHOOTER_API UClass* StaticClass<class UWeaponComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Weapons_WeaponComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
