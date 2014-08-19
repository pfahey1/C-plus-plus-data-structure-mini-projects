/*
 Paul Fahey
 27 February 2012
 Queue Class Header File for Assignment 4.

 Queue implementation is array based.
 Queue uses an Internal Node.
 Error checking is left to the user.
*/

#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#define MAX_SIZE 10

class Node
{
	public:
	string type;
	int fee;
};

class Queue
{
	private:
	int front;
	int back;
	int count;
	Node array_of_nodes[MAX_SIZE];
	void display_item(int);

public:
	Queue();
	bool Is_Empty(void);
	bool Is_Full(void);
	void Enqueue(string, int);
	int Dequeue(void);
	int Front(void);
	int Back(void);
	~Queue();
};
#endif