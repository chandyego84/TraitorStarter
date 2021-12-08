// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SFlag.generated.h"

class ASCharacter;

UCLASS()
class SHOOTERSTARTER_API ASFlag : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASFlag();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// static mesh for pickup flag
	UPROPERTY(EditAnywhere)
	USkeletalMeshComponent* MeshComp;

	UPROPERTY(EditAnywhere)
	USceneComponent* PickupRoot;

	UPROPERTY(EditAnywhere)
	UShapeComponent* PickupBox;

	UPROPERTY(VisibleDefaultsOnly, Category = "Equip")
	FName FlagAttachSocketName;

	UPROPERTY(VisibleDefaultsOnly, Category = "Owner")
	ASCharacter* FlagOwner;

	UFUNCTION()
		void OnPlayerEnterPickUpBox(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
			UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
			const FHitResult& SweepResult);

public:	
	// Called every frame
	//virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditDefaultsOnly, Category = "Pickup Status")
		bool PickedUp;
};
