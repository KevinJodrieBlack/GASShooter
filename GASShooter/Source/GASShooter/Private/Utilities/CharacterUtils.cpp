#include "..\..\Public\Utilities\CharacterUtils.h"

#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"

FVector2d UCharacterUtils::GetCharacterCardinalVelocity(ACharacter* Character)
{
	if (!IsValid(Character))
	{
		return FVector2D::ZeroVector;
	}

	const FVector CurrentVelocity = Character->GetCharacterMovement()->Velocity;

	const float ForwardVelocity = Character->GetActorForwardVector().Dot(CurrentVelocity);
	const float SideVelocity = Character->GetActorRightVector().Dot(CurrentVelocity);

	return FVector2D(ForwardVelocity, SideVelocity);
}
