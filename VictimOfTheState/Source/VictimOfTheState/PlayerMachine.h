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

class Argm : public UObject
{
public:
	virtual void printt() { UE_LOG(LogTemp, Warning, TEXT("AAAAAAA")); }
};

class B : public Argm
{
public:
	virtual void printt() { UE_LOG(LogTemp, Warning, TEXT("BBBBBBBBBBBBBBBBBBBBBBB")); }
};


UCLASS()
class VICTIMOFTHESTATE_API APlayerMachine : public APlayerController
{
	GENERATED_BODY()

public:
	APlayerMachine();
	friend class UBaseMachineInterface;
	UFUNCTION(BlueprintCallable, Category = "State Machine")
	void InitState(UBaseMachineInterface* State);

protected:
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State Machine", meta = (DisplayName = "Machineptr", AllowPrivateAccess = "true"))
	UBaseMachineInterface* Machine;
	
	
public:
	UFUNCTION(BlueprintCallable, Category = "State Machine")
		UBaseMachineInterface* GetCurrentState();
	UFUNCTION(BlueprintCallable, Category = "State Machine")
		void ChangeState(UBaseMachineInterface* State);
	UFUNCTION(BlueprintCallable, Category = "State Machine")
		FString GetName();
	UFUNCTION(BlueprintCallable, Category = "State Machine")
		UBaseMachineInterface* GetMachine() { return Machine; }
};
