// Fill out your copyright notice in the Description page of Project Settings.

#include "StarFox.h"
#include "ShipStatsComponent.h"

// Sets default values for this component's properties
UShipStatsComponent::UShipStatsComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	bWantsBeginPlay = true;
	PrimaryComponentTick.bCanEverTick = false;

	Acceleration = 500.f;
	TurnSpeed = 50.f;
	RollSpeed = 50.f;
	MaxSpeed = 4000.f;
	MinSpeed = 500.f;
}

