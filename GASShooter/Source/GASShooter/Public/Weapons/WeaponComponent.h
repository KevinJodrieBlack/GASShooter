// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "WeaponInfo.h"
#include "Components/ActorComponent.h"
#include "WeaponComponent.generated.h"

class AWeaponActor;

USTRUCT(BlueprintType)
struct FWeaponEntry 
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly)
	int CurrentMagAmmo = 0;

	UPROPERTY(BlueprintReadOnly)
	int ReserveAmmo = 0;
	
	UPROPERTY(BlueprintReadOnly)
	FWeaponInfo WeaponInfo = FWeaponInfo();
	
	void Reload();
	void Attack();
};

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class GASSHOOTER_API UWeaponComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UWeaponComponent();

	TMap<FGameplayTag, FWeaponEntry> WeaponTagMap;

private:

	UPROPERTY(ReplicatedUsing = OnRep_CurrentWeapon)
	FWeaponEntry CurrentWeapon = FWeaponEntry();

	UPROPERTY()
	TObjectPtr<AWeaponActor> CurrentWeaponActor1P;

	UPROPERTY()
	TObjectPtr<AWeaponActor> CurrentWeaponActor3P;

public:
	
	UFUNCTION(BlueprintCallable)
	void AddWeapon(FGameplayTag WeaponTag);

	UFUNCTION(BlueprintCallable)
	void EquipWeapon(const FWeaponEntry& Entry);

	const FWeaponEntry& GetCurrentWeapon() { return CurrentWeapon; }

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:

	UFUNCTION(Server, Reliable)
	void Server_AddWeapon(const FGameplayTag& WeaponTag);

	UFUNCTION()
	void OnRep_CurrentWeapon();

	FWeaponEntry CreateWeaponEntryFromInfo(const FWeaponInfo& WeaponInfo);

	void SpawnWeaponMesh();

	USkeletalMeshComponent* GetWeaponActorMesh();
};
