// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <memory>
/**
 * 
 */
class VICTIMOFTHESTATE_API BaseMachineInterface
{

public:
	TSharedPtr<BaseMachineInterface*> CurState;
	BaseMachineInterface();
	BaseMachineInterface(BaseMachineInterface* Machine);
	virtual ~BaseMachineInterface();
	FString Name;

	virtual void BeginState(BaseMachineInterface& Machine);
	virtual void ProcessState(BaseMachineInterface& Machine);
	virtual void EndState(BaseMachineInterface& Machine);

	
};
