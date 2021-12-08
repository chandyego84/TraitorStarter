// Fill out your copyright notice in the Description page of Project Settings.


#include "SFlag.h"
#include "Components/ShapeComponent.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
ASFlag::ASFlag()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;
	MeshComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MeshComp"));
	PickupRoot = CreateDefaultSubobject<USceneComponent>(TEXT("PickupRoot"));
	RootComponent = PickupRoot;

	MeshComp->AttachToComponent(PickupRoot, FAttachmentTransformRules::SnapToTargetNotIncludingScale);

	PickupBox = CreateDefaultSubobject<UBoxComponent>(TEXT("PickupBox"));
	PickupBox->SetWorldScale3D(FVector(1.0f, 1.0f, 1.0f));
	PickupBox->SetGenerateOverlapEvents(true);
	PickupBox->OnComponentBeginOverlap.AddDynamic(this, &ASFlag::OnPlayerEnterPickUpBox);
	PickupBox->AttachToComponent(PickupRoot, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
	
	SetReplicates(true); // spawn on server, will spawn on clients
}

// Called when the game starts or when spawned
void ASFlag::BeginPlay()
{
	Super::BeginPlay();
	
}

void ASFlag::OnPlayerEnterPickUpBox(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
	Destroy();
}

//// Called every frame
//void ASFlag::Tick(float DeltaTime)
//{
//	Super::Tick(DeltaTime);
//
//}

