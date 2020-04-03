// Fill out your copyright notice in the Description page of Project Settings.


#include "StatesHolder.h"

StatesHolder::StatesHolder()
{
}

StatesHolder::~StatesHolder()
{
}

Flying::Flying()
{
	Name = "Flying";
	UE_LOG(LogTemp, Warning, TEXT("Construct Flying NEVER RUNS!"));
}

void Flying::GetReference()
{
	//ABaseMachineInterface(this);
	UE_LOG(LogTemp, Warning, TEXT("Construct Flying"));
}

Flying::~Flying()
{
}

FString Flying::GetName(/*ABaseMachineInterface& Machine*/)
{
	return "Flying";
}

Walking::Walking()
{
}

Walking::~Walking()
{
}

FString Walking::GetName()
{
	return "Walking";
}
