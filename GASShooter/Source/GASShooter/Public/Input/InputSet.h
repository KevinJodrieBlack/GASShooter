// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Engine/DataAsset.h"
#include "InputSet.generated.h"

class UInputAction;

USTRUCT(BlueprintType)
struct FInputAbilityBinding
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UInputAction> InputAction = nullptr;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTag AbilityTag = FGameplayTag();
};

UCLASS()
class GASSHOOTER_API UInputSet : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	TArray<FInputAbilityBinding> InputBindings;
};
