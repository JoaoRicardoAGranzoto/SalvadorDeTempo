// Copyright Joao Ricardo.

#include "Characters/PlayableCharacters/BasePlayablePlayerState.h"
#include "AbilitySystemComponent.h"
#include "GAS/BaseAttributeSet.h"

ABasePlayablePlayerState::ABasePlayablePlayerState()
{
	BaseAbilityComponent=CreateDefaultSubobject<UAbilitySystemComponent>("BaseAbilityComponent");
	BaseAbilityComponent->SetIsReplicated(true);
	BaseAbilityComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);
	
	BaseAttributes=CreateDefaultSubobject<UBaseAttributeSet>("BaseAttributes");
}

UAbilitySystemComponent* ABasePlayablePlayerState::GetAbilitySystemComponent() const
{
	return BaseAbilityComponent;




}