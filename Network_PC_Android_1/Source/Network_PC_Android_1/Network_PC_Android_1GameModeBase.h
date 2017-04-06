// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/GameModeBase.h"
#include "Network_PC_Android_1GameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class NETWORK_PC_ANDROID_1_API ANetwork_PC_Android_1GameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	// Constructor
	ANetwork_PC_Android_1GameModeBase();

	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
