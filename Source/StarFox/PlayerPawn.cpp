// Fill out your copyright notice in the Description page of Project Settings.

#include "StarFox.h"
#include "PlayerPawn.h"


// Sets default values
APlayerPawn::APlayerPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayerPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerPawn::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

void APlayerPawn::NotifyHit(UPrimitiveComponent * MyComp, AActor * Other, UPrimitiveComponent * OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult & HitResult)
{
	// to be implemented
}

// Called to bind functionality to input
void APlayerPawn::SetupPlayerInputComponent(UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}

void APlayerPawn::BoostUnput(float Val)
{
	// to be implemented
}

void APlayerPawn::HorizontalInput(float Val)
{
	// to be implemented
}

void APlayerPawn::VerticalInput(float Val)
{
	// to be implemented
}

void APlayerPawn::RollInput(float Val)
{
	// to be implemented
}

