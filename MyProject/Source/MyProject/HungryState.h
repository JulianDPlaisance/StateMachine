// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseState.h"
#include "HungryState.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API UHungryState : public UBaseState
{
	GENERATED_BODY()
	
public:
	UHungryState() {}
	virtual ~UHungryState() {}

	virtual FString GetName() { return "Hungry"; }
};
