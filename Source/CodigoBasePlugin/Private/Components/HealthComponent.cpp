// Copyright Joao Ricardo.

#include "Components/HealthComponent.h"

UHealthComponent::UHealthComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
	
	Health = 100.0f;
	MaxHealth = 100.0f;
}