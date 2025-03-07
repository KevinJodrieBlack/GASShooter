// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WeaponActor.generated.h"

UCLASS()
class GASSHOOTER_API AWeaponActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AWeaponActor();

	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<USceneComponent> Root;

	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<USkeletalMeshComponent> WeaponMesh;

	FVector GetMuzzleLocation();
};
