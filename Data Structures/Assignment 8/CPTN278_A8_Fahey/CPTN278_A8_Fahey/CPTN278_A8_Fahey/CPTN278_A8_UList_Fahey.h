// Paul Fahey
// 17 April 2012
//
// Unsorted List Class Header File.
//
// List implementation is dynamically linked list based.
// List uses an External Node.
// List has Error checking.
// List remains un sorted.
// Duplicate entries allowed.
// This code was courtesy of Hal Bettle
//
#ifndef ULIST_H
#define ULIST_H

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "CPTN278_A8_Node_Fahey.h"

class UList
{
private:

	Node *begin;
	Node *end;
	Node *walking;
	int   count;

public:
	UList();
	bool Is_Empty(void); 
	bool Is_Full(void);  
	bool Insert(Node *);
	bool Remove(Node *);
	void Display(void);
	Node *Search(Node *);
	~UList();
};
#endif