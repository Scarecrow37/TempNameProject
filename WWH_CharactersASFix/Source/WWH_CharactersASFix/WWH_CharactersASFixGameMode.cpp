// Copyright Epic Games, Inc. All Rights Reserved.

#include "WWH_CharactersASFixGameMode.h"
#include "WWH_CharactersASFixCharacter.h"
#include "UObject/ConstructorHelpers.h"

AWWH_CharactersASFixGameMode::AWWH_CharactersASFixGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
