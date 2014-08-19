/*

Class Header File for Assignment 2

Paul Fahey

8 February 2012

*/

#ifndef STACK_H
#define STACK_H

#define MAX_SIZE 5 //DEFINE a constant called MAX_SIZE with Five

#include <iostream>
#include <iomanip>
using namespace std;

class stack // CREATE a class called stack
{

	//Data Members (Private)

private:
	
	int topValue; // CREATE a integer called topValue
	int array_of_ints[MAX_SIZE]; // CREATE an array of MAX_SIZE (5) integers

	//Member Functions (Public)

public:
	stack(); // CREATE a constructor called stack
	~stack();// CREATE a destructor called stack
	bool is_empty(void); // CREATE a function prototype called is_empty
	bool is_full(void); // CREATE a function prototype called is_full
	int top(void); // CREATE a function prototype called top
	void push(int); // CREATE a function prototype called push
	int pop(void); // CREATE a function prototype called pop
	
	
}; // EndClassHeader
#endif