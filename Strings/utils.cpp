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
	bool win = false;
	int strikes = 0;

	int rng = rand() % 10;
	rng = 9; // Test please ignore.
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

	// Creates the string with the "_"s to indicate how long the word is.
	string guessProg;
	for (size_t i = 0; i < toGuess.length(); i++)
	{
		guessProg += "_ ";
	}

	while (strikes < 5)
	{
		// userInput is a string for the ease of comparison. In the case the
		// player enters more than one character, it will always take the first one.
		string userInput;

		// Display progress, wait for input.
		cout << guessProg << endl;
		cout << "Strikes: " << strikes << endl;

		// Checks if the player has completed the word, winning the game.
		// The check is here so the player can see the completed word before winning.
		if (characterFrequency(guessProg, '_') == 0)
		{
			win = true;
			break;
		}

		cin >> userInput;

		bool hasLetter = false;
		// Check if the player has already entered that letter.
		if (characterFrequency(guessProg, userInput[0]) > 0)
		{
			cout << "You already entered that letter!" << endl;
			hasLetter = true;
		}

		// Replace the "_"s with the proper letter.
		// This will only run if the letter wasn't already entered
		if (!hasLetter)
		{
			for (size_t i = 0; i < toGuess.length(); i++)
			{
				if (userInput[0] == toGuess[i])
				{
					guessProg.replace(i + (1 * i), 1, userInput);
					hasLetter = true;
				}
			}
		}
		// If the above for ran and never found a letter to replace, give a strike.
		if (!hasLetter)
		{
			strikes++;
		}

		cout << endl;
	}

	if (win)
	{
		// Fanfare.
		cout << "You are winner" << endl;
	}
	else
	{
		// This kills the man.
		cout << "You have payed for your crimes." << endl;
	}
}