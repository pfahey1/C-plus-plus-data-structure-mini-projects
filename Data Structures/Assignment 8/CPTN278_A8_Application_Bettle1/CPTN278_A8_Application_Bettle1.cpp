//
// CPTN278_A8_Application_Bettle1.cpp 
//
// Hal Bettle
// 28 March 2009
//
// Demonstrates insert and search efficiency with
//   Sorted List
//   Unsrted List
//   Binary Tree
// Additional Featues
//   Random Number Generation
//   Timing of Algorithms
//
// All structures have internal error checking
// 
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
#include <ctime>


//#define MAX_INTS 1
//#define MAX_INTS 7
//#define MAX_INTS 120
//#define MAX_INTS 1000
//#define MAX_INTS 8000
#define MAX_INTS 7

#include "CPTN278_A8_List_Bettle1.h"
#include "CPTN278_A8_UList_Bettle1.h"
#include "CPTN278_A8_Node_Bettle1.h"
#include "CPTN278_A8_Tree_Bettle1.h"
#include "CPTN278_A8_Tree_Node_Bettle1.h"


int main()
{
	cout << "Welcome to CPTN278 Assignment 8." << endl << endl;

	List Sorted_List;
	UList Unsorted_List;
	Node Value;
	Node *nptr;
	Tree Binary_Tree; 
	Tree_Node Tree_Value;
	Tree_Node *tnptr;
	int numbers[MAX_INTS];
	int temp;
	int counter;
	time_t s_time,
		   e_time;

	// Implement random number generator and populate the array.
	cout << "Generating an array of ramdom numbers." << endl;

	// Record start time.
    s_time = time(0);
	srand( time (0) );
    for (counter = 0; counter < MAX_INTS; counter++)
	{
		temp = (rand() % 100000);
		numbers[counter] = temp;
	}
	// Record end time.
    e_time = time(0);
	// Calculate the difference and disply the results.
	cout << "Time it took to generate " << MAX_INTS
		 << " random numbers and populate the array = "
		 << e_time - s_time << " seconds." << endl;

//goto skip; // Uncomment to skip the List Tests.

	// Sorted List Operation

	cout << "Sorted List Operations." << endl;

	// Populate the sorted list from the array.
	cout << "Populating the sorted list." << endl;

	// Record start time.
    s_time = time(0);
	nptr = &Value;
    for (counter = 0; counter < MAX_INTS; counter++)
	{
		nptr->set_number( numbers[counter] );
		Sorted_List.Insert( nptr );
	}	
	// Record end time.
    e_time = time(0);
	// Calculate the difference and disply the results.
	cout << "Time it took to populate the sorted list = "
		 << e_time - s_time << " seconds." << endl;

	// Search the sorted list for every item
	cout << "Searching the sorted list." << endl;

	// Record start time.
    s_time = time(0);
	nptr = &Value;
	for( counter = 0; counter < MAX_INTS; counter++)
	{
		nptr->set_number( numbers[counter] );
		Sorted_List.Search( nptr );
	}
	// Record end time.
    e_time = time(0);
	// Calculate the difference and disply the results.
	cout << "Time it took to search the sorted list = "
		 << e_time - s_time << " seconds." << endl;
	
	// Unorted List Operationc

	cout << "Unsorted List Operations." << endl;

	// Populate the unsorted list from the array.
	cout << "Populating the unsorted list." << endl;

	// Record start time.
    s_time = time(0);
	nptr = &Value;
    for (counter = 0; counter < MAX_INTS; counter++)
	{
		nptr->set_number( numbers[counter] );
		Unsorted_List.Insert( nptr );
	}
	// Record end time.
    e_time = time(0);
	// Calculate the difference and disply the results.
	cout << "Time it took to populate the unsorted list = "
		 << e_time - s_time << " seconds." << endl;

	// Search the unsorted list for every item 
	cout << "Searching the unsorted list." << endl;

	// Record start time.
    s_time = time(0);
	nptr = &Value;
	for( counter = 0; counter < MAX_INTS; counter++)
	{
		nptr->set_number( numbers[counter] );
		Unsorted_List.Search ( nptr );
	}
	// Record end time.
    e_time = time(0);
	// Calculate the difference and disply the results.
	cout << "Time it took to search the ubsorted list = "
		 << e_time - s_time << " seconds." << endl;

skip:

	// Tree Operationc

	cout << "Tree Operations." << endl;

	// Populate the binary tree from the array.
	cout << "Populating the binary." << endl;

	// Record start time.
    s_time = time(0);
	tnptr = &Tree_Value;
    for (counter = 0; counter < MAX_INTS; counter++)
	{
		tnptr->set_number( numbers[counter] );
		Binary_Tree.Insert( tnptr );
	}
	// Record end time.
    e_time = time(0);
	// Calculate the difference and disply the results.
	cout << "Time it took to populate the binary tree = "
		 << e_time - s_time << " seconds." << endl;

	// Search the binary for every item 
	cout << "Searching the binary tree." << endl;

	// Record start time.
    s_time = time(0);
	tnptr = &Tree_Value;
	for( counter = 0; counter < MAX_INTS; counter++)
	{
		tnptr->set_number( numbers[counter] );
		Binary_Tree.Search( tnptr );
//		if( tnptr != 0 ) // uncomment this if statement if you don't believe the results.
//		{
//			cout << "Item = " << tnptr->get_number() << endl;
//		}
	}
	// Record end time.
    e_time = time(0);
	// Calculate the difference and disply the results.
	cout << "Time it took to search the binary tree = "
		 << e_time - s_time << " seconds." << endl;

	// Only display the tree if it has less than 8 Items 
	// just to prove the various Display Sequences work
	if (MAX_INTS < 8)
	{
		cout << "Displaying the Tree Pre Order." << endl;
		Binary_Tree.Display_Pre_Order();
		cout << "Displaying the Tree In Order." << endl;
		Binary_Tree.Display_In_Order();
		cout << "Displaying the Tree Post Order." << endl;
		Binary_Tree.Display_Post_Order();
	}

	// Say bye-bye.

	cout << endl << "Good-bye from CPTN278 Assignment 8." << endl;

	return 0;
}