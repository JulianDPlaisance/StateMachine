// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StateObject.generated.h"

class UFiniteStateMachine;


UCLASS(BlueprintType, Blueprintable)
class FSMTEST_API UStateObject : public UObject
{
	GENERATED_BODY()

public:
	UStateObject();

	virtual ~UStateObject() {}
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "State Machine")
		void Begin(UFiniteStateMachine* F);

	virtual void Begin_Implementation(UFiniteStateMachine* F) { return; }

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "State Machine")
		void Execute(UFiniteStateMachine* F);

	virtual void Execute_Implementation(UFiniteStateMachine* F) { return; }

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "State Machine")
		void End(UFiniteStateMachine* F);

	virtual void End_Implementation(UFiniteStateMachine* F) { return; }


	static UStateObject* FSM_Init(UFiniteStateMachine* F);

	
};
