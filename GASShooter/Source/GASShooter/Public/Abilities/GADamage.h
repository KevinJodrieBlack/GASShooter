// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DamageInfo.h"
#include "InputAbility.h"
#include "Abilities/GameplayAbility.h"
#include "GADamage.generated.h"

/**
 * 
 */
UCLASS()
class GASSHOOTER_API UGADamage : public UInputAbility
{
	GENERATED_BODY()

private:

	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	FDamageInfo DamageInfo = FDamageInfo();

	UPROPERTY()
	float Damage;

protected:

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UGameplayEffect> DamageEffect;

	void SetDamage(float NewDamage) {Damage = NewDamage;}

public:

	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
		const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;

	const FDamageInfo& GetDamageInfo() { return DamageInfo;}
};
