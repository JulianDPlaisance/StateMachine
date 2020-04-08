// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerMachine.h"

APlayerMachine::APlayerMachine()
{
	Machine = NewObject<UBaseMachineInterface>();
}

void APlayerMachine::InitState(UBaseMachineInterface* State)
{
	UE_LOG(LogTemp, Warning, TEXT("Construct <Flying>"));
	//Machine = NewObject<Flying>();
	
	if (Machine != nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Flying succesfully constructed"));
		Flying* flying = Cast<Flying>(Machine);
		flying->GetName();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Not constructed"));
	}
	/**/
	//Machine->BeginState(*Machine);
}

UBaseMachineInterface* APlayerMachine::GetCurrentState()
{
	return Machine;
}

void APlayerMachine::ChangeState(UBaseMachineInterface* State)
{
	Machine->EndState(*Machine);
	Machine = State;
	Machine->BeginState(*Machine);
}

FString APlayerMachine::GetName()
{
	Argm* bleh = NewObject<B>();
	bleh->printt();
	if (Machine != nullptr)
	{
		return Machine->GetName();
	}
	else
	{
		return "nullptr";
	}
}
