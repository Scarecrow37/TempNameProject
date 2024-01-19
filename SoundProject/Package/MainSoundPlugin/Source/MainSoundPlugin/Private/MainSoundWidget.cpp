// Fill out your copyright notice in the Description page of Project Settings.


#include "MainSoundWidget.h"
//#include "HomePlayerState.h"
//#include "HomePlayerController.h"


void UMainSoundWidget::SetVolume(float InMasterVolume, float InMusiscVolume, float InSFXVolume)
{
	WidgetMasterVolume = InMasterVolume;
	WidgetMusicVolume = InMusiscVolume;
	WidgetSFXVolume = InSFXVolume;
}

void UMainSoundWidget::SW_SetMasterVolume_Implementation(float Volume)
{
	Volume = ValidateVolume(Volume);
	WidgetMasterVolume = Volume;

	SW_SetMusicVolume(WidgetMasterVolume);
	SW_SetSFXVolume(WidgetMasterVolume);
}

void UMainSoundWidget::SW_SetMusicVolume_Implementation(float Volume)
{
	Volume = ValidateVolume(Volume);
	WidgetMusicVolume = Volume;

	if (OnMusicMasterVolume.IsBound())
	{
		OnMusicMasterVolume.Broadcast(WidgetMusicVolume);
	}
}

void UMainSoundWidget::SW_SetSFXVolume_Implementation(float Volume)
{
	Volume = ValidateVolume(Volume);
	WidgetSFXVolume = Volume;

	if (OnSFXMasterVolume.IsBound())
	{
		OnSFXMasterVolume.Broadcast(WidgetSFXVolume);
	}
}

float UMainSoundWidget::ValidateVolume(float Volume)
{
	int Max = 1.0f;
	int Min = 0;
	if (Volume > Max)
	{
		Volume = Max;
	}
	else if (Volume < Min)
	{
		Volume = Min;
	}

	return Volume;
}