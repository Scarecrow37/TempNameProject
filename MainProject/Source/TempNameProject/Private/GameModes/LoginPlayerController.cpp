// Fill out your copyright notice in the Description page of Project Settings.


#include "GameModes/LoginPlayerController.h"
#include "UMG/LoginPanel.h"
#include "Sockets.h"
#include "SocketSubsystem.h"
#include "Interfaces/NicknameInterface.h"
#include "Interfaces/SocketInterface.h"
#include "Interfaces/IPv4/IPv4Address.h"
#include "Network/Packet.h"


ALoginPlayerController::ALoginPlayerController()
{
	SetShowMouseCursor(true);
}

void ALoginPlayerController::BeginPlay()
{
	Super::BeginPlay();
	InitializeSocketBox();
	InitializeNicknameBox();
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
	int32 Sent = 0;
	FHeader SendHeader;
	SendHeader.Size = sizeof(FRequestLoginData);
	SendHeader.Type = RequestLogin;
	SocketBox->GetSocket()->Send((uint8*)&SendHeader, sizeof(SendHeader), Sent);
	
	FRequestLoginData RequestData = {};
	StringToBytes(ID.ToString(), (uint8*)&RequestData.Id, sizeof(RequestData.Id));
	StringToBytes(Password.ToString(), (uint8*)&RequestData.Password, sizeof(RequestData.Password));
	SocketBox->GetSocket()->Send((uint8*)&RequestData, sizeof(RequestData), Sent);

	FHeader ReceiveHeader = {};
	int32 Read = 0;
	SocketBox->GetSocket()->Recv((uint8*)&ReceiveHeader, sizeof(ReceiveHeader), Read, ESocketReceiveFlags::WaitAll);

	if(ReceiveHeader.Type == ResponseLogin)
	{
		FResponseLoginData ResponseData = {};
		SocketBox->GetSocket()->Recv((uint8*)&ResponseData, sizeof(ResponseData), Read, ESocketReceiveFlags::WaitAll);
		if (ResponseData.IsSuccess)
		{
			FString Nickname(ResponseData.Nickname);
			NicknameBox->SetNickname(Nickname);
			// Next Level;
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Login Fail."));
		}
	}
}

void ALoginPlayerController::InitializeSocketBox()
{
	SocketBox.SetInterface(Cast<ISocketInterface>(GetGameInstance()));
	SocketBox.SetObject(GetGameInstance());
}

void ALoginPlayerController::InitializeNicknameBox()
{
	NicknameBox.SetInterface(Cast<INicknameInterface>(GetGameInstance()));
	NicknameBox.SetObject(GetGameInstance());
}
