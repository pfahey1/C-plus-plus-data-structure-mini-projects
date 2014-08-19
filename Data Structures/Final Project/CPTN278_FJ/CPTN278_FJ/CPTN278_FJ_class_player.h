/****************************************
*Program Name: Family Jewels - Player Class Header
*Description: The header for the player class
*Author: Peter Brill Jr.	Paul Fahey
*Date: 4-19-2012
*Modification History:
*****************************************/

#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>

using namespace std;

class Player//CLASS Stack
{
	
private:		

public:		//PUBLIC MEMBERS:	
	int Cash, Days;
	int Garnet, Sapphire, Emerald, Ruby, Diamond;
	Player(); //Constructor
	bool HasCash(int);
	bool HasJewels(int, int);
	void RemoveJewels(int, int);
	void AddJewels(int, int);
};	
#endif