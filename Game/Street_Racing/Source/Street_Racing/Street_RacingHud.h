// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Street_RacingHud.generated.h"

UCLASS(config = Game)
class AStreet_RacingHud : public AHUD
{
	GENERATED_BODY()

public:
	AStreet_RacingHud();

	/** Font used to render the vehicle info */
	UPROPERTY()
	UFont* HUDFont;

	// Begin AHUD interface
	virtual void DrawHUD() override;
	// End AHUD interface

};
