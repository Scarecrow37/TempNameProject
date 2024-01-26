// Fill out your copyright notice in the Description page of Project Settings.


#include "IntroScreenPlayerController.h"
#include "Blueprint/UserWidget.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "IntroScreenWidget.h"



void AIntroScreenPlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		Subsystem->AddMappingContext(IntroIMC, 0);
	}

	bShowMouseCursor = false;

	IntroWidget = CreateWidget<UUserWidget>(GetWorld(), IntroWidgetClass);
	IntroWidget->AddToViewport();
}

void AIntroScreenPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	if (UEnhancedInputComponent* UEIC = Cast<UEnhancedInputComponent>(InputComponent))
	{
		UEIC->BindAction(IA_Skip, ETriggerEvent::Started, this, &AIntroScreenPlayerController::IntroSkip);
	}
}

void AIntroScreenPlayerController::IntroSkip()
{
	IsIntroSkipped = true;
	if (IsIntroSkipped)
	{
		UIntroScreenWidget* UISW = Cast<UIntroScreenWidget>(IntroWidget);
		UISW->OnVideoEnd();
	}
}

