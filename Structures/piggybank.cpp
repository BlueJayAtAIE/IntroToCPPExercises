#include <iostream>
#include "piggybank.h"

using std::cout;
using std::cin;
using std::endl;

float calcPiggyBankNotes(piggyBank piggy)
{
	float total = 0;

	for (size_t i = 0; i < piggy.fiveDollarBills; i++)
	{
		total += 5;
	}
	for (size_t i = 0; i < piggy.twoDollarBills; i++)
	{
		total += 2;
	}
	for (size_t i = 0; i < piggy.oneDollarBills; i++)
	{
		total += 1;
	}

	return total;
}

float calcPiggyBankCoins(piggyBank piggy)
{
	float total = 0;

	for (size_t i = 0; i < piggy.quarters; i++)
	{
		total += 0.25f;
	}
	for (size_t i = 0; i < piggy.dimes; i++)
	{
		total += 0.10f;
	}
	for (size_t i = 0; i < piggy.nickels; i++)
	{
		total += 0.05f;
	}
	for (size_t i = 0; i < piggy.pennies; i++)
	{
		total += 0.01f;
	}

	return total;
}

float calcPiggyBankTotal(piggyBank piggy)
{
	float total = calcPiggyBankNotes(piggy) + calcPiggyBankCoins(piggy);
	return total;
}