// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "CollectableActor.generated.h"

UCLASS()
class NETWORKINGTUTORIAL_1_API ACollectableActor : public AActor
{
	GENERATED_BODY()
	
public:	
	ACollectableActor(const FObjectInitializer& ObjectInitializer);

	USphereComponent* CollisionComponent;

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION(Reliable, Server, WithValidation)
	void UpdateScore(int32 Amount);
	void UpdateScore_Implementation(int32 Amount);
	bool UpdateScore_Validate(int32 Amount);

};
