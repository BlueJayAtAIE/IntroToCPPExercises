#pragma once

class Entity
{
private:
	char firstName[16] = "Default";
	char lastName[16] = "Name";
	int HP;
	int attack;
	int defense;

public:
	Entity();
	Entity(const char * firstNm, char * lastNm, int hp, int att, int def);

	~Entity();
};

