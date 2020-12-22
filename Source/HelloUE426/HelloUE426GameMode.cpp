// Copyright Epic Games, Inc. All Rights Reserved.

#include "HelloUE426GameMode.h"
#include "HelloUE426PlayerController.h"
#include "HelloUE426Character.h"
#include "UObject/ConstructorHelpers.h"

AHelloUE426GameMode::AHelloUE426GameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AHelloUE426PlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}