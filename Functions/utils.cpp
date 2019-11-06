#include <iostream>
#include <cmath>
#include "utils.h"

using std::cout;
using std::cin;
using std::endl;

void hello()
{
	cout << "Hello Functions!" << endl;
}

int square(int a)
{
	return a * a;
}

float decimal(int numerator, int denominator)
{
	return (float)numerator / (float)denominator;
}

void printPair(int a, int b)
{
	cout << a << ", " << b << endl;
}

int sumThree(int a, int b, int c)
{
	return a + b + c;
}

int min(int a, int b)
{
	return a < b ? a : b;
}

int max(int a, int b)
{
	return a > b ? a : b;
}

int clamp(int lower, int upper, int val)
{
	if (min(lower, val) < lower)
	{
		return lower;
	}

	if (max(upper, val) > upper)
	{
		return upper;
	}

	return val;
}

float distance(float x1, float y1, float x2, float y2)
{
	// TODO
	return 0;
}