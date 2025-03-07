// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UObject/Object.h"
#include "WeaponInfo.generated.h"

class AWeaponActor;
class UWeaponDefinition;

USTRUCT(BlueprintType)
struct FWeaponInfo
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly)
	FText WeaponName = FText();

	UPROPERTY(EditDefaultsOnly)
	int MaxMagAmmo = 0;

	UPROPERTY(EditDefaultsOnly)
	float Damage = 0;

	UPROPERTY(EditDefaultsOnly)
	int InitialReserveAmmo = 0;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UWeaponDefinition> WeaponDefinition;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AWeaponActor> WeaponActor1PClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AWeaponActor> WeaponActor3PClass;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTag WeaponTag = FGameplayTag();
	
};
