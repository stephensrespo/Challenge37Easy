// Challenge37Easy.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <fstream>
#include <iostream>
#include <sstream>
using namespace std;

//Write a function to read in a filename using argv and count the number of lines in the file and words.

int main(int argc, char **argv)
{

	if (argc != 2)
	{
		cout << "Usage: Challenge37Easy <file>"<< endl;
		return EXIT_FAILURE;
	}

	ifstream file(argv[1]);
	string line;
	string word;
	stringstream ss;
	int lines = 0;
	int words = 0;

	if (!file.is_open())
	{
		cout << "Could not open file for reading :" << argv[1] << endl;
		return EXIT_FAILURE;
	}

	while (getline(file, line))
	{
		lines++;

		ss.clear();
		ss.str(line);
		while (ss >> word)
		{
			words++;
		}
	}

	cout << "Total lines in file: " << argv[1] << " is : " << lines << " and words is: " << words << endl;

    return 0;
}

