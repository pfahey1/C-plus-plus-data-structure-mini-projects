
// Paul Fahey
// 26 March 2012
//
// Node Class Header File.
//
// Node only has public Data Members so it is the same as a Struct.
// This code was taken from another source


#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Node
{
	private:

		Node *flink;
		Node *blink;
		int number;

	public:

		Node();
		void set_flink(Node *);
		Node *get_flink(void);
		void set_blink(Node *);
		Node *get_blink(void);
		void set_number(int);
		int get_number(void);
		void display(void);
		~Node();
};
#endif