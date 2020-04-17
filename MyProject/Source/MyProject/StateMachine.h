// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseState.h"
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
    void ChangeState();
protected:

private:
    UBaseState* state;
};
