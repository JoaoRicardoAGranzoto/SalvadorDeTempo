// Copyright Joao Ricardo.

#include "Characters/BaseCharacter.h"

ABaseCharacter::ABaseCharacter()
{
	PrimaryActorTick.bCanEverTick = false;
	PrimaryActorTick.bStartWithTickEnabled=false;
	
	Asset=nullptr;
}