// Copyright Epic Games, Inc. All Rights Reserved.

#include "AccidentallyHammer0GameMode.h"
#include "AccidentallyHammer0Character.h"
#include "UObject/ConstructorHelpers.h"

AAccidentallyHammer0GameMode::AAccidentallyHammer0GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
