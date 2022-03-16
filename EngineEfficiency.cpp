// EngineEfficiency.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;
#include <iostream>
#include "DieselEngine.h"
#include "ExternalCombustionEngine.h"
#include "InternalCombustionEngine.h"
#include "PetrolEngine.h"
#include "SteamEngine.h"



int main()
{
	int choice;
	cout << "Select a number to get efficiency for given engines:" << endl;
	cout << "1. Internal Combustion Engine \n2. External Combustion Engine \n3. Steam Engine " << endl;
	cout << "4. Petrol Engine \n5. Diesel Engine " << endl;
	cin >> choice;
	cout << endl;

	switch (choice)
	{
	case 1:
	{
		InternalCombustionEngine ice;
		cout << "Efficiency for Internal Combustion Engine is " << ice.GetEfficiency() << " %" << endl;
		cout << endl;
		break;
	}
	case 3:
	{
		SteamEngine stm;
		cout << "Efficiency for Steam Engine is " << stm.GetEfficiency() << " %" << endl;
		cout << endl;
		break;
	}
	case 2:
	{
		ExternalCombustionEngine ece;
		cout << "Efficiency for External Combustion Engine is " << ece.GetEfficiency() << " %" << endl;
		cout << endl;
		break;
	}
	case 5:
	{
		DieselEngine die;
		cout << "Efficiency for Diesel Engine is " << die.GetEfficiency() << " %" << endl;
		cout << endl;
		break;
	}
	case 4:
	{
		PetrolEngine ptr;
		cout << "Efficiency for Petrol Engine is " << ptr.GetEfficiency() << " %" << endl;
		cout << endl;
		break;
	}

	default:
		cout << "Invalid choice";
		cout << endl;
		break;
	}

    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
