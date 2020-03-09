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
	BaseMachineInterface(this);
}

Flying::~Flying()
{
}
