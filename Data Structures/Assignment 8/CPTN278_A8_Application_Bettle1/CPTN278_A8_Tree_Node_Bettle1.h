//
// CPTN278_A8_Tree_Node_Bettle1.h 
//
// Hal Bettle
// 28 March 2009
//
// Tree Node Class Header File.
//
// Tree Node only has public Data Members so it is the same as a Struct.
//
#ifndef TREE_NODE_H
#define TREE_NODE_H

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "CPTN278_A8_Tree_Bettle1.h"

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