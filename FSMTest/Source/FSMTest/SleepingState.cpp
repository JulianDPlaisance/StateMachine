// Fill out your copyright notice in the Description page of Project Settings.


#include "SleepingState.h"
#include "FiniteStateMachine.h"

USleepingState::USleepingState() {}

void USleepingState::Begin(UFiniteStateMachine* F)
{

	UE_LOG(LogTemp, Warning, TEXT("Entering Sleeping Stage"));
	F->SetMessage(FText::FromString("Entering Sleeping Stage"));

}

void USleepingState::End(UFiniteStateMachine* F)
{

	F->SetMessage(FText::FromString("Leaving Sleeping Stage"));
	UE_LOG(LogTemp, Warning, TEXT("Leaving Sleeping Stage"));
}

void USleepingState::Execute(UFiniteStateMachine* F)
{
	UE_LOG(LogTemp, Warning, TEXT("ZZZ..."));
}
