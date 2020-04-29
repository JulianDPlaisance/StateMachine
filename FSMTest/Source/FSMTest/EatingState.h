// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StateObject.h"
//#include "FiniteStateMachine.h"
#include "EatingState.generated.h"

/**
 * 
 */

class UFiniteStateMachine;


UCLASS(BlueprintType, Blueprintable)
class FSMTEST_API UEatingState : public UStateObject
{
	GENERATED_BODY()

public:
	UEatingState();
	virtual void Begin(UFiniteStateMachine* F) override;
	virtual void End(UFiniteStateMachine* F) override;

};
