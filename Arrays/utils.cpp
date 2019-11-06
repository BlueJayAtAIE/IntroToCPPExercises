#include <iostream>
#include "utils.h"

using std::cout;
using std::cin;
using std::endl;

void printNumbers(int numbers[], size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << numbers[i] << endl;
	}

	cout << endl;
}

int sumNumbers(int numbers[], size_t size)
{
	int temp = 0;

	for (size_t i = 0; i < size; i++)
	{
		temp += numbers[i];
	}

	return temp;
}

int largestNumber(int numbers[], size_t size)
{
	int temp = INT16_MIN;

	for (size_t i = 0; i < size; i++)
	{
		if (temp < numbers[i])
		{
			temp = numbers[i];
		}
	}

	return temp;
}

int findIndex(int numbers[], size_t size, int value, int start)
{
	for (size_t i = start; i < size; i++)
	{
		if (numbers[i] == value)
		{
			return i;
		}
	}

	// If the value is found at no indexes.
	return -1;
}

int countElement(int numbers[], size_t size, int value, int start)
{
	int count = 0;

	for (size_t i = start; i < size; i++)
	{
		if (numbers[i] == value)
		{
			count++;
		}
	}

	return count;
}

bool arrayUnique(int numbers[], size_t size)
{
	bool result = true;

	for (size_t i = 0; i < size; i++)
	{
		result = countElement(numbers, size, numbers[i], 0) > 1 ? false : true;
	}

	return result;
}

// TODO
void reverseArray(int numbers[], size_t size)
{
	
	for (size_t i = size; i >= 0; i--)
	{
		
	}
}