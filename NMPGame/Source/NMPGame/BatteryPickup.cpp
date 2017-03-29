// Fill out your copyright notice in the Description page of Project Settings.

#include "NMPGame.h"
#include "BatteryPickup.h"


ABatteryPickup::ABatteryPickup()
{
	// Keep movement synced from server to clients
	bReplicateMovement = true;

	// This pickup is physics enabled and should move
	GetStaticMeshComponent()->SetMobility(EComponentMobility::Movable);
	GetStaticMeshComponent()->SetSimulatePhysics(true);
}

void ABatteryPickup::PickedUpBy(APawn * Pawn)
{
	Super::PickedUpBy(Pawn);

	if (Role == ROLE_Authority)
	{
		// To give clients time to play vfx, etc.... before destroying the battery
		SetLifeSpan(2.0f);
	}
}
