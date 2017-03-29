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

