// Copyright Joao Ricardo.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "GameFramework/PlayerState.h"
#include "BasePlayablePlayerState.generated.h"

UCLASS()
class CODIGOBASEPLUGIN_API ABasePlayablePlayerState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()
	
public:
	ABasePlayablePlayerState();
	
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	
	


protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Abilities")
	TObjectPtr<class UAbilitySystemComponent> BaseAbilityComponent;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Abilities")
	TObjectPtr<class UBaseAttributeSet> BaseAttributes;
};