// Fill out your copyright notice in the Description page of Project Settings.


#include "Walking.h"
#include "FiniteStateMachine.h"

UWalking::UWalking() {}


void UWalking::Begin(UFiniteStateMachine* F)
{

	F->SetMessage(FText::FromString("Walking Stage"));

}

UStateObject* UWalking::FSM_Init(UFiniteStateMachine* F)
{
	UWalking* ES = NewObject<UWalking>(F, TEXT("WalkingState"));
	UStateObject* StateObject = Cast<UStateObject>(ES);
	return StateObject;
	//return nullptr;
}