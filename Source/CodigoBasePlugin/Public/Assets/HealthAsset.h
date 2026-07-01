// Copyright Joao Ricardo.

#pragma once

#include "CoreMinimal.h"
#include "AssetBase.h"
#include "HealthAsset.generated.h"

UCLASS()
class CODIGOBASEPLUGIN_API AHealthAsset : public AAssetBase
{
	GENERATED_BODY()

public:
	AHealthAsset();
	
protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Health Asset")
	
	
	
	
	float Health;
	
	virtual void Overlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;
};