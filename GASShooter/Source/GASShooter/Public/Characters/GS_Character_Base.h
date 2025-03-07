// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "CharacterHelperInterface.h"
#include "GS_Character_Base.generated.h"

class UWeaponComponent;
class UInputASC;
class UGameplayAbility;
class UGameplayEffect;
class UAS_Character;

UCLASS()
class GASSHOOTER_API AGS_Character_Base : public ACharacter, public IAbilitySystemInterface, public ICharacterHelperInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AGS_Character_Base();

private:
	
	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	TObjectPtr<UInputASC> AbilitySystemComponent;

	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	TObjectPtr<UAS_Character> AttributeSet;

	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	TObjectPtr<UWeaponComponent> WeaponComponent;

protected:

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UGameplayEffect> StartingAttributes;

	UPROPERTY(EditDefaultsOnly)
	TArray<TSubclassOf<UGameplayAbility>> StartingAbilities;

public:
	
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	virtual float GetCurrentDamage_Implementation() override;

protected:

	virtual void BeginPlay() override;

	UFUNCTION(BlueprintImplementableEvent)
	void OnHealthChanged(float CurrentHealth, float MaxHealth);

	UFUNCTION(BlueprintImplementableEvent)
	void OnDeath();

protected:

	virtual void InitCharacter();
	virtual void BindDependenciesToCallbacks();

	UFUNCTION(BlueprintCallable)
	void BroadcastHealthValue();

private:

	void GrantStartingAbilities();

};
