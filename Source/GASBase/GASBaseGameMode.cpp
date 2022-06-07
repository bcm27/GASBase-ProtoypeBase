// Copyright Epic Games, Inc. All Rights Reserved.

#include "GASBaseGameMode.h"
#include "GASBaseCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGASBaseGameMode::AGASBaseGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
