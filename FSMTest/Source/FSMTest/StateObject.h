// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StateObject.generated.h"

class UFiniteStateMachine;


UCLASS()
class FSMTEST_API UStateObject : public UObject
{
	GENERATED_BODY()

public:
	UStateObject();

	virtual ~UStateObject() {}

	virtual void Begin(UFiniteStateMachine* F) { return; }
	virtual void Execute(UFiniteStateMachine* F) { return; }
	virtual void End(UFiniteStateMachine* F) { return; }


	static UStateObject* FSM_Init(UFiniteStateMachine* F);

	
};
