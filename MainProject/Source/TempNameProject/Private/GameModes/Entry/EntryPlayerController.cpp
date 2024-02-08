// Fill out your copyright notice in the Description page of Project Settings.


#include "GameModes/Entry/EntryPlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "Components/AudioComponent.h"
#include "GameModes/Lobby/LobbyPlayerState.h"
#include "GameModes/MainGameInstance.h"
#include "GameModes/Entry/EntryPlayerState.h"
#include "MainSoundWidget.h"
#include "ChatPlugin.h"


AEntryPlayerController::AEntryPlayerController()
{
	BackgroundMusicComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("BackgroundMusicComponent"));
	BackgroundMusicComponent->SetupAttachment(RootComponent);

	SFXComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("SFXComponent"));
	SFXComponent->SetupAttachment(RootComponent);

	BackgroundMusicComponent->SetVolumeMultiplier(0);
	SFXComponent->SetVolumeMultiplier(0);
}


void AEntryPlayerController::BeginPlay()
{
	Super::BeginPlay();

	check(EntryWidgetClass);
	if (!IsLocalPlayerController())
	{
		UE_LOG(LogTemp, Warning, TEXT("IsLocalPlayerController False"));
		return;
	}

	APlayerController* Player0 = GetWorld()->GetFirstPlayerController();
	if (!IsValid(Player0))
	{
		return;
	}

	EntryWidget = CreateWidget<UUserWidget>(GetWorld(), EntryWidgetClass);
	EntryWidget->AddToViewport();

	Player0->SetInputMode(FInputModeUIOnly());
	Player0->bShowMouseCursor = true;

	InitializeAudio();
	InitializeWidget();
}


void AEntryPlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Yellow, FString::Printf(TEXT("AEntryPlayerController::OnPossess")));
	ResponseClientPossess();
}


void AEntryPlayerController::ResponseClientPossess_Implementation()
{
	UMainGameInstance* GameIns = Cast<UMainGameInstance>(GetGameInstance());
	if (!IsValid(GameIns))
		return;

	AEntryPlayerState* EntryPS = Cast<AEntryPlayerState>(PlayerState);
	if (!IsValid(EntryPS))
	{
		GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::White, FString::Printf(TEXT("AEntryPlayerController::RequestChangeUserName Failed !!!")));
		return;
	}

	FString strName = Cast<UMainGameInstance>(GetGameInstance())->GetNickname();
	RequestChangeUserName(strName);
}


void AEntryPlayerController::RequestChangeUserName_Implementation(const FString& NewName)
{
	AEntryPlayerState* EntryPS = Cast<AEntryPlayerState>(PlayerState);
	if (!IsValid(EntryPS))
	{
		GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::White, FString::Printf(TEXT("AEntryPlayerController::RequestChangeUserName Failed !!!")));
		return;
	}

	EntryPS->SetUserName(NewName);
	GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Yellow, FString::Printf(TEXT("AEntryPlayerController::RequestChangeUserName = %s"), *NewName));
}


void AEntryPlayerController::RequestUpdateUserList_Implementation()
{
	GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, FString::Printf(TEXT("[ Request ] UpdateUserList_Implementation")));
	ResponseUpdateUserList_Implementation();
}


void AEntryPlayerController::ResponseUpdateUserList_Implementation()
{
	GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, FString::Printf(TEXT("[ Response ] UpdateUserList_Implementation")));

	AEntryPlayerState* EntryPlayerState = Cast<AEntryPlayerState>(PlayerState);
	EntryPlayerState->OnRep_EntryUserName();
}


void AEntryPlayerController::BindPlayerState(AEntryPlayerState* EntryPlayerState)
{
	if (IsValid(EntryPlayerState))
	{
		EntryPlayerState->OnSetUserName.AddDynamic(this, &AEntryPlayerController::OnUpdateUserName);
	}
	UpdateUserName();
}


void AEntryPlayerController::UpdateUserName()
{
	if (EntryWidget)
	{
		OnUpdateUserName("");
		return;
	}

	FTimerManager& timerManger = GetWorld()->GetTimerManager();
	timerManger.SetTimer(th_BindPlayerState, this, &AEntryPlayerController::UpdateUserName, 0.01f, false);
}


