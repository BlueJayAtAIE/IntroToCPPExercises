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

int ServerBrowserService::getServers(ServerInfo * dstArray, size_t dstSize)
{
	dstArray = new ServerInfo[50];
	int serversCopied;
	int filterCompliant = 0;

	for (serversCopied = 0; (serversCopied < serverCount && maxResults > serverCount) || (serversCopied < maxResults && maxResults <= serverCount); serversCopied++)
	{
		if (servers[serversCopied].ping >= pingLimit && servers[serversCopied].regionID == regionSpecification)
		{
			// Not yet sure how to position all these conditions in a way that includes them all in a filter.
			// TODO: Figure out this logic.
			if (allowEmpty && servers[serversCopied].currentPlayerCount == 0)
			{

			}
			
			if (allowFull && servers[serversCopied].currentPlayerCount == servers[serversCopied].maxPlayers)
			{

			}
		}
	}

	return filterCompliant;
}
