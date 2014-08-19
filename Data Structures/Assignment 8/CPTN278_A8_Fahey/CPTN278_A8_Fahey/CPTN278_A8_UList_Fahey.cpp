// Paul Fahey
// 17 April 2012
//
// Unsorted List Class Body File.
//
// List implementation is dynamically linked list based.
// List uses an External Node.
// List has Error checking.
// List remains un sorted.
// Duplicate entries allowed.
// This code was courtesy of Hal Bettle
//

#include "CPTN278_A8_UList_Fahey.h"

UList::UList()
{
	// initialize the list
	begin = 0;
	end = 0;
	walking = 0;
	count = 0;
}

bool UList::Is_Empty(void)
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

bool UList::Is_Full(void)
{
	return false;
}

bool UList::Insert(Node *item)
{
	if ( ! UList::Is_Full() ) // Check for full list
	{
		Node *element = new Node;
		element->set_number( item->get_number() );

		if (count == 0)
		{
			element->set_flink( begin );
			element->set_blink( end );
			begin = element;
			end = element;
			count++;
			return true;
		}
		else 
		{
			element->set_flink( begin );
			element->set_blink( 0 );
			begin->set_blink( element );
			begin = element;	
		}
		count++;
	    return true;
		}
		return false;
	}

bool UList::Remove(Node *item)
{
	Node *remove_point = 0;

	if ( ! UList::Is_Empty() )
	{
		if ( ( remove_point = Search ( item ) ) != 0 ) // if we find it
		{
			if ( begin == end ) // only one item on list
			{
				begin = 0;
				end = 0;
			}
			else if ( remove_point == begin ) //remove from begining
			{
				( begin->get_flink() )->set_blink( 0 );
				begin = begin->get_flink();
			}
			else if ( remove_point->get_flink() == 0 ) // remove from end
			{
				( end->get_blink() )->set_flink( 0 );
				end = end->get_blink();
			}
			else // remove from somewhere in the middle
			{
				( remove_point->get_blink() )->set_flink( remove_point->get_flink() );
				( remove_point->get_flink() )->set_blink( remove_point->get_blink() );
			}
				
			count--;
			delete remove_point;
			return true;
		}
	}
	return false;
}

void UList::Display(void)
{
	walking = begin;
	for ( int i = 0; i < count; i++ )
	{
		cout << "Item = ";
		walking->display();
		cout << "." << endl;
		walking = walking->get_flink();
	}
	return;
}

Node *UList::Search(Node *item)
{
	walking = begin;
	if ( ! UList::Is_Empty() )
	{
        // walking != 0 check must be first else second test can fail.
		while ( ( walking != 0 ) && ( item->get_number() > walking->get_number() ) )
		{
			walking = walking->get_flink();
		}
	}
	return walking;
}

UList::~UList()
{
	while ( ! UList::Is_Empty() )
	{
		UList::Remove( begin );
	}
}