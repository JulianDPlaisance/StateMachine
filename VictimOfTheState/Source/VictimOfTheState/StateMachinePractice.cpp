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

void AStateMachinePractice::Wallet(int Total)
{
	
}

void AStateMachinePractice::Gain(int Amt)
{
	CurState->Gain(*this, Amt);
}

bool AStateMachinePractice::Spendable(int Amt)
{
	return CurState->Spendable(*this, Amt);
}

void AStateMachinePractice::Spend(int Amt)
{
	CurState->Spend(*this, Amt);
}

int AStateMachinePractice::getWallet()
{
	return CurState->getWallet(*this);
}

