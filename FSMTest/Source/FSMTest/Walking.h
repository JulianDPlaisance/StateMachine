// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StateObject.h"
#include "Walking.generated.h"

/**
 * 
 */
UCLASS()
class FSMTEST_API UWalking : public UStateObject
{
	GENERATED_BODY()
	
public:
	UWalking();
	virtual void Begin(UFiniteStateMachine* F) override;
	static UStateObject* FSM_Init(UFiniteStateMachine* F);
};
