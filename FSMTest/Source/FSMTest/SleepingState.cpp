// Fill out your copyright notice in the Description page of Project Settings.


#include "SleepingState.h"
#include "FiniteStateMachine.h"

USleepingState::USleepingState() {}

void USleepingState::Begin(UFiniteStateMachine* F)
{

	F->SetMessage(FText::FromString("Sleeping Stage"));

}

UStateObject* USleepingState::FSM_Init(UFiniteStateMachine* F)
{
	USleepingState* SS = NewObject<USleepingState>(F, TEXT("EatingState"));
	UStateObject* StateObject = Cast<UStateObject>(SS);
	return StateObject;
	//return nullptr;
}