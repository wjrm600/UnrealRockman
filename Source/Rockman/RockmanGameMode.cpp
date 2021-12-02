// Copyright Epic Games, Inc. All Rights Reserved.

#include "RockmanGameMode.h"
#include "RockmanCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARockmanGameMode::ARockmanGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
