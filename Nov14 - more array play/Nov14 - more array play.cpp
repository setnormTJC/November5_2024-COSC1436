// Nov14 - more array play.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include<algorithm>
using std::cout; 

using std::vector;
using std::string; 

void mySwap(vector<int>& someNumbers, int firstPosition, int secondPosition)
{
	int temporaryCopy = someNumbers[firstPosition];

	someNumbers[firstPosition] = someNumbers[secondPosition]; 

	someNumbers[secondPosition] = temporaryCopy; 

}

void print(const vector<int>& someNumbers)
{
	//someNumbers.at(0) = 123; 
	for (auto num : someNumbers)
	{
		cout << num << " ";
	}
	cout << "\n";
}


void myShuffle(vector<int>& someNumbers)
{
	for (int i = 0; i < someNumbers.size(); ++i)
	{
		int randomIndexToSwap = rand() % someNumbers.size(); 
		mySwap(someNumbers, i, randomIndexToSwap);
	}
}

int findMinimum(vector<int> nums) //{1, 4, -23, 4, 22, 4456, -1830}
{
	int minimumSoFar = nums[0]; //1
	//cout << INT_MAX

	for (int i = 1; i < nums.size(); ++i)
	{
		if (nums[i] < minimumSoFar)
		{
			minimumSoFar = nums[i]; 
		}
	}

	return minimumSoFar; 
}

vector<int> out_of_place_sort(vector<int>& someNumbers)
{

}

void inplace_sort(vector<int>& someNumbers)
{

}

//using namespace std; //is "bad" -> why
int main()
{
	//std::vector<vector<string>> gravesites =
	//{
	//	{"Casper",	"Abe Lincoln"},//the first row of gravesites
	//	{"Jimbo",	"Tupac",		"MJ" } //second row
	//}; //this is a "jagged" array 

	//auto someThing = 1.23;

	//for (auto currentRow : gravesites) //range-based for loop
	////for x in list: //this is the "Python" way (list comprehension)
	//{
	//	for (auto person : currentRow)
	//	{
	//		cout << person << " "; 
	//	}
	//	cout << "\n";
	//}
	// 
	srand(time(0)); //randomizes results of shuffle every program execution
	//time(0) 
	//suppose we have the following dynamic array: 
	vector<int> someNumbers = { -9999991, 4, -23, 4, 22, 4456, -1830 };


	cout << "contents of array BEFORE the swap: \n";
	print(someNumbers); 

	cout << "What is the minimum in this list? \n"; 
	int minimum = findMinimum(someNumbers); 

	cout << "It is ..." << minimum << "\n";

	//can we write a function that swaps the contents of two locations in this array? 
	int firstPosition = 3; 
	int secondPosition = 4;

	//cout << "Enter two positions to swap\n"; 
	//std::cin >> firstPosition >> secondPosition; 
	//
	//static_assert
	mySwap(someNumbers, firstPosition, secondPosition); 
	cout << "AFTER calling swap, we have:\n";
	print(someNumbers); 

	//std::shuff
	
	for (int i = 0; i < 10; ++i)
	{
		myShuffle(someNumbers);

		cout << "\n\nAfter SHUFFLING, the array contains: \n";
		print(someNumbers);

	}



	//-> {11, 22, 33, 44, 55, 66}
}

