// Paul Fahey
// 17 April 2012
//
// Tree Class Body File.
//
// Tree implementation is dynamically linked tree based.
// Tree uses an External Tree_Node.
// Tree has Error checking.
// Tree remains ballanced after every 50 insettions.
// No duplicate entries allowed.
//
// Code algorithms based on algorithims in
// C++ How to Program 6th Edition
// by Deitel and Deitel
// This code was courtesy of Hal Bettle
//

#include "CPTN278_A8_Tree_Fahey.h"

Tree::Tree()
{
	// initialize the tree
	root = 0;
	count = 0;
}

bool Tree::Is_Empty(void)
{
	if ( count == 0 )
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Tree::Is_Full(void)
{
	return false;
}

bool Tree::Insert(Tree_Node *item)
{
	if ( ! Tree::Is_Full() ) // Check for full tree
	{
		return Insert_Helper(&root, item); 
	}
	else
	{
		return false;
	}
}

bool Tree::Insert_Helper(Tree_Node **ptr, Tree_Node *item)
{
	if ( *ptr == 0 )
	{
		*ptr = new Tree_Node;
		(*ptr)->set_number( item->get_number() );
		(*ptr)->set_left  ( 0 );
		(*ptr)->set_right ( 0 );
		count++;
		return true;
	}
	else if ( item->get_number() < (*ptr)->get_number() ) // go left
	{
		Insert_Helper( &((*ptr)->left), item); //  compiles if left is public
	}
	else if ( item->get_number() > (*ptr)->get_number() ) // go right
	{
		Insert_Helper( &((*ptr)->right), item); //  compiles if right is public
	}
	else // duplicate item
	{
		return false;
	}
}

bool Tree::Remove(Tree_Node *item)
{
	if ( ! Tree::Is_Empty() ) // Check for empty tree
	{
		// I'll let you figure it out for real.
		// For now this code will just remove the nodes
		// it does a full tree post order traversal and removal.
		if ( item->get_left() != 0 )
		{
			Remove( item->get_left() );
			item->set_left( 0 );
		}
		if ( item->get_right() != 0 )
		{
			Remove( item->get_right() );
			item->set_left( 0 );
		}
		count--;
		delete item;
		return true;
	}
	else
	{
		return false;
	}
}

void Tree::Display_In_Order(void)
{
	Display_In_Order_Helper(root);
	return;
}

void Tree::Display_In_Order_Helper(Tree_Node *ptr)
{
	if ( ptr != 0 )
	{
		Display_In_Order_Helper( ptr->get_left()  );
		cout << "Item = ";
		ptr->display();
		cout << "." << endl;
		Display_In_Order_Helper( ptr->get_right() );
	}
	return;
}

void Tree::Display_Pre_Order(void)
{
	Display_Pre_Order_Helper(root);
	return;
}

void Tree::Display_Pre_Order_Helper(Tree_Node *ptr)
{
	if ( ptr != 0 )
	{
		cout << "Item = ";
		ptr->display();
		cout << "." << endl;
		Display_Pre_Order_Helper( ptr->get_left()  );
		Display_Pre_Order_Helper( ptr->get_right() );
	}
	return;
}

void Tree::Display_Post_Order(void)
{
	Display_Post_Order_Helper(root);
	return;
}

void Tree::Display_Post_Order_Helper(Tree_Node *ptr)
{
	if ( ptr != 0 )
	{
		Display_Post_Order_Helper( ptr->get_left()  );
		Display_Post_Order_Helper( ptr->get_right() );
		cout << "Item = ";
		ptr->display();
		cout << "." << endl;
	}
	return;
}

Tree_Node *Tree::Search(Tree_Node *item)
{
	item = Search_Helper(root, item);
	return item;
}

Tree_Node *Tree::Search_Helper(Tree_Node *ptr, Tree_Node *item)
{
	if ( ptr != 0 )
	{
		if ( item->get_number() < ptr->get_number() ) // go left
		{
			Search_Helper( ptr->get_left(), item);
		}
		else if ( item->get_number() > ptr->get_number() ) // go right
		{
			Search_Helper( ptr->get_right(), item);
		}
		else if ( item->get_number() == ptr->get_number() ) // 
		{
			return item;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}	
}

Tree::~Tree()
{
	while ( ! Tree::Is_Empty() )
	{
		Tree::Remove( root );
	}
}