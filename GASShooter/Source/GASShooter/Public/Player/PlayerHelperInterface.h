// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PlayerHelperInterface.generated.h"

// This class does not need to be modified.
UINTERFACE()
class UPlayerHelperInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GASSHOOTER_API IPlayerHelperInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION(BlueprintImplementableEvent)
	FVector GetCameraLocation();

	UFUNCTION(BlueprintImplementableEvent)
	FRotator GetLookRotation();

	UFUNCTION(BlueprintImplementableEvent)
	USkeletalMeshComponent* GetFirstPersonMesh();
};
