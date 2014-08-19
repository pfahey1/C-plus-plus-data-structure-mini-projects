/****************************************
*Program Name: Family Jewels - Queue Class Header
*Description: Header File of the Queue Class
*Author: Peter Brill Jr.	Paul Fahey
*Date: 4-19-2012
*Modification History:
*****************************************/

#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#define MAX_SIZE 5

class Queue
{
        private:
        int front;
        int back;
        int count;
        int gems[MAX_SIZE];

public:
        Queue();
        bool Is_Empty(void);
        bool Is_Full(void);
        void Enqueue(int);
        int Dequeue(void);
        ~Queue();
};
#endif