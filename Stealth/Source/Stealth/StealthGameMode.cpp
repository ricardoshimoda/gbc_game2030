// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "StealthGameMode.h"
#include "StealthPlayerController.h"
#include "StealthCharacter.h"
#include "UObject/ConstructorHelpers.h"

AStealthGameMode::AStealthGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AStealthPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}