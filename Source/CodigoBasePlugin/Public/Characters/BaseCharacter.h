// Copyright Joao Ricardo.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BaseCharacter.generated.h"

UCLASS(Abstract)
class CODIGOBASEPLUGIN_API ABaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ABaseCharacter();

	FORCEINLINE	virtual TObjectPtr<class AAssetBase> GetAsset() {return Asset;}
	FORCEINLINE	virtual void SetAsset(TObjectPtr<AAssetBase> InAsset) {this->Asset=InAsset;}




protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Weapon")
	TObjectPtr<AAssetBase> Asset;
};