// Fill out your copyright notice in the Description page of Project Settings.

#include "Network_PC_Android_1.h"
#include "Network_PC_Android_1GameModeBase.h"
#include "SinCurveActor.h"



ANetwork_PC_Android_1GameModeBase::ANetwork_PC_Android_1GameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ANetwork_PC_Android_1GameModeBase::BeginPlay()
{
	Super::BeginPlay();
	
	UE_LOG(LogTemp, Warning, TEXT("Called Once"));

	// Instantiate the actor

	ASinCurveActor* SinActor = new ASinCurveActor();


}

void ANetwork_PC_Android_1GameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UE_LOG(LogTemp, Warning, TEXT("Called Every Frame"));
}