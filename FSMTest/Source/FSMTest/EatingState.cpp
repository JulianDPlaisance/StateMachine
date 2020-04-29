// Fill out your copyright notice in the Description page of Project Settings.


#include "EatingState.h"
#include "FiniteStateMachine.h"

UEatingState::UEatingState() {}


void UEatingState::Begin(UFiniteStateMachine* F)
{

	F->SetMessage(FText::FromString("Eating Stage"));
	UE_LOG(LogTemp, Warning, TEXT("Entering Eating State"));

}


void UEatingState::End(UFiniteStateMachine* F)
{

	F->SetMessage(FText::FromString("Eating Stage"));
	UE_LOG(LogTemp, Warning, TEXT("Leaving Eating State"));

}

