// lab20161031a.cpp 
// Corey Gray
// 31 Oct 2016
//
// For CS 201 Fall 2016
// Creating tuples from user input using provided source files

#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <string>
using std::string;
using std::getline;
#include <sstream>
using std::istringstream;
#include <tuple>
using std::tuple;
using std::get;
#include "trunc.h"

int main()
{
	cout << "This program prints a truncated tuple from user input." << endl;

	// Input a line, with error checking
	string line;
	cout << "Type some text (empty line to end): ";
	getline(cin, line);
	if (!cin)
		return 0;
	if (line == "")
		return 0;

	tuple<string, int> t{ trunc8(line) };

	cout << std::get<0>(t) << endl;
}