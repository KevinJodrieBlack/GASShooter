// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameFramework/PlayerController.h"
#include "GSPlayerController.generated.h"

class UInputASC;
class UAbilitySystemComponent;
class UInputSet;
/**
 * 
 */
UCLASS()
class GASSHOOTER_API AGSPlayerController : public APlayerController
{
	GENERATED_BODY()

public:

	virtual void SetupInputComponent() override;
	virtual void OnPossess(APawn* InPawn) override;
	virtual void OnUnPossess() override;

protected:

	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UInputSet> InputSet;

	UPROPERTY(BlueprintReadOnly)
	TObjectPtr<UInputASC> InputASC;

protected:

	void AbilityInputPressed(FGameplayTag InputTag);
	void AbilityInputReleased(FGameplayTag InputTag);

	UInputASC* GetControlledPawnASC();
};
