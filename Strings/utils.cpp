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