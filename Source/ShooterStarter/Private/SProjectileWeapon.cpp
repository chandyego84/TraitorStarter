// Fill out your copyright notice in the Description page of Project Settings.


#include "SProjectileWeapon.h"

// overriding base weapon fire()
void ASProjectileWeapon::Fire() {
	
	AActor* MyOwner = GetOwner();
	if (MyOwner && ProjectileClass) {
		FVector EyeLocation;
		FRotator EyeRotation; // fire projectile in look direction
		// pass by reference
		MyOwner->GetActorEyesViewPoint(EyeLocation, EyeRotation);

		FVector MuzzleLocation = MeshComp->GetSocketLocation(MuzzleSocketName);
		//FRotator MuzzleRotation = MeshComp->GetSocketRotation(MuzzleSocketName);

		FActorSpawnParameters SpawnParams;
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		GetWorld()->SpawnActor<AActor>(ProjectileClass, MuzzleLocation, EyeRotation, SpawnParams);
	}
}