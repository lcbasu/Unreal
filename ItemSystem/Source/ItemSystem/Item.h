// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "ItemSystemCharacter.h"
#include "Item.generated.h"

UCLASS()
class ITEMSYSTEM_API AItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItem();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UShapeComponent* TBox;

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* SM_TBox;

	AItemSystemCharacter* MyPlayerController;

	UPROPERTY(EditAnywhere)
		FString ItemName = FString(TEXT(""));

	bool bItemIsWithinRange;

	void Pickup();
	void GetPlayer(AActor* Player);

	UFUNCTION()
		void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
		void OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	
};
