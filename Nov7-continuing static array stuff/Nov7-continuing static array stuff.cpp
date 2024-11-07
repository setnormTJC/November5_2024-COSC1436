// Nov7-continuing static array stuff.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#define DEMO_PTR_V_REF



using std::cout; 

int main()
{
	int a1 = 123; 

	int* pointerToA1 = &a1; 
	
	cout << pointerToA1 << "\n";

	pointerToA1++; 

	cout << pointerToA1 << "\n";

	int anArray[5]; 

	cout << anArray << "\n";

	//int first5Evens[5] = { 0, 2, 4, 6, 8 }; //the 5 in the square brackets means this array holds 5 integers
	////the square brackets are called the "subscript" (index) 2operator 
	////cout << std::boolalpha; 

	////cout << numbers << "\n";
	//
	////for (int index = 0; index < 557; ++index) //out of bounds!
	////{
	////	cout << first5Evens[index] << "\n";
	////}


	//const int NUMBER_OF_VOWELS = 6; 
	//char vowels[NUMBER_OF_VOWELS]; // = { 'a', 'e', 'i','o', 'u', 'y' };
	//
	//for (int index = 0; index < NUMBER_OF_VOWELS; ++index)
	//{
	//	//vowels[index] = index + 97;* //generates a through g
	//	cout << "Enter the vowel number " << index << "\n";
	//	std::cin >> vowels[index];
	//	//if (!isalpha)

	//}
	//for (char theCurrentVowel : vowels)
	//{
	//	cout << theCurrentVowel << "\n";
	//}

	//double 
	//system("pause"); 



	///*int pointer*/
	//int number = 0;
	//int* ptrToNumber = &number; 


	//for (int i = 1; i < 10; ++i)
	//{
	//	cout << ptrToNumber << "\n";
	//	*ptrToNumber = i; 
	//	ptrToNumber++; 

	//}

	////system("pause"); 

	///*char pointer*/
	//char letter = 'a'; 

	//char* ptrToLetter = &letter; 
	//cout << (void*) ptrToLetter << "\n";

	//int i = 0; 
	//while (i < 10)
	//{
	//	cout << (void*) ptrToLetter << "\n";
	//	i++; 
	//	ptrToLetter++; 
	//}

	/*pointers v references*/
	//int* ptr = NULL; 
	int a = 123; 
	int& ref = a;
	cout << "\n\n";
	ref++; 
	int* ptr = &a; 

	cout << sizeof(ref) << "\n";
	cout << sizeof(ptr) << "\n";
	//cout << ref << "\n";

	
}
