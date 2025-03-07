// Fill out your copyright notice in the Description page of Project Settings.


#include "Input/GSPlayerController.h"

#include "AbilitySystemGlobals.h"
#include "AbilitySystemInterface.h"
#include "AbilitySystemComponents/InputASC.h"
#include "Input/GS_EnhancedInputComponent.h"

void AGSPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	if (UGS_EnhancedInputComponent* GSInputComp = Cast<UGS_EnhancedInputComponent>(InputComponent))
	{
		GSInputComp->BindAbilityAction(InputSet, this, &ThisClass::AbilityInputPressed, &ThisClass::AbilityInputReleased);
	}
}

void AGSPlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	if (!InPawn->GetClass()->ImplementsInterface(UAbilitySystemInterface::StaticClass()))
	{
		return;
	}

	InputASC = Cast<UInputASC>(UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(InPawn));

	if (!IsValid(InputASC))
	{
		UE_LOG(LogTemp, Error, TEXT("Could not cast Ability System Component to InputASC for %s"), *GetName());
	}
}

void AGSPlayerController::OnUnPossess()
{
	Super::OnUnPossess();

	InputASC = nullptr;
}

void AGSPlayerController::AbilityInputPressed(FGameplayTag InputTag)
{
	if (IsValid(GetControlledPawnASC()))
	{
		
		InputASC->AbilityInputPressed(InputTag);
	}
}

void AGSPlayerController::AbilityInputReleased(FGameplayTag InputTag)
{
	if (IsValid(GetControlledPawnASC()))
	{
		InputASC->AbilityInputReleased(InputTag);
	}
}

UInputASC* AGSPlayerController::GetControlledPawnASC()
{
	if (!IsValid(InputASC))
	{
		if (GetPawn()->GetClass()->ImplementsInterface(UAbilitySystemInterface::StaticClass()))
		{
			InputASC = Cast<UInputASC>(UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(GetPawn()));
		}
	}

	return InputASC;
}
