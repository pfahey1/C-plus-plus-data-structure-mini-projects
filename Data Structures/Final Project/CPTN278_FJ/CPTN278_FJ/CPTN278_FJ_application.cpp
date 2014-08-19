/****************************************
*Program Name: Family Jewels - Application File
*Description: The application file for the family jewels game
*Author: Peter Brill Jr.	Paul Fahey
*Date: 4-14-2012
*Modification History:
*****************************************/
#include <iostream>
#include <ctime>

#define CASH 500

#include "CPTN278_FJ_class_economy.h"
#include "CPTN278_FJ_miscellaneous.h"

using namespace std;

int main()//	MAIN
{	
	int gemType;
	int amount;
	int selection;
	Player player;
	Player *ptrplayer;
	ptrplayer = &player;
	Economy economy(ptrplayer);
	Economy *ptreconomy;
	ptreconomy = & economy;
	
	Draw(ptrplayer,ptreconomy);
	
	while (true)
	{
		Draw(ptrplayer, ptreconomy);
		cin >> selection;

		switch (selection)
		{
			case 1:
				economy.NewDay();
				break;
			case 2:
				while (true)
				{
					cout << endl << "What gem would you like to sell?" << endl;
					cin >> gemType;
					
					
					if (gemType != 1 && gemType != 2 &&  gemType != 3 &&  gemType != 4 && gemType != 5) 
					{
						cout << endl << "Incorrect Gem Input!" << endl;
						for (time_t t = time(0) + 3; time(0) < t; ) {}
						cout << endl;
						continue;
					}
					
					cout << endl << "How many would you like to sell?" << endl;
					cin >> amount;
					economy.Sell(gemType,amount);
					break;
				}
				break;
			case 3:
				while (true)
				{
					cout << endl << "What gem would you like to buy?" << endl;
					cin >> gemType;
					
					if (gemType != 1 &&  gemType != 2 &&  gemType != 3 &&  gemType != 4 && gemType != 5) 
					{
						cout << endl << "Incorrect Gem Input!" << endl;
						for (time_t t = time(0) + 3; time(0) < t; ) {}
						cout << endl;
						continue;
					}
					
					cout << endl << "How many would you like to buy?" << endl;
					cin >> amount;
					economy.Buy(gemType,amount);
					break;
				}
				break;
			
			case 4:
				Quit();
				break;
	
			default:
				cout << endl << "Incorrect Selection Input!" << endl;
				for (time_t t = time(0) + 3; time(0) < t; ) {}
				cout << endl;
				break;
		}

		if (player.Cash >= CASH)
		{
			Win();
		}
		continue;
	}
return 0;
}

	
