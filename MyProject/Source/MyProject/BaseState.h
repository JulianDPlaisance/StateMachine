// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BaseState.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API UBaseState : public UObject
{
	GENERATED_BODY()
        
public:
    UBaseState() {}
    virtual ~UBaseState() {}
    virtual void Begin() {}
    virtual void Execute() {}
    virtual void End() {}
    virtual FString GetName() { return "Virtual"; }

private:
    //FString Name = "Virtual";
};
