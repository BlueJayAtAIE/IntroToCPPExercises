#pragma once
#include <iostream>
#include <cstring> // Just in case.
#include <string>

using std::cout;
using std::cin;
using std::getline;
using std::endl;
using std::string;

class CopyMe
{
public:
	string * myStringPointer;
	string myShallowString;
	int simpleInt; // previously named int simpleFlips.

	CopyMe();

	CopyMe& operator=(const CopyMe& rhs);

	~CopyMe();

	void printSelf();
};

