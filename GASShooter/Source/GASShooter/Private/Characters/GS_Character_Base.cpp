// Fill out your copyright notice in the Description page of Project Settings.


#include "GASShooter/Public/Characters/GS_Character_Base.h"

#include "AbilitySystemComponent.h"
#include "Abilities/InputAbility.h"
#include "AbilitySystemComponents/InputASC.h"
#include "Attributes/AS_Character.h"
#include "Weapons/WeaponComponent.h"

// Sets default values
AGS_Character_Base::AGS_Character_Base()
{
 	AbilitySystemComponent = CreateDefaultSubobject<UInputASC>("Ability SystemComponent");
	AbilitySystemComponent->SetIsReplicated(true);
	
	AttributeSet = CreateDefaultSubobject<UAS_Character>("Attribute Set");

	WeaponComponent = CreateDefaultSubobject<UWeaponComponent>("WeaponComponent");
}

UAbilitySystemComponent* AGS_Character_Base::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

float AGS_Character_Base::GetCurrentDamage_Implementation()
{
	float Damage = 0;

	if (IsValid(WeaponComponent))
	{
		Damage = -WeaponComponent->GetCurrentWeapon().WeaponInfo.Damage;
	}

	return Damage;
}

void AGS_Character_Base::BeginPlay()
{
	Super::BeginPlay();

	BindDependenciesToCallbacks();
	
	if (HasAuthority())
	{
		InitCharacter();
	}
}

void AGS_Character_Base::InitCharacter()
{
	if (IsValid(AbilitySystemComponent))
	{
		if (IsValid(StartingAttributes))
		{
			FGameplayEffectContextHandle Context = AbilitySystemComponent->MakeEffectContext();
			FGameplayEffectSpecHandle SpecHandle = AbilitySystemComponent->MakeOutgoingSpec(StartingAttributes, 1, Context);
			AbilitySystemComponent->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());
		}

		GrantStartingAbilities();
	}
}

void AGS_Character_Base::BindDependenciesToCallbacks()
{
	if (IsValid(AbilitySystemComponent) && IsValid(AttributeSet))
	{
		AttributeSet->OnHealthChangedDelegate.AddLambda([this](float CurrentHealth, float MaxHealth)
		{
			OnHealthChanged(CurrentHealth, MaxHealth);
		});

		AttributeSet->OnDeathDelegate.AddLambda([this]
		{
			OnDeath();
		});
	}
}

void AGS_Character_Base::BroadcastHealthValue()
{
	if (!IsValid(AttributeSet))
	{
		return;
	}
	OnHealthChanged(AttributeSet->GetHealth(), AttributeSet->GetMaxHealth());
}

void AGS_Character_Base::GrantStartingAbilities()
{
	if (!IsValid(AbilitySystemComponent))
	{
		return;
	}
	for (const TSubclassOf<UGameplayAbility>& Ability : StartingAbilities)
	{
		if (!IsValid(Ability))
		{
			continue;
		}
		
		FGameplayAbilitySpec AbilitySpec = FGameplayAbilitySpec(Ability, 1);

		if (UInputAbility* InputAbility = Cast<UInputAbility>(AbilitySpec.Ability))
		{
			UE_LOG(LogTemp, Warning, TEXT("Binding input for %s ability for %s"), *InputAbility->GetName(), *GetName());
			AbilitySpec.DynamicAbilityTags.AddTag(InputAbility->InputTag);
		}
		
		AbilitySystemComponent->GiveAbility(AbilitySpec);
	}
}

