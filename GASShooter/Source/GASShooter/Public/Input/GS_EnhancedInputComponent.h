// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnhancedInputComponent.h"
#include "InputSet.h"
#include "GS_EnhancedInputComponent.generated.h"


class UInputSet;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class GASSHOOTER_API UGS_EnhancedInputComponent : public UEnhancedInputComponent
{
	GENERATED_BODY()

public:
	UGS_EnhancedInputComponent();

	template<class UserClass, typename PressedFuncType, typename ReleasedFuncType>
	void BindAbilityAction(UInputSet* InputSet, UserClass* Object, PressedFuncType PressedFunc, ReleasedFuncType ReleasedFunc);
};

template <class UserClass, typename PressedFuncType, typename ReleasedFuncType>
void UGS_EnhancedInputComponent::BindAbilityAction(UInputSet* InputSet, UserClass* Object, PressedFuncType PressedFunc,
	ReleasedFuncType ReleasedFunc)
{
	check(InputSet);

	for (const FInputAbilityBinding& InputBinding : InputSet->InputBindings)
	{
		if (IsValid(InputBinding.InputAction) && InputBinding.AbilityTag.IsValid())
		{
			if (PressedFunc)
			{
				BindAction(InputBinding.InputAction, ETriggerEvent::Triggered, Object, PressedFunc, InputBinding.AbilityTag);
			}
			if (ReleasedFunc)
			{
				BindAction(InputBinding.InputAction, ETriggerEvent::Completed, Object, ReleasedFunc, InputBinding.AbilityTag);
			}
		}
	}
}
