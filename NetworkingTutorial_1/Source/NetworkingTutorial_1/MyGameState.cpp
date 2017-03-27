// Fill out your copyright notice in the Description page of Project Settings.

#include "NetworkingTutorial_1.h"
#include "MyGameState.h"

#include "Engine.h"

#include "Net/UnrealNetwork.h"

void AMyGameState::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AMyGameState, Score);
}



