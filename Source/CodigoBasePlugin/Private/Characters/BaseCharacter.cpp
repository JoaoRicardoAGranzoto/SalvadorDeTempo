// Copyright Joao Ricardo.

#include "Characters/BaseCharacter.h"
#include "Characters/PlayableCharacters/BasePlayablePlayerState.h"

ABaseCharacter::ABaseCharacter()
{
	PrimaryActorTick.bCanEverTick = false;
	PrimaryActorTick.bStartWithTickEnabled=false;
	
	Asset=nullptr;
}

UAbilitySystemComponent* ABaseCharacter::GetAbilitySystemComponent() const
{
	return CastChecked<ABasePlayablePlayerState>(GetPlayerState())->GetAbilitySystemComponent();
}