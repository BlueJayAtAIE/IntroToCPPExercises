#include "CopyMe.h"
#include <iostream>
#include <cstring> // Just in case.
#include <string>

using std::cout;
using std::cin;
using std::getline;
using std::endl;
using std::string;

CopyMe::CopyMe()
{

}

CopyMe& CopyMe::operator=(const CopyMe& rhs)
{
	myShallowString = rhs.myShallowString;
	myStringPointer = new string(* rhs.myStringPointer);
	simpleInt = rhs.simpleInt;

	return * this;
}

CopyMe::~CopyMe()
{

}

void CopyMe::printSelf()
{
	cout << myShallowString << " | " << myStringPointer << ": " << (myStringPointer)->c_str() << " | " << simpleInt << endl;
}
