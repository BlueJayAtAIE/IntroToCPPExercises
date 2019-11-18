#include <iostream>
#include <cstring>
#include "Entity.h"


// Creates a new Entity with default values.
Entity::Entity()
{
	strcpy_s(firstName, sizeof(firstName), "Default");
	strcpy_s(lastName, sizeof(lastName), "Name");
	HP = 10;
	attack = 10;
	defense = 10;
}

// Creates a new Entity with random, but clamped, values.
Entity::Entity(bool randy)
{
	if (randy)
	{
		int rng = rand() % 10;
		switch (rng)
		{
		case 0:
			strcpy_s(firstName, sizeof(firstName), "Henry");
			break;
		case 1:
			strcpy_s(firstName, sizeof(firstName), "Hilbert");
			break;
		case 2:
			strcpy_s(firstName, sizeof(firstName), "Pufferfish");
			break;
		case 3:
			strcpy_s(firstName, sizeof(firstName), "Floast");
			break;
		case 4:
			strcpy_s(firstName, sizeof(firstName), "Gerald");
			break;
		case 5:
			strcpy_s(firstName, sizeof(firstName), "Dan");
			break;
		case 6:
			strcpy_s(firstName, sizeof(firstName), "Jeffery");
			break;
		case 7:
			strcpy_s(firstName, sizeof(firstName), "Dillon");
			break;
		case 8:
			strcpy_s(firstName, sizeof(firstName), "Duke");
			break;
		case 9:
			strcpy_s(firstName, sizeof(firstName), "Sir");
			break;
		default:
			strcpy_s(firstName, sizeof(firstName), "Mr.");
			break;
		}

		rng = rand() % 10;
		switch (rng)
		{
		case 0:
			strcpy_s(lastName, sizeof(lastName), "Sr.");
			break;
		case 1:
			strcpy_s(lastName, sizeof(lastName), "Jr.");
			break;
		case 2:
			strcpy_s(lastName, sizeof(lastName), "The Healthy");
			break;
		case 3:
			strcpy_s(lastName, sizeof(lastName), "The Wise");
			break;
		case 4:
			strcpy_s(lastName, sizeof(lastName), "The Brave");
			break;
		case 5:
			strcpy_s(lastName, sizeof(lastName), "The Traitor");
			break;
		case 6:
			strcpy_s(lastName, sizeof(lastName), "Glorbnath");
			break;
		case 7:
			strcpy_s(lastName, sizeof(lastName), "Sonson");
			break;
		case 8:
			strcpy_s(lastName, sizeof(lastName), "No Last Name");
			break;
		case 9:
			strcpy_s(lastName, sizeof(lastName), "Floast");
			break;
		default:
			strcpy_s(lastName, sizeof(lastName), "Default");
			break;
		}

		HP = rand() % 4 + 5;
		attack = rand() % 4 + 5;
		defense = rand() % 4 + 5;
	}
	else
	{
		Entity();
	}
}

// Creates a new Entity to the parameters provided.
Entity::Entity(const char * firstNm, const char * lastNm, int hp, int atk, int def)
{
	strcpy_s(firstName, sizeof(firstName), firstNm);
	strcpy_s(lastName, sizeof(lastName), lastNm);
	HP = hp;
	attack = atk;
	defense = def;
}

Entity::~Entity()
{
}

// Notes to self:
// rand() % 10 + 1 makes a random number from 1-10.