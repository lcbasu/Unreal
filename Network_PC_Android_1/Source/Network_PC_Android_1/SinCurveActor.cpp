// Fill out your copyright notice in the Description page of Project Settings.

#include "Network_PC_Android_1.h"
#include "SinCurveActor.h"


// Sets default values
ASinCurveActor::ASinCurveActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	FrameCount = 0;

	SinCurveActorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SinCurveActorMesh"));

	//Mesh
	static ConstructorHelpers::FObjectFinder<UStaticMesh> pSphere(TEXT("StaticMesh'/Game/Blueprints/Sphere.Sphere'"));
	if (pSphere.Object)
	{
		SinCurveActorMesh->SetStaticMesh(pSphere.Object);
	}

	RootComponent = SinCurveActorMesh;
}

// Called when the game starts or when spawned
void ASinCurveActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASinCurveActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UE_LOG(LogTemp, Warning, TEXT("FrameCount: %d"), FrameCount);

	FrameCount++;
}

