// Fill out your copyright notice in the Description page of Project Settings.


#include "FiniteStateMachine.h"
#include "EatingState.h"
//class UEatingState;

// Sets default values for this component's properties
UFiniteStateMachine::UFiniteStateMachine()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	

	//UObject* State = NewObject<UObject>(this, AEatingState);
	// ...
}


void UFiniteStateMachine::InitState()
{
	State = UEatingState::FSM_Init(this);
	//class UEatingState;
	//UEatingState* St = NewObject<UEatingState>(this, TEXT("EatingState"));
	//State = Cast<UStateObject>(St);
	//State->LinkFSM(this);
	State->Begin(this);
}

//void UFiniteStateMachine::ChangeState()
//{
	//State->End();
	//UEatingState* St = NewObject<UEatingState>(this, TEXT("EatingState"));
	//State = Cast<UStateObject>(St);
	//State->LinkFSM(this);
	//State->Begin();
//}

// Called when the game starts
void UFiniteStateMachine::BeginPlay()
{
	Super::BeginPlay();
	InitState();
	// ...
	
}


// Called every frame
void UFiniteStateMachine::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

