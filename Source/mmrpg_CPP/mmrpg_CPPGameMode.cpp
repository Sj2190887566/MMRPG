// Copyright Epic Games, Inc. All Rights Reserved.

#include "mmrpg_CPPGameMode.h"
#include "mmrpg_CPPCharacter.h"
#include "UObject/ConstructorHelpers.h"

Ammrpg_CPPGameMode::Ammrpg_CPPGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
