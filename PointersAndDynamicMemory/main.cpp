#include <iostream>
#include "utils.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
	const int defaultArraySize = 10;
	int userInput = 0, userInputB = 0;

	// Print Floats -------------------
	float numbers[defaultArraySize];
	for (size_t i = 0; i < defaultArraySize; i++)
	{
		numbers[i] = i;
	}

	printFloats(numbers, defaultArraySize);

	// Add All Numbers -------------------
	int numbersI[defaultArraySize];
	for (size_t i = 0; i < defaultArraySize; i++)
	{
		numbersI[i] = i;
	}

	cout << endl << "The sum of the above array:" << endl;
	cout << arraySum(numbersI, defaultArraySize) << endl;

	// Init Bools ------------------------
	bool bools[defaultArraySize];
	for (size_t i = 0; i < defaultArraySize; i++)
	{
		// Going to pat myself on the back for using this even if it is a basic concept.
		// I only just figured out how to use these and it looks so nice...
		i % 2 == 0 ? bools[i] = true : bools[i] = false;
	}

	cout << endl << "Bool array before being changed:" << endl;
	printBools(bools, defaultArraySize);

	cout << endl << "Bool array after being changed:" << endl;
	initBools(bools, defaultArraySize, true);
	printBools(bools, defaultArraySize);

	// Zero array ------------------------
	cout << endl << "Hey- give me a whole positive number and I'll make you a new array with that size." << endl;
	cin >> userInput;
	int* zeroArr = zeroArray(userInput);
	cout << "Alright, heres that array:" << endl;
	printInts(zeroArr, userInput);

	// I <3 Numbers ----------------------
	cout << endl;
	loveNumbers();
	cout << endl;

	// Dupe Array ------------------------
	cout << "This is a duplicate of the array from the very start: " << endl;
	int* test = duplicateArray(numbersI, defaultArraySize);
	printInts(test, defaultArraySize);
	cout << "Doesn't look all that different huh?" << endl;

	// Get Subarray ----------------------
	cout << endl << "Now we'll get a sub-array of that duplicated one. Enter a lower-bounding number:" << endl;
	cin >> userInput;
	cout << "Enter an upper-bounding number:" << endl;
	cin >> userInputB;
	int* intSubArray = subArray(numbersI, defaultArraySize, userInput, userInputB);
	printInts(intSubArray, 10);

	// ALL DELETES GO BELOW HERE:
	delete[] zeroArr;
	delete[] intSubArray;

	while (true) {}

	return 0;
}