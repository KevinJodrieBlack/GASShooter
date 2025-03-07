// Fill out your copyright notice in the Description page of Project Settings.


#include "Abilities/GADamage.h"
#include "AbilitySystemComponent.h"

void UGADamage::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
	const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	DamageInfo = FDamageInfo();
	DamageInfo.DamageEffect = DamageEffect;
	DamageInfo.SourceASC = GetAbilitySystemComponentFromActorInfo();
	DamageInfo.DamageAmount = Damage; 
	
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);
}
