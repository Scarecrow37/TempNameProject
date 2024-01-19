// Fill out your copyright notice in the Description page of Project Settings.


#include "MainSoundWidget.h"
#include "HomePlayerState.h"
#include "HomePlayerController.h"


void UMainSoundWidget::SetVolume(float MasVolume, float MusVolume, float SVolume)
{
	m_MasterVolume = MasVolume;
	m_MusicVolume = MusVolume;
	m_SFXVolume = SVolume;
}

void UMainSoundWidget::SW_SetMasterVolume_Implementation(float Volume)
{
	GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::White, TEXT("[ USoundWidget ] SW_SetMasterVolume"));
	Volume = ValidateVolume(Volume);
	m_MasterVolume = Volume;

	SW_SetMusicVolume(m_MasterVolume);
	SW_SetSFXVolume(m_MasterVolume);
}

void UMainSoundWidget::SW_SetMusicVolume_Implementation(float Volume)
{
	GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::White, TEXT("[ USoundWidget ] SW_SetMusicVolume"));
	Volume = ValidateVolume(Volume);
	m_MusicVolume = Volume;

	if (m_Dele_MusicVolume.IsBound())
	{
		m_Dele_MusicVolume.Broadcast(m_MusicVolume);
	}
}

void UMainSoundWidget::SW_SetSFXVolume_Implementation(float Volume)
{
	GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::White, TEXT("[ USoundWidget ] SW_SetSFXVolume"));
	Volume = ValidateVolume(Volume);
	m_SFXVolume = Volume;

	if (m_Dele_SFXVolume.IsBound())
	{
		m_Dele_SFXVolume.Broadcast(m_SFXVolume);
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