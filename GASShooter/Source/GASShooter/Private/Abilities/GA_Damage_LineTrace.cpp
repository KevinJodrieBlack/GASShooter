// Fill out your copyright notice in the Description page of Project Settings.


#include "GA_Damage_LineTrace.h"

#include "AbilitySystemComponent.h"
#include "AbilitySystemGlobals.h"
#include "Characters/CharacterHelperInterface.h"
#include "Player/PlayerHelperInterface.h"

void UGA_Damage_LineTrace::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
                                           const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
                                           const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);

	UE_LOG(LogTemp, Warning, TEXT("Performing line trace"));
	
	PerformLineTrace();
	EndAbility(Handle, ActorInfo, ActivationInfo, true, false);
}

void UGA_Damage_LineTrace::PerformLineTrace()
{
	AActor* AvatarActor = GetAvatarActorFromActorInfo();

	if (!IsValid(AvatarActor))
	{
		return;
	}

	FVector Start = FVector::ZeroVector;
	FVector PlayerLookDir = FVector::ZeroVector;

	if (AvatarActor->GetClass()->ImplementsInterface(UPlayerHelperInterface::StaticClass()))
	{
		Start = IPlayerHelperInterface::Execute_GetCameraLocation(AvatarActor);
		PlayerLookDir = IPlayerHelperInterface::Execute_GetLookRotation(AvatarActor).Vector();
	}

	FVector End = Start + (PlayerLookDir * 10000);
	FHitResult Hit;
	FCollisionQueryParams Params;
	Params.AddIgnoredActor(AvatarActor);

	DrawDebugLine(GetWorld(), Start, End, FColor::Red, false, 1);
	
	if (GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECC_Pawn, Params))
	{
		AActor* HitActor = Hit.GetActor();

		if (!IsValid(HitActor))
		{
			return;
		}

		UAbilitySystemComponent* TargetASC = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(HitActor);

		if (IsValid(TargetASC))
		{
			float AppliedDamage = 0;

			if (AvatarActor->GetClass()->ImplementsInterface(UCharacterHelperInterface::StaticClass()))
			{
				AppliedDamage = ICharacterHelperInterface::Execute_GetCurrentDamage(AvatarActor);
			}

			FGameplayEffectContextHandle ContextHandle = GetAbilitySystemComponentFromActorInfo()->MakeEffectContext();
			FGameplayEffectSpecHandle SpecHandle = GetAbilitySystemComponentFromActorInfo()->MakeOutgoingSpec(GetDamageInfo().DamageEffect, 1, ContextHandle);

			SpecHandle.Data->SetSetByCallerMagnitude(FGameplayTag::RequestGameplayTag("SetByCaller.Damage"), AppliedDamage);
			
			TargetASC->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());

			UE_LOG(LogTemp, Warning, TEXT("%s hit for %f damage"), *HitActor->GetName(), AppliedDamage);
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("No valid ASC on %s"), *HitActor->GetName());
		}
	}
}
