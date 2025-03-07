// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "WeaponInfo.h"
#include "Engine/DataAsset.h"
#include "MasterWeaponList.generated.h"

class UWeaponDefinition;

USTRUCT(BlueprintType)
struct FWeaponListItem
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly)
	FGameplayTag WeaponTag = FGameplayTag();

	UPROPERTY(EditDefaultsOnly)
	FWeaponInfo WeaponInfo = FWeaponInfo();
	
};
UCLASS()
class GASSHOOTER_API UMasterWeaponList : public UDataAsset
{
	GENERATED_BODY()

protected:

	UPROPERTY(EditDefaultsOnly)
	TArray<FWeaponListItem> WeaponItemList;

public:

	FWeaponInfo GetWeaponInfo(const FGameplayTag& WeaponTag);
	
};
