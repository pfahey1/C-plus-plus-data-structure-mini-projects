// Miscellaneous function defintions for family jewels


#include "CPTN278_FJ_miscellaneous.h"
#include "CPTN278_FJ_class_economy.h"
#include <ctime>

void Draw(Player *ptrplayer, Economy *ptreconomy)
{
	system("CLS");
	cout << "Family Jewels Version 1.0 - Day " << ptrplayer -> Days << " - Your Cash: $" << ptrplayer -> Cash << endl;
	cout << endl;
	cout << "You Have:" << endl;
	cout << endl;
	cout << "Garnet-" << ptrplayer -> Garnet << "," << " Sapphire-" << ptrplayer -> Sapphire << "," 
	<< " Emerald-" << ptrplayer -> Emerald << "," << " Ruby-" << ptrplayer -> Ruby << "," 
	<< " Diamond-" << ptrplayer -> Diamond << endl;
	cout << endl;
	cout << string( 3,'=') << "Jewel Market Price" << string( 3,'=') 
	<< setw(27) << string( 3,'=') << "Instructions" << string( 3,'=') << endl;
	cout << endl;
	cout << "Garnet" << setw(4) << " -" << setw(5) << ptreconomy -> Garnet
	<< setw(38) << "Enter 1 for New Day" << setw(24) << "Enter 1 for Garnet" << endl;
	cout << endl;
	cout << "Sapphire -" << setw(5) <<  ptreconomy -> Sapphire
	<< setw(34) << "Enter 2 to Sell" <<  setw(30) << "Enter 2 for Sapphire" << endl;
	cout << endl;
	cout << "Emerald" << setw(3) << " -" << setw(5) << ptreconomy -> Emerald 
	<< setw(33) << "Enter 3 to Buy" << setw(30) << "Enter 3 for Emerald" << endl;
	cout << endl;
	cout << "Ruby" << setw(6) << " -" << setw(5) << ptreconomy -> Ruby
	<< setw(34) << "Enter 4 to Quit" << setw(26) << "Enter 4 for Ruby" << endl;
	cout << endl;
	cout << "Diamond" << setw(3) << " -" << setw(5) << ptreconomy -> Diamond << setw(63) << "Enter 5 for Diamond" << endl;
	cout << endl;
	cout << string( 25,'=');
	cout << endl;
	cout << "1. New Day" << endl;
	cout << "2. Sell" << endl;
	cout << "3. Buy" << endl;
	cout << "4. Quit" << endl;
	cout << string( 25,'=');
	cout << endl;
}

void Quit(void)
{
	system("CLS");
	cout << string( 80,'=');
	cout << string( 80,'=');
	cout << string( 80,'=');
	cout << string( 80,'=');
	cout << string( 80,'=');
	cout << endl;
	cout << setw(45) << "Thank You for" << endl;
	cout << endl;
	cout << setw(42) << "Playing" << endl;
	cout << endl;
	cout << setw(45) << "Family Jewels" << endl;
	cout << endl;
	cout << string( 80,'=');
	cout << string( 80,'=');
	cout << string( 80,'=');
	cout << string( 80,'=');
	cout << string( 80,'=');   
	 exit(0);
}

void Win(void)
{
	system("CLS");
	cout << string( 80,'=');
	cout << string( 80,'=');
	cout << string( 80,'=');
	cout << string( 80,'=');
	cout << string( 80,'=');
	cout << endl;
	cout << setw(41) << " You " << endl;
	cout << endl;
	cout << setw(42) << "Won!!" << endl;
	cout << endl;
	cout << string( 80,'=');
	cout << string( 80,'=');
	cout << string( 80,'=');
	cout << string( 80,'=');
	cout << string( 80,'='); 
	exit(0);
}