// Fill out your copyright notice in the Description page of Project Settings.


#include "GameModes/TempGameInstance.h"

void UTempGameInstance::SetSocket(const TSharedPtr<FSocket> Socket)
{
	ServerSocket = Socket;
}

TSharedPtr<FSocket> UTempGameInstance::GetSocket()
{
	return ServerSocket;
}
