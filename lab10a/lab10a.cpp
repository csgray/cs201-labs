// lab10a.cpp
// Corey Gray
// 23 Sep 2016
//
// For CS 201 Spring 2016
// Determines if a range of integers can be divided by 3

#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <string>
using std::string;
using std::getline;

bool isDiv3(int n)
{
	return (n % 3 == 0);
}

int main()
{
	for (int i = 0; i < 40; ++i)
	{
		if (isDiv3(i))
		{
			cout << i << endl;
		}
	}
}