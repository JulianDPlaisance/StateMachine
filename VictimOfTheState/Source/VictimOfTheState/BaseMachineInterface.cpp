// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseMachineInterface.h"

BaseMachineInterface::BaseMachineInterface()
{
	(*CurState) = nullptr;
	Name = "";
}

BaseMachineInterface::BaseMachineInterface(BaseMachineInterface* Machine)
{
	(*CurState) = Machine;
	Name = Machine->Name;
}

BaseMachineInterface::~BaseMachineInterface()
{
}

void BaseMachineInterface::BeginState(BaseMachineInterface& Machine)
{
	(*CurState)->BeginState(*this);
}

void BaseMachineInterface::ProcessState(BaseMachineInterface& Machine)
{
	(*CurState)->ProcessState(*this);
}

void BaseMachineInterface::EndState(BaseMachineInterface& Machine)
{
	(*CurState)->EndState(*this);
}
