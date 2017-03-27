// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "NetworkingTutorial_1.h"
#include "NetworkingTutorial_1GameMode.h"
#include "NetworkingTutorial_1Character.h"
#include "MyGameState.h"
#include "Engine.h"

ANetworkingTutorial_1GameMode::ANetworkingTutorial_1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void ANetworkingTutorial_1GameMode::AddScore(int32 Amount)
{
	GetGameState<AMyGameState>()->Score += Amount;
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString::FromInt(GetGameState<AMyGameState>()->Score));
}
