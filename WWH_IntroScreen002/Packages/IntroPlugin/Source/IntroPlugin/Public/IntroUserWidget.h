// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Delegates/DelegateCombinations.h"
#include "Blueprint/UserWidget.h"
#include "MediaPlayer.h"
#include "IntroUserWidget.generated.h"

class UMediaPlayer;
class UMediaSource;
/**
 *
 */
UCLASS()
class UIntroUserWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "[Custom]VideoOptions")
	void OnVideoEnd();

	void OnVideoEnd_Implementation();

protected:

private:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "[Custom]VideoOptions", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UMediaPlayer> IntroMediaPlayer;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "[Custom]VideoOptions", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UMediaSource> IntroMediaSource;
};
