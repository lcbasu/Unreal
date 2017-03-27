// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Pickup.generated.h"

UCLASS()
class CODETUTORIAL_API APickup : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickup();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	UPROPERTY(EditAnywhere)
	USceneComponent* PickupRoot;

	// The static mesh for the pickup
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* PickupMesh;

	/* 
		Box to represent collider around the pickup 
		Using UShapeComponent in place of UBoxComponent
		because if in future we decide to use some other collider,
		we can use this variable without any type change
	*/
	UPROPERTY(EditAnywhere)
	UShapeComponent* PickupBox;

	UFUNCTION()
	void OnPlayerEnterPickupBox(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
