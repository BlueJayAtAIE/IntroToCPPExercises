#pragma once

struct player
{
	int attack;
	int defence;

	int experience;
};

player* randomPlayers(size_t size);

void printPlayer(player * arr, size_t size);
void printPlayer(player player);