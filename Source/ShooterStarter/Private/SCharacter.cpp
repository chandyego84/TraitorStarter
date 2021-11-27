// Fill out your copyright notice in the Description page of Project Settings.


#include "SCharacter.h"
#include "ShooterStarter/ShooterStarter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/PawnMovementComponent.h"
#include "Components/CapsuleComponent.h"
#include "SWeapon.h"
#include "Components/SHealthComponent.h"

// Sets default values
ASCharacter::ASCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// spring arm component
	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComp"));
	SpringArmComp->bUsePawnControlRotation = true;
	SpringArmComp->SetupAttachment(RootComponent);

	// camera component
	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComp"));
	CameraComp->SetupAttachment(SpringArmComp);

	GetMovementComponent()->GetNavAgentPropertiesRef().bCanCrouch = true;
	GetMovementComponent()->GetNavAgentPropertiesRef().bCanJump = true;

	GetCapsuleComponent()->SetCollisionResponseToChannel(COLLISION_WEAPON, ECR_Ignore);

	// health component
	HealthComp = CreateDefaultSubobject<USHealthComponent>(TEXT("HealthComp"));

	// for ADS
	zoomFOV = 65.0f;
	ZoomInterpSpeed = 20.0f;

	WeaponAttachSocketName = "WeaponSocket";

	// AMMO 
	InitializeAmmo();
}

// Called when the game starts or when spawned
void ASCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	defaultFOV = CameraComp->FieldOfView;

	// spawn default weapon
	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	CurrentWeapon = GetWorld()->SpawnActor<ASWeapon>(StarterWeaponClass,
		FVector::ZeroVector, FRotator::ZeroRotator);
	if (CurrentWeapon) {
		CurrentWeapon->SetOwner(this);
		CurrentWeapon->AttachToComponent(GetMesh(),
			FAttachmentTransformRules::SnapToTargetNotIncludingScale,
			WeaponAttachSocketName);
	}

	// creating onhealthchanged fxn
	HealthComp->OnHealthChanged.AddDynamic(this, &ASCharacter::OnHealthChanged);
}

// WASD movement
void ASCharacter::MoveForward(float Value) {
	AddMovementInput(GetActorForwardVector() * Value);
}

void ASCharacter::MoveRight(float Value) {
	AddMovementInput(GetActorRightVector() * Value);
}

// Crouching
void ASCharacter::BeginCrouch() {
	Crouch();
}

void ASCharacter::EndCrouch() {
	UnCrouch();
}

// ADS
void ASCharacter::BeginADS() {
	isZooming = true;
}

void ASCharacter::StopADS() {
	isZooming = false;
}

// AMMO
void ASCharacter::InitializeAmmo() {
	AmmoTotal = 1;
}

bool ASCharacter::UseAmmo(const int32 NumUsed) {
	AmmoTotal -= NumUsed;

	return AmmoTotal > 0 ? true : false;
}


void ASCharacter::Fire() {
	if (CurrentWeapon) {
		// only if player has a weapon
		// Fire() is public in Weapon class
		if (UseAmmo(1)) {
			// has ammo to shoot
			CurrentWeapon->Fire();
		}

	}
} 

void ASCharacter::OnHealthChanged(USHealthComponent* OwnerHealthComp, float Health, float HealthDelta,
	const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser) {
	if (Health <= 0.0f && !isDead) {
		// "Die"
		isDead = true;
		GetMovementComponent()->StopMovementImmediately();
		GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		DetachFromControllerPendingDestroy();
		//SetLifeSpan(10.0f);
	}
}

// Called every frame
void ASCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	float targetFOV = isZooming ? zoomFOV : defaultFOV;

	// adjust ADS speed
	float newFOV = FMath::FInterpTo(CameraComp->FieldOfView, targetFOV, DeltaTime, ZoomInterpSpeed);

	CameraComp->SetFieldOfView(newFOV);
}

// Called to bind functionality to input
void ASCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// WASD
	PlayerInputComponent->BindAxis("MoveForward", this, &ASCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ASCharacter::MoveRight);

	// Mouse Turning
	PlayerInputComponent->BindAxis("LookUp", this, &ASCharacter::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("Turn", this, &ASCharacter::AddControllerYawInput);

	// Crouching
	PlayerInputComponent->BindAction("Crouch", IE_Pressed, this, &ASCharacter::BeginCrouch);
	PlayerInputComponent->BindAction("Crouch", IE_Released, this, &ASCharacter::EndCrouch);

	// Jumping
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);

	// ADS
	PlayerInputComponent->BindAction("ADS", IE_Pressed, this, &ASCharacter::BeginADS);
	PlayerInputComponent->BindAction("ADS", IE_Released, this, &ASCharacter::StopADS);

	// Firing
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &ASCharacter::Fire);
}

// used in get actor eye's viewpoint fxn in fire()
FVector ASCharacter::GetPawnViewLocation() const {
	if (CameraComp) {
		return CameraComp->GetComponentLocation();
	}

	// else: calls original implementation [get viewpoint from PAWN eyes]
	return Super::GetPawnViewLocation();
}
