/*

Class Source File for Assignment 2

Paul Fahey

8 February 2011

*/

#include "CPTN278_A2_Stack_fahey.h" // INCLUDE the Stack Header File

stack::stack()//Constructor Stack
{
   //PASS IN Nothing
	cout << "Making a stack" << endl; //PRINT Announcement Message
	topValue = 0;//INIT topValue to zero

	//FOR
	//CREATE a variable called value;
	//SET to zero;  
	//WHILE value is less than MAX_SIZE;
	//INCREMENT value

	for (int value = 0; value < MAX_SIZE; value++) 
	{

	array_of_ints[value] = 0; //INIT array_of_ints to zero
	}

	//PASS OUT Nothing

} //EndConstructor

stack::~stack()//Destructor Stack
{
	//PASS IN Nothing

	cout << "Removing Stack" << endl; //PRINT Announcement Message
	
	//PASS OUT Nothing

}//EndDestructor

bool stack::is_empty(void)//Function is_empty
{
	//PASS IN Nothing

    if (topValue == 0) //IF topValue is exactly equal to zero THEN
	{

	return true; //	PASS OUT true 
	}

	else //ELSE
	{

	return false; //PASS OUT false 
	}

}//EndFunction


bool stack::is_full(void)//Function is_full
{
	//PASS IN Nothing

	if (topValue == MAX_SIZE) //IF topValue is exactly equal to MAX_SIZE THEN
	{

		return true; //PASS OUT true message
	}

	else//ELSE

	return false; //PASS OUT false message

}//EndFunction

void stack::push(int number)//Function push
{
	//PASS IN an integer called number
	//INCREMENT topValue in array_of_ints
	//SET array_of_ints to value of number

	array_of_ints[topValue++] = number;	

}//End Function
int stack::top(void) //Function top
{
	//PASS IN Nothing

	//Decrement topValue in array_of_ints
	//PASS OUT topValue 
	return array_of_ints[topValue - 1];

}//EndFunction

int stack::pop(void)//Function pop
{
	//PASS IN nothing
	//PASS OUT 
	//DECREMENT topValue 
	return --topValue;	

} //End Function
