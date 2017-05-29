// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "AssimpUnreal.h"
#include "AssimpUnrealGameMode.h"
#include "AssimpUnrealHUD.h"
#include "AssimpUnrealCharacter.h"

AAssimpUnrealGameMode::AAssimpUnrealGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AAssimpUnrealHUD::StaticClass();
}
