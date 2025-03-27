// Copyright Epic Games, Inc. All Rights Reserved.

#include "ClassShooterGameMode.h"
#include "ClassShooterCharacter.h"
#include "UObject/ConstructorHelpers.h"

AClassShooterGameMode::AClassShooterGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
