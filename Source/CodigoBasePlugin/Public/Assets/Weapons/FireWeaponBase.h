// Copyright Joao Ricardo.

#pragma once

#include "CoreMinimal.h"
#include "Assets/AssetBase.h"
#include "Interfaces/WeaponInterface.h"
#include "FireWeaponBase.generated.h"

UCLASS()
class CODIGOBASEPLUGIN_API AFireWeaponBase : public AAssetBase, public IWeaponInterface
{
	GENERATED_BODY()
	
public:
	AFireWeaponBase();
	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Weapon")
	
	
	
	
	void Shoot();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Bullet")
	TSubclassOf<class ABulletBase> ProjectileClass;
};