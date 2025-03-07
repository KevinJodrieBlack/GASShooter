// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapons/MasterWeaponList.h"

FWeaponInfo UMasterWeaponList::GetWeaponInfo(const FGameplayTag& WeaponTag)
{
	FWeaponInfo NewInfo = FWeaponInfo();
	
	if (!WeaponTag.IsValid())
	{
		return NewInfo;
	}

	for (const FWeaponListItem& ListItem : WeaponItemList)
	{
		if (!ListItem.WeaponTag.IsValid())
		{
			continue;
		}

		if (ListItem.WeaponTag.MatchesTagExact(WeaponTag))
		{
			UE_LOG(LogTemp, Warning, TEXT("Weapon definition found for %s"), *WeaponTag.ToString());
			NewInfo = ListItem.WeaponInfo;
		}
	}

	return NewInfo;
}
