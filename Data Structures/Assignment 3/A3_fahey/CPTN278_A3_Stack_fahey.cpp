/*

Class Source File for Assignment 3

Paul Fahey

12 February 2011

*/

#include "CPTN278_A3_Stack_fahey.h" // INCLUDE the Stack Header File

stack::stack()//Constructor Stack
{
   //PASS IN Nothing
	cout << "Making a stack" << endl; //PRINT Announcement Message
	top = 0;//INIT top to zero
	counter = 0;

	//FOR
	//CREATE a variable called value;
	//SET to zero;  
	//WHILE value is < MAX_SIZE;
	//INCREMENT value

	//for (int value = 0; value < MAX_SIZE; value++) 
	//{

	//array_of_ints[value] = 0; //INIT array_of_ints to zero
	//}

	//PASS OUT Nothing

} //END Constructor

stack::~stack()//Destructor Stack
{
	//PASS IN Nothing

	cout << "Removing Stack" << endl; //PRINT Announcement Message
	

		while (!is_empty()) //WHILE is_empty is false
		{
			pop();//CALL pop
		}	

	//PASS OUT Nothing

}//END Destructor

void stack::push(int entry)//Function push
{
	
	//PASS IN an integer called entry

	node *item  = new node; //CREATE item as node set to new node memory allocation
	item->next = top; //POINT item to next set to top
	item->contents = entry; //POINT item to contents set to entry
	top = item; //SET top to item
	counter++; //INCREMENT counter

	// PASS OUT Nothing

}//END push

int stack::pop(void)//Function pop
{
	//PASS IN nothing

	int i; //CREATE i as integer
	node *item; //CREATE item as node
	i = top-> contents; //INIT i  to top -> contents
	item = top; //SET item to top
	top = item->next; //SET top to item -> next
	delete item; //DELETE item memory allocation
	counter--; //DECREMENT counter

	return i; //PASS OUT i	

} //END pop

bool stack::is_empty(void)//Function is_empty
{
	//PASS IN Nothing

    if (top == 0) //IF top == 0
	{
		return true; //	PASS OUT true 
	}

	else //ELSE
	{
		return false; //PASS OUT false 
	}

}//END is_empty


bool stack::is_full(void)//Function is_full
{

	 if (counter == 5) //IF counter == 5
	{
		return true; //	PASS OUT true 
	}

	else //ELSE
	{
		return false; //PASS OUT false 
	}
	

}//END is_full
