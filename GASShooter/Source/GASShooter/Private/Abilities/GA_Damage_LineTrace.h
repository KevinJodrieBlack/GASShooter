// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GADamage.h"
#include "GA_Damage_LineTrace.generated.h"

/**
 * 
 */
UCLASS()
class GASSHOOTER_API UGA_Damage_LineTrace : public UGADamage
{
	GENERATED_BODY()

public:

	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;

protected:

	virtual void PerformLineTrace();
};
