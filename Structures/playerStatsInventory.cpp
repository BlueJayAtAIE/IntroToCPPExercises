#include <iostream>
#include "playerStatsInventory.h"

using std::cout;
using std::cin;
using std::endl;

player* randomPlayers(size_t size)
{
	player* arr = new player[size];
	for (size_t i = 0; i < size; i++)
	{
		arr[i].attack = rand() % 4 + 11;
		arr[i].defence = rand() % 4 + 11;
		arr[i].experience = 0;
	}

	return arr;
}

void printPlayer(player * arr, size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << "Player " << i + 1 << ": " << "Attack: " << arr[i].attack << " | " << "Defence: " << arr[i].defence << " | " << "Experience: " << arr[i].experience << endl;
	}
}

void printPlayer(player player)
{
	cout << "Attack: " << player.attack << " | " << "Defence: " << player.defence << " | " << "Experience: " << player.experience << endl;
}