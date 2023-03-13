// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealNetworkGameMode.h"
#include "UnrealNetworkCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnrealNetworkGameMode::AUnrealNetworkGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
