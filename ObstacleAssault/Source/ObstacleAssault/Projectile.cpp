// Fill out your copyright notice in the Description page of Project Settings.

#include "Projectile.h"

// Sets default values
AProjectile::AProjectile()
{

	ProjectileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh"));
	RootComponent = ProjectileMesh;

	ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));

	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AProjectile::BeginPlay()
{
	Super::BeginPlay();
	StartLocation = GetActorLocation();
	AddActorLocalRotation(FRotator(0, 0, -90));
}

// Called every frame
void AProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Launch(DeltaTime);
}

void AProjectile::Launch(float DeltaTime)
{

	if (ShouldProjectileGoBackToStart())
	{
		SetActorLocation(StartLocation);
	}
	else
	{
		FVector CurrentLocation = GetActorLocation();
		CurrentLocation += (ProjectileVelocity * DeltaTime);
		SetActorLocation(CurrentLocation);
	}
}

bool AProjectile::ShouldProjectileGoBackToStart() const
{
	return GetDistanceMoved() > MoveDistance;
}

float AProjectile::GetDistanceMoved() const
{
	return FVector::Dist(StartLocation, GetActorLocation());
}
