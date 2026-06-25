// Copyright Joao Ricardo.

#include "GAS/BaseAttributeSet.h"

UBaseAttributeSet::UBaseAttributeSet()
{
	Health.SetBaseValue(100.f);
	Health.SetCurrentValue(100.f);
	
	MaxHealth.SetBaseValue(100.f);
	MaxHealth.SetCurrentValue(100.f);
}
