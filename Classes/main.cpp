#include <iostream>
#include "Television.h"
#include "DigitalPiggyBank.h"
#include "ServerBrowserService.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{

#pragma region PiggyBank
	/*DigitalPiggyBank piggy;
	cout << "Balance: " << piggy.balance() << endl;
	cout << "Adding 50 dollars." << endl;
	piggy.deposit(50);
	cout << "Balance: " << piggy.balance() << endl;
	cout << "Adding 20 dollars." << endl;
	piggy.deposit(20);
	cout << "Balance: " << piggy.balance() << endl;
	cout << "Withdrawing all money. " << piggy.withdraw() << " dollars have been withdrawn." << endl;
	cout << "Balance: " << piggy.balance() << endl;*/
#pragma endregion

	int numberServers;
	ServerBrowserService sbs;

	// RegionID, currentPlayerCount, maxPlayers, ping.
	ServerInfo s1 = { 1, 1, 1, 1 };
	ServerInfo s2 = { 1, 0, 1, 1 };
	ServerInfo s3 = { 2, 2, 5, 3 };
	ServerInfo s4 = { 3, 4, 5, 7 };
	sbs.registerServer(s1);
	sbs.registerServer(s2);
	sbs.registerServer(s3);
	sbs.registerServer(s4);
	
	// maxResults, pingLimit, region, allowEmpty, allowFull
	sbs.changeFilterSettings(5, 10, 1, true, false);
	numberServers = sbs.getServers();

	sbs.changeFilterSettings(5, 5, 3, true, false);
	numberServers = sbs.getServers();

	sbs.changeFilterSettings(5, 5, 1, true, true);
	numberServers = sbs.getServers();

	while (true) {}
	return 0;
}