// Fill out your copyright notice in the Description page of Project Settings.


#include "GameModes/MainPlayerState.h"
#include "Net/UnrealNetwork.h"

void AMainPlayerState::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	// 'UserName' �Ӽ��� ��Ʈ��ũ �󿡼� �����Ǿ�� ���� �����մϴ�.
	DOREPLIFETIME(AMainPlayerState, UserName);
}

AMainPlayerState::AMainPlayerState() : MasterVolume(1.0f), MusicVolume(1.0f), SFXVolume(1.0f)
{

}

void AMainPlayerState::BeginPlay()
{
	Super::BeginPlay();
}

void AMainPlayerState::SetUserName(const FString& NewUserName)
{
	UserName = NewUserName;
	OnRep_UserName();
}

void AMainPlayerState::OnRep_UserName()
{
	if (OnUserName.IsBound())
	{
		OnUserName.Broadcast(UserName);
	}
}

float AMainPlayerState::ValidateVolume(float Volume)
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

float AMainPlayerState::GetMasterVolume()
{
	return MasterVolume;
}

void AMainPlayerState::SetMasterVolume(float Volume)
{
	MasterVolume = ValidateVolume(Volume);
}

float AMainPlayerState::GetMusicVolume()
{
	return MasterVolume * MusicVolume;
}

void AMainPlayerState::SetMusicVolume(float Volume)
{
	MusicVolume = ValidateVolume(Volume);
}

float AMainPlayerState::GetSFXVolume()
{
	return MasterVolume * SFXVolume;
}

void AMainPlayerState::SetSFXVolume(float Volume)
{
	SFXVolume = ValidateVolume(Volume);
}
