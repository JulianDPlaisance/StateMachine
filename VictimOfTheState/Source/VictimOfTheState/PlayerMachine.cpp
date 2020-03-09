// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerMachine.h"

void APlayerMachine::InitState(BaseMachineInterface* State)
{
	Machine = State;
	Machine->BeginState(*Machine);
}

BaseMachineInterface& APlayerMachine::GetCurrentState()
{
	return *Machine;
}

void APlayerMachine::ChangeState(BaseMachineInterface* State)
{
	Machine->EndState(*Machine);
	Machine = State;
	Machine->BeginState(*Machine);
}