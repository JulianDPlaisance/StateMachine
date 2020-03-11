// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseMachineInterface.h"

ABaseMachineInterface::ABaseMachineInterface()
{
	//(*CurState) = nullptr;
	//(*CurState)->Name = nullptr;
	//(*CurState)->State = nullptr;
}

ABaseMachineInterface::ABaseMachineInterface(ABaseMachineInterface* Machine)
{
	(*CurState)->State = Machine;
	(*CurState)->Name = Machine->GetName(*Machine);
}

ABaseMachineInterface::~ABaseMachineInterface()
{

}

void ABaseMachineInterface::BeginState(ABaseMachineInterface& Machine)
{
	(*CurState)->State->BeginState(*this);
}

void ABaseMachineInterface::ProcessState(ABaseMachineInterface& Machine)
{
	(*CurState)->State->ProcessState(*this);
}

void ABaseMachineInterface::EndState(ABaseMachineInterface& Machine)
{
	(*CurState)->State->EndState(*this);
}

FString ABaseMachineInterface::GetName(ABaseMachineInterface& Machine)
{
	return (*CurState)->State->GetName(*this);
}
