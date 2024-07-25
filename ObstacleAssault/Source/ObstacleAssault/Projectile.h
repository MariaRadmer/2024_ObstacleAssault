// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Projectile.generated.h"

UCLASS()
class OBSTACLEASSAULT_API AProjectile : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
private:
	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent *ProjectileMesh;

	UPROPERTY(EditAnywhere, Category = Movement)
	UProjectileMovementComponent* ProjectileMovementComponent;

	UPROPERTY(EditAnywhere, Category = "Moving")
	FVector ProjectileVelocity = FVector(100, 0, 0);

	UPROPERTY(EditAnywhere)
	float MoveDistance = 100;

	FVector StartLocation;

	void Launch(float DeltaTime);
	bool ShouldProjectileGoBackToStart() const;
	float GetDistanceMoved() const;

};
