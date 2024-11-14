// Nov12- continuing array stuff.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector> 
#include<iomanip>

using std::cout; //shortcuts
using std::string; 
using std::vector;
using std::left; 
using std::setw; 

int main()
{
    //vector<int> nums; 

    const int NUMBER_OF_ROWS = 4; 
    const int NUMBER_OF_COLUMNS = 5;
    int multiplicationTable[4][5] =
    {
        {1, 2, 3, 4, 5},
        {2, 4, 6, 8, 10},
        {3, 6, 9, 12, 15},
        {4, 8, 12, 16, 20}//, 
        //{} adding this will go out of bounds 
   }; 

    char vowels[] =
    {
        'A',
        'E',
        'I',
        'O',
        'U'
    };



    //cout << "Is it 5? " << sizeof(vowels) << "\n";// endl;


    for (int currentRow = 0; currentRow < NUMBER_OF_ROWS; ++currentRow)
    {
        for (int currentColumn = 0; currentColumn < NUMBER_OF_COLUMNS; ++currentColumn)
        {
            cout << left << setw(4) << multiplicationTable[currentRow][currentColumn];
        }
        cout << "\n";
    }

    //making an ASCII maze (it's amazing) 



    //std::cout << "Hello World!\n";
}
