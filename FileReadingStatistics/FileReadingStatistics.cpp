// FileReadingStatistics.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include<fstream> 

#include<string> 

using std::cout; 
using std::ifstream;

using std::string; 

int main()
{
    //cout << "\t\n"
    ifstream fin{ "C:/Users/Work/Downloads/LotRSong.txt" }; //fin means "file input" 
   
    if (!fin.is_open())
    {
        cout << "FNFE\n";
        return -1;
    }

    int numberOfWords = 0, 
        numberOfLines = 0, 
        numberOfCharacters = 0; 

    while (!fin.eof())
    {
        string currentWord; 
        fin >> currentWord; 

        numberOfCharacters += currentWord.length(); 

        numberOfWords++; 
        //cout << currentWord << "\n";
    }

    fin.seekg(std::ios::beg); 
    string currentLine; 
    while (std::getline(fin, currentLine))
    {
        numberOfLines++; 
        cout << currentLine << "\n";
    }
   
    cout << "Line count: " << numberOfLines << "\n";
    cout << "This many words were found in the file: " << numberOfWords << "\n";//a reasonable result for this text file is: ~= 200 words
    cout << "The number of characters: " << numberOfCharacters << "\n";


    
    fin.close(); 
    
    //std::cin; 
    
    

    //std::cout << "Hello World!\n";
}
