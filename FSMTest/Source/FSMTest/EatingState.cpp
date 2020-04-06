// Fill out your copyright notice in the Description page of Project Settings.


#include "EatingState.h"
#include "FiniteStateMachine.h"

UEatingState::UEatingState() {}


void UEatingState::Begin(UFiniteStateMachine* F)
{

	F->SetMessage(FText::FromString("Eating Stage"));

}

UStateObject* UEatingState::FSM_Init(UFiniteStateMachine* F)
{
	UEatingState* ES = NewObject<UEatingState>(F, TEXT("EatingState"));
	UStateObject* StateObject = Cast<UStateObject>(ES);
	return StateObject;
	//return nullptr;
}


