// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FiniteStateMachine.generated.h"

class UStateObject;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FSMTEST_API UFiniteStateMachine : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UFiniteStateMachine();

	// Switches state without using an END state, used when running a state for the first time

	UFUNCTION(BlueprintCallable, Category = "State Machine")
	template <class T>
	void InitStatez()
	{
		State = T::FSM_Init(this);
		//class UEatingState;
		//UEatingState* St = NewObject<UEatingState>(this, TEXT("EatingState"));
		//State = Cast<UStateObject>(St);
		//State->LinkFSM(this);
		State->Begin(this);
	}

	// Changes states by running End() of old state and Begin() of new state

	UFUNCTION(BlueprintCallable, Category = "State Machine")
	template<class T>
	void ChangeState()
	{
		State->End();
		T* St = NewObject<T>(this, TEXT("EatingState"));
		State = Cast<UStateObject>(St);
		State->LinkFSM(this);
		State->Begin();
	}

	UFUNCTION(BlueprintCallable, Category = "State Machine")
	void SetMessage(FText Mess) { Message = Mess; }

	UFUNCTION(BlueprintCallable, Category = "State Machine")
	FText GetMessage() { return Message; }

	//friend class UEatingState;

private:
	FText Message = FText::FromString("FSM.h");


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:

	UStateObject* State;

		
};
