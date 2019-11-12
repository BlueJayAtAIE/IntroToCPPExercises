#include <iostream>
#include <cstring>
#include "utils.h"

using std::cout;
using std::cin;
using std::endl;

void exampleGarbage()
{
	char test[] = "Asdfghjkl";
	char testAlt[20] = ""; // This creates a 20 element long "string" of all Nulls
	char a[] = "a";
	char b[] = "b";

	// Un-comment this to print only Asdf- this adds the Null Terminator to the "string" at this position.
	//test[4] = '\0';

	// Un-comment this to see some garbage memory- this removes the automatically added Null Terminator.
	//test[9] = 'h';

	cout << test << endl;

	// Length will display up until the FIRST Null Terminator in the "string".
	cout << strlen(test) << endl;

	// Concatanate test onto testAlt
	// using the _s makes it so you can use an overload that is much safer.
	// The number (in this case 10) is the number of bytes to copy over.
	// In this case it's 10 because theres 9 letters, plus the Null.
	strcat_s(testAlt, 10, test);

	cout << testAlt << endl;

	// Some comparing
	cout << strcmp(a, b) << endl; // -1
	cout << strcmp(b, a) << endl; // 1
	cout << strcmp(a, a) << endl; // 0
}

void greeting()
{
	char input[50];

	cout << "Hello! What is your name?" << endl;
	cin.getline(input, 50);

	cout << "Hello " << input << "!" << endl;
}

void favoriteColor()
{
	char input[50];

	cout << "What is your favorite color?" << endl;
	cin.getline(input, 50);

	if (strcmp(input, "red") == 0 || strcmp(input, "Red") == 0)
	{
		cout << "Red is a cool color. I mean warm color." << endl;
	}
	else if (strcmp(input, "orange") == 0 || strcmp(input, "Orange") == 0)
	{
		cout << "No, your favorite color not your favorite fruit." << endl;
	}
	else if (strcmp(input, "yellow") == 0 || strcmp(input, "Yellow") == 0)
	{
		cout << "Do you enjoy staring into the sun?" << endl;
	}
	else if (strcmp(input, "green") == 0 || strcmp(input, "Green") == 0)
	{
		cout << "The best color." << endl;
	}
	else if (strcmp(input, "blue") == 0 || strcmp(input, "Blue") == 0)
	{
		cout << "Did you know there is no animal that can make a blue pigment naturally?" << endl << "All blue that occurs in animals is actually a result of cellular structure." << endl;
	}
	else if (strcmp(input, "purple") == 0 || strcmp(input, "Purple") == 0)
	{
		cout << "A very royal color." << endl;
	}
	else if (strcmp(input, "minty breen") == 0 || strcmp(input, "Minty Breen") == 0 || strcmp(input, "Minty breen") == 0 || strcmp(input, "minty Breen") == 0)
	{
		cout << "I've heard that name only one other time before..." << endl;
	}
	else
	{
		cout << "I've never really heard of that color before." << endl;
	}
}

void toUpper(char array[])
{
	for (size_t i = 0; i < strlen(array); i++)
	{
		if (array[i] >= 97 && array[i] <= 122)
		{
			array[i] = array[i] - 32;
		}
	}
}

void removeSpaces()
{

}

void substring(char array[], size_t start, size_t end)
{
	array[end + 1] = 0;

	for (size_t i = 0; i < end; i++)
	{
		array[i] = array[i + start];
	}
}

void stringReverse(char array[])
{

}

bool palindrome()
{
	return true;
}

int stringLength(char array[])
{
	return strlen(array);
}