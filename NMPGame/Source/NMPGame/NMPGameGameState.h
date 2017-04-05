// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/GameStateBase.h"
#include "NMPGameGameState.generated.h"


// Putting this enum in game state because we need this on client and server both
UENUM(BlueprintType)
enum EBatteryPlayState
{
	Eplaying,
	EGameOver,
	EWon,
	EUnkown
};

/**
 * 
 */
UCLASS()
class NMPGAME_API ANMPGameGameState : public AGameStateBase
{
	GENERATED_BODY()
	
public:
	ANMPGameGameState();

	// require network scaffolding
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	// To track power level needed to win the game
	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Power")
	float PowerToWin;

	// Returns the current state of gameplay
	UFUNCTION(BlueprintPure, Category = "Power")
	EBatteryPlayState GetCurrentState() const;

	// Transition the game to a new play state. Only usable on server
	void SetCurrentState(EBatteryPlayState NewState);

	// Rep notify fired on client to allow for client-side changes based on changes in gameplay state 
	UFUNCTION()
	void OnRep_CurrentState();

private:
	// Track the current playing state
	UPROPERTY(ReplicatedUsing = OnRep_CurrentState)
	TEnumAsByte<enum EBatteryPlayState> CurrentState;
};