void AEntryPlayerController::OnUpdateUserName_Implementation(const FString& UserName)
{
}



//======================================================
//=================== 荤款靛 贸府 包访 ===================
//======================================================
void AEntryPlayerController::ApplyMasterVolume(float Volume)
{
	ALobbyPlayerState* PS = Cast<ALobbyPlayerState>(PlayerState);
	if (!IsValid(PS))
		return;

	ApplyMusicVolume(Volume);
	ApplySFXVolume(Volume);
}


void AEntryPlayerController::ApplyMusicVolume(float Volume)
{
	ALobbyPlayerState* PS = Cast<ALobbyPlayerState>(PlayerState);
	if (!IsValid(PS))
		return;

	BackgroundMusicComponent->SetVolumeMultiplier(Volume);
}


void AEntryPlayerController::ApplySFXVolume(float Volume)
{
	ALobbyPlayerState* PS = Cast<ALobbyPlayerState>(PlayerState);
	if (!IsValid(PS))
		return;

	SFXComponent->SetVolumeMultiplier(Volume);
	SFXComponent->Play();
}


void AEntryPlayerController::InitializeAudio()
{
	ALobbyPlayerState* PS = Cast<ALobbyPlayerState>(PlayerState);
	if (!IsValid(PS))
		return;

	UGameplayStatics::SetSoundMixClassOverride(this, SoundMix, SoundMusicClass, PS->GetMusicVolume(), 1.0f, 1.0f, true);
	UGameplayStatics::PushSoundMixModifier(this, SoundMix);

	UGameplayStatics::SetSoundMixClassOverride(this, SoundMix, SoundSFXClass, PS->GetSFXVolume(), 1.0f, 1.0f, true);
	UGameplayStatics::PushSoundMixModifier(this, SoundMix);

	BackgroundMusicComponent->SetVolumeMultiplier(1);
	BackgroundMusicComponent->Play();
}


void AEntryPlayerController::InitializeWidget()
{
	ALobbyPlayerState* PS = Cast<ALobbyPlayerState>(this->PlayerState);
	if (IsValid(PS))
	{
		float MasterVolume = PS->GetMasterVolume();
		float MusicVolume = PS->GetMusicVolume();
		float SFXVolume = PS->GetSFXVolume();

		UMainSoundWidget* US = CreateWidget<UMainSoundWidget>(GetWorld(), SoundWidgetClass);
		if (!US)
		{
			GEngine->AddOnScreenDebugMessage(-1, 30.0f, FColor::White, TEXT("US Failed !"));
			return;
		}
		US->OnChangedMasterVolume.AddDynamic(this, &AEntryPlayerController::OnSetMasterVolume);
		US->OnChangedMusicVolume.AddDynamic(this, &AEntryPlayerController::OnSetMusicVolume);
		US->OnChangedSFXVolume.AddDynamic(this, &AEntryPlayerController::OnSetSFXVolume);

		US->SetVolume(MasterVolume, MusicVolume, SFXVolume);
		SoundWidget = US;
		US->AddToViewport();

		return;
	}
}


void AEntryPlayerController::OnSetMasterVolume_Implementation(float Volume)
{
	ALobbyPlayerState* PS = Cast<ALobbyPlayerState>(PlayerState);
	if (!IsValid(PS))
		return;

	PS->SetMasterVolume(Volume);
	ApplyMasterVolume(Volume);
}


void AEntryPlayerController::OnSetMusicVolume_Implementation(float Volume)
{
	ALobbyPlayerState* PS = Cast<ALobbyPlayerState>(PlayerState);
	if (!IsValid(PS))
		return;

	PS->SetMusicVolume(Volume);
	ApplyMusicVolume(Volume);
}


void AEntryPlayerController::OnSetSFXVolume_Implementation(float Volume)
{
	ALobbyPlayerState* PS = Cast<ALobbyPlayerState>(PlayerState);
	if (!IsValid(PS))
		return;

	PS->SetSFXVolume(Volume);
	ApplySFXVolume(Volume);
}