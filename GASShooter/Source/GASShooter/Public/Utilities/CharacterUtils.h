#pragma once
#include "CoreMinimal.h"
#include "CharacterUtils.generated.h"

UCLASS(Abstract)
class UCharacterUtils : public UObject
{
	GENERATED_BODY()
	
public:
	
	UFUNCTION(BlueprintCallable)
	static FVector2D GetCharacterCardinalVelocity(ACharacter* Character);
};
