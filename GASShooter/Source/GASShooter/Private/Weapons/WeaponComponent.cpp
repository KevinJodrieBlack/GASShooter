// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapons/WeaponComponent.h"

#include "Characters/CharacterHelperInterface.h"
#include "Weapons/WeaponActor.h"
#include "GameFramework/Character.h"
#include "Net/UnrealNetwork.h"
#include "Player/GSPlayerState.h"
#include "Player/PlayerHelperInterface.h"
#include "Weapons/WeaponInfo.h"


class AGSPlayerState;

void FWeaponEntry::Reload()
{
	if (ReserveAmmo <= 0)
	{
		return;
	}
	
	const int MagDifference = CurrentMagAmmo - WeaponInfo.MaxMagAmmo;

	if (ReserveAmmo > MagDifference)
	{
		ReserveAmmo -= MagDifference;
		CurrentMagAmmo = WeaponInfo.MaxMagAmmo;
		return;
	}

	CurrentMagAmmo += ReserveAmmo;
	ReserveAmmo = 0;
}

void FWeaponEntry::Attack()
{
	CurrentMagAmmo--;
}

// Sets default values for this component's properties
UWeaponComponent::UWeaponComponent()
{
	PrimaryComponentTick.bCanEverTick = false;

	SetIsReplicated(true);
}

void UWeaponComponent::AddWeapon(FGameplayTag WeaponTag)
{
	if (!WeaponTag.IsValid())
	{
		return;
	}

	const ACharacter* OwnerCharacter = Cast<ACharacter>(GetOwner());

	if (!IsValid(OwnerCharacter))
	{
		return;
	}

	if (!OwnerCharacter->HasAuthority())
	{
		Server_AddWeapon(WeaponTag);
	}

	FWeaponInfo WeaponInfo = FWeaponInfo();

	if (AGSPlayerState* GSPlayerState = OwnerCharacter->GetPlayerState<AGSPlayerState>())
	{
		UE_LOG(LogTemp, Warning, TEXT("GS Player state found. Searching for weapon info"))
		WeaponInfo = GSPlayerState->GetWeaponInfo(WeaponTag);
	}

	if (WeaponTagMap.Contains(WeaponTag))
	{
		UE_LOG(LogTemp, Warning, TEXT("Adding additional ammo to %s"), *WeaponTagMap[WeaponTag].WeaponInfo.WeaponName.ToString())
		WeaponTagMap[WeaponTag].ReserveAmmo += WeaponInfo.InitialReserveAmmo;
	}
	else
	{
		FWeaponEntry NewEntry = CreateWeaponEntryFromInfo(WeaponInfo);
		WeaponTagMap.Emplace(WeaponTag, NewEntry);
		UE_LOG(LogTemp, Warning, TEXT("Adding %s to weapon component"), *WeaponTagMap[WeaponTag].WeaponInfo.WeaponName.ToString())
		EquipWeapon(NewEntry);
	}
}

void UWeaponComponent::EquipWeapon(const FWeaponEntry& Entry)
{
	if (!Entry.WeaponInfo.WeaponTag.IsValid())
	{
		return;
	}

	CurrentWeapon = Entry;

	SpawnWeaponMesh();
}

void UWeaponComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UWeaponComponent, CurrentWeapon);
}

void UWeaponComponent::OnRep_CurrentWeapon()
{
	GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Red, FString::Printf(TEXT("%s, has equipped %s"), *GetOwner()->GetName(), *CurrentWeapon.WeaponInfo.WeaponName.ToString()));
	
}

FWeaponEntry UWeaponComponent::CreateWeaponEntryFromInfo(const FWeaponInfo& WeaponInfo)
{
	FWeaponEntry NewEntry = FWeaponEntry();
	NewEntry.WeaponInfo = WeaponInfo;
	NewEntry.CurrentMagAmmo = WeaponInfo.MaxMagAmmo;

	return NewEntry;
}

void UWeaponComponent::SpawnWeaponMesh()
{
	AActor* OwningActor = GetOwner();

	if (!IsValid(OwningActor))
	{
		return;
	}
	
	if (IsValid(CurrentWeaponActor1P))
	{
		CurrentWeaponActor1P->Destroy();
	}

	if (IsValid(CurrentWeaponActor3P))
	{
		CurrentWeaponActor3P->Destroy();
	}

	if (IsValid(CurrentWeapon.WeaponInfo.WeaponActor1PClass))
	{
		if (OwningActor->GetClass()->ImplementsInterface(UPlayerHelperInterface::StaticClass()))
		{
			USkeletalMeshComponent* Mesh1P = IPlayerHelperInterface::Execute_GetFirstPersonMesh(OwningActor);

			if (IsValid(Mesh1P))
			{
				CurrentWeaponActor1P = GetWorld()->SpawnActor<AWeaponActor>(CurrentWeapon.WeaponInfo.WeaponActor1PClass);
				CurrentWeaponActor1P->AttachToComponent(Mesh1P, FAttachmentTransformRules::KeepRelativeTransform, FName("GripPoint"));
				CurrentWeaponActor1P->SetOwner(OwningActor);
			}
		}
	}

	if (IsValid(CurrentWeapon.WeaponInfo.WeaponActor3PClass))
	{
		if (OwningActor->GetClass()->ImplementsInterface(UCharacterHelperInterface::StaticClass()))
		{
			USkeletalMeshComponent* Mesh3P = ICharacterHelperInterface::Execute_GetThirdPersonMesh(OwningActor);

			if (IsValid(Mesh3P))
			{
				UE_LOG(LogTemp, Warning, TEXT("Spawning 3P weapon mesh"));
				CurrentWeaponActor3P = GetWorld()->SpawnActor<AWeaponActor>(CurrentWeapon.WeaponInfo.WeaponActor3PClass);
				CurrentWeaponActor3P->AttachToComponent(Mesh3P, FAttachmentTransformRules::KeepRelativeTransform, FName("GripPoint"));
				CurrentWeaponActor3P->SetOwner(OwningActor);
			}
		}
	}
}

USkeletalMeshComponent* UWeaponComponent::GetWeaponActorMesh()
{
	ACharacter* OwnerCharacter = Cast<ACharacter>(GetOwner());

	if (!IsValid(OwnerCharacter)){
		return nullptr;
	}
	
	if (OwnerCharacter->IsLocallyControlled())
	{
		if (OwnerCharacter->GetClass()->ImplementsInterface(UPlayerHelperInterface::StaticClass()))
		{
			USkeletalMeshComponent* Mesh1P = IPlayerHelperInterface::Execute_GetFirstPersonMesh(OwnerCharacter);

			if (IsValid(Mesh1P))
			{
				return Mesh1P;
			}
		}
	}
	else
	{
		if (OwnerCharacter->GetClass()->ImplementsInterface(UCharacterHelperInterface::StaticClass()))
		{
			USkeletalMeshComponent* Mesh3P = ICharacterHelperInterface::Execute_GetThirdPersonMesh(OwnerCharacter);

			if (IsValid(Mesh3P))
			{
				return Mesh3P;
			}
		}
	}

	return nullptr;
}

void UWeaponComponent::Server_AddWeapon_Implementation(const FGameplayTag& WeaponTag)
{
	AddWeapon(WeaponTag);
}

