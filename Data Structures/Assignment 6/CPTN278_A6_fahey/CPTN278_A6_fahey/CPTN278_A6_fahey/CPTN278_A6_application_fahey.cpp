/*

  Paul Fahey
  26 March 2012

 List application File.
 List implementation is dynamically linked list based.
 This code was taken from another source

*/

#include "CPTN278_A6_List_fahey.h "
using namespace std;


int main(int argc, char* argv[]) // Function Main

{
	cout << "Welcome to assignment 6" << endl; // PRINT Welcome Message

	cout << endl;

	List sorted;
	Node value;
	Node *nptr;

	cout << "Is the list empty? " << sorted.Is_Empty() << endl;
	cout << "Is the list full? " << sorted.Is_Full() << endl;

	cout << endl;

	nptr = &value;

	nptr -> set_number(5);

	if(! sorted.Insert(nptr))
	{
		cout << "Insert failed " << nptr -> get_number() << " already exists." << endl;
	}

	sorted.Display();

	nptr -> set_number(20);

	if(! sorted.Insert(nptr))
	{
		cout << "Insert failed " << nptr -> get_number() << " already exists." << endl;
	}

	sorted.Display();
	cout << endl;

	
	nptr -> set_number(13);

	if(! sorted.Insert(nptr))
	{
		cout << "Insert failed " << nptr -> get_number() << " already exists." << endl;
	}

	sorted.Display();
	cout << endl;

	
	nptr -> set_number(2);

	if(! sorted.Insert(nptr))
	{
		cout << "Insert failed " << nptr -> get_number() << " already exists." << endl;
	}

	sorted.Display();
   
	cout << endl;

	
	
	nptr -> set_number(4);

	if(! sorted.Insert(nptr))
	{
		cout << "Insert failed " << nptr -> get_number() << " already exists." << endl;
	}

	sorted.Display();

	cout << endl;

	
	nptr -> set_number(23);

	if(! sorted.Insert(nptr))
	{
		cout << "Insert failed " << nptr -> get_number() << " already exists." << endl;
	}

	sorted.Display();

	cout << endl;

	
	nptr -> set_number(17);

	if(! sorted.Insert(nptr))
	{
		cout << "Insert failed " << nptr -> get_number() << " already exists." << endl;;
	}

	sorted.Display();

	
	cout << endl;

	
	nptr -> set_number(16);

	if(! sorted.Insert(nptr))
	{
		cout << "Insert failed " << nptr -> get_number() << " already exists." << endl;
	}

	sorted.Display();

	
	cout << endl;

	
	nptr -> set_number(1);

	if(! sorted.Insert(nptr))
	{
		cout << "Insert failed " << nptr -> get_number() << " already exists." << endl;
	}

	sorted.Display();

	
	cout << endl;

	
	nptr -> set_number(15);

	if(! sorted.Insert(nptr))
	{
		cout << "Insert failed " << nptr -> get_number() << " already exists." << endl;
	}

	sorted.Display();

	cout << endl;

	cout << "Is the list empty? " << sorted.Is_Empty() << endl;
	cout << "Is the list full? " << sorted.Is_Full() << endl;

	cout << endl;
	
	nptr -> set_number(4);

	if(! sorted.Insert(nptr))
	{
		cout << "Insert failed " << nptr -> get_number() << " already exists." << endl;
	}

	sorted.Display();
	
	cout << endl;

	
	nptr -> set_number(17);

	if(! sorted.Insert(nptr))
	{
		cout << "Insert failed " << nptr -> get_number() << " already exists." << endl;;
	}

	sorted.Display();

	
	cout << endl;

	
	nptr -> set_number(23);

	if(! sorted.Insert(nptr))
	{
		cout << "Insert failed " << nptr -> get_number() << " already exists." << endl;
	}

	sorted.Display();

	cout << endl;

	nptr -> set_number(30);


	if(! sorted.Remove(nptr))
	{
		cout << nptr -> get_number() << " was not found in the list can't remove" << endl;
	}
	
	sorted.Display();
	cout << endl;

	nptr -> set_number(500000);


	if(! sorted.Remove(nptr))
	{
		cout << nptr -> get_number() << " was not found in the list can't remove" << endl;
	}
	
	sorted.Display();
	cout << endl;
	
	nptr -> set_number(2000000000);


	if(! sorted.Remove(nptr))
	{
		cout << nptr -> get_number() << " was not found in the list can't remove" << endl;
	}
	
	sorted.Display();
	cout << endl;

	cout << "Removing items from the list in reverse order from when they were added." << endl;

	cout << endl;

	cout << "Is the list empty? " << sorted.Is_Empty() << endl;
	cout << "Is the list full? " << sorted.Is_Full() << endl;

	cout << endl;

	nptr -> set_number(15);

	if(! sorted.Remove(nptr))
	{
		cout << nptr -> get_number() << " was not found in the list can't remove" << endl;
	}
	
	sorted.Display();
	cout << endl;

	nptr -> set_number(1);

	if(! sorted.Remove(nptr))
	{
		cout << nptr -> get_number() << " was not found in the list can't remove" << endl;
	}
	
	sorted.Display();
	cout << endl;
	
	
	nptr -> set_number(16);

	if(! sorted.Remove(nptr))
	{
		cout << nptr -> get_number() << " was not found in the list can't remove" << endl;
	}
	
	sorted.Display();
	cout << endl;

	nptr -> set_number(17);

	if(! sorted.Remove(nptr))
	{
		cout << nptr -> get_number() << " was not found in the list can't remove" << endl;
	}
	
	sorted.Display();
	cout << endl;

	nptr -> set_number(23);

	if(! sorted.Remove(nptr))
	{
		cout << nptr -> get_number() << " was not found in the list can't remove" << endl;
	}
	
	sorted.Display();
	cout << endl;
	
	nptr -> set_number(4);

	if(! sorted.Remove(nptr))
	{
		cout << nptr -> get_number() << " was not found in the list can't remove" << endl;
	}
	
	sorted.Display();
	cout << endl;

	nptr -> set_number(2);

	if(! sorted.Remove(nptr))
	{
		cout << nptr -> get_number() << " was not found in the list can't remove" << endl;
	}
	
	sorted.Display();
	cout << endl;
	
	nptr -> set_number(13);

	if(! sorted.Remove(nptr))
	{
		cout << nptr -> get_number() << " was not found in the list can't remove" << endl;
	}
	
	sorted.Display();
	cout << endl;

	nptr -> set_number(20);

	if(! sorted.Remove(nptr))
	{
		cout << nptr -> get_number() << " was not found in the list can't remove" << endl;
	}
	
	sorted.Display();
	cout << endl;

	nptr -> set_number(5);

	if(! sorted.Remove(nptr))
	{
		cout << nptr -> get_number() << " was not found in the list can't remove" << endl;
	}
	
	sorted.Display();
	cout << endl;

	sorted.Display(); // Called to show that the list is empty and theres nothing to display

	cout << "Is the list empty? " << sorted.Is_Empty() << endl;
	cout << "Is the list full? " << sorted.Is_Full() << endl;
	cout << endl;

	cout << "Thank you for using assignment 6" << endl; // PRINT Message
}