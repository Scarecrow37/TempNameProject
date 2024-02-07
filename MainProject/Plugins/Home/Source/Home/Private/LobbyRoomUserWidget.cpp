// Fill out your copyright notice in the Description page of Project Settings.


#include "LobbyRoomUserWidget.h"

void ULobbyRoomUserWidget::NativeConstruct()
{
	Super::NativeConstruct();


}

UUserWidget* ULobbyRoomUserWidget::GetChatWdiget()
{
	return ChatWidget;
}
