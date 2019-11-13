#include <iostream>
#include <cmath>
#include "vector2D.h"

using std::cout;
using std::cin;
using std::endl;

void printVector(vector2D vect)
{
	cout << "(" << vect.x << ", " << vect.y << ")";
}

vector2D sum(vector2D a, vector2D b)
{
	vector2D sum = { a.x + b.x, a.y + b.y };
	return sum;
}

vector2D difference(vector2D a, vector2D b)
{
	vector2D diff = { a.x - b.x, a.y - b.y };
	return diff;
}

float distance(vector2D a, vector2D b)
{
	float diffX = a.x - b.x;
	float diffY = a.y - b.y;
	return (float)sqrt(diffX * diffX + diffY * diffY);
}