#pragma once

struct ServerInfo
{
	int regionID;
	int currentPlayerCount;
	int maxPlayers;
	int ping;
};


class ServerBrowserService
{
private:
	ServerInfo servers[50];

	int serverCount = 0;

	int maxResults;
	int pingLimit;
	int regionSpecification;
	bool allowEmpty;
	bool allowFull;

public:
	bool registerServer(ServerInfo newServer);

	void changeFilterSettings(int mxResults, int limitPing, int region, bool empty, bool full);

	int getServers(/*ServerInfo * dstArray, size_t dstSize*/);
};

