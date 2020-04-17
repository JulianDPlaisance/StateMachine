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



// Called when the game starts
void UFiniteStateMachine::BeginPlay()
{
	Super::BeginPlay();
	InitStatez<UEatingState>();
	// ...
	
}


// Called every frame
void UFiniteStateMachine::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

