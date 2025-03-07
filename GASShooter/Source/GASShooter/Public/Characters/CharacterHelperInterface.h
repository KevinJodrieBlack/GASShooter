// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/SkeletalMeshSocket.h"
#include "UObject/Interface.h"
#include "CharacterHelperInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(Blueprintable)
class UCharacterHelperInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GASSHOOTER_API ICharacterHelperInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION(BlueprintNativeEvent)
	float GetCurrentDamage();

	UFUNCTION(BlueprintImplementableEvent)
	USkeletalMeshComponent* GetThirdPersonMesh();
	
};
