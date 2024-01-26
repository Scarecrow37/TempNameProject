// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "IntroScreenPlayerController.generated.h"

class UUserWidget;
class UInputMappingContext;
class UInputAction;

/**
 * 
 */
UCLASS()
class AIntroScreenPlayerController : public APlayerController
{
	GENERATED_BODY()
public:

protected:
	virtual void BeginPlay() override;


private: //Widget
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "[Custom]UIs", meta = (AllowPrivateAccess = "true"))
	UUserWidget* IntroWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "[Custom]UIs", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<UUserWidget> IntroWidgetClass;

private: // Skip Keys, bool Variable
	virtual void SetupInputComponent();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "[Custom]Inputs", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputMappingContext> IntroIMC;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "[Custom]Inputs", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputAction> IA_Skip;

	virtual void IntroSkip();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "[Custom]Variables", meta = (AllowPrivateAccess = "true"))
	bool IsIntroSkipped;
};
