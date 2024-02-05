// Fill out your copyright notice in the Description page of Project Settings.


#include "GameModes/LoginPlayerController.h"
#include "UMG/LoginPanel.h"
#include "Sockets.h"
#include "SocketSubsystem.h"
#include "Interfaces/SocketInterface.h"
#include "Interfaces/IPv4/IPv4Address.h"


ALoginPlayerController::ALoginPlayerController()
{
	SetShowMouseCursor(true);
}

void ALoginPlayerController::BeginPlay()
{
	Super::BeginPlay();
	InitializeSocketBox();
	ConnectServer();
	ShowLoginWidget();
}

void ALoginPlayerController::ConnectServer()
{
	const TSharedPtr<FSocket> Socket = MakeShareable(
		ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateSocket(TEXT("Stream"), TEXT("Client Socket")));
	const FString AddressString = TEXT("127.0.0.1");
	FIPv4Address IP;
	FIPv4Address::Parse(AddressString, IP);
	constexpr int32 Port = 12345;
	const TSharedRef<FInternetAddr> Address = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateInternetAddr();
	Address->SetIp(IP.Value);
	Address->SetPort(Port);
	bIsConnected = Socket->Connect(*Address);
	if (bIsConnected)
	{
		SocketBox->SetSocket(Socket);
	}
}

void ALoginPlayerController::ShowLoginWidget()
{
	if (IsValid(LoginWidgetClass))
	{
		LoginWidget = TObjectPtr<ULoginPanel>(CreateWidget<ULoginPanel>(this, LoginWidgetClass, FName("LoginWidget")));
		if (IsValid(LoginWidget))
		{
			LoginWidget->OnLoginRequested.AddDynamic(this, &ALoginPlayerController::BindLoginRequest);
			FInputModeUIOnly InputMode;
			InputMode.SetWidgetToFocus(LoginWidget->TakeWidget());
			InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
			Super::SetInputMode(InputMode);
			LoginWidget->AddToViewport();
		}
	}
}

void ALoginPlayerController::BindLoginRequest(const FText& ID, const FText& Password)
{
	if(!bIsConnected)
	{
		UE_LOG(LogTemp, Warning, TEXT("Server is disconnected."))
		return;
	}
	FString Message = FString::Printf(TEXT("ID : %s / Password : %s"), *ID.ToString(), *Password.ToString());
	TArray<TCHAR> Data = Message.GetCharArray();
	int32 Sent;	
	SocketBox->GetSocket()->Send((uint8*)Data.GetData(), Message.Len(), Sent);
	GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, Message);
}

void ALoginPlayerController::InitializeSocketBox()
{
	SocketBox.SetInterface(Cast<ISocketInterface>(GetGameInstance()));
	SocketBox.SetObject(GetGameInstance());
}
