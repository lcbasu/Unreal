// Fill out your copyright notice in the Description page of Project Settings.

#include "UnrealCpp.h"
#include "CameraUtility.h"


// Sets default values
ACameraUtility::ACameraUtility()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	TimeToNextCameraChange = 2.0f;
}

// Called when the game starts or when spawned
void ACameraUtility::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACameraUtility::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	const float TimeBetweenCameraChange = 2.0f;
	const float SmoothBlendTime = 0.75f;

	TimeToNextCameraChange -= DeltaTime;

	if (TimeToNextCameraChange <= 0)
	{
		TimeToNextCameraChange += TimeBetweenCameraChange;

		APlayerController* OurPlayer = UGameplayStatics::GetPlayerController(this, 0);

		if (OurPlayer)
		{
			if (CameraTwo && (OurPlayer->GetViewTarget() == CameraOne))
			{
				OurPlayer->SetViewTargetWithBlend(CameraTwo, SmoothBlendTime);
			}
			else if (CameraOne)
			{
				OurPlayer->SetViewTargetWithBlend(CameraOne, SmoothBlendTime);
			}
		}
	}
}