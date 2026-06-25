// Copyright Joao Ricardo.

#include "Characters/Animation/BaseAnimInstance.h"
#include "Characters/BaseCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"

void UBaseAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
	
	BaseCharacter=Cast<ABaseCharacter>(TryGetPawnOwner());
	if (!BaseCharacter) return;
	
	Movement=BaseCharacter->GetCharacterMovement();
	if (!Movement) return;
}

void UBaseAnimInstance::NativeUpdateAnimation(float DeltaSeconds)




{
	Super::NativeUpdateAnimation(DeltaSeconds);
	
	if (!Movement || !BaseCharacter) return;
	
	this->Velocity=BaseCharacter->GetVelocity().SizeSquared2D();
	this->bCanJump=Movement->IsFalling();
}