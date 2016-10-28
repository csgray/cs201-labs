// lab20161021a.cpp
// Corey Gray
// Based on letters.cpp by Glenn G. Chappell
// 21 Oct 2016
//
// For CS 201 Fall 2016
// Alters an int by utilizing a pointer

#include <iostream>
using std::cout;
using std::endl;

void changeInt(int * ip)
{
	*ip = 10;
}

int main()
{
	int i = 5;
	int * p1;
	p1 = &i;

	cout << "The original value of the int is: " << i << endl;

	changeInt(p1);

	cout << "The new value of the integer is: " << i << endl;
}