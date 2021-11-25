// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SCharacter.generated.h"


class UCameraComponent;
class USpringArmComponent;
class ASWeapon;

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

	ASWeapon* CurrentWeapon;

	UPROPERTY(EditDefaultsOnly, Category = "Player")
	TSubclassOf<ASWeapon>StarterWeaponClass;

	UPROPERTY(VisibleDefaultsOnly, Category = "Player")
	FName WeaponAttachSocketName;

	// AMMO 
	UPROPERTY(EditDefaultsOnly, Category = "Ammo")
		// uint32 does not work for blueprint access
		int32 AmmoTotal; // int32 -> unsigned up to 32 bits (WOW, I ACTUALLY UNDERSTAND THANKS PARTLY TO EE214)

	void InitializeAmmo();

	bool UseAmmo(const int32 NumUsed);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// overriding GetPawnView location-->have it use camera instead of pawn location
	virtual FVector GetPawnViewLocation() const override;

	UFUNCTION(BlueprintCallable, Category = "Player")
	void Fire();

};
