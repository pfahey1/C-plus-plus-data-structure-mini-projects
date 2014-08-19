/*

Paul Fahey
19 March 2012
Node Class Header File
Some Code was taken from another source

*/

#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Node
{
public:
	Node *flink;
	Node *blink;
	string type;
	int fee;

	void set_flink(Node *);
	Node get_flink(void);
	void set_blink(Node *);
	Node get_blink(void);
	void set_type(string);
	string get_type(void);
	void set_fee(int);
	int get_fee(void);
};
#endif