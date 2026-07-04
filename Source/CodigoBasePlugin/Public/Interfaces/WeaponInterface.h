// Copyright Joao Ricardo.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "WeaponInterface.generated.h"

UINTERFACE(MinimalAPI)
class UWeaponInterface : public UInterface
{
	GENERATED_BODY()
};

class CODIGOBASEPLUGIN_API IWeaponInterface
{
	GENERATED_BODY()

	
	
	
	
public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Weapon")
	void Shoot();
};