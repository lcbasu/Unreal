// Fill out your copyright notice in the Description page of Project Settings.

#include "UnrealCpp.h"
#include "MyActor.h"


// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Initialization
	Box = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	Box->bGenerateOverlapEvents = true;
	
	// Set Root as the Root Component
	RootComponent = Box;

	MyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MyMesh"));

	// Attach the mesh to root component
	MyMesh->AttachTo(RootComponent);

	SpeedScale = 0.0f;

	PlayerStartingLocation = FVector(-351.0f, -99.0f, 235.0f);

}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector NewLocation = GetActorLocation();

	float DeltaHeight = FMath::Sin(RunningTime + DeltaTime) - FMath::Sin(RunningTime);

	NewLocation.Y += DeltaHeight * SpeedScale;
	RunningTime += DeltaTime;

	SetActorLocation(NewLocation);
}

void AMyActor::TriggerEnter(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

}

void AMyActor::TriggerExit(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{

}