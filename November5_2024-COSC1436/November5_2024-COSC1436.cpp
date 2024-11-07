// November5_2024-COSC1436.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using std::cout; 
using std::string; 


int main()
{
	//our first (sort of) array: 
	//this is a "C-style", static array
	string groceryList[5] =
	{
		"Eggs",
		"bacon",
		"tuna",
	};
	int nums[10] = { 1, 2, 3, 4 };

	//cout << "What is this? " << groceryList << "\n";

	cout << "GroceryList[0] yields: " << groceryList[0] << "\n";

	//int oddNumbers[] = {1, 3, 5, 7};
	//int bigBoy[10'000'000]; //how many Bytes is this? 

	//cout << "What do it be? " << groceryList->at(4) << "\n";

}
