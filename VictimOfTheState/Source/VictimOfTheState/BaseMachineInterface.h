// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include <memory>
#include "BaseMachineInterface.generated.h"
/**
 * 
 */
//struct Interface;

UCLASS()
class VICTIMOFTHESTATE_API ABaseMachineInterface : public APlayerController
{
	GENERATED_BODY()

public:
	FString Name;
	ABaseMachineInterface();
	ABaseMachineInterface(ABaseMachineInterface* Machine);
	virtual ~ABaseMachineInterface();

	virtual void BeginState(ABaseMachineInterface& Machine);
	virtual void ProcessState(ABaseMachineInterface& Machine);
	virtual void EndState(ABaseMachineInterface& Machine);
	virtual FString GetName(/*ABaseMachineInterface& Machine*/);

	void SetMachineRef(ABaseMachineInterface* Machine);

	
};

//struct Interface
//{
//	FString Name;
//	ABaseMachineInterface* State;
//};
