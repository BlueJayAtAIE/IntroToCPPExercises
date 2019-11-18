#include "ServerBrowserService.h"



bool ServerBrowserService::registerServer(ServerInfo newServer)
{
	if (serverCount > 49)
	{
		return false;
	}

	servers[serverCount] = newServer;
	serverCount++;
	return true;
}

void ServerBrowserService::changeFilterSettings(int mxResults, int limitPing, int region, bool empty, bool full)
{
	maxResults = mxResults;
	pingLimit = limitPing;
	regionSpecification = region;
	allowEmpty = empty;
	allowFull = full;
}

int ServerBrowserService::getServers(/*ServerInfo * dstArray, size_t dstSize*/)
{
	ServerInfo * dstArray = new ServerInfo[50];
	int serversCopied;
	int filterCompliant = 0;
	int showResultsFor = 0;
	if (serverCount < maxResults || maxResults < 0)
	{
		showResultsFor = serverCount;
	}
	else
	{
		showResultsFor = maxResults;
	}

	for (serversCopied = 0; serversCopied < showResultsFor; serversCopied++)
	{
		if (servers[serversCopied].ping <= pingLimit && servers[serversCopied].regionID == regionSpecification && ((allowEmpty && servers[serversCopied].currentPlayerCount == 0) || servers[serversCopied].currentPlayerCount > 0) && ((allowFull && servers[serversCopied].currentPlayerCount == servers[serversCopied].maxPlayers) || servers[serversCopied].currentPlayerCount < servers[serversCopied].maxPlayers))
		{
			dstArray[serversCopied] = servers[serversCopied];
			filterCompliant++;
		}
	}

	return filterCompliant;
}
