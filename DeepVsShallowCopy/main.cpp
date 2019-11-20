#include <iostream>
#include <cstring> // Just in case.
#include <string>
#include "CopyMe.h"

using std::cout;
using std::cin;
using std::getline;
using std::endl;
using std::string;

void continuePrompt();

int main()
{
	CopyMe test1;
	test1.myShallowString = "Shallow String";
	test1.myStringPointer = new string("Pointer to Heap");
	test1.simpleInt = 52;

	cout << "Printing Test1..." << endl;
	test1.printSelf();
	continuePrompt();

	CopyMe test2 = test1; // This seems to mimic a Shallow copy even with the override. Good to know!
	cout << "Test1 was Shallow Copied to Test2. Here are both of them:" << endl;
	test1.printSelf();
	test2.printSelf();
	continuePrompt();

	test1.myStringPointer->append(" ... Oh no I've been appended.");
	cout << "Test1 was modified. Hows Test2 looking?" << endl;
	test1.printSelf();
	test2.printSelf();
	cout << "oh yikes" << endl;
	continuePrompt();

	CopyMe test3;
	test3.myShallowString = "DEEP String";
	test3.myStringPointer = new string("Pointer to Heap");
	test3.simpleInt = 4;
	cout << "Lets try this again. This is Test3." << endl;
	test3.printSelf();
	continuePrompt();

	CopyMe test4;
	test4 = test3;
	cout << "Test1 was Deep Copied to Test2. Here are both of them:" << endl;
	test3.printSelf();
	test4.printSelf();
	continuePrompt();

	test3.myStringPointer->append(" ... Oh no I've been appended.");
	cout << "Test3 was modified. Hows Test4 looking?" << endl;
	test3.printSelf();
	test4.printSelf();
	cout << "oh nice" << endl;
	continuePrompt();

	return 0;
}

void continuePrompt()
{
	cout << "Press enter to continue." << endl;
	while (cin.get() != '\n') { }
}