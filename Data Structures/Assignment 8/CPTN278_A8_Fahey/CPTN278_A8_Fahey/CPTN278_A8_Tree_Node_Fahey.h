// Paul Fahey
// 17 April 2012
//
// Tree Node Class Header File.
//
// Tree Node only has public Data Members so it is the same as a Struct.
// This code was courtesy of Hal Bettle
//
#ifndef TREE_NODE_H
#define TREE_NODE_H

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "CPTN278_A8_Tree_Fahey.h"

class Tree;

class Tree_Node
{
private:

	int number;

public:
	Tree_Node *left;
	Tree_Node *right;

	Tree_Node();
	void set_left(Tree_Node *);
	Tree_Node *get_left(void);
	void set_right(Tree_Node *);
	Tree_Node *get_right(void);
	void set_number(int);
	int get_number(void);
	void display(void);
	~Tree_Node();
};
#endif