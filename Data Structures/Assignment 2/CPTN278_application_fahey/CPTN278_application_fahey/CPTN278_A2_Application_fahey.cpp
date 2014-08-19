/*

Application Source File for Assignment 2

Paul Fahey

8 February 2012

*/

#include <iostream>
#include <iomanip>
using namespace std;

#include "CPTN278_A2_Stack_fahey.h" //INCLUDE stack header file

int main(int argc, char* argv[]) // Function Main

{
	cout << "Welcome to assignment 2" << endl; // PRINT Welcome Message

	cout << endl;

	stack input; //CREATE an object called input
	stack output; //CREATE an object called output

	cout << endl;

	//IF
	//CALL is_empty for input object

	if (input.is_empty())
	{

		cout << "Stack is empty" << endl; //PRINT empty message

	}//ENDIF

	//IF
	//CALL is_full for input object

	if (input.is_full())
	{
		
		cout << "Stack is Full" << endl; //PRINT empty message
	
	}//ENDIF



	cout << "Current Top Element is " << input.top() << endl;//PRINT a message with CALL topValue for input object

	cout << endl;

	cout << "Enter five integers (w/ a space after each entry): "; //PRINT integer prompt message
	
	int value; //CREATE input variable called value

	

	while (!input.is_full()) // WHILE CALL is_full for input object is false
	{

	    //INPUT five integers
		//CALL push for input object
		//PASS IN integer to push
		 cin >> value;
		
		 input.push(value); 

	} //ENDFOR

	cout << endl;

	cout << endl;

	//IF
	//CALL is_empty for input object

	if (input.is_empty())
	{

		cout << "Stack is empty" << endl; //PRINT empty message

	}//ENDIF

	//IF
	//CALL is_full for input object

	if (input.is_full())
	{
		
		cout << "Stack is Full" << endl; //PRINT empty message
	
	}//ENDIF

	cout << "Current Top element is " << input.top() << endl;//PRINT a message with CALL topValue for input object

	cout << endl;
	
	cout << "The output stack consists of: ";// PRINT output stack message
	
	//WHILE
	//CALL is_empty from input object is false

	while (!input.is_empty())
	{

		//PRINT
		//CALL top for input object

		cout << input.top() << " ";

		//CALL push for output object
		//PASS IN pop for input object
		output.push( input.pop() );	

	}//ENDWHILE

	cout << endl;
	cout << endl;

	cout << "Thank you for using assignment 2" << endl; // PRINT Closing Message
}