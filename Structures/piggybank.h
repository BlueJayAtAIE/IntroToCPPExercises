#pragma once

struct piggyBank
{
	int oneDollarBills;
	int twoDollarBills;
	int fiveDollarBills;

	int quarters;
	int dimes;
	int nickels;
	int pennies;
};

float calcPiggyBankNotes(piggyBank piggy);

float calcPiggyBankCoins(piggyBank piggy);

float calcPiggyBankTotal(piggyBank piggy);