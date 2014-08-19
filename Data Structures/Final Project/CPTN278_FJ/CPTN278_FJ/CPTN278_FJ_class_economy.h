/****************************************
*Program Name: Family Jewels - Economy Class Header
*Description: The application file for the family jewels game
*Author: Peter Brill Jr.	Paul Fahey
*Date: 4-14-2012
*Modification History:
*****************************************/
#ifndef ECONOMY_H
#define ECONOMY_H

#include <iostream>
#include <string>
#include "CPTN278_FJ_class_queue.h"
#include "CPTN278_FJ_class_player.h"

//Default values for gems
#define initGarnet 10
#define	initSapphire 25
#define	initEmerald 50
#define	initRuby 80
#define	initDiamond 100

using namespace std;

class Economy//CLASS Stack
{
	
private:		//PRIVATE MEMBERS:
	Queue gemstock;
	Player *player;
public:		//PUBLIC MEMBERS:	
	//Mutable values for gems
	int Garnet, Sapphire, Emerald, Ruby, Diamond;
	
	Economy(Player*);
	void NewDay();
	void Sell(int,int);
	void Buy (int,int);
	int Value (int);

};	
#endif