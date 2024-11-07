// Demoing range based for loop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>


using std::cout; 

auto returnSomething(char i, int a)
{
	return 'a';
}

int main()
{
	int listOfNumbers[5] = { 1, 2, 3, 4, 5 };
	auto pi = 3.14; 

	std::vector<int> nums = { 1, 2, 3, 4, 5 };
	//.begin()

	for (auto& eachNumber : listOfNumbers)
	{
		cout << eachNumber << "\n";
	}
}
