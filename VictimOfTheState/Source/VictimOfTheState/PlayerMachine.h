// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "BaseMachineInterface.h"
#include "PlayerMachine.generated.h"

/**
 * 
 */
UCLASS()
class VICTIMOFTHESTATE_API APlayerMachine : public APlayerController
{
	GENERATED_BODY()

public:
	friend class BaseMachineInterface;
	void InitState(BaseMachineInterface* State);

protected:
	BaseMachineInterface* Machine;
	
public:
	virtual BaseMachineInterface& GetCurrentState();
	virtual void ChangeState(BaseMachineInterface* State);
};
