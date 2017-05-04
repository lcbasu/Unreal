// Fill out your copyright notice in the Description page of Project Settings.

#include "ItemSystem.h"
#include "Engine/Engine.h"
#include "Item.h"


// Sets default values
AItem::AItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bItemIsWithinRange = false;

	TBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	TBox->bGenerateOverlapEvents = true;
	TBox->OnComponentBeginOverlap.AddDynamic(this, &AItem::OnOverlapBegin);
	TBox->OnComponentEndOverlap.AddDynamic(this, &AItem::OnOverlapEnd);

	RootComponent = TBox;

	SM_TBox = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Box Mesh"));
	SM_TBox->AttachTo(RootComponent);
}

// Called when the game starts or when spawned
void AItem::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (MyPlayerController != NULL)
	{
		if (MyPlayerController->bIsPickingUp && bItemIsWithinRange)
		{
			Pickup();
		}
	}
}

void AItem::Pickup()
{
	MyPlayerController->Inventory.Add(*ItemName);
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Blue, TEXT("You picked up the item"));
	Destroy();
}

void AItem::GetPlayer(AActor * Player)
{
	MyPlayerController = Cast<AItemSystemCharacter>(Player);
}

void AItem::OnOverlapBegin(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	bItemIsWithinRange = true;
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Blue, FString("Press E to pickup:" + ItemName));
	GetPlayer(OtherActor);
}

void AItem::OnOverlapEnd(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex)
{
}

