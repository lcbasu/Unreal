// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/GameStateBase.h"
#include "NMPGameGameState.generated.h"

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
};
