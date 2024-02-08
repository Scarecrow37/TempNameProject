// Fill out your copyright notice in the Description page of Project Settings.


#include "MainPlayerController.h"
#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"
#include "Components/AudioComponent.h"
#include "Blueprint/UserWidget.h"
#include "MainPlayerState.h"
#include "MainSoundWidget.h"
#include "TempNameProject/MainGameInstance.h"
#include "LobbyPlayerState.h"


AMainPlayerController::AMainPlayerController()
{
	BackgroundMusicComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("BackgroundMusicComponent"));
	BackgroundMusicComponent->SetupAttachment(RootComponent);

	SFXComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("SFXComponent"));
	SFXComponent->SetupAttachment(RootComponent);

	BackgroundMusicComponent->SetVolumeMultiplier(0);
	SFXComponent->SetVolumeMultiplier(0);
}

void AMainPlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	ResponseClientPossess();
}

void AMainPlayerController::ResponseClientPossess_Implementation()
{
	UMainGameInstance* pGameInst = Cast<UMainGameInstance>(GetGameInstance());
	if (!IsValid(pGameInst))
		return;
}

void AMainPlayerController::BeginPlay()
{
	Super::BeginPlay();

	check(HomeWidgetClass);

	HomeWidget = CreateWidget<UUserWidget>(GetWorld(), HomeWidgetClass);
	HomeWidget->AddToViewport();

	APlayerController* Player0 = GetWorld()->GetFirstPlayerController();
	if (!IsValid(Player0))
	{
		return;
	}

	Player0->SetInputMode(FInputModeUIOnly());
	Player0->bShowMouseCursor = true;

	InitializeAudio();
	InitializeWidget();
}

void AMainPlayerController::ApplyMasterVolume(float Volume)
{
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

	BackgroundMusicComponent->SetVolumeMultiplier(Volume);
}

void AMainPlayerController::ApplySFXVolume(float Volume)
{
	AMainPlayerState* PS = Cast<AMainPlayerState>(PlayerState);
	if (!IsValid(PS))
		return;

	SFXComponent->SetVolumeMultiplier(Volume);
	SFXComponent->Play();
}

void AMainPlayerController::InitializeAudio()
{
	AMainPlayerState* PS = Cast<AMainPlayerState>(PlayerState);
	if (!IsValid(PS))
		return;

	UGameplayStatics::SetSoundMixClassOverride(this, SoundMix, SoundMusicClass, PS->GetMusicVolume(), 1.0f, 1.0f, true);
	UGameplayStatics::PushSoundMixModifier(this, SoundMix);

	UGameplayStatics::SetSoundMixClassOverride(this, SoundMix, SoundSFXClass, PS->GetSFXVolume(), 1.0f, 1.0f, true);
	UGameplayStatics::PushSoundMixModifier(this, SoundMix);

	BackgroundMusicComponent->SetVolumeMultiplier(1);
	BackgroundMusicComponent->Play();
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
		US->OnChangedMusicVolume.AddDynamic(this, &AMainPlayerController::OnSetMusicVolume);
		US->OnChangedSFXVolume.AddDynamic(this, &AMainPlayerController::OnSetSFXVolume);

		US->SetVolume(MasterVolume, MusicVolume, SFXVolume);
		SoundWidget = US;
		US->AddToViewport();

		return;
	}
}


void AMainPlayerController::OnSetMasterVolume_Implementation(float Volume)
{
	AMainPlayerState* PS = Cast<AMainPlayerState>(PlayerState);
	if (!IsValid(PS))
		return;

	PS->SetMasterVolume(Volume);
	ApplyMasterVolume(Volume);
}

void AMainPlayerController::OnSetMusicVolume_Implementation(float Volume)
{
	AMainPlayerState* PS = Cast<AMainPlayerState>(PlayerState);
	if (!IsValid(PS))
		return;

	PS->SetMusicVolume(Volume);
	ApplyMusicVolume(Volume);
}

void AMainPlayerController::OnSetSFXVolume_Implementation(float Volume)
{
	AMainPlayerState* PS = Cast<AMainPlayerState>(PlayerState);
	if (!IsValid(PS))
		return;

	PS->SetSFXVolume(Volume);
	ApplySFXVolume(Volume);
}
