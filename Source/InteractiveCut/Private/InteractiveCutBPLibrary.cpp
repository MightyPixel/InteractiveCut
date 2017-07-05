// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "InteractiveCutBPLibrary.h"
#include "InteractiveCut.h"

UInteractiveCutBPLibrary::UInteractiveCutBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

float UInteractiveCutBPLibrary::InteractiveCutSampleFunction(float Param)
{
	return -1;
}

static void InteractiveCutMoment(FName IntroSequenceName, FName SuccessSequenceName, FName FallbackSequenceName, FTimespan ReactionTime, FInputActionKeyMapping SuccessKey)
{
	FStringAssetReference SequenceName("/Game/NewLevelSequence.NewLevelSequence");
	// ULevelSequence* Asset = Cast<ULevelSequence>(SequenceName.TryLoad());
	// return -1;
}

