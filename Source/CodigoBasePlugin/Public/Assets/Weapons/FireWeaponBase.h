// Copyright Joao Ricardo.

#pragma once

#include "CoreMinimal.h"
#include "Assets/AssetBase.h"
#include "FireWeaponBase.generated.h"

UCLASS()
class CODIGOBASEPLUGIN_API AFireWeaponBase : public AAssetBase
{
	GENERATED_BODY()
	
public:
	AFireWeaponBase();
	
	void Shoot();
	
	
	
	
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Bullet")
	TSubclassOf<class ABulletBase> ProjectileClass;
};