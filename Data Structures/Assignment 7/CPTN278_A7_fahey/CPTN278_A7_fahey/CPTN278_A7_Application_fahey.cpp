/*

  Paul Fahey
  5 April 2012

  Demonstration of common sorting algorithms:

  *Bubble
  *Bucket
  *Merge
  *Selection

 Most of the code from sorting functions came from another source

*/

#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

#define arraySize 20


void bubbleSort(int []);
void bucketSort(int []);
void mergeSort(int [],int[],int);
void selectionSort(int []);


int main(int argc, char* argv[]) // Function Main

{
	cout << "Welcome to assignment 7" << endl; // PRINT Welcome Message

	cout << endl;

	int originalArray [] = {23,135,12,10,67,87,42,1,56,577,754,32,989,76,51,28,73,99,5,417};
	//int originalArray [arraySize];

	

	cout << "The original array is: " << endl; 

	for(int i = 0; i < arraySize; i++)
	{
		cout << originalArray[i] << " ";
	}
	
	/*

	srand( time(0) ); // seed created to generate different random numbers for each instance 

	cout << "The original array is: " << endl; 

	for (int j = 0; j < arraySize; j++) 
	{
	  originalArray[j] = rand () % 10001;
	  cout << originalArray[j] << " ";
	}
	*/

	cout << endl;
	cout << endl;

	bubbleSort(originalArray);

	cout << endl;

	cout << "Displaying original array again to show that it was copied properly: " << endl; 

	for(int i = 0; i < arraySize; i++)
	{
		cout << originalArray[i] << " ";
	}

	cout << endl;
	cout << endl;

	bucketSort(originalArray);

	cout << endl;
	

	cout << "Displaying original array again to show that it was copied properly: " << endl; 

	for(int i = 0; i < arraySize; i++)
	{
		cout << originalArray[i] << " ";
	}

	cout << endl;
	cout << endl;

	int tempArray [20]; // temporary array created to implement a merge sort properly

	mergeSort(originalArray,tempArray,arraySize);

	cout << endl;

	cout << "Displaying original array again to show that it was copied properly: " << endl; 

	for(int i = 0; i < arraySize; i++)
	{
		cout << originalArray[i] << " ";
	}
	
	cout << endl;
	cout << endl;

	selectionSort(originalArray);

	cout << endl;

	cout << "Displaying original array again to show that it was copied properly: " << endl; 

	for(int i = 0; i < arraySize; i++)
	{
		cout << originalArray[i] << " ";
	}
	
	cout << endl;
	cout << endl;

	cout << "Thank you for using assignment 7" << endl; // PRINT Message
}

void bubbleSort(int originalArray [arraySize])
{
	int copyArray [arraySize];
	
	for(int i = 0; i < arraySize; i++)
	{
		copyArray [i] = originalArray[i];
		//cout << copyArray [i] << " ";
	}

	for(int i = 0; i < arraySize; i++)
    {
        for(int j=0; j < i; j++)
        {
            if(copyArray[i] < copyArray[j])
            {
                int temp=copyArray[i]; 
                copyArray[i]=copyArray[j];
                copyArray[j]=temp;
            }

        }

    }

	cout << "The bubble sorted array is: " << endl; 

	for(int k = 0; k < arraySize; k++)
	{
		cout << copyArray[k] << " ";
	}

	cout << endl;
}

