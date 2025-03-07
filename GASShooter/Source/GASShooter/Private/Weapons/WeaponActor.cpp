// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapons/WeaponActor.h"


// Sets default values
AWeaponActor::AWeaponActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	Root = CreateDefaultSubobject<USceneComponent>("Root");
	SetRootComponent(Root);

	WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>("Mesh1P");
	WeaponMesh->SetupAttachment(Root);
	WeaponMesh->SetIsReplicated(true);

	bReplicates = true;
}

FVector AWeaponActor::GetMuzzleLocation()
{
	if (!IsValid(WeaponMesh))
	{
		return FVector::ZeroVector;
	}

	return WeaponMesh->GetSocketLocation(FName("Muzzle"));
}

