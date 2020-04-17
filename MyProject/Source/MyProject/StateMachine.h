// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EatingState.h"
#include "HungryState.h"
#include "Components/ActorComponent.h"
#include "StateMachine.generated.h"

/**
 * 
 */
UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class MYPROJECT_API UStateMachine : public UActorComponent
{
	GENERATED_BODY()

public:
    UStateMachine() {};
    UFUNCTION(BlueprintCallable, Category = "State Machine")
        void ChangeState();
    UFUNCTION(BlueprintCallable, Category = "State Machine")
        FString GetStateName();


protected:

private:
    UBaseState* state;
};
