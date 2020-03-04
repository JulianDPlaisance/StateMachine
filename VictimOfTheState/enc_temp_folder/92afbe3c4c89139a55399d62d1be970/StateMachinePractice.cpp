// Fill out your copyright notice in the Description page of Project Settings.


#include "StateMachinePractice.h"

// Sets default values
AStateMachinePractice::AStateMachinePractice()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AStateMachinePractice::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AStateMachinePractice::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

int AStateMachinePractice::getWallet()
{
	return 0;
}

