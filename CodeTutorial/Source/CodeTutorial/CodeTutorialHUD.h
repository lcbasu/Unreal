// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
#pragma once 
#include "GameFramework/HUD.h"
#include "CodeTutorialHUD.generated.h"

UCLASS()
class ACodeTutorialHUD : public AHUD
{
	GENERATED_BODY()

public:
	ACodeTutorialHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

