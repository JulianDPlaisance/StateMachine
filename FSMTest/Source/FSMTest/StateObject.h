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
	//default constructor
	UStateObject();
	//virtual default destructor, override if using pure c++ pointers
	virtual ~UStateObject() {}

	/***********	Blueprint overrideable Functions.	***********/

	/*	
	*	Blueprint Begin function, use to setup state when switched to it.  
	*	If called in Blueprints without being overriden in Blueprints, 
	*	will call Begin_Implementation by default
	/**/
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "State Machine")
		void Begin(UFiniteStateMachine* F);

	/*	
	*	Blueprint Execute function, use during state, only call after Begin has been called once
	*	If called in Blueprints without being overriden in Blueprints,
	*	will call Execute_Implementation by default
	/**/
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "State Machine")
		void Execute(UFiniteStateMachine* F);

	/*	
	*	Blueprint End function, use to cleanup && end state before calling Begin of another state
	*	If called in Blueprints without being overriden in Blueprints,
	*	will call End_Implementation by default
	/**/
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "State Machine")
		void End(UFiniteStateMachine* F);

	/***********	C-PlusPlus virtual Functions.	***********/

	/*	
	*	C++ Begin function, use to setup state when switched to it.
	*	If Blueprint Begin function is called but not overrided in Blueprints,
	*	will be automatically called by default.
	*	The function is virtual, allowing a call from a pointer to this base class
	*	to smartly call a child's overriden version of the function
	/**/
	virtual void Begin_Implementation(UFiniteStateMachine* F) { return; }

	/*	
	*	C++ Execute function, use during state, only call after Begin has been called once
	*	If Blueprint Execute function is called but not overrided in Blueprints,
	*	will be automatically called by default.
	*	The function is virtual, allowing a call from a pointer to this base class
	*	to smartly call a child's overriden version of the function
	/**/
	virtual void Execute_Implementation(UFiniteStateMachine* F) { return; }

	/*	
	*	C++ Begin function, use to cleanup && end state before calling Begin of another state
	*	If Blueprint End function is called but not overrided in Blueprints,
	*	will be automatically called by default.
	*	The function is virtual, allowing a call from a pointer to this base class
	*	to smartly call a child's overriden version of the function
	/**/
	virtual void End_Implementation(UFiniteStateMachine* F) { return; }

	/***********	Static Functions	***********/

	/*
	*	Static function, old code?
	/**/
	static UStateObject* FSM_Init(UFiniteStateMachine* F);

	
};
