#pragma once

struct vector2D
{
	float x;
	float y;
};

void printVector(vector2D vect);

vector2D sum(vector2D a, vector2D b);

vector2D difference(vector2D a, vector2D b);

float distance(vector2D a, vector2D b);