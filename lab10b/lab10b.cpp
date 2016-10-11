// lab10b.cpp
// Corey Gray
// 23 Sep 2016
//
// For CS 201 Spring 2016
// Receives two integers a and b then determines if the integers in the range (1, a) can be divided by b

#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <string>
using std::string;
using std::getline;
#include <sstream>
using std::istringstream;

void isDiv(int a, int b)
{
	for (int i = 1; i <= a; ++i)
	{
		if (i % b == 0)
		{
			cout << i << endl;
		}
	}
}

int main()
{
	string range;
	cout << "Enter a positive integer to define the range: " << endl;
	getline(cin, range);
	if (!cin)
	{
		cout << "Error in input" << endl;
		return 0;
	}

	istringstream in(range);
	int a;  // Integer to input from line
	in >> a;
	if (!in)
	{
		cout << "Error in input" << endl;
		return 0;
	}
	if (a < 1)
	{
		cout << "You must enter a positive integer." << endl;
		return 0;
	}

	string divisor;
	cout << "Enter a positive integer to divide by: " << endl;
	getline(cin, divisor);
	if (!cin)
	{
		cout << "Error in input" << endl;
		return 0;
	}

	istringstream in2(divisor);
	int b;  // Integer to input from line
	in2 >> b;
	if (!in2)
	{
		cout << "Error in input" << endl;
		return 0;
	}
	if (b < 1)
	{
		cout << "You must enter a positive integer." << endl;
		return 0;
	}

	isDiv(a, b);
}