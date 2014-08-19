// Paul Fahey
// 17 April 2012
//
// Tree Class Header File.
//
// Tree implementation is dynamically linked list based.
// Tree uses an External Node.
// Tree has Error checking.
// Tree remains ballanced after every 50 insettions.
// No duplicate entries allowed.
//
// Code algorithms based on algorithims in
// C++ How to Program 6th Edition
// by Deitel and Deitel
// This code was courtesy of Hal Bettle
//

#ifndef TREE_H
#define TREE_H

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "CPTN278_A8_Tree_Node_Fahey.h"

class Tree_Node;

class Tree
{
private:

	Tree_Node *root;
	int        count;

	// private helper functions
	bool Insert_Helper(Tree_Node **, Tree_Node *);
	void Display_In_Order_Helper(Tree_Node *);
	void Display_Pre_Order_Helper(Tree_Node *);
	void Display_Post_Order_Helper(Tree_Node *);
	Tree_Node *Search_Helper(Tree_Node *, Tree_Node *);

public:
	Tree();
	bool Is_Empty(void); 
	bool Is_Full(void);  
	bool Insert(Tree_Node *);
	bool Remove(Tree_Node *);
	void Display_In_Order(void);
	void Display_Pre_Order(void);
	void Display_Post_Order(void);
	Tree_Node *Search(Tree_Node *);
	~Tree();
};
#endif
