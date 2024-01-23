// Fill out your copyright notice in the Description page of Project Settings.


#include "MainPlayerController.h"
#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"
#include "Components/AudioComponent.h"
#include "Blueprint/UserWidget.h"
#include "MainPlayerState.h"
#include "MainSoundWidget.h"

AMainPlayerController::AMainPlayerController()
{
	BackgroundMusic = CreateDefaultSubobject<UAudioComponent>(TEXT("BackgroundMusic"));
	BackgroundMusic->SetupAttachment(RootComponent);

	SampleSFX = CreateDefaultSubobject<UAudioComponent>(TEXT("SampleSFX"));
	SampleSFX->SetupAttachment(RootComponent);
}


void AMainPlayerController::BeginPlay()
{
	Super::BeginPlay();

	//check(HudWidgetClass);

	//HudWidget = CreateWidget<UUserWidget>(GetWorld(), HudWidgetClass);	
	//HudWidget->AddToViewport();

	APlayerController* Player0 = GetWorld()->GetFirstPlayerController();
	if (!IsValid(Player0))
	{
		GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, TEXT("Player0 Failed !"));
		return;
	}

	Player0->SetInputMode(FInputModeUIOnly());
	Player0->bShowMouseCursor = true;

	InitializeWidget();
	InitializeAudio();
}


void AMainPlayerController::ApplyMasterVolume(float Volume)
{
	GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Green, TEXT("[ AMainPlayerController ] ApplyMasterVolume"));
	AMainPlayerState* PS = Cast<AMainPlayerState>(PlayerState);
	if (!IsValid(PS))
		return;

	ApplyMusicVolume(Volume);
	ApplySFXVolume(Volume);
}

void AMainPlayerController::ApplyMusicVolume(float Volume)
{
	AMainPlayerState* PS = Cast<AMainPlayerState>(PlayerState);
	if (!IsValid(PS))
		return;

	UGameplayStatics::SetSoundMixClassOverride(this, SoundMix, SoundMusicClass, PS->GetMusicVolume(), 1.0f, 1.0f, true);
	UGameplayStatics::PushSoundMixModifier(this, SoundMix);

	GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Yellow,
		FString::Printf(TEXT("ApplyMusicVolume = %f"), PS->GetMusicVolume()));
}

void AMainPlayerController::ApplySFXVolume(float Volume)
{
	AMainPlayerState* PS = Cast<AMainPlayerState>(PlayerState);
	if (!IsValid(PS))
		return;

	UGameplayStatics::SetSoundMixClassOverride(this, SoundMix, SoundSFXClass, PS->GetSFXVolume(), 1.0f, 1.0f, true);
	UGameplayStatics::PushSoundMixModifier(this, SoundMix);

	GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Yellow,
		FString::Printf(TEXT("ApplySFXVolume = %f"), PS->GetSFXVolume()));
}


void AMainPlayerController::InitializeAudio()
{
	ApplyMasterVolume(1.0f);
	BackgroundMusic->Play();
	GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Yellow, TEXT("InitializeAudio Done"));
}

void AMainPlayerController::InitializeWidget()
{
	AMainPlayerState* PS = Cast<AMainPlayerState>(this->PlayerState);
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
		US->OnChangedMasterVolume.AddDynamic(this, &AMainPlayerController::OnSetMasterVolume);
		US->OnMusicMasterVolume.AddDynamic(this, &AMainPlayerController::OnSetMusicVolume);
		US->OnSFXMasterVolume.AddDynamic(this, &AMainPlayerController::OnSetSFXVolume);

		US->SetVolume(MasterVolume, MusicVolume, SFXVolume);
		SoundWidget = US;
		US->AddToViewport();

		GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Yellow, TEXT("InitializeWidget Done"));
		return;
	}

	//FTimerManager& timeManager = GetWorld()->GetTimerManager();
	//timeManager.SetTimer(th_InitWidget, this, &AMainPlayerController::InitializeWidget, 0.5f, false);
}


void AMainPlayerController::OnSetMasterVolume_Implementation(float Volume)
{
	GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Yellow, TEXT("[ AMainPlayerController ] OnSetMasterVolume"));
	AMainPlayerState* PS = Cast<AMainPlayerState>(PlayerState);
	if (!IsValid(PS))
		return;

	PS->SetMasterVolume(Volume);
	ApplyMasterVolume(Volume);
}

void AMainPlayerController::OnSetMusicVolume_Implementation(float Volume)
{
	GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Yellow, TEXT("[ AMainPlayerController ] OnSetMusicVolume"));
	AMainPlayerState* PS = Cast<AMainPlayerState>(PlayerState);
	if (!IsValid(PS))
		return;

	PS->SetMusicVolume(Volume);
	ApplyMusicVolume(Volume);
}

void AMainPlayerController::OnSetSFXVolume_Implementation(float Volume)
{
	GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Yellow, TEXT("[ AMainPlayerController ] OnSetSFXVolume"));
	AMainPlayerState* PS = Cast<AMainPlayerState>(PlayerState);
	if (!IsValid(PS))
		return;

	PS->SetSFXVolume(Volume);
	ApplySFXVolume(Volume);
	SampleSFX->Play();
}

void AMainPlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::White, TEXT("(Server) OnPossess"));

	ResClientPossess();
}

void AMainPlayerController::ResClientPossess_Implementation()
{
	GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::White, TEXT("(Client) OnPossess"));
}
