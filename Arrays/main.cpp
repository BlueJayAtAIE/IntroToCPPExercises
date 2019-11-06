#include <iostream>
#include "utils.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int numbersA[4]{ 0, 1, 2, 3 };
	int numbersB[6]{ 2, 4, 8, 16, 32, 64 };
	int numbersC[4]{ 33, 74, 52, 9 };
	int numbersD[5]{ 4, 5, 7, 8, 9 };
	int numbersE[5]{ 1, 2, 6, 8, 2 };
	int numbersF[5]{ 3, 2, 1, 7, 5 };

	printNumbers(numbersA, 4);
	printNumbers(numbersB, 6);
	printNumbers(numbersC, 4);

	cout << endl;

	cout << sumNumbers(numbersA, 4) << endl;
	cout << sumNumbers(numbersB, 6) << endl;
	cout << sumNumbers(numbersC, 4) << endl;

	cout << endl;

	cout << largestNumber(numbersA, 4) << endl;
	cout << largestNumber(numbersB, 6) << endl;
	cout << largestNumber(numbersC, 4) << endl;

	cout << endl;

	cout << findIndex(numbersD, 5, 5, 0) << endl; 
	cout << findIndex(numbersE, 5, 7, 0) << endl;
	cout << findIndex(numbersF, 5, 5, 0) << endl;

	cout << endl;

	cout << countElement(numbersD, 5, 5, 0) << endl; 
	cout << countElement(numbersE, 5, 7, 0) << endl;
	cout << countElement(numbersE, 5, 2, 0) << endl;
	cout << countElement(numbersF, 5, 5, 0) << endl;

	cout << endl;

	cout << arrayUnique(numbersD, 5) << endl;
	cout << arrayUnique(numbersE, 5) << endl;
	cout << arrayUnique(numbersF, 5) << endl;

	while (true)
	{

	}

	return 0;
}