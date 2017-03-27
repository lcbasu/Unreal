// Fill out your copyright notice in the Description page of Project Settings.

#include "NetworkingTutorial_1.h"
#include "CollectableActor.h"
#include "Engine.h"
#include "NetworkingTutorial_1GameMode.h"

ACollectableActor::ACollectableActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	bReplicates = true;
	CollisionComponent = ObjectInitializer.CreateDefaultSubobject<USphereComponent>(this, TEXT("SphereComponent"));
	CollisionComponent->InitSphereRadius(60.0f);
	RootComponent = CollisionComponent;
	CollisionComponent->OnComponentBeginOverlap.AddDynamic(this, &ACollectableActor::OnOverlapBegin);
}

void ACollectableActor::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (Role == ROLE_Authority)
	{
		UpdateScore(5);
		Destroy();
	}
}

void ACollectableActor::UpdateScore_Implementation(int32 Amount)
{
	ANetworkingTutorial_1GameMode* TheGameMode = Cast<ANetworkingTutorial_1GameMode>(GetWorld()->GetAuthGameMode());
	TheGameMode->AddScore(Amount);
}

bool ACollectableActor::UpdateScore_Validate(int32 Amount)
{
	return false;
}
