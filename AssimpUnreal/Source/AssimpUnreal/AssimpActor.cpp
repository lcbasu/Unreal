// Fill out your copyright notice in the Description page of Project Settings.

#include "AssimpUnreal.h"
#include "AssimpActor.h"


// Sets default values
AAssimpActor::AAssimpActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("TestActorMesh"));
	RootComponent = Mesh;

	FString FilePath = FString(TEXT("E:\\Dev\\VArch\\VArch-Development\\ThirdParty\\Assimp\\assimp-3.1.1-win-binaries\\test\\models-nonbsd\\FBX\\2013_ASCII\\duck.fbx"));

	//UE_LOG(LogClass, Log, TEXT("File: %s"), (FilePath+ FileName));

	if (!LoadModelThroghAssimp(FilePath))
	{
		// Model loading failed
		UE_LOG(LogClass, Error, TEXT("Model loading using Assimp failed!"));
	}

}

// Called when the game starts or when spawned
void AAssimpActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAssimpActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool AAssimpActor::LoadModelThroghAssimp(const FString & FilePath)
{
	Assimp::Importer importer;
	const aiScene* scene = importer.ReadFile(TCHAR_TO_ANSI(*FilePath),
		aiProcess_CalcTangentSpace |
		aiProcess_Triangulate |
		aiProcess_JoinIdenticalVertices |
		aiProcess_SortByPType);

	if (!scene) return false;


	TArray<FVector> Vertices;
	TArray<FVector> Normals;
	TArray<int32> Triangles;

	for (unsigned int i = 0; i < scene->mNumMeshes; i++)
	{
		aiMesh* currentMesh = scene->mMeshes[i];
		for (unsigned int j = 0; j < currentMesh->mNumVertices; j++)
		{
			aiVector3D vertex = currentMesh->mVertices[j];
			Vertices.Add(FVector(vertex.x, vertex.y, vertex.z));
			if (currentMesh->mNormals) {
				aiVector3D normal = currentMesh->mNormals[j];
				Normals.Add(FVector(normal.x, normal.y, normal.z));
			}
		}
		for (unsigned int k = 0; k < currentMesh->mNumFaces; k++)
		{
			aiFace face = currentMesh->mFaces[k];
			for (unsigned int l = 0; l < face.mNumIndices; l++)
			{
				Triangles.Add(face.mIndices[l]);
			}
		}
	}

	TArray<FVector2D> UV0;
	UV0.Add(FVector2D(0, 0));
	UV0.Add(FVector2D(10, 0));
	UV0.Add(FVector2D(0, 10));

	TArray<FLinearColor> VertexColors;
	VertexColors.Add(FLinearColor(0.75, 0.75, 0.75, 1.0));
	VertexColors.Add(FLinearColor(0.75, 0.75, 0.75, 1.0));
	VertexColors.Add(FLinearColor(0.75, 0.75, 0.75, 1.0));

	TArray<FProcMeshTangent> Tangents;
	Tangents.Add(FProcMeshTangent(0, 1, 0));
	Tangents.Add(FProcMeshTangent(0, 1, 0));
	Tangents.Add(FProcMeshTangent(0, 1, 0));

	Mesh->CreateMeshSection_LinearColor(1, Vertices, Triangles, Normals, UV0, VertexColors, Tangents, false);

	return true;
}