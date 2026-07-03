// Copyright Joao Ricardo.

#include "Assets/Bullets/BulletBase.h"
#include "GameFramework/ProjectileMovementComponent.h"

ABulletBase::ABulletBase()
{
	Projectile=CreateDefaultSubobject<UProjectileMovementComponent>("ProjectileMovementComponent");
	Projectile->InitialSpeed=80000.f;
	Projectile->MaxSpeed=90000.f;
	Projectile->ProjectileGravityScale=1.f;
	Projectile->SetVelocityInLocalSpace(FVector(1.0, 0.0, 0.0));
	Projectile->bRotationFollowsVelocity=true;
	Projectile->bShouldBounce=false;
}

void ABulletBase::OnProjectileHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,FVector NormalImpulse, const FHitResult& Hit)
{
	
	
	

}