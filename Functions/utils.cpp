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
	float diffX = x1 - x2;
	float diffY = y1 - y2;
	return (float)sqrt(diffX * diffX + diffY * diffY);
}

float estTimeToArrival(float x1, float y1, float x2, float y2, float speed)
{
	float seconds = 0;
	float dist = distance(x1, y1, x2, y2);
	while (dist > 0)
	{
		dist -= speed;
		seconds++;
	}
	return seconds;
}