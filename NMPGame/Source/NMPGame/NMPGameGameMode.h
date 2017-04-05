// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/GameModeBase.h"
#include "NMPGameGameMode.generated.h"

UCLASS(minimalapi)
class ANMPGameGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ANMPGameGameMode();

	// Start the power drain timer
	virtual void BeginPlay() override;

	// Get the current rate of decay
	UFUNCTION(BlueprintPure, Category = "Power")
	float GetDecayRate();

	// Access the power level required to win the game
	UFUNCTION(BlueprintPure, Category = "Power")
	float GetPowerToWinMultiplier();

protected:
	// How many times per second to update characters power and check game rules
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Power")
	float PowerDrainDelay;

	// Access the timer for recurring power draining
	FTimerHandle PowerDrainTimer;

	// The rate at which characters loose power 
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Power", Meta = (BleprintProtected = "true"))
	float DecayRate;

	// Power level needed to win the game
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Power", Meta = (BleprintProtected = "true"))
	float PowerToWinMultiplier;

	// Track the number of players who have run out of energy and been eliminated from the game
	int32 DeadPlayerCount;

private:

	// Darin power from characters and update gameplay
	void DrainPowerOverTime();
};



