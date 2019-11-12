#include <iostream>
#include "utils.h"

using std::cout;
using std::cin;
using std::endl;

float getMoney(person* target, float withdrawAmt)
{
	// |  ||
    // || |_
	float loss = (*target).cash < withdrawAmt ? (*target).cash : withdrawAmt;

	(*target).cash -= loss;

	// Dereferencing can work like this: (*target).cash OR like this: target->cash.

	return loss;
}

void erasePerson(person** target)
{
	// """Erase"""
	(*target) = nullptr;
}