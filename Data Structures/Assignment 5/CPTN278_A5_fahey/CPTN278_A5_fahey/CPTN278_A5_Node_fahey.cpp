/*

  Paul Fahey
  19 March 2012

 Node Class Body File.
 Queue implementation is dynamically linked list based.

*/

#include "CPTN278_A5_Node_fahey.h"

//Some practice with getters and setters

void Node::set_flink(Node *link)
{
	flink = link;
}

Node Node::get_flink(void)
{
	return *flink;
}

void Node::set_blink(Node *link)
{
	blink = link;
}

Node Node::get_blink(void)
{
	return *blink;
}

void Node::set_type(string category)
{
	type = category;
}

string Node::get_type(void)
{
	return type;
}

void Node::set_fee(int amount)
{
	fee = amount;
}

int Node::get_fee(void)
{
	return fee;
}