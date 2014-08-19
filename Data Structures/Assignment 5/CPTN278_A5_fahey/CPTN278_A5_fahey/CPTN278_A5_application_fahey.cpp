/*

  Paul Fahey
  19 March 2012

 Queue application File.
 Queue implementation is dynamically linked list based.
*/

#include "CPTN278_A5_Queue_fahey.h"

using namespace std;

int main(int argc, char* argv[]) // Function Main

{
	cout << "Welcome to assignment 5" << endl; // PRINT Welcome Message

	cout << endl;

	Queue cars;
    Queue trucks;
	Queue vehicles;
	Queue all_vehicles;

	string car = "Car";
	string truck = "Truck";
	string vehicle = "Speed Pass Vehicle";

	int total = 0;
	int cartotal = 0;
	int trucktotal = 0;
	int vehicletotal = 0;

	cout << endl;
	
	cout << "Is the car queue empty? " << cars.Is_Empty() << endl;
	cout << "Enqueuing..." << endl;

	for (int i = 0; i < 10; i++)
	{
		 cars.Enqueue(car,5);
		 //cars.Front();
			
	}

	cout << endl;

	//cout << "First Entry..." << endl;
	//cars.Back();
	cout << "Is the car queue full? " << cars.Is_Full() << endl;
	
	cout << endl;

	cout << "Dequeuing the rest of the queue..." << endl;

	for (int i = 0; i < 10; i++) // Dequeuing split into a seperate loop to test is_full and is_empty functions
	{
		cartotal += cars.Dequeue();
		//cars.Front();		 
	}

	cout << endl;

	//cout << "Last Entry and then resets..." << endl;
	//cars.Front();
	cout << "The total from cars is $" << cartotal << endl;

	cout << endl;

	cout << "Is the truck queue empty? " << trucks.Is_Empty() << endl;
	cout << "Enqueuing..." << endl;
	
	for (int i = 0; i < 10; i++)
	{
		trucks.Enqueue(truck, i + 5);
		//trucks.Front();	
	}

	cout << endl;

	//cout << "First Entry..." << endl;
	// trucks.Back();
	cout << "Is the truck queue full? " << trucks.Is_Full() << endl;

	cout << endl;
	
	cout << "Dequeuing the rest of the queue..." << endl;

	for (int i = 0; i < 10; i++) // Dequeuing split into a seperate loop to test is_full and is_empty functions
	{
		trucktotal += trucks.Dequeue();
		//trucks.Back()		 
	}

	cout << endl;

	//cout << "Last Entry and then resets..." << endl;
	 //trucks.Front();
	cout << "The total from trucks is $" << trucktotal << endl;

	cout << endl;

	cout << "Is the Speed Pass queue empty? " << vehicles.Is_Empty() << endl;
	cout << "Enqueuing..." << endl;
		
	for (int i = 0; i < 10; i++)
	{
		vehicles.Enqueue(vehicle, i + 10);
		//vehicles.Front();		
	}
	
	cout << endl;

	//cout << "First Entry..." << endl;
	// vehicles.Back();
	cout << "Is the Speed Pass queue full? " << vehicles.Is_Full() << endl;

	cout << endl;
	cout << "Dequeuing the rest of the queue..." << endl;

	for (int i = 0; i < 10; i++) // Dequeuing split into a seperate loop to test is_full and is_empty functions
	{
		vehicletotal += vehicles.Dequeue();
		//  vehicles.Back()
	}

	cout << endl;

	//cout << "Last Entry and then resets..." << endl;
	//vehicles.Front();
	cout << "The total from Speed Pass Vehicles is $" << vehicletotal << endl;

	cout << endl;

	cout << "The total from all Toll Queues is $" << cartotal + trucktotal + vehicletotal << endl;

	cout << endl;

	// Enqueing again for verification since dequeing from individual tolls were deleted from memory

	for (int i = 0; i < 10; i++)
	{
		cars.Enqueue(car,5);
		trucks.Enqueue(truck, i + 5);
		vehicles.Enqueue(vehicle, i + 10);
	}

	cout << "Payment verification (Cops are watching :0)" << endl;
	cout << "Cars Dequeuing..." << endl;
	cout << "Trucks Dequeuing..." << endl;
	cout << "Speed Pass Dequeuing..." << endl;
	
	for (int i = 0; i < 10; i++)

	{
		all_vehicles.Enqueue("Car",cars.Dequeue());
		total += all_vehicles.Dequeue();
		//all_vehicles.Front();
		all_vehicles.Enqueue("Truck",trucks.Dequeue());
		total += all_vehicles.Dequeue();
		//all_vehicles.Front();
		all_vehicles.Enqueue("Speed Pass Vehicle",vehicles.Dequeue());
		total += all_vehicles.Dequeue();
		//all_vehicles.Front();
	}

	cout << endl;


	cout << "The total from all the vehicles is $" << total << endl;

	cout << endl;

	cout << "Thank you for using assignment 5" << endl; // PRINT Message
}