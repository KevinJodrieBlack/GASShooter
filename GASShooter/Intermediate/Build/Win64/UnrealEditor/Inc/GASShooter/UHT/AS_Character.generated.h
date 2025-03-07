// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Attributes/AS_Character.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef GASSHOOTER_AS_Character_generated_h
#error "AS_Character.generated.h already included, missing '#pragma once' in AS_Character.h"
#endif
#define GASSHOOTER_AS_Character_generated_h

#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Attributes_AS_Character_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_MaxHealth); \
	DECLARE_FUNCTION(execOnRep_Health);


#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Attributes_AS_Character_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAS_Character(); \
	friend struct Z_Construct_UClass_UAS_Character_Statics; \
public: \
	DECLARE_CLASS(UAS_Character, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GASShooter"), NO_API) \
	DECLARE_SERIALIZER(UAS_Character) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		MaxHealth, \
		NETFIELD_REP_END=MaxHealth	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UAS_Character) \
public:


#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Attributes_AS_Character_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAS_Character(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAS_Character(UAS_Character&&); \
	UAS_Character(const UAS_Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAS_Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAS_Character); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAS_Character) \
	NO_API virtual ~UAS_Character();


#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Attributes_AS_Character_h_19_PROLOG
#define FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Attributes_AS_Character_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Attributes_AS_Character_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Attributes_AS_Character_h_22_INCLASS_NO_PURE_DECLS \
	FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Attributes_AS_Character_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASSHOOTER_API UClass* StaticClass<class UAS_Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Documents_Unreal_Projects_GASShooter_Source_GASShooter_Public_Attributes_AS_Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
