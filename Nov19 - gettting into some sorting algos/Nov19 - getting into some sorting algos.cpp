// Nov19 - gettting into some sorting algos.cpp : This file contains the 'main' function. Program execution begins and ends there.
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


void inplace_ascending_sort(vector<int>& someUnsortedNumbers)
{
	for (int leftIndex = 0; leftIndex < someUnsortedNumbers.size() - 1; ++leftIndex)
	{
		for (int rightIndex = leftIndex + 1; rightIndex < someUnsortedNumbers.size(); ++rightIndex)
		{
			if (someUnsortedNumbers[rightIndex] < someUnsortedNumbers[leftIndex]) //22 < 33
			{
				mySwap(someUnsortedNumbers, leftIndex, rightIndex);

			}
		}
	}
}

vector<int> out_of_place_ascending_sort(vector<int>& someUnsortedNumbers)
{
	vector<int> someSortedNums; //{}
	//for (int i = 0; i < someUnsortedNumbers.size(); ++i)
	//{
	while (someUnsortedNumbers.empty() == false)
	{


		int currentMinimum = findMinimum(someUnsortedNumbers);

		//how to erase that minimum?
		auto positionOfCurrentMinimum = std::find(someUnsortedNumbers.begin(), someUnsortedNumbers.end(), currentMinimum);
		someUnsortedNumbers.erase(positionOfCurrentMinimum);

		someSortedNums.push_back(currentMinimum);
	}
//	}

	return someSortedNums; 
}

int main()
{
	vector<int> someUnsortedNumbers;// = { 55, 44, 33, 22, 11 };

	const int N = 100; //Big O notation 

	for (int i = 0; i < N; ++i)
	{
		someUnsortedNumbers.push_back(rand() % N); //random numbers from 0 - 100 (99)
	}
	
	//cout << "Minimum is: " << findMinimum(someUnsortedNumbers) << "\n";
	//auto someSortedNumbers = out_of_place_ascending_sort(someUnsortedNumbers); 
	cout << "UNSORTED (random) list of nums: \n";
	print(someUnsortedNumbers); 

	inplace_ascending_sort(someUnsortedNumbers);

	cout << "\n\nWas the sort successful?\n";
	print(someUnsortedNumbers); 

}

