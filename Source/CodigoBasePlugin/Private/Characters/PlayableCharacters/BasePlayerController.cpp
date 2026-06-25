// Copyright Joao Ricardo.

#include "Characters/PlayableCharacters/BasePlayerController.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Engine/LocalPlayer.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Tags/BaseTags.h"

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
		EnhancedInputComponent->BindAction(SprintAction, ETriggerEvent::Started, this, &ABasePlayerController::Sprint);
	}
}

void ABasePlayerController::Move(const struct FInputActionValue& Value)
{
	FVector2D VectorValue=Value.Get<FVector2D>();
	
	FRotator YawRotation=FRotator(0.f, GetControlRotation().Yaw, 0.f);
	
	FVector ForwardVector=FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	FVector RightVector=FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
	
	GetPawn()->AddMovementInput(ForwardVector, VectorValue.X);
	GetPawn()->AddMovementInput(RightVector, VectorValue.Y);
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

void ABasePlayerController::Sprint()
{
	
	
	
	if (!BaseTags.HasTag(Moving_IsSprinting))
	{
		BaseTags.AddTag(Moving_IsSprinting);
		GetCharacter()->GetCharacterMovement()->MaxWalkSpeed=600.f;
	}
	else
	{
		BaseTags.RemoveTag(Moving_IsSprinting);
		GetCharacter()->GetCharacterMovement()->MaxWalkSpeed=230.f;
	}
}