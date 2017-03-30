// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/Character.h"
#include "NMPGameCharacter.generated.h"

UCLASS(config=Game)
class ANMPGameCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;

	/** Collection Sphere */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Battery, meta = (AllowPrivateAccess = "true"))
	class USphereComponent* CollectionSphere;
public:
	ANMPGameCharacter();

	// require network scaffolding
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseLookUpRate;

	// Access the character initial power
	UFUNCTION(BlueprintPure, Category = "Power")
	float GetInitialPower();

	// Access the character current power
	UFUNCTION(BlueprintPure, Category = "Power")
	float GetCurrentPower();

	/**
	* this updates the character power level
	* @param DeltaPower This is the amount to change power by, can be + or -
	*/ 
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly,Category = "Power")
	void UpdatePower(float DeltaPower);

protected:

	/** Resets HMD orientation in VR. */
	void OnResetVR();

	/** Called for forwards/backward input */
	void MoveForward(float Value);

	/** Called for side to side input */
	void MoveRight(float Value);

	/** 
	 * Called via input to turn at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

	/** Handler for when a touch input begins. */
	void TouchStarted(ETouchIndex::Type FingerIndex, FVector Location);

	/** Handler for when a touch input stops. */
	void TouchStopped(ETouchIndex::Type FingerIndex, FVector Location);

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// End of APawn interface

	// Entry point for collecting pickups
	// Called when player presses a key to collect pickups
	UFUNCTION(BlueprintCallable, Category = "Pickups")
	void CollectPickups();

	// Called on server to actually process the collection of pickups
	UFUNCTION(Reliable, Server, WithValidation)
	void ServerCollectPickups();
	bool ServerCollectPickups_Validate();
	void ServerCollectPickups_Implementation();

	// the character starting power level
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite, Category = "Power", Meta = (BlueprintProtected = "true"))
	float InitialPower;

	// Speed when power level is zero
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Power", Meta = (BleprintProtected = "true"))
	float BaseSpeed;

	// Multiplier for controlling current speed depending on power level
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Power", Meta = (BleprintProtected = "true"))
	float SpeedFactor;
	
	// update character visuals based on current power level
	UFUNCTION(BlueprintImplementableEvent, Category = "Power")
	void PowerChangeEffect();

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

	FORCEINLINE class USphereComponent* GetCollectionSphere() const { return CollectionSphere; }

private:
	// variable radius can be changed on server or client
	UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadOnly, Category= "Battery", Meta = (AllowPrivateAccess = "true"))
	float CollectionSphereRadius;

	// The character's current power level during gameplay
	UPROPERTY(ReplicatedUsing = Onrep_CurrentPower, VisibleAnywhere, Category = "Power")
	float CurrentPower;

	// Power level updated on clients
	UFUNCTION()
	void OnRep_CurrentPower();
};

