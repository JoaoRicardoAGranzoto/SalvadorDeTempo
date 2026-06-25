// Copyright Joao Ricardo.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameFramework/PlayerController.h"
#include "BasePlayerController.generated.h"

UCLASS()
class CODIGOBASEPLUGIN_API ABasePlayerController : public APlayerController
{
	GENERATED_BODY()

protected:
	virtual void SetupInputComponent() override;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Input")
	
	
	
	
	TArray<TObjectPtr<class UInputMappingContext>> MappingContexts;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Input")
	TObjectPtr<class UInputAction> MoveAction;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Input")
	TObjectPtr<class UInputAction> LookAction;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Input")
	TObjectPtr<class UInputAction> JumpAction;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Input")
	TObjectPtr<class UInputAction> SprintAction;
	
	void Move(const struct FInputActionValue& Value);
	void Look(const struct FInputActionValue& Value);
	void Jump();
	void Sprint();
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Character|State")
	FGameplayTagContainer BaseTags;
};