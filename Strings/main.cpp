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
	cout << endl << other << endl;

	while (true) { }
	return 0;
}