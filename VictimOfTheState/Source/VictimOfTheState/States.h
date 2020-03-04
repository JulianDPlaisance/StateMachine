// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StateMachinePractice.h"

class VICTIMOFTHESTATE_API States
{
public:
	States();
	~States();
};


class coins : public UVirtualState
{
public:
	virtual void Gain(AStateMachinePractice& Prac, int Amt);
	virtual bool Spendable(AStateMachinePractice& Prac, int Amt);
	virtual void Spend(AStateMachinePractice& Prac, int Amt);
	virtual int getWallet(AStateMachinePractice& Prac);
};
