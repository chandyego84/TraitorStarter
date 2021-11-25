// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SCharacter.generated.h"

class UCameraComponent;
class USpringArmComponent;

UCLASS()
class SHOOTERSTARTER_API ASCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ASCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Moving with WASD keys
	void MoveForward(float Value);
	void MoveRight(float Value);

	// Crouching
	void BeginCrouch();
	void EndCrouch();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UCameraComponent* CameraComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USpringArmComponent* SpringArmComp;

	// for ADS
	UPROPERTY(EditDefaultsOnly, Category = "Player")
	float zoomFOV;

	UPROPERTY(EditDefaultsOnly, Category = "Player", meta = (ClampMin = 0.0, ClampMax = 100))
	float ZoomInterpSpeed; // should only be btwn 0-->100

	float defaultFOV; // begin play

	bool isZooming;

	void BeginADS(); 
	void StopADS();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// overriding GetPawnView location-->have it use camera instead of pawn location
	virtual FVector GetPawnViewLocation() const override;
};
