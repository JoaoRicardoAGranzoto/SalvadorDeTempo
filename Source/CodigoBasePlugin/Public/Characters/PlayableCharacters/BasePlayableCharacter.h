// Copyright Joao Ricardo.

#pragma once

#include "CoreMinimal.h"
#include "Characters/BaseCharacter.h"
#include "BasePlayableCharacter.generated.h"

UCLASS()
class CODIGOBASEPLUGIN_API ABasePlayableCharacter : public ABaseCharacter
{
	GENERATED_BODY()

public:
	ABasePlayableCharacter();
	
protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Camera")
	
	
	
	
	TObjectPtr<class USpringArmComponent> CameraBoom;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Camera")
	TObjectPtr<class UCameraComponent> FollowCamera;
};