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
class VICTIMOFTHESTATE_API UBaseMachineInterface : public UObject
{
	GENERATED_BODY()

public:
	FString Name;
	UBaseMachineInterface();
	UBaseMachineInterface(UBaseMachineInterface* Machine);
	virtual ~UBaseMachineInterface();

	virtual void BeginState(UBaseMachineInterface& Machine);
	virtual void ProcessState(UBaseMachineInterface& Machine);
	virtual void EndState(UBaseMachineInterface& Machine);
	virtual FString GetName();

	void SetMachineRef(UBaseMachineInterface* Machine);

	
};

//struct Interface
//{
//	FString Name;
//	ABaseMachineInterface* State;
//};
