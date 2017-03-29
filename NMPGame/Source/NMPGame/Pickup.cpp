// Fill out your copyright notice in the Description page of Project Settings.

#include "NMPGame.h"
#include "Pickup.h"
#include "Net/UnrealNetwork.h"
#include <EngineGlobals.h>
#include <Runtime/Engine/Classes/Engine/Engine.h>

APickup::APickup()
{
	// Tells Unreal Engine to replicate this Actor
	bReplicates = true;

	// Pickups do not need to tick every cycle
	PrimaryActorTick.bCanEverTick = false;

	if (Role == ROLE_Authority)
	{
		bIsActive = true;
	}
	else
	{
		bIsActive = false;
	}
}

void APickup::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(APickup, bIsActive);
}

bool APickup::IsActive()
{
	return bIsActive;
}

void APickup::SetActive(bool NewPickupState)
{
	if (Role == ROLE_Authority)
	{
		bIsActive = NewPickupState;
	}
}

void APickup::WasCollected_Implementation()
{
	// Log a debug message
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Pickup was collected"));
}

void APickup::OnRep_IsActive()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("bIsActive property is replicated"));
}
