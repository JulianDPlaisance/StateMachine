// Fill out your copyright notice in the Description page of Project Settings.


#include "SleepingState.h"
#include "FiniteStateMachine.h"

USleepingState::USleepingState() {}

void USleepingState::Begin_Implementation(UFiniteStateMachine* F)
{
	F->SetMessage(FText::FromString("Entering Sleeping Stage"));
	//UE_LOG(LogTemp, Warning, TEXT("Sleeping Stage"));
}

void USleepingState::Execute_Implementation(UFiniteStateMachine* F)
{
	UE_LOG(LogTemp, Warning, TEXT("ZZZ..."));
}

void USleepingState::End_Implementation(UFiniteStateMachine* F)
{
	F->SetMessage(FText::FromString("Sleeping Stage"));
	//UE_LOG(LogTemp, Warning, TEXT("Leaving Sleeping Stage"));
}
