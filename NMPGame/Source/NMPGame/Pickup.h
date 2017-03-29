// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine/StaticMeshActor.h"
#include "Pickup.generated.h"

/**
 * 
 */
UCLASS()
class NMPGAME_API APickup : public AStaticMeshActor
{
	GENERATED_BODY()
	
public:
	// Set default values
	APickup();

	// require network scaffolding
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	// Returns whether or not Pickup is active
	UFUNCTION(BlueprintPure, Category = "Pickup")
	bool IsActive();
	
	// Allows other classes to safely change the pickup activation state
	UFUNCTION(BlueprintCallable, Category = "Pickup")
	void SetActive(bool NewPickupState);

	// Function to call when the pickup is collected
	UFUNCTION(BlueprintNativeEvent, Category = "Pickup")
	void WasCollected();
	virtual void WasCollected_Implementation();

protected:

	// Either the pickup is active or not
	// True when pickup can be used, false when pickup is deactivated
	// ReplicatedUsing = OnRep_FuntionName -> Called whenever the variable, bIsActive, is replicated
	UPROPERTY(ReplicatedUsing = OnRep_IsActive)
	bool bIsActive;

	// This is called whenever bIsActive is updated
	UFUNCTION()
	virtual void OnRep_IsActive();
	
};
