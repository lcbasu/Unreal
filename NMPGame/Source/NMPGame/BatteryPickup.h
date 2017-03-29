// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Pickup.h"
#include "BatteryPickup.generated.h"

/**
 * 
 */
UCLASS()
class NMPGAME_API ABatteryPickup : public APickup
{
	GENERATED_BODY()
	
public:
	// Set the default values for the instances of this class
	ABatteryPickup();
	
	// Override the base class version to handle being picked up
	void WasCollected_Implementation() override;
	
};
