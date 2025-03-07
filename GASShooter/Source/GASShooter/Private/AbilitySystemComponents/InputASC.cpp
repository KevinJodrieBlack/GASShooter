// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystemComponents/InputASC.h"


// Sets default values for this component's properties
UInputASC::UInputASC()
{
	SetIsReplicated(true);

	ReplicationMode = EGameplayEffectReplicationMode::Mixed;
}

void UInputASC::AbilityInputPressed(const FGameplayTag& InputTag)
{
	if (!InputTag.IsValid())
	{
		return;
	}
	
	ABILITYLIST_SCOPE_LOCK();

	for (const FGameplayAbilitySpec& Spec: GetActivatableAbilities())
	{
		if (Spec.DynamicAbilityTags.HasTagExact(InputTag))
		{
			if (!Spec.IsActive())
			{
				TryActivateAbility(Spec.Handle);
			}
			else
			{
				InvokeReplicatedEvent(EAbilityGenericReplicatedEvent::InputPressed, Spec.Handle,
					Spec.ActivationInfo.GetActivationPredictionKey());
			}
		}
	}
}

void UInputASC::AbilityInputReleased(const FGameplayTag& InputTag)
{
	if (!InputTag.IsValid())
	{
		return;
	}

	ABILITYLIST_SCOPE_LOCK();

	for (const FGameplayAbilitySpec& Spec: GetActivatableAbilities())
	{
		if (Spec.DynamicAbilityTags.HasTagExact(InputTag))
		{
			InvokeReplicatedEvent(EAbilityGenericReplicatedEvent::InputReleased, Spec.Handle,
					Spec.ActivationInfo.GetActivationPredictionKey());
		}
	}
}

