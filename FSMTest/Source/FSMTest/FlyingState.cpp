// Fill out your copyright notice in the Description page of Project Settings.


#include "FlyingState.h"
#include "FiniteStateMachine.h"

UFlyingState::UFlyingState() {}

void UFlyingState::Begin(UFiniteStateMachine* F)
{
	F->SetMessage(FText::FromString("Flying Stage"));
}

UStateObject* UFlyingState::FSM_Init(UFiniteStateMachine* F)
{
	UFlyingState* ES = NewObject<UFlyingState>(F, TEXT("FlyingState"));
	UStateObject* StateObject = Cast<UStateObject>(ES);
	return StateObject;
}
