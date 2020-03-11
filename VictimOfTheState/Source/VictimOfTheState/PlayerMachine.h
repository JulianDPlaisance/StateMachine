// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "BaseMachineInterface.h"
#include "StatesHolder.h"
#include "PlayerMachine.generated.h"

/**
 * 
 */
UCLASS()
class VICTIMOFTHESTATE_API APlayerMachine : public APlayerController
{
	GENERATED_BODY()

public:
	friend class ABaseMachineInterface;
	void InitState(ABaseMachineInterface* State);

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State Machine", meta = (DisplayName = "Machineptr", AllowPrivateAccess = "true"))
	ABaseMachineInterface* Machine;
	
public:
	virtual ABaseMachineInterface& GetCurrentState();
	virtual void ChangeState(ABaseMachineInterface* State);
};
