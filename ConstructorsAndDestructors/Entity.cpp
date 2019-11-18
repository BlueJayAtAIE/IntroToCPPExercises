#include <iostream>
#include <cstring>
#include "Entity.h"


Entity::Entity()
{
	HP = 10;
	attack = 10;
	defense = 10;
}

Entity::Entity(const char * firstNm, char * lastNm, int hp, int att, int def)
{
	//firstName = firstNm;
}

Entity::~Entity()
{
}
