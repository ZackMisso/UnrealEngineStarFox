// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Pawn.h"
#include "ShipStatsComponent.h"
#include "PlayerPawn.generated.h"

UCLASS()
class STARFOX_API APlayerPawn : public APawn
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent* ShipMesh;

	UPROPERTY(EditAnywhere)
	class UShipStatsComponent* ShipStats;

	UPROPERTY(EditAnywhere)
	class UCameraComponent* Camera;

	UPROPERTY(EditAnywhere)
	class USpringArmComponent* SpringArm;

public:
	// Sets default values for this pawn's properties
	APlayerPawn();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	virtual void NotifyHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& HitResult) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

	void BoostUnput(float Val);

	void HorizontalInput(float Val);

	void VerticalInput(float Val);

	void RollInput(float Val);

private:
	float CurrentForwardSpeed;
	float CurrentYawSpeed;
	float CurrentPitchSpeed;
	float CurrentRollSpeed;

public:
	FORCEINLINE class UStaticMeshComponent* GetShipMesh() const { return ShipMesh; }
	FORCEINLINE class USpringArmComponent* GetSpringArm() const { return SpringArm; }
	FORCEINLINE class UCameraComponent* GetCameraComponent() const { return Camera; }
	FORCEINLINE class UShipStatsComponent* GetShipStatsComponent() const { return ShipStats;  }
};
