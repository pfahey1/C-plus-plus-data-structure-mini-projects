/****************************************
*Program Name: Family Jewels - Economy Class Body
*Description: The economy class implementation for family jewels
*Author: Peter Brill Jr.	Paul Fahey
*Credits: Information about rand function, and code snippets taken from http://www.cplusplus.com/reference/clibrary/cstdlib/rand/
*Date: 4-14-2012
*Modification History:
*****************************************/

using namespace std;
#include "CPTN278_FJ_class_economy.h"
#include "CPTN278_FJ_class_player.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

Economy::Economy(Player *touse)
{
	//Passing in player pointer for manipulation of player
	player = touse;

	//Set current market prices with roll
	Garnet = initGarnet;
	Sapphire = initSapphire;
	Emerald = initEmerald;
	Ruby = initRuby;
	Diamond = initDiamond;
	 
	/* initialize random seed: */
	srand((unsigned)time(0));

	//Fill up the economy gemstock
	gemstock.Enqueue(initGarnet);
	gemstock.Enqueue(initSapphire);
	gemstock.Enqueue(initEmerald);
	gemstock.Enqueue(initRuby);
	gemstock.Enqueue(initDiamond);
}

void Economy::NewDay()
{
	//Rolling out values
	float variance = (float)rand()/(float)RAND_MAX + .5;
	Garnet = (gemstock.Dequeue() * variance);

	variance = (float)rand()/(float)RAND_MAX + .5;
	Sapphire = (gemstock.Dequeue() * variance);

	variance = (float)rand()/(float)RAND_MAX + .5;
	Emerald = (gemstock.Dequeue() * variance);

	variance = (float)rand()/(float)RAND_MAX + .5;
	Ruby = (gemstock.Dequeue() * variance);

	variance = (float)rand()/(float)RAND_MAX + .5;
	Diamond = (gemstock.Dequeue() * variance);

	//Fill up the economy gemstock
	gemstock.Enqueue(initGarnet);
	gemstock.Enqueue(initSapphire);
	gemstock.Enqueue(initEmerald);
	gemstock.Enqueue(initRuby);
	gemstock.Enqueue(initDiamond);

	player->Days++; //Increment player days
}

void Economy::Sell(int type, int amount)
{
	int profit;
	profit = amount * Value(type);
	if (player->HasJewels(type, amount))
	{
		player->RemoveJewels(type,amount);
		player->Cash = (player->Cash + profit);
	}
	
}

void Economy::Buy(int type, int amount)
{
	int cost;
	cost = amount * this->Value(type);
	if (player->HasCash(cost))
	{
		player->Cash = (player->Cash - cost);
		player->AddJewels(type, amount);
	}
	else
	{
		cout << "ERROR: Not enough money to purchase jewels requested!";
		for (time_t t = time(0) + 3; time(0) < t; ) {}
	}
}

int Economy::Value(int type)
{
	switch (type)
	{
	case 1:
		return Garnet;
	case 2:
		return Sapphire;
	case 3:
		return Emerald;
	case 4:
		return Ruby;
	case 5:
		return Diamond;
	default:
		cout << endl << "ERROR: Incorrect jewel value requested!" << endl;
		for (time_t t = time(0) + 3; time(0) < t; ) {}
		return 2500;
	}
}