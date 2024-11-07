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

	vector<int> dynamicArrayOfNumbers = { 8, 6, 7, 5, 3, 0, 9 };

	cout << "Size of array is: " << dynamicArrayOfNumbers.size() << "\n";

	for (int i = 0; i < dynamicArrayOfNumbers.size(); ++i)
	{
		cout << dynamicArrayOfNumbers.at(i) << "\n";
	}
}
