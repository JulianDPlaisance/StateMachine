// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StateObject.h"
#include "SleepingState.generated.h"

/**
 * 
 */
UCLASS(BlueprintType, Blueprintable)
class FSMTEST_API USleepingState : public UStateObject
{
	GENERATED_BODY()
public:
	USleepingState();
	virtual void Begin(UFiniteStateMachine* F) override;
	virtual void End(UFiniteStateMachine* F) override;
	virtual void Execute(UFiniteStateMachine* F) override;
	
};
