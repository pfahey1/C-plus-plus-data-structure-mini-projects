//
// CPTN278_A8_Node_Bettle1.cpp 
//
// Hal Bettle
// 28 March 2009
//
// Node Class Body File.
//
#include "CPTN278_A8_Node_Bettle1.h"

Node::Node()
{
	flink = 0;
	blink = 0;
	number = 0;
}

void Node::set_flink(Node *value)
{
	flink = value;
	return;
}

Node *Node::get_flink(void)
{
	return flink;
}

void Node::set_blink(Node *value)
{
	blink = value;
	return;
}

Node *Node::get_blink(void)
{
	return blink;
}

void Node::set_number(int value)
{
	number = value;
	return;
}
	
int Node::get_number(void)
{
	return number;
}

void Node::display(void)
{
	cout << number;
	return;
}

Node::~Node()
{
	// Do nothing destructor
}