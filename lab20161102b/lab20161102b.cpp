// lab20161102b.cpp 
// Corey Gray
// 02 Nov 2016
//
// For CS 201 Fall 2016
// Creating structs from user input using provided source files

#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <string>
using std::string;
using std::getline;
#include <sstream>
using std::istringstream;
#include "truncstruct.h"

int main()
{
	cout << "This program prints a truncated struct from user input." << endl;

	// Input a line, with error checking
	string line;
	cout << "Type some text (empty line to end): ";
	getline(cin, line);
	if (!cin)
		return 0;
	if (line == "")
		return 0;

	SI input;
	input = trunc8(line);

	cout << input.str << endl;
}