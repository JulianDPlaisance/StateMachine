// Fill out your copyright notice in the Description page of Project Settings.


#include "FiniteStateMachine.h"
#include "Walking.h"
#include "EatingState.h"
#include "FlyingState.h"
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

void UFiniteStateMachine::ChangeState()
{
	State->End(this);
	UFlyingState* St = NewObject<UFlyingState>(this, TEXT("FlyingState"));
	State = Cast<UStateObject>(St);
	//State->UFlyingState::FSM_Init(this);
	State->Begin(this);
	State->Execute(this);
}

void UFiniteStateMachine::Set_ChangeState(StateEnum SE)
{
	State->End(this);
	switch (SE)
	{
	case StateEnum::EATING:
		State = Cast<UStateObject>(NewObject<UEatingState>(this, TEXT("EatingState")));
		break;
	case StateEnum::FLYING:
		State = Cast<UStateObject>(NewObject<UFlyingState>(this, TEXT("FlyingState")));
		break;
	case StateEnum::WALKING:
		State = Cast<UStateObject>(NewObject<UWalking>(this, TEXT("WalkingState")));
		break;
	}
	//State = Cast<UStateObject>(StO);
	State->Begin(this);
	State->Execute(this);
}

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

