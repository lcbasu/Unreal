// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "ItemSystem.h"
#include "ItemSystemGameMode.h"
#include "ItemSystemHUD.h"
#include "ItemSystemCharacter.h"

AItemSystemGameMode::AItemSystemGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AItemSystemHUD::StaticClass();
}
