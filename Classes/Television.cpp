#include "Television.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int Television::volume()
{
	return currentVolume;
}

void Television::increaseVolume()
{
	currentVolume++;
}
void Television::decreaseVolume()
{
	currentVolume--;
}

int Television::channel()
{
	return currentChannel;
}

void Television::increaseChannel()
{
	currentChannel++;
}
void Television::decreaseChannel()
{
	currentChannel--;
}
