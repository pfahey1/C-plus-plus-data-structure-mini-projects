/*

Application Source File for Assignment 3

Paul Fahey

12 February 2012

*/

#include "CPTN278_A3_Stack_fahey.h" //INCLUDE stack header file

int main(int argc, char* argv[]) // Function Main

{
	cout << "Welcome to assignment 3" << endl; // PRINT Welcome Message

	cout << endl;

	stack first; //CREATE a stack called first
	stack second; //CREATE a stack called second

	cout << endl;

	cout << "First Stack empty? ";// PRINT checker message for first stack
	cout << first.is_empty(); //CALL is_empty for first stack
	cout << endl;
	 
	cout << "First Stack Full? "; //PRINT checker message for first stack
	cout << first.is_full();// CALL is_full for first stack

	cout << endl;
	cout << endl;

	cout << "Second Stack empty? ";//PRINT checker message for second stack
	cout << second.is_empty();//CALL is_empty for second stack
	
	cout << endl;	
		
	cout << "Second Stack Full? ";
	cout << second.is_full();//CALL is_full for second stack

	cout << endl;
	cout << endl;

	cout << "Enter five integers (w/ a space after each entry): "; //PRINT integer prompt message
	
	int entry; //DECLARE entry integer

	while (!first.is_full()) // WHILE CALL is_full for first stack is false
	{
		
	    //INPUT five integers as entry
		//CALL push for first stack
		//PASS IN entry
		 
		cin >> entry;
		first.push(entry); 

	} //END WHILE

	cout << endl;

	cout << "First Stack empty? ";// PRINT checker message for first stack
	cout << first.is_empty(); //CALL is_empty for first stack
	
	cout << endl;
	 
	cout << "First Stack Full? "; //PRINT checker message for first stack
	cout << first.is_full();// CALL is_full for first stack

	cout << endl;	
	cout << endl;
	
	cout << "The output stack consists of: ";// PRINT output stack message
	
	//WHILE
	//CALL is_empty from first stack is false

	while (!first.is_empty())
	{
		entry = first.pop(); //SET entry as first stack calling pop
		
		//CALL push for second stack
		//PASS IN entry for second stack
		second.push(entry);
		cout << entry << " ";//PRINT entry

	}//END WHILE

	cout << endl;
	cout << endl;

	cout << "Second Stack empty? ";//PRINT checker message for second stack
	cout << second.is_empty();//CALL is_empty for second stack
	
	cout << endl;
	
	cout << "Second Stack Full? ";
	cout << second.is_full();//CALL is_full for second stack

	cout << endl;
	cout << endl;

	cout << "Thank you for using assignment 3" << endl; // PRINT Closing Message
}