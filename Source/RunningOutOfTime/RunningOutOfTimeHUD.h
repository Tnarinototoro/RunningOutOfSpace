// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "RunningOutOfTimeHUD.generated.h"

UCLASS()
class ARunningOutOfTimeHUD : public AHUD
{
	GENERATED_BODY()

public:
	ARunningOutOfTimeHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

