// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "StarFox.h"
#include "StarFoxGameMode.h"
#include "StarFoxPawn.h"

AStarFoxGameMode::AStarFoxGameMode()
{
	// set default pawn class to our flying pawn
	DefaultPawnClass = AStarFoxPawn::StaticClass();
}
