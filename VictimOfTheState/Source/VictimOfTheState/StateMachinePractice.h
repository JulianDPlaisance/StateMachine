// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StateMachinePractice.generated.h"

UCLASS() 
class UVirutalState : public UObject
{
	GENERATED_BODY()
};

UCLASS()
class VICTIMOFTHESTATE_API AStateMachinePractice : public AActor
{
	friend class UVirtualState;
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AStateMachinePractice();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UVirtualState* CurState;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "State Machine")
		void Wallet(int Total);

	UFUNCTION(BlueprintCallable, Category = "State Machine")
		void Gain(int Amt);

	UFUNCTION(BlueprintCallable, Category = "State Machine")
		bool Spendable(int Amt);

	UFUNCTION(BlueprintCallable, Category = "State Machine")
		void Spend(int Amt);

	UFUNCTION(BlueprintCallable, Category = "State Machine")
		int getWallet();


	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State Machine", meta = (DisplayName = "State Level", AllowPrivateAccess = "true", ToolTip = "This 1 Character details the current mode in which the state-machine is working"))
		char CurrentState{ 'Z' };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State Machine", meta = (DisplayName = "State Level", AllowPrivateAccess = "true"))
		int TotalMoney{ 0 };
};


class UVirtualState {
public:
	virtual void Gain(AStateMachinePractice& Prac, int Amt) = 0;
	virtual bool Spendable(AStateMachinePractice& Prac, int Amt) = 0;
	virtual void Spend(AStateMachinePractice& Prac, int Amt) = 0;
	virtual int getWallet(AStateMachinePractice& Prac) = 0;
};

