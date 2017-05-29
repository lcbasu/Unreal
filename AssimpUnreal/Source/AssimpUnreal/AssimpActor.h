// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "ProceduralMeshComponent.h"
#include "KismetProceduralMeshLibrary.h"
#include "assimp/scene.h"
#include "assimp/postprocess.h"
#include "assimp/Importer.hpp"
#include "AssimpActor.generated.h"

UCLASS()
class ASSIMPUNREAL_API AAssimpActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAssimpActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "Assimp")
		bool LoadModelThroghAssimp(const FString& FilePath);

	UPROPERTY(VisibleAnywhere, Category = Mesh)
		UProceduralMeshComponent * Mesh;


	
};
