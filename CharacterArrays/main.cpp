//#define _CRT_SECURE_NO_WARNINGS 1 // Uncomment to use the un-safe version of strcat

#include <iostream>
#include <cstring>
#include "utils.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
	char input[50];
	int userInputA = 0;
	int userInputB = 0;

	greeting();

	favoriteColor();

	cout << "Input a sentence with some lowercase letters to change it to all uppercase." << endl;
	cin.getline(input, 50);
	toUpper(input);
	cout << "Your sentence is now '" << input << "'." << endl;

	cout << "Input a sentence and I'll tell you how many characters it has." << endl;
	cin.getline(input, 50);
	cout << "It has " << stringLength(input) << " characters in it." << endl;

	cout << "Give me a sentence." << endl;
	cin.getline(input, 50);
	cout << "Now give me a character to start the cut at." << endl;
	cin >> userInputA;
	while (true)
	{
		if (userInputA > 0)
		{
			break;
		}
		else
		{
			cout << "No- please enter a positive number." << endl;
		}
	}
	cout << "Now give me a character to end the cut at." << endl;
	cin >> userInputB;
	while (true)
	{
		if (userInputB > 0)
		{
			break;
		}
		else
		{
			cout << "No- please enter a positive number." << endl;
		}
	}
	substring(input, userInputA, userInputB);
	cout << "Your sentence is now '" << input << "'." << endl;
	
	while (true) { }

	return 0;
}