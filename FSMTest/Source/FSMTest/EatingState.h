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


UCLASS()
class FSMTEST_API UEatingState : public UStateObject
{
	GENERATED_BODY()

public:
	UEatingState();
	virtual void Begin(UFiniteStateMachine* F) override;
	static UStateObject* FSM_Init(UFiniteStateMachine* F);

};
