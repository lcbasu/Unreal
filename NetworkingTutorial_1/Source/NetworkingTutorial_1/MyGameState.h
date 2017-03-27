// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/GameState.h"
#include "MyGameState.generated.h"

/**
 * 
 */
UCLASS()
class NETWORKINGTUTORIAL_1_API AMyGameState : public AGameState
{
	GENERATED_BODY()
	
public:

	UPROPERTY(Replicated)
	int32 Score;
	
	
	
};
