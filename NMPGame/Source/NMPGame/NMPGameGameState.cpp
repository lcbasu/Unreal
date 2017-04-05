// Fill out your copyright notice in the Description page of Project Settings.

#include "NMPGame.h"
#include "Net/UnrealNetwork.h"
#include "NMPGameGameState.h"


ANMPGameGameState::ANMPGameGameState()
{
	// Set default state when state is not currently known
	CurrentState = EBatteryPlayState::EUnkown;
}


void ANMPGameGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ANMPGameGameState, PowerToWin);
	DOREPLIFETIME(ANMPGameGameState, CurrentState);
}


EBatteryPlayState ANMPGameGameState::GetCurrentState() const
{
	return CurrentState;
}

void ANMPGameGameState::SetCurrentState(EBatteryPlayState NewState)
{
	if (Role == ROLE_Authority)
	{
		CurrentState = NewState;
	}
}

void ANMPGameGameState::OnRep_CurrentState()
{

}