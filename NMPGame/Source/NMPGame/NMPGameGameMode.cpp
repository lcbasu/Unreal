// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "NMPGame.h"
#include "NMPGameGameMode.h"
#include "NMPGameCharacter.h"

ANMPGameGameMode::ANMPGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// base values
	DecayRate = 0.02f;

	// base value for how frequesntly to drain power
	PowerDrainDelay = 0.25f;
}

void ANMPGameGameMode::BeginPlay()
{
	GetWorldTimerManager().SetTimer(PowerDrainTimer, this, &ANMPGameGameMode::DrainPowerOverTime, PowerDrainDelay, true);
}

float ANMPGameGameMode::GetDecayRate()
{
	return DecayRate;
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
