// Copyright Epic Games, Inc. All Rights Reserved.

#include "ParabolaGameMode.h"
#include "ParabolaCharacter.h"
#include "UObject/ConstructorHelpers.h"

AParabolaGameMode::AParabolaGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
