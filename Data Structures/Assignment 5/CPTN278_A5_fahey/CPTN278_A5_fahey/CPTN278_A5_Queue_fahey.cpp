/*

  Paul Fahey
  19 March 2012

 Queue Class Body File.
 Queue implementation is dynamically linked list based.
 This code was taken from another source

*/
#include "CPTN278_A5_Queue_fahey.h"

Queue::Queue()
{
	// initialize the queue
	front = 0;
	back = 0;
	count = 0;
}

bool Queue::Is_Empty(void)
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

bool Queue::Is_Full(void)
{
	return false;
}

void Queue::Enqueue(string category, int value)
{
	// Need to account for empty or multi node queue
	if ( ! Queue::Is_Full() )
	{
		 Node *element = new Node;
		 if ( element == 0 )
		{
			return;
		}

		 element->type = category;
		 element->fee  = value;
   
			if ( Queue::Is_Empty() )
			{
				element->flink = back;
				element->blink = front;
				front = element;
				back = element;
		    }

			else
			{
				element->flink = back;
				element->blink = back->blink;
				back->blink = element;
				back = element;
			}

		count++;
		return;
	}

	else
	{
		return;
	}
}

int Queue::Dequeue(void)
{
	Node *element;
	int i;
	i = Queue::Front();

	// Need to account for one or multi node queue

	if ( ! Queue::Is_Empty() )
	{
	 element = front;

	  if ( count == 1 )
	  {
		 front = 0;
		 back = 0;
	  }
	  

	else
	{
		front = front->blink;
		front->flink = element->flink;
    }

	  count--;
	delete element;
	return i;
   }

	else
	{
		return i;
	}
}

int Queue::Front(void)
{
	//cout << "Front" << endl;
	int fee;

	if ( Queue::Is_Empty() )
	{
	 fee = 0;
	// cout << fee;
	
	}

	else
	{
		fee = front->fee;
	//	cout << fee;
		
	}

	return fee;
}

int Queue::Back(void)
{
	//cout << "Back" << endl;
	
	int fee;

	if ( Queue::Is_Empty() )
	{
	 fee = 0;
	// cout << fee;
	}

	else
	{
	 fee = back->fee;
	 //cout << fee;
	}

	return fee;
}

Queue::~Queue()
{
	while ( ! Queue::Is_Empty() )
	{

		Queue::Dequeue();
	}
}

