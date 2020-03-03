// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "Street_RacingGameMode.h"
#include "Street_RacingPawn.h"
#include "Street_RacingHud.h"

AStreet_RacingGameMode::AStreet_RacingGameMode()
{
	DefaultPawnClass = AStreet_RacingPawn::StaticClass();
	HUDClass = AStreet_RacingHud::StaticClass();
}
