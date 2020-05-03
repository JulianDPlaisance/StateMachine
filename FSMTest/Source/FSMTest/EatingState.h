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
	virtual void Begin_Implementation(UFiniteStateMachine* F) override;
	virtual void Execute_Implementation(UFiniteStateMachine* F) override;
	virtual void End_Implementation(UFiniteStateMachine* F) override;

};
