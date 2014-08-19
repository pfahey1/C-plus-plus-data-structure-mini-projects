/*

Class Header File for Assignment 3

Paul Fahey

12 February 2012

*/

#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <iomanip>
using namespace std;

class node // CREATE a class called node
{
public:
	node *next; //CREATE pointer called next as node
	int contents; //CREATE contents as integer
	
};


class stack // CREATE a class called stack
{

	//PRIVATE MEMBERS

private:
	
	node *top; //CREATE pointer called top as node
	int counter;//CREATE counter as integer

	// PUBLIC MEMBERS

public:
	stack(); // CREATE a constructor called stack
	~stack();// CREATE a destructor called stack
	bool is_empty(void); // CREATE a function prototype called is_empty
	bool is_full(void); // CREATE a function prototype called is_full
	void push(int); // CREATE a function prototype called push
	int pop(void); // CREATE a function prototype called pop	
	
}; // END Header
#endif