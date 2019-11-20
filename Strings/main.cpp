#include <iostream>
#include <cstring> // Just in case.
#include <string>
#include "utils.h"

using std::cout;
using std::cin;
using std::getline;
using std::endl;
using std::string;

int main()
{
	hangman();

	string test = "Test";
	cout << test << endl;
	getline(cin, test, '\n');
	cout << test << endl;

	test = "abcdefgh";
	string other = everyOther(test);
	cout << endl << other << endl;
	test = "garbled";
	other = everyOther(test);
	cout << other << endl << endl;

	getline(cin, test, '\n');
	other = titleBestower(test);
	cout << endl << other << endl << endl;

	getline(cin, test, '\n');
	char inpuyt;
	cin >> inpuyt;
	cout << characterFrequency(test, inpuyt) << endl << endl;

	getline(cin, test, '\n');
	getline(cin, test, '\n'); // Yes this duplicate is here on purpose. It doesn't like to work otherwise. Any idea?
	getline(cin, other, '\n');
	cout << stringFrequency(test, other) << endl << endl;

	while (true) { }
	return 0;
}

// TESTING TO SEE HOW THIS SNIPPET FROM THE POWER POINT EVEN WORKS
//std::string input;
//int cat_appearances = 0;
//std::getline(std::cin, input, '\n');
	// npos can NOT be substituted for .size() or .length(). This seems to get it caught in a loop.
	// HOW THIS SEEMS TO WORK:
	// Starts at basically 0. Find the first instance of "cat".
	// Finds the first "cat". Then starts a new search right after the last one.
	// Keeps going until no more "cat"s are found, then exits.
//for (int i = input.find("cat", 0); i != std::string::npos; i = input.find("cat", i))
//{
//	cat_appearances++;
	// (Move past the last discovered instance to avoid finding same string)
//	i++; 
//}
//std::cout << cat_appearances;