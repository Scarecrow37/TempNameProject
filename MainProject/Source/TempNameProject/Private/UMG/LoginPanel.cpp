// Fill out your copyright notice in the Description page of Project Settings.


#include "UMG/LoginPanel.h"
#include "UMG/LabeledInput.h"
#include "Components/Button.h"
#include "Components/CircularThrobber.h"
#include "UMG/MessageModal.h"

void ULoginPanel::StartLoading() const
{
	LoadingWidget.Get()->SetVisibility(ESlateVisibility::Visible);
}

void ULoginPanel::StopLoading() const
{
	LoadingWidget.Get()->SetVisibility(ESlateVisibility::Collapsed);
}

void ULoginPanel::ShowLoginFailMessage() const
{
	MessageWidget.Get()->SetVisibility(ESlateVisibility::Visible);
}

void ULoginPanel::HideLoginFailMessage() const
{
	MessageWidget.Get()->SetVisibility(ESlateVisibility::Collapsed);
}

void ULoginPanel::NativePreConstruct()
{
	Super::NativePreConstruct();
	if (IsValid(LoadingWidget))
	{
		LoadingWidget.Get()->SetVisibility(ESlateVisibility::Collapsed);
	}
	if (IsValid(MessageWidget))
	{
		MessageWidget.Get()->SetVisibility(ESlateVisibility::Collapsed);
		MessageWidget->OnCloseModalRequest.AddDynamic(this, &ULoginPanel::BindCloseMessage);
	}
	if (IsValid(LoginButton) && !BoundLogin)
	{
		LoginButton->OnClicked.AddDynamic(this, &ULoginPanel::BindLoginClicked);
		BoundLogin = true;
	}
}

void ULoginPanel::BindLoginClicked()
{
	const FText ID = IdWidget->GetValue();
	const FText Password = PasswordWidget->GetValue();

	OnLoginRequested.Broadcast(ID, Password);
}

void ULoginPanel::BindCloseMessage()
{
	MessageWidget.Get()->SetVisibility(ESlateVisibility::Collapsed);
}
