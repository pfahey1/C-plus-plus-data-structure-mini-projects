//
// CPTN278_A8_Node_Bettle1.h 
//
// Hal Bettle
// 28 March 2009
//
// Node Class Header File.
//
// Node only has public Data Members so it is the same as a Struct.
//
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