// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StateMachinePractice.generated.h"

//UCLASS() 
//class VirutalState
//{
//
//};

UCLASS()
class VICTIMOFTHESTATE_API AStateMachinePractice : public AActor
{
	//friend class UVirtualState;
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AStateMachinePractice();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "State Machine")
	//	void Wallet(int Total);

	//UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "State Machine")
	//	void Gain(int Amt);

	//UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "State Machine")
	//	void Spend(int Amt);

	//UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "State Machine")
	//	int getWallet();


	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State Machine", meta = (DisplayName = "State Level", AllowPrivateAccess = "true", ToolTip = "This 1 Character details the current mode in which the state-machine is working"))
	//	char CurrentState{ 'Z' };

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State Machine", meta = (DisplayName = "State Level", AllowPrivateAccess = "true"))
	//	int TotalMoney{ 0 };
};
