// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "NMPGame.h"
#include "NMPGameGameMode.h"
#include "NMPGameGameState.h"
#include "NMPGameCharacter.h"

ANMPGameGameMode::ANMPGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// Set the type of HUD used in the game
	static ConstructorHelpers::FClassFinder<AHUD> PlayerHUDClass(TEXT("/Game/Blueprints/NMPGameHUD_BP"));
	if (PlayerHUDClass.Class != NULL)
	{
		HUDClass = PlayerHUDClass.Class;
	}

	// Set the type of Game State used in the game
	GameStateClass = ANMPGameGameState::StaticClass();

	// base values
	DecayRate = 0.02f;

	// base value for how frequesntly to drain power
	PowerDrainDelay = 0.25f;

	// Set the base value for power to win multiplier
	PowerToWinMultiplier = 1.25f;
}

void ANMPGameGameMode::BeginPlay()
{
	GetWorldTimerManager().SetTimer(PowerDrainTimer, this, &ANMPGameGameMode::DrainPowerOverTime, PowerDrainDelay, true);

	// Access the world to get to the players
	UWorld* World = GetWorld();
	check(World);

	// game state
	ANMPGameGameState* MyGameState = Cast<ANMPGameGameState>(GameState);
	check(MyGameState);

	// Go through all the characters in the game
	for (FConstControllerIterator It = World->GetControllerIterator(); It; It++)
	{
		if (APlayerController* PlayerController = Cast<APlayerController>(*It))
		{
			if (ANMPGameCharacter* BatteryCharacter = Cast<ANMPGameCharacter>(PlayerController->GetPawn()))
			{
				MyGameState->PowerToWin = BatteryCharacter->GetInitialPower() * PowerToWinMultiplier;
				break; // Set the power to win for only the character which is active for that machine
			}
		}
	}

}

float ANMPGameGameMode::GetDecayRate()
{
	return DecayRate;
}

float ANMPGameGameMode::GetPowerToWinMultiplier()
{
	return PowerToWinMultiplier;
}

void ANMPGameGameMode::DrainPowerOverTime()
{
	// Access the world to get to the players
	UWorld* World = GetWorld();
	check(World);

	// Go through all the characters in the game
	// and darin power for each
	for (FConstControllerIterator It = World->GetControllerIterator(); It; It++)
	{
		if (APlayerController* PlayerController = Cast<APlayerController>(*It))
		{
			if (ANMPGameCharacter* BatteryCharacter = Cast<ANMPGameCharacter>(PlayerController->GetPawn()))
			{
				if (BatteryCharacter->GetCurrentPower() > 0)
				{
					BatteryCharacter->UpdatePower(-PowerDrainDelay * DecayRate * (BatteryCharacter->GetInitialPower()));
				}
			}
		}
	}
}
