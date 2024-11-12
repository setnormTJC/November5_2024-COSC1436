// Introduction to the dynamic array - AKA- vector.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector> 

using std::vector; //vector is a "dynamic" array
					//an array whose size can 
					//SHRINK and grow
using std::cout; 


int main()
{
	cout << "How many random numbers do you want to insert? \n";
	int desiredNumberOfNumbers;
	std::cin >> desiredNumberOfNumbers; 
	
	const int NUMBER_OF_ELEMENTS = 10; 

	int nums[NUMBER_OF_ELEMENTS]; 

	auto something = 3; 

	cout << typeid(something).name() << "\n";

	cout << nums << "\n";
	

	//int nums[10]; 

	vector<int> dynamicArrayOfNumbers = { 8, 6, 7, 5, 3, 0, 9 }; //Jenny's number 

	cout << "Size of array is: " << dynamicArrayOfNumbers.size() << "\n";

	//inserting 10 random numbers into the back of the dynamic array 
	for (int i = 0; i < desiredNumberOfNumbers; ++i)
	{
		dynamicArrayOfNumbers.push_back(rand() % 100); //rand() % 100 yields numbers between 0 and 99
	}

	for (int i = 0; i < dynamicArrayOfNumbers.size(); ++i)
	{
		//cout << dynamicArrayOfNumbers.at(i) << "\n";
		cout << dynamicArrayOfNumbers[i] << "\n";
	}




}
