#pragma once

class Entity
{
private:
	char firstName[16];
	char lastName[16];
	int HP;
	int attack;
	int defense;

public:
	Entity();
	Entity(bool randy);
	Entity(const char * firstNm, const char * lastNm, int hp, int atk, int def);

	~Entity();
};

