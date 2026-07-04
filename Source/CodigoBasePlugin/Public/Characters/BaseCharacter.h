// Copyright Joao Ricardo.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "GameFramework/Character.h"
#include "BaseCharacter.generated.h"

UCLASS(Abstract)
class CODIGOBASEPLUGIN_API ABaseCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	ABaseCharacter();
	
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;




	FORCEINLINE	virtual TObjectPtr<class AAssetBase> GetAsset() {return Asset;}
	FORCEINLINE	virtual void SetAsset(TObjectPtr<class AAssetBase> InAsset) {this->Asset=InAsset;}

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Weapon")
	TObjectPtr<class AAssetBase> Asset;
};