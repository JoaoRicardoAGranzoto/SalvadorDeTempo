// Copyright Joao Ricardo.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StaminaComponent.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CODIGOBASEPLUGIN_API UStaminaComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UStaminaComponent();
	
	UFUNCTION(BlueprintPure)
	FORCEINLINE float GetStamina() const {return this->Stamina;}
	



	UFUNCTION(BlueprintCallable)
	FORCEINLINE void SetHealth(float InStamina) {Stamina = InStamina;}
	
	UFUNCTION(BlueprintCallable)
	FORCEINLINE float GetMaxHealth() const {return this->MaxStamina;}
	
protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Stamina")
	float Stamina;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Stamina")
	float MaxStamina;
};