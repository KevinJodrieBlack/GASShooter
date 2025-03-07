// Fill out your copyright notice in the Description page of Project Settings.


#include "Attributes/AS_Character.h"

#include "GameplayEffectExtension.h"
#include "Net/UnrealNetwork.h"

void UAS_Character::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(UAS_Character, Health, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAS_Character, MaxHealth, COND_None, REPNOTIFY_Always);
}

void UAS_Character::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);

	if (Data.EvaluatedData.Attribute == GetHealthAttribute())
	{
		if (GetHealth() <= 0 && GetOwningActor()->HasAuthority())
		{
			UE_LOG(LogTemp, Warning, TEXT("Broadcasting death event from attribute set for %s"), *GetOwningActor()->GetName());
			OnDeathDelegate.Broadcast();
		}
		OnHealthChangedDelegate.Broadcast(GetHealth(), GetMaxHealth());
		SetHealth(FMath::Clamp(GetHealth(), 0, GetMaxHealth()));
	}
}

void UAS_Character::OnRep_Health(const FGameplayAttributeData& OldHealth)
{
	OnHealthChangedDelegate.Broadcast(GetHealth(), GetMaxHealth());
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_Character, Health, OldHealth);
}

void UAS_Character::OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_Character, MaxHealth, OldMaxHealth);
}
