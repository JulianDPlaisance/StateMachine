// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StateObject.h"
#include "Components/ActorComponent.h"
#include "FiniteStateMachine.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FSMTEST_API UFiniteStateMachine : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UFiniteStateMachine();
	
	// Switches state without using an END state, used when running a state for the first time
	template <class T>
	UFUNCTION()
	void InitState()
	{
		T* Temp = NewObject<T>(this);
		State = Cast<UStateObject>(Temp);
		State->Begin(this);
	}

	// C++ function, Changes states by running End() of old state and Begin() of new state
	template<class T>
	UFUNCTION()
	void ChangeState()
	{
		State->End(this);
		T* Temp = NewObject<T>(this);
		State = Cast<UStateObject>(Temp);
		State->Begin(this);
	}

	//Blueprint function, Changes states by running End() of old state and Begin() of new state
	UFUNCTION(BlueprintCallable, Category = "State Machine")
	void ChangeState(TSubclassOf<UStateObject> StateClass)
	{
		State->End(this);
		State = NewObject<UStateObject>(this, *StateClass);
		State->Begin(this);
	}

	UFUNCTION(BlueprintCallable, Category = "State Machine")
	void SetMessage(FText Mess) { Message = Mess; }

	UFUNCTION(BlueprintCallable, Category = "State Machine")
	FText GetMessage() { return Message; }

	UFUNCTION(BlueprintCallable, Category = "State Machine")
		UStateObject* GetState() { return State; }


private:
	FText Message = FText::FromString("FSM.h");


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

protected:

	UStateObject* State;

		
};
