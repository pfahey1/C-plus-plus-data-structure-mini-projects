// Paul Fahey
// 17 April 2012
//
// Tree_Node Class Body File.
// This code was courtesy of Hal Bettle
//

#include "CPTN278_A8_Tree_Node_Fahey.h"

Tree_Node::Tree_Node()
{
	left = 0;
	right = 0;
	number = 0;
}

void Tree_Node::set_left(Tree_Node *value)
{
	left = value;
	return;
}

Tree_Node *Tree_Node::get_left(void)
{
	return left;
}

void Tree_Node::set_right(Tree_Node *value)
{
	right = value;
	return;
}

Tree_Node *Tree_Node::get_right(void)
{
	return right;
}

void Tree_Node::set_number(int value)
{
	number = value;
	return;
}
	
int Tree_Node::get_number(void)
{
	return number;
}

void Tree_Node::display(void)
{
	cout << number;
	return;
}

Tree_Node::~Tree_Node()
{
	// Do nothing destructor
}