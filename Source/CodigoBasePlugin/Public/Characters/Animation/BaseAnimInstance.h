// Copyright Joao Ricardo.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "BaseAnimInstance.generated.h"

UCLASS()
class CODIGOBASEPLUGIN_API UBaseAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;
	
protected:
	
	
	
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float Velocity;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	bool bCanJump;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TObjectPtr<class ABaseCharacter> BaseCharacter;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TObjectPtr<class UCharacterMovementComponent> Movement;
};