// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Delegates/DelegateCombinations.h"
#include "Blueprint/UserWidget.h"
#include "MediaPlayer.h"
#include "IntroScreenWidget.generated.h"

class UMediaPlayer;
class UMediaSource;
/**
 * 
 */
UCLASS()
class UIntroScreenWidget : public UUserWidget
{
	GENERATED_BODY()
private:

protected:

public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "[Custom]VideoOptions")
	void OnVideoEnd();

	void OnVideoEnd_Implementation();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "[Custom]VideoOptions")
	TObjectPtr<UMediaPlayer> IntroMediaPlayer;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "[Custom]VideoOptions")
	TObjectPtr<UMediaSource> IntroMediaSource;
};
