// Copyright Joao Ricardo.

#pragma once

#include "CoreMinimal.h"
#include "Assets/AssetBase.h"
#include "BulletBase.generated.h"

UCLASS()
class CODIGOBASEPLUGIN_API ABulletBase : public AAssetBase
{
	GENERATED_BODY()

public:
	ABulletBase();
	
	TObjectPtr<class UProjectileMovementComponent> GetProjectileMovementComponent() const {return this->Projectile;}
	




protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon")
	TObjectPtr<class UProjectileMovementComponent> Projectile;
	
	virtual void OnProjectileHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
};