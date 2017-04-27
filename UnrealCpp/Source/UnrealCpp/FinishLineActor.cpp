// Fill out your copyright notice in the Description page of Project Settings.

#include "UnrealCpp.h"
#include "Engine/Engine.h"
#include "FinishLineActor.h"


// Sets default values
AFinishLineActor::AFinishLineActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	FinishLineBox = CreateDefaultSubobject<UBoxComponent>(TEXT("FinishLineBox"));
	RootComponent = FinishLineBox;

	FinishLineBox->bGenerateOverlapEvents = true;
	FinishLineBox->OnComponentBeginOverlap.AddDynamic(this, &AFinishLineActor::OnOverlapBegin);
}

// Called when the game starts or when spawned
void AFinishLineActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFinishLineActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFinishLineActor::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// When player reaches the finish line
	if (OtherActor->IsA(ACharacter::StaticClass()))
	{
		// Do something when player reaches the finish line
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Reached Finish Line..."));
	}
}