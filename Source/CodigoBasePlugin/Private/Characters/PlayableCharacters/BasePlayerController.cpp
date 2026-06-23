// Copyright Joao Ricardo.

#include "Characters/PlayableCharacters/BasePlayerController.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Engine/LocalPlayer.h"
#include "GameFramework/Character.h"

void ABasePlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		for (auto Context : MappingContexts)
		{
			Subsystem->AddMappingContext(Context, 0);
		}
	
	
	
	
	}

	if (UEnhancedInputComponent* EnhancedInputComponent=Cast<UEnhancedInputComponent>(InputComponent))
	{
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ABasePlayerController::Move);
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ABasePlayerController::Look);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Triggered, this, &ABasePlayerController::Jump);
	}
}

void ABasePlayerController::Move(const struct FInputActionValue& Value)
{
	FVector2D VectorValue=Value.Get<FVector2D>();
	
	FRotator YawRotation=FRotator(0.f, GetControlRotation().Yaw, 0.f);
	
	FVector ForwardVector=FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	FVector RightVector=FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
	
	GetPawn()->AddMovementInput(ForwardVector, VectorValue.X);
	GetPawn()->AddMovementInput(RightVector, RightVector.X);
}

void ABasePlayerController::Look(const struct FInputActionValue& Value)
{
	FVector2D VectorValue=Value.Get<FVector2D>();
	
	AddYawInput(VectorValue.X);
	AddPitchInput(VectorValue.Y);
}

void ABasePlayerController::Jump()
{
	GetCharacter()->Jump();
}