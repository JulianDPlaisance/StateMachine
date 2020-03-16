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
	ABaseMachineInterface(this);
}

Flying::~Flying()
{
}

FString Flying::GetName(ABaseMachineInterface& Machine)
{
	return "Flying";
}

Walking::Walking()
{
}

Walking::~Walking()
{
}

FString Walking::GetName(ABaseMachineInterface& Machine)
{
	return "Walking";
}
