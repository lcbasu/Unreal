// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "sadfsadsa.h"
#include "sadfsadsaGameMode.h"
#include "sadfsadsaHUD.h"
#include "sadfsadsaCharacter.h"

AsadfsadsaGameMode::AsadfsadsaGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AsadfsadsaHUD::StaticClass();
}
