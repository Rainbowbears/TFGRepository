// Copyright Epic Games, Inc. All Rights Reserved.

#include "BabelshipGameMode.h"
#include "BabelshipCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABabelshipGameMode::ABabelshipGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Blueprints/Player/BP_FirstPersonCharacter"));
	if (PlayerPawnClassFinder.Class != NULL) { DefaultPawnClass = PlayerPawnClassFinder.Class; }
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerClassFinder(TEXT("/Game/Blueprints/Player/BP_BabelshipPlayerController"));
	if (PlayerControllerClassFinder.Class != NULL) { PlayerControllerClass = PlayerControllerClassFinder.Class; }
}
