// Copyright Joao Ricardo.

#include "Assets/HealthAsset.h"
#include "Kismet/KismetSystemLibrary.h"

AHealthAsset::AHealthAsset()
{
	Health=40.f;
}

void AHealthAsset::Overlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	Super::Overlap(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);
}