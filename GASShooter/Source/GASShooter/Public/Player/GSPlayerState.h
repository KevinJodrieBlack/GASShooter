// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameFramework/PlayerState.h"
#include "Weapons/WeaponInfo.h"
#include "GSPlayerState.generated.h"

class UWeaponDefinition;
class UMasterWeaponList;
/**
 * 
 */
UCLASS()
class GASSHOOTER_API AGSPlayerState : public APlayerState
{
	GENERATED_BODY()

protected:

	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UMasterWeaponList> MasterWeaponList;

public:

	FWeaponInfo GetWeaponInfo(const FGameplayTag& WeaponTag);
};
