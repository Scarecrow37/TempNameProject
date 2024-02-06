// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "LoginPlayerController.generated.h"

class INicknameInterface;
class ISocketInterface;
class ULoginPanel;
/**
 * 
 */
UCLASS()
class TEMPNAMEPROJECT_API ALoginPlayerController : public APlayerController
{
	GENERATED_BODY()
	ALoginPlayerController();
protected:
	UPROPERTY(EditDefaultsOnly, Category = "Level")
	TSoftObjectPtr<UWorld> NextLevel;
	
	UPROPERTY(EditDefaultsOnly, Category = "Widget")
	TSubclassOf<ULoginPanel> LoginWidgetClass;
	
	virtual void BeginPlay() override;

	virtual void ConnectServer();

	virtual void ShowLoginWidget();

private:
	bool bIsConnected;
	
	TObjectPtr<ULoginPanel> LoginWidget;
	
	TScriptInterface<ISocketInterface> SocketBox;
	TScriptInterface<INicknameInterface> NicknameBox;

	UFUNCTION()
	void BindLoginRequest(const FText& ID, const FText& Password);

	void InitializeSocketBox();

	void InitializeNicknameBox();
};
