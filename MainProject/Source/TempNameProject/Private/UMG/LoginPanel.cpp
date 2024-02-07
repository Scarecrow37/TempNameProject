// Fill out your copyright notice in the Description page of Project Settings.


#include "UMG/LoginPanel.h"
#include "UMG/LabeledInput.h"
#include "Components/Button.h"
#include "Components/CircularThrobber.h"
#include "UMG/MessageModal.h"

void ULoginPanel::NativePreConstruct()
{
	Super::NativePreConstruct();

	if(IsValid(CreateAccountButton))
	{
		CreateAccountButton->OnClicked.AddDynamic(this, &ULoginPanel::ULoginPanel::BindCreateAccountClicked);
	}
}

void ULoginPanel::BindConfirmClicked()
{
	const FText ID = IdWidget->GetValue();
	const FText Password = PasswordWidget->GetValue();

	OnLoginRequested.Broadcast(ID, Password);
}

void ULoginPanel::BindCloseSuccessMessage()
{
	OnOpenNextLevelRequested.Broadcast();
}

void ULoginPanel::BindCloseFailMessage()
{
	FailMessageWidget.Get()->SetVisibility(ESlateVisibility::Collapsed);
}

void ULoginPanel::BindCreateAccountClicked()
{
	OnOpenCreateAccountPanelRequested.Broadcast();
}
