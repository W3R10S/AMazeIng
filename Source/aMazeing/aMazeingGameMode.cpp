// Copyright Epic Games, Inc. All Rights Reserved.

#include "aMazeingGameMode.h"
#include "aMazeingCharacter.h"
#include "UObject/ConstructorHelpers.h"

AaMazeingGameMode::AaMazeingGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
