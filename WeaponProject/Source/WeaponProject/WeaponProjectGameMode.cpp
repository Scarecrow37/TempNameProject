// Copyright Epic Games, Inc. All Rights Reserved.

#include "WeaponProjectGameMode.h"
#include "WeaponProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AWeaponProjectGameMode::AWeaponProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