void bucketSort(int originalArray [arraySize])
{
		int copyArray [arraySize];
	
	for(int i = 0; i < arraySize; i++)
	{
		copyArray [i] = originalArray[i];
		//cout << copyArray [i] << " ";
	}
	
	int *arrayptr = copyArray;
	int *arPtr = arrayptr;

	int bucket[10] [20]; //2d array is created to sort the numberArray in

	for (int rows = 0; rows < 10; rows++) //initilizes all the rows to zero to eliminate junk data
	{
		for (int columns = 0; columns < arraySize; columns++) //initilizes all the columns to zero to eliminate junk data
		{
			bucket [rows] [columns] = 0; //populates the 2d array with 0's
		}
	}

	for (int placeHolder = 10; placeHolder < 10000 ; placeHolder *= 10) //starting in the ones place and works it way up to 1000s place
	{
       arrayptr = arPtr; 
		for (int i = 0; i < arraySize; i++) //while its cycling through each placeholder, cycles through each number of the array
		{
	        int currentNumber = *arrayptr; // current number being sorted
		    int sortNumber = ((currentNumber) % placeHolder) / (placeHolder / 10); //determines where number should be placed
		    bucket [sortNumber] [i] = currentNumber; //numbers get sorted into proper bucket or row
			arrayptr++; //increments to the next number of the array to be sorted
		}
	

	//gathers the sorted numbers and puts them in the original array

		arrayptr = arPtr; 
		for (int rows = 0; rows < 10; rows++) //cycles through rows to gather the values to replace original array
		{
			for (int columns = 0; columns < arraySize; columns++) //cycles through columns to gather the values to replace original array
			{
				if (bucket[rows][columns] != 0) //if the 2d does not have junk data
				{
					*arrayptr = bucket[rows][columns]; //replace the original array with the sorted values in the 2d array
					arrayptr++; //increments to the next number of the array to be gathered
				}
			}
		}
    
    //CLEAR BUCKETS AFTER EACH PLACE    

		for (int rows = 0; rows < 10; rows++) //cycles through rows to clear it up for the next placeholder
		{
			for (int columns = 0; columns < arraySize; columns++) //cycles through columns to clear it up for the next placeholder
			{
				bucket[rows][columns] = 0; // array is once again set to -1 for the next placeholder
			}
		}
	}

	cout << "The bucket sorted array is: " << endl; 

	for(int k = 0; k < arraySize; k++)
	{
		cout << copyArray[k] << " ";
	}
	
	cout << endl;
}

void merge(int copyArray[arraySize], int temp[arraySize], int left, int mid, int right)
{
  int i, left_end, num_elements, tmp_pos;

  left_end = (mid - 1);
  tmp_pos = left;
  num_elements = (right - left + 1);

  while ((left <= left_end) && (mid <= right))
  {
    if (copyArray[left] <= copyArray[mid])
    {
      temp[tmp_pos] = copyArray[left];
      tmp_pos += 1;
      left += 1;
    }
    else
    {
      temp[tmp_pos] = copyArray[mid];
      tmp_pos += 1;
      mid += 1;
    }
  }

  while (left <= left_end)
  {
    temp[tmp_pos] = copyArray[left];
    left += 1;
    tmp_pos += 1;
  }
  while (mid <= right)
  {
    temp[tmp_pos] = copyArray[mid];
    mid += 1;
    tmp_pos += 1;
  }

  //modified
  for (i=0; i < num_elements; i++)
  {
    copyArray[right] = temp[right];
    right -= 1;
  }
}

void m_sort(int copyArray[arraySize], int temp[arraySize], int left, int right)
{
  int mid;

  if (right > left)
  {
    mid = (right + left) / 2;
    m_sort(copyArray, temp, left, mid);
    m_sort(copyArray, temp, (mid+1), right);
    merge(copyArray, temp, left, (mid+1), right);
  }
}

void mergeSort(int originalArray[arraySize], int temp[arraySize], int array_size)
{
	int copyArray [arraySize];
	
	for(int i = 0; i < arraySize; i++)
	{
		copyArray [i] = originalArray[i];
		//cout << copyArray [i] << " ";
	}

    m_sort(copyArray, temp, 0, arraySize - 1);

  
	 cout << "The merge sorted array is: " << endl; 

	for(int k = 0; k < arraySize; k++)
	{
		cout << copyArray[k] << " ";
	}

	cout << endl;
}

void selectionSort(int originalArray [arraySize])
{
	int copyArray [arraySize];
	
	for(int i = 0; i < arraySize; i++)
	{
		copyArray [i] = originalArray[i];
		//cout << copyArray [i] << " ";
	}


     for (int i = 0; i < arraySize-1; i++)
     {
        int min;
		 min = i;
           		
		for (int j = i+1; j < arraySize; j++)
         {
             if (copyArray [j] < copyArray [min])
			 {
               		min = j;
			 }
         }
       
		int temp;		
		temp = copyArray [i];
        copyArray [i] = copyArray [min];
        copyArray [min] = temp;
     }

	 cout << "The selection sorted array is: " << endl; 

	for(int k = 0; k < arraySize; k++)
	{
		cout << copyArray[k] << " ";
	}

	cout << endl;
}









