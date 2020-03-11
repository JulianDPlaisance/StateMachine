// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerMachine.h"

void APlayerMachine::InitState(ABaseMachineInterface* State)
{
	//Machine = &Flying();
	Machine->BeginState(*Machine);
}

ABaseMachineInterface& APlayerMachine::GetCurrentState()
{
	return *Machine;
}

void APlayerMachine::ChangeState(ABaseMachineInterface* State)
{
	Machine->EndState(*Machine);
	Machine = State;
	Machine->BeginState(*Machine);
}