// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealProjectGameMode.h"
#include "UnrealProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnrealProjectGameMode::AUnrealProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
