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

	// require network scaffolding
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	// Server side handling of being picked up the child class
	UFUNCTION(BlueprintAuthorityOnly, Category = "Pickup")
	void PickedUpBy(APawn* Pawn) override;
	
	// Public method to access the battery power level
	float GetPower();

protected:
	// Set the amount of power the battery holds
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite, Category = "Power", Meta = (BlueprintProtected = "true"))
	float BatteryPower;
};
