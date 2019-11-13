#pragma once

struct vector2D
{
	float x;
	float y;
};

vector2D sum(vector2D a, vector2D b);

vector2D difference(vector2D a, vector2D b);

float distance(vector2D a, vector2D b);