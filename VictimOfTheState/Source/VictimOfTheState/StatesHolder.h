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

class Flying : public BaseMachineInterface
{
public:
	Flying();
	virtual ~Flying();
};



