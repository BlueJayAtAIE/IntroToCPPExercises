#include <iostream>
#include "utils.h"

using std::cout;
using std::cin;
using std::endl;

void printFloats(float* arr, size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i];
		i != size - 1 ? cout << ", " : cout << endl;
	}
}

void printInts(int* arr, size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i];
		i != size - 1 ? cout << ", " : cout << endl;
	}
}

void printBools(bool* arr, size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i];
		i != size - 1 ? cout << ", " : cout << endl;
	}
}

int arraySum(int* arr, size_t size)
{
	int total = 0;

	for (size_t i = 0; i < size; i++)
	{
		total += arr[i];
	}

	return total;
}

void initBools(bool* arr, size_t size, bool defaultValue)
{
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = defaultValue;
	}
}

int* zeroArray(size_t size)
{
	int* arr = new int[size];

	for (size_t i = 0; i < size; i++)
	{
		arr[i] = 0;
	}

	return arr;
}

void loveNumbers()
{
	int userInput = 0;
	int userInputArr = 0;
	cout << "Give me a number to determine how many numbers you'll enter for the next bit." << endl;
	cin >> userInputArr;

	int* userArray = zeroArray(userInputArr);

	for (size_t i = 0; i < userInputArr; i++)
	{
		cout << "Okay, what is number " << i + 1 << "?" << endl;
		cin >> userInput;
		userArray[i] = userInput;
	}

	cout << endl << "Okay, heres all those numbers again: ";
	printInts(userArray, userInputArr);
}

int* duplicateArray(int* origArray, size_t size)
{
	int* arr = origArray;
	return arr;
}

int* subArray(int* origArray, size_t size, size_t min, size_t max)
{
	int newArraySize = size - (size - max) - min;
	int* arr = new int[newArraySize];
	for (size_t i = min; i < max; i++)
	{
		int j = 0;
		arr[j] = origArray[i];
		j++;
	}
	return arr;
}