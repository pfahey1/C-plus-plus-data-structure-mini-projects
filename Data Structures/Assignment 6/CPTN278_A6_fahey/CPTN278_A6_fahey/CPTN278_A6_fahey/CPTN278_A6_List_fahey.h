
// Paul Fahey
// 26 March 2012
//
// List Class Header File.
//
// List implementation is dynamically linked list based.
// List uses an External Node.
// List has Error checking.
// List remains sorted.
// No duplicate entries allowed.
// This code was taken from another source


#ifndef LIST_H
#define LIST_H

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "CPTN278_A6_Node_fahey.h"

class List
{
	private:
	
		Node *begin;
		Node *end;
		Node *walking;
		int count;

	public:

		List();
		bool Is_Empty(void);
		bool Is_Full(void);
		bool Insert(Node *);
		bool Remove(Node *);
		void Display(void);
		Node *Search(Node *);
		~List();
};
#endif