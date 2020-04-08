// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseMachineInterface.h"

/**
 * 
 */
class VICTIMOFTHESTATE_API StatesHolder
{
public:
	StatesHolder();
	~StatesHolder();
};

class Flying : public UBaseMachineInterface
{
public:
	Flying();
	virtual ~Flying();
	FString GetName();
	void GetReference();
};

class Walking : public UBaseMachineInterface
{
public:
	Walking();
	virtual ~Walking();
	FString GetName();
};



