#pragma once

#include "DamageInfo.generated.h"

class UGameplayEffect;
class UAbilitySystemComponent;

USTRUCT(BlueprintType)
struct FDamageInfo
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly)
	TObjectPtr<UAbilitySystemComponent> SourceASC = nullptr;

	UPROPERTY(BlueprintReadOnly)
	TObjectPtr<UAbilitySystemComponent> TargetASC = nullptr;

	UPROPERTY(BlueprintReadOnly)
	TSubclassOf<UGameplayEffect> DamageEffect = nullptr;

	UPROPERTY(BlueprintReadOnly)
	float DamageAmount;
};
