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

    template < class StateForm >
    UFUNCTION(BlueprintCallable, Category = "State Machine")
        FORCEINLINE void ChangeState(StateForm T)
    {
        if (TSubclassOf<UBaseState>() && T != nullptr)
        {
            state = T;
        }
    }
    UFUNCTION(BlueprintCallable, Category = "State Machine")
        FString GetStateName();

    UFUNCTION(BlueprintCallable, Category = "State Machine")
        void SwitchState();
    
protected:

private:
    UBaseState* state;
};
