// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseMachineInterface.h"

UBaseMachineInterface::UBaseMachineInterface()
{
	//(*CurState) = nullptr;
	//(*CurState)->Name = nullptr;
	//(*CurState)->State = nullptr;
}

UBaseMachineInterface::UBaseMachineInterface(UBaseMachineInterface* Machine)
{
	//Name = Machine->GetName();
}

void SetMachineRef(UBaseMachineInterface* Machine)
{

}
UBaseMachineInterface::~UBaseMachineInterface()
{

}

void UBaseMachineInterface::BeginState(UBaseMachineInterface& Machine)
{
	/*if (CurState != nullptr)
	{
		(*CurState)->State->BeginState(*this);
	}*/
}

void UBaseMachineInterface::ProcessState(UBaseMachineInterface& Machine)
{
	/*if(CurState != nullptr)
		(*CurState)->State->ProcessState(*this);*/
}

void UBaseMachineInterface::EndState(UBaseMachineInterface& Machine)
{
	/*if(CurState != nullptr)
		(*CurState)->State->EndState(*this);*/
}

FString UBaseMachineInterface::GetName()
{
	/*if (CurState != nullptr)
		return (*CurState)->State->GetName(*this);
	else
		return "BaseMachineInterface";*/
	UE_LOG(LogTemp, Warning, TEXT("BASE VIRUTAL FUNCTION RAN!"));
	return "BaseMachineInterface";
}
