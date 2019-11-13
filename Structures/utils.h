#pragma once

struct person
{
	int age;
	float cash;

	int killCount;
};

float getMoney(person* target, float withdrawAmt);
void erasePerson(person** target);
void jonsEvilDeeds();