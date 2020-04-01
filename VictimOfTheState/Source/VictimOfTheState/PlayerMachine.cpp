// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerMachine.h"

APlayerMachine::APlayerMachine()
{
	Machine = NewObject<Flying>();
}

void APlayerMachine::InitState(ABaseMachineInterface* State)
{
	UE_LOG(LogTemp, Warning, TEXT("Construct <Flying>"));
	Machine = NewObject<Flying>();

	if (Machine != nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Flying succesfully constructed"));
		Flying* flying = Cast<Flying>(Machine);
		flying->GetReference();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Not constructed"));
	}
	//Machine->BeginState(*Machine);
}

ABaseMachineInterface* APlayerMachine::GetCurrentState()
{
	return Machine;
}

void APlayerMachine::ChangeState(ABaseMachineInterface* State)
{
	Machine->EndState(*Machine);
	Machine = State;
	Machine->BeginState(*Machine);
}

FString APlayerMachine::GetName()
{
	if (Machine != nullptr)
		return Machine->GetName(*Machine);
	else
		return "nullptr";
}
