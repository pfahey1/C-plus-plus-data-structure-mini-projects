 /*

  Paul Fahey
 19 March 2012

 Queue Class Header File.
 Queue implementation is dynamically linked list based.
 This code was taken from another source

*/

#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "CPTN278_A5_Node_fahey.h"

class Queue
{
private:

	Node *front;
	Node *back;
	int count;

public:

	Queue();
	bool Is_Empty(void); // Could be private but this also leaves error checking option to user
	bool Is_Full(void); // Could be private but this also leaves error checking option to user
	void Enqueue(string,int);
	int Dequeue(void);
	int Front(void);
	int Back(void);
	~Queue();
};
#endif