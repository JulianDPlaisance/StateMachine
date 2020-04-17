// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseState.h"
#include "EatingState.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API UEatingState : public UBaseState
{
	GENERATED_BODY()
	
public:
	UEatingState() {}
	virtual ~UEatingState() {}
	virtual void Begin();
	virtual void Execute();
	virtual void End();
	virtual FString GetName() { return "Eating"; }

private:
	//Name = "Eating";
	//Super::Name = "Eating";
};
