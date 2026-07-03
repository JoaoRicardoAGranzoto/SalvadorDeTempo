// Copyright Joao Ricardo.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AssetBase.generated.h"

UCLASS(Abstract)
class CODIGOBASEPLUGIN_API AAssetBase : public AActor
{
	GENERATED_BODY()
	
public:
	AAssetBase();

protected:
	virtual void BeginPlay() override;




	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AssetInteraction")
	TObjectPtr<class USphereComponent> OverlapSphere;
	
	UFUNCTION()
	virtual void Overlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	
	UFUNCTION()
	virtual void EndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
};