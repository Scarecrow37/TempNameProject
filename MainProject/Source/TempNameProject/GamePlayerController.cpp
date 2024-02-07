// Fill out your copyright notice in the Description page of Project Settings.


#include "GamePlayerController.h"
#include "MainGameInstance.h"
#include "Kismet/GameplayStatics.h"
#include "MainPlayerState.h"


void AGamePlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Blue, TEXT("(Server)OnPossess"));

	ResClientPossess();
}

void AGamePlayerController::ResClientPossess_Implementation()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Blue, TEXT("(Client)ResClientPossess"));

	UMainGameInstance* MainGInst = Cast<UMainGameInstance>(GetGameInstance());
	if (IsValid(MainGInst))
		return;
}

void AGamePlayerController::ReqChangeUserName_Implementation(const FString& NewName)
{
	AMainPlayerState* MainPS = Cast<AMainPlayerState>(PlayerState);
	if (!IsValid(MainPS))
		return;

	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Blue, TEXT("(Server)ReqChangeUserName"));

	MainPS->SetUserName(NewName);
}
