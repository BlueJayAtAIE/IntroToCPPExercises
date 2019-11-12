#include <iostream>
#include "utils.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
	person jon = { 26, 52.7, 22 };

	cout << "Jon's kill-count is: " << jon.killCount << "." << endl;

	cout << "Jon's current Mun amount is: " << jon.cash << "." << endl;
	// & gets the memory address of the variable.
	getMoney(&jon, 100);
	cout << "Jon's current Mun amount is: " << jon.cash << "." << endl;

	person* someone = &jon;
	erasePerson(&someone);
	someone == nullptr ? cout << "No-one is here..." << endl : cout << "Someone is listening..." << endl;

	while (true) { }

	return 0;
}