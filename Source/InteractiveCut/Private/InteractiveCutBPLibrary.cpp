// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "InteractiveCutBPLibrary.h"
#include "InteractiveCut.h"

#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/Engine/Classes/GameFramework/InputSettings.h"
#include "Runtime/CoreUObject/Public/UObject/UObjectGlobals.h"
#include "Runtime/LevelSequence/Public/LevelSequence.h"
#include "Runtime/LevelSequence/Public/LevelSequencePlayer.h"
#include "Runtime/LevelSequence/Public/LevelSequenceActor.h"

UInteractiveCutBPLibrary::UInteractiveCutBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

float UInteractiveCutBPLibrary::InteractiveCutMoment(const FName& IntroSequenceName, const FName& SuccessSequenceName, const FName& FallbackSequenceName, const FTimespan& ReactionTime, const FInputActionKeyMapping& SuccessKey)
{
	FStringAssetReference SequenceName(IntroSequenceName.ToString());

	// ULevelSequence* Asset = Cast<ULevelSequence>(SequenceName.TryLoad());
	// ULevelSequencePlayer::CreateLevelSequencePlayer();

	return -1;
}

