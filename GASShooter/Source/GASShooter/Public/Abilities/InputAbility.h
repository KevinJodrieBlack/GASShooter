// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "InputAbility.generated.h"

/**
 * 
 */
UCLASS()
class GASSHOOTER_API UInputAbility : public UGameplayAbility
{
	GENERATED_BODY()

public:

	UPROPERTY(EditDefaultsOnly)
	FGameplayTag InputTag;
};
