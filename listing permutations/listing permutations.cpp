// listing permutations.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using std::cout; 
using std::vector;

void printVec(const vector<int>& nums)
{
	for (auto& num : nums)
	{
		cout << num << " ";
	}
	cout << "\n";
}

void mySwap(vector<int>& nums, int firstIndex, int secondIndex)
{
	int temp = nums[firstIndex]; 
	nums[firstIndex] = nums[secondIndex];
	nums[secondIndex] = temp; 
}


/*Approach taken by Ford, Topp textbook (published 2002)*/
void permute(vector<int> nums, int index)
{
	//base case: 
	if (index == nums.size() - 1)
	{
		printVec(nums); 
	}

	else
	{
		permute(nums, index + 1);

		for (int i = index + 1; i < nums.size(); ++i)
		{
			mySwap(nums, i, index);

			permute(nums, index + 1);
		}

	}

}

int main()
{
	vector<int> nums = { 1, 2, 3, 4 };

	permute(nums, 0); 
}
