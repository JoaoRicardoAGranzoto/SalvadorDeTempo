// Copyright Joao Ricardo.

#pragma once

#include "CoreMinimal.h"
#include "AssetBase.h"
#include "BaseDoor.generated.h"

UCLASS()
class CODIGOBASEPLUGIN_API ABaseDoor : public AAssetBase
{
	GENERATED_BODY()

public:
	ABaseDoor();
	
	protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseDoor")
	
	
	
	
	TObjectPtr<class UStaticMeshComponent> Door;
	
	virtual void Overlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;
	virtual void EndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) override;
	
	UFUNCTION(BlueprintImplementableEvent)
	void OpenDoor();
	
	UFUNCTION(BlueprintImplementableEvent)
	void CloseDoor();
};