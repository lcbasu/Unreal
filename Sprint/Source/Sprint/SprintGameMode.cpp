// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "Sprint.h"
#include "SprintGameMode.h"
#include "SprintHUD.h"
#include "SprintCharacter.h"

ASprintGameMode::ASprintGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ASprintHUD::StaticClass();
}
