// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
#pragma once 
#include "GameFramework/HUD.h"
#include "UnrealCppHUD.generated.h"

UCLASS()
class AUnrealCppHUD : public AHUD
{
	GENERATED_BODY()

public:
	AUnrealCppHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

