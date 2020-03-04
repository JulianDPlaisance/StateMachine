// Fill out your copyright notice in the Description page of Project Settings.


#include "States.h"

States::States()
{
}

States::~States()
{
}

void coins::Gain(AStateMachinePractice& Prac, int Amt)
{
	int curMoney = Prac.getWallet();
	updateWallet(Prac, curMoney + Amt);
}

bool coins::Spendable(AStateMachinePractice& Prac, int Amt)
{
	int curMoney = Prac.getWallet();
	if (curMoney < Amt)
	{
		return false;
	}
	else
	{
		Spend(Prac, Amt);
		return true;
	}
}

void coins::Spend(AStateMachinePractice& Prac, int Amt)
{
	int curMoney = Prac.getWallet();
	updateWallet(Prac, curMoney - Amt);
}

int coins::getWallet(AStateMachinePractice& Prac)
{
	return 0;
}
