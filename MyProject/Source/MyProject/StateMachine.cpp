// Fill out your copyright notice in the Description page of Project Settings.


#include "StateMachine.h"

void UStateMachine::ChangeState()
{
	//state.End();
	if (state == nullptr)
	{
		state = NewObject<UEatingState>();
	}
	else if (state->GetName() == "Eating")
	{
		state = NewObject<UHungryState>();
	}
	else if (state->GetName() == "Hungry")
	{
		state = NewObject<UEatingState>();
	}

}


FString UStateMachine::GetStateName()
{
	if (state != nullptr)
		return state->GetName();
	else
		return "Nullptr";
}