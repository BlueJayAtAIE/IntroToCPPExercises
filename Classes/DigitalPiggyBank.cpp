#include "DigitalPiggyBank.h"

void DigitalPiggyBank::deposit(float net)
{
	currentBalance += net;
}

float DigitalPiggyBank::withdraw()
{
	float amt = currentBalance;
	currentBalance = 0;
	return amt;
}

float DigitalPiggyBank::balance()
{
	return currentBalance;
}