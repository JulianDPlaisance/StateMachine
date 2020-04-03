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
	//Name = Machine->GetName();
}

void SetMachineRef(ABaseMachineInterface* Machine)
{

}
ABaseMachineInterface::~ABaseMachineInterface()
{

}

void ABaseMachineInterface::BeginState(ABaseMachineInterface& Machine)
{
	/*if (CurState != nullptr)
	{
		(*CurState)->State->BeginState(*this);
	}*/
}

void ABaseMachineInterface::ProcessState(ABaseMachineInterface& Machine)
{
	/*if(CurState != nullptr)
		(*CurState)->State->ProcessState(*this);*/
}

void ABaseMachineInterface::EndState(ABaseMachineInterface& Machine)
{
	/*if(CurState != nullptr)
		(*CurState)->State->EndState(*this);*/
}

FString ABaseMachineInterface::GetName()
{
	/*if (CurState != nullptr)
		return (*CurState)->State->GetName(*this);
	else
		return "BaseMachineInterface";*/
	UE_LOG(LogTemp, Warning, TEXT("BASE VIRUTAL FUNCTION RAN!"));
	return "BaseMachineInterface";
}
