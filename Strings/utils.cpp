#include <iostream>
#include <cstring> // Just in case.
#include <string>
#include "utils.h"

using std::cout;
using std::cin;
using std::getline;
using std::endl;
using std::string;

string everyOther(string input)
{
	string result;

	for (size_t i = 0; i < input.length(); i++)
	{
		if (i % 2 == 1)
		{
			result += input[i];
		}
	}

	return result;
}

string titleBestower(string input)
{
	string result = input;

	int rng = rand() % 10;
	switch (rng)
	{
	case 0:
		result += ", the Cheerful";
		break;
	case 1:
		result += ", the Triumphant";
		break;
	case 2:
		result += ", the Healthy";
		break;
	case 3:
		result += ", the Wise";
		break;
	case 4:
		result += ", the Brave";
		break;
	case 5:
		result += ", the Traitor";
		break;
	case 6:
		result += ", the Destroyer of Worlds";
		break;
	case 7:
		result += ", the Survivor";
		break;
	case 8:
		result += ", the Hunter";
		break;
	case 9:
		result += ", the Watcher";
		break;
	default:
		result += ", the Default";
		break;
	}

	return result;
}

// Enter anything longer than 1 character and it'll only use the first character to check.
int characterFrequency(string input, char check)
{
	int occurances = 0;

	for (int i = 0; i < input.length(); i++)
	{
		if (input[i] == check)
		{
			occurances++;
		}
	}

	return occurances;
}

int stringFrequency(string input, string check)
{
	int occurances = 0;

	for (int i = input.find(check, 0); i != std::string::npos; i = input.find(check, i))
	{
		occurances++;
		i++;
	}

	return occurances;
}

void hangman()
{
	string toGuess;
	int strikes = 0;

	int rng = rand() % 10;
	switch (rng)
	{
	case 0:
		toGuess += "guess";
		break;		 
	case 1:			 
		toGuess += "exist";
		break;		 
	case 2:			 
		toGuess += "combined";
		break;		 
	case 3:			 
		toGuess += "several";
		break;		 
	case 4:			 
		toGuess += "cram";
		break;		 
	case 5:			 
		toGuess += "confusing";
		break;		 
	case 6:			 
		toGuess += "watching";
		break;		 
	case 7:			 
		toGuess += "question";
		break;		 
	case 8:			 
		toGuess += "something";
		break;		 
	case 9:			 
		toGuess += "general";
		break;		 
	default:		 
		toGuess += "default";
		break;
	}

	string guessProg;
	for (size_t i = 0; i < toGuess.length(); i++)
	{
		guessProg += " _";
	}

	while (strikes < 5)
	{
		char userInput = '?';
		cout << guessProg << endl;
		cout << "Strikes: " << strikes << endl;
		cin >> userInput;

		bool hasLetter = false;
		for (size_t i = 0; i < toGuess.length(); i++)
		{
			if (userInput == toGuess[i])
			{
				guessProg.erase(i + 1, 1);
				guessProg.insert(i, & userInput);
				hasLetter = true;
			}
		}

		if (!hasLetter)
		{
			strikes++;
		}
	}
}