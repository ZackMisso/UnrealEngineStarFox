// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/ActorComponent.h"
#include "ShipStatsComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class STARFOX_API UShipStatsComponent : public UActorComponent
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	float Acceleration;

	UPROPERTY(EditAnywhere)
	float TurnSpeed;

	UPROPERTY(EditAnywhere)
	float RollSpeed;

	UPROPERTY(EditAnywhere)
	float MinSpeed;

	UPROPERTY(EditAnywhere)
	float MaxSpeed;

public:	
	// Sets default values for this component's properties
	UShipStatsComponent();
};
