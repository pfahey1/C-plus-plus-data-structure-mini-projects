/****************************************
*Program Name: Family Jewels - Player Class Body
*Description: Body file of the player class
*Author: Peter Brill Jr.	Paul Fahey
*Date: 4-19-2012
*Modification History:
*****************************************/

#include "CPTN278_FJ_class_queue.h"

Queue::Queue()
{
	int i;
                // initialize the queue
        front = 0;
        back = 0;
        count = 0;
        for (i = 0; i < MAX_SIZE; i++)
        {
                gems[i] = 0;
        }
}

Queue::~Queue()
{
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
        if ( count == MAX_SIZE )
        {
                return true;
        }
        else
        {
                return false;
        }
}

void Queue::Enqueue(int value)
{
        // Need to account for array wrap around
        gems[front] = value;
        if ( front != MAX_SIZE - 1 )
        {
                front++;
        }
        else
        {
                front = 0;
        }

                count++;
                return;
}

int Queue::Dequeue(void)
        {
                int i;
                i = gems[back];
                // Need to account for array wrap around
                if ( back != MAX_SIZE - 1 )
                {
                        back++;
                }
                else
                {
                        back = 0;
                }
                        count--;
                        return i;
}