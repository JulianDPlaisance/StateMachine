// Fill out your copyright notice in the Description page of Project Settings.


#include "EatingState.h"
#include "FiniteStateMachine.h"

UEatingState::UEatingState() {}


void UEatingState::Begin_Implementation(UFiniteStateMachine* F)
{

	F->SetMessage(FText::FromString("Eating Stage"));
	UE_LOG(LogTemp, Warning, TEXT("Entering Eating State"));

}

void UEatingState::Execute_Implementation(UFiniteStateMachine* F)
{
	UE_LOG(LogTemp, Warning, TEXT("NOM NOM..."));
}


void UEatingState::End_Implementation(UFiniteStateMachine* F)
{

	F->SetMessage(FText::FromString("Eating Stage"));
	UE_LOG(LogTemp, Warning, TEXT("Leaving Eating State"));

}

