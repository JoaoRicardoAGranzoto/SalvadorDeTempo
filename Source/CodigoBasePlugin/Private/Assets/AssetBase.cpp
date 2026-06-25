// Copyright Joao Ricardo.

#include "Assets/AssetBase.h"
#include "Components/SphereComponent.h"

AAssetBase::AAssetBase()
{
	PrimaryActorTick.bCanEverTick = false;
	PrimaryActorTick.bStartWithTickEnabled=false;
	
	this->OverlapSphere=CreateDefaultSubobject<USphereComponent>("OverlapSphere");
	this->SetRootComponent(this->OverlapSphere);
}

void AAssetBase::BeginPlay()
{
	Super::BeginPlay();




	
	this->OverlapSphere->OnComponentBeginOverlap.AddDynamic(this, &AAssetBase::Overlap);
	this->OverlapSphere->OnComponentEndOverlap.AddDynamic(this, &AAssetBase::EndOverlap);

}

void AAssetBase::Overlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	
}

void AAssetBase::EndOverlap(UPrimitiveComponent* OverlappedComponent,AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	
}