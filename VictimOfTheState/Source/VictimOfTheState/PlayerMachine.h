// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "BaseMachineInterface.h"
#include "StatesHolder.h"
#include <memory>
#include "PlayerMachine.generated.h"

/**
 * 
 */
UCLASS()
class VICTIMOFTHESTATE_API APlayerMachine : public APlayerController
{
	GENERATED_BODY()

public:
	APlayerMachine();
	friend class ABaseMachineInterface;
	UFUNCTION(BlueprintCallable, Category = "State Machine")
	void InitState(ABaseMachineInterface* State);

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State Machine", meta = (DisplayName = "Machineptr", AllowPrivateAccess = "true"))
	ABaseMachineInterface* Machine;
	
	
public:
	UFUNCTION(BlueprintCallable, Category = "State Machine")
		ABaseMachineInterface* GetCurrentState();
	UFUNCTION(BlueprintCallable, Category = "State Machine")
		void ChangeState(ABaseMachineInterface* State);
	UFUNCTION(BlueprintCallable, Category = "State Machine")
		FString GetName();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State Machine", meta = (DisplayName = "MachineNAME", AllowPrivateAccess = "true"))
		FString name = "Signore";
};
