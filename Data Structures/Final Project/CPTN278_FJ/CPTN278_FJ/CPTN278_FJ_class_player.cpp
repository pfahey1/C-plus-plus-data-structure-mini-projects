/****************************************
*Program Name: Family Jewels - Player Class Body
*Description: Body file of the player class
*Author: Peter Brill Jr.	Paul Fahey
*Date: 4-19-2012
*Modification History:
*****************************************/
#include <ctime>
using namespace std;
#include "CPTN278_FJ_class_player.h"


Player::Player()
{
	//Initialize start values
	Garnet = 0;
	Sapphire = 0;
	Emerald = 0;
	Ruby = 0;
	Diamond = 0;
	Cash = 80;
	Days = 1;
}


bool Player::HasCash(int required)//HasCash OF Player
{
//IF Cash OF Player IS EQUAL TO OR GREATER THAN required
//RETURN TRUE
//ELSE
//RETURN FALSE
//END HasCash OF Player
	if (Cash >= required)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Player::HasJewels(int type, int amount)
{
	switch (type)
	{
	case 1:
		if (Garnet >= amount)
		{
			return true;
		}
		else
		{
			cout << endl << "ERROR: You do no have enough jewels for the operation!" << endl;
			for (time_t t = time(0) + 3; time(0) < t; ) {}
			return false;
		}
		break;
	case 2:
		if (Sapphire >= amount)
		{
			return true;
		}
		else
		{
			cout << endl << "ERROR: You do no have enough jewels for the operation!" << endl;
			for (time_t t = time(0) + 3; time(0) < t; ) {}
			return false;
		}
		break;
	case 3:
		if (Emerald >= amount)
		{
			return true;
		}
		else
		{
			cout << endl << "ERROR: You do no have enough jewels for the operation!" << endl;
			for (time_t t = time(0) + 3; time(0) < t; ) {}
			return false;
		}
		break;
	case 4:
		if (Ruby >= amount)
		{
			return true;
		}
		else
		{
			cout << endl << "ERROR: You do no have enough jewels for the operation!" << endl;
			for (time_t t = time(0) + 3; time(0) < t; ) {}
			return false;
		}
		break;
	case 5:
		if (Diamond >= amount)
		{
			return true;
		}
		else
		{
			cout << endl << "ERROR: You do no have enough jewels for the operation!" << endl;
			for (time_t t = time(0) + 3; time(0) < t; ) {}
			return false;
		}
		break;
	default:
		cout << endl << "ERROR: You do no have enough jewels or wrong input for the operation!" << endl;
		for (time_t t = time(0) + 3; time(0) < t; ) {}
		return false;
	}
}

void Player::RemoveJewels(int type, int amount)
{
	switch (type)
	{
	case 1:
		Garnet = Garnet - amount;
		break;
	case 2:
		Sapphire = Sapphire - amount;
		break;
	case 3:
		Emerald = Emerald - amount;
		break;
	case 4:
		Ruby = Ruby - amount;
		break;
	case 5:
		Diamond = Diamond - amount;
		break;
	default:
		cout << endl << "ERROR: Incorrect jewel removal input!" << endl;
		for (time_t t = time(0) + 3; time(0) < t; ) {}
	}
}

void Player::AddJewels(int type, int amount)
{
switch (type)
	{
	case 1:
		Garnet = Garnet + amount;
		break;
	case 2:
		Sapphire = Sapphire + amount;
		break;
	case 3:
		Emerald = Emerald + amount;
		break;
	case 4:
		Ruby = Ruby + amount;
		break;
	case 5:
		Diamond = Diamond + amount;
		break;
	default:
		cout << endl << "ERROR: Incorrect jewel addition input!" << endl;
		for (time_t t = time(0) + 3; time(0) < t; ) {}
	}
}

