// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/GSPlayerState.h"
#include "Weapons/MasterWeaponList.h"

FWeaponInfo AGSPlayerState::GetWeaponInfo(const FGameplayTag& WeaponTag)
{
	FWeaponInfo NewInfo = FWeaponInfo(); 
	
	if (!IsValid(MasterWeaponList))
	{
		return NewInfo;
	}

	return MasterWeaponList->GetWeaponInfo(WeaponTag);
}
