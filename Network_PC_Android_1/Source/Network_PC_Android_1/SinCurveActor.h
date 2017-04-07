// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "SinCurveActor.generated.h"

UCLASS()
class NETWORK_PC_ANDROID_1_API ASinCurveActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASinCurveActor();

	// require network scaffolding
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	FORCEINLINE class UStaticMeshComponent *GetMesh() const { return SinCurveActorMesh; };

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	float RunningTime;

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "SinCurveActor", meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* SinCurveActorMesh;
};
