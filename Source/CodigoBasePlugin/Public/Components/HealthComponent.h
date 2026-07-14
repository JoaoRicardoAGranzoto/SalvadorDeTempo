// Copyright Joao Ricardo.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealthComponent.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CODIGOBASEPLUGIN_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UHealthComponent();

	UFUNCTION(BlueprintPure)
	FORCEINLINE float GetHealth() const {return this->Health;}
	



	UFUNCTION(BlueprintCallable)
	FORCEINLINE void SetHealth(float InHealth) {Health = InHealth;}
	
	UFUNCTION(BlueprintCallable)
	FORCEINLINE float GetMaxHealth() const {return this->MaxHealth;}

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Health")
	float Health;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Health")
	float MaxHealth;
};