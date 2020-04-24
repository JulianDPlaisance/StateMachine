// Fill out your copyright notice in the Description page of Project Settings.


#include "StateMachine.h"


FString UStateMachine::GetStateName()
{
	if (state != nullptr)
		return state->GetName();
	else
		return "Nullptr";
}

void UStateMachine::SwitchState()
{
	ChangeState(NewObject<UEatingState>());
}
