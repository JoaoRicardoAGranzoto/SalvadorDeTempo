// Copyright Joao Ricardo.

#include "Assets/Weapons/FireWeaponBase.h"
#include "Assets/Bullets/BulletBase.h"
#include "Engine/World.h"

AFireWeaponBase::AFireWeaponBase()
{
}

void AFireWeaponBase::Shoot_Implementation()
{
	if (!(GetWorld() || ProjectileClass)) return;
	
	FVector SpawnLocation=GetActorLocation() + GetActorForwardVector();
	FRotator Rotation=GetActorRotation();
		
	FActorSpawnParameters SpawnParams;
	
	
	
	
	SpawnParams.SpawnCollisionHandlingOverride=ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	
	GetWorld()->SpawnActor<ABulletBase>(SpawnParams);
}