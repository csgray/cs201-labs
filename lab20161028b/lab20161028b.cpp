// lab20161028b.cpp
// Derived dynamic.cpp by Glenn G. Chappell
// 28 Oct 2016
//
// For CS 201 Fall 2016
// Dynamic Allocation

#include <iostream>
using std::cout;
using std::endl;
using std::cin;


// printThree
// Takes a pointer to an int array, which must have size at least 3 --
// or a null pointer. Prints the first three items in the array, or
// "NULL POINTER", if the passed pointer is null.
void printThree(int const * p)
{
	if (p == nullptr)
	{
		cout << "NULL POINTER" << endl;
	}
	else
	{
		cout << p[0] << " " << p[1] << " " << p[2] << endl;
	}

	delete[] p;
}


// Main Program
// Do some dynamic allocation. Call printThree multiple times.
int main()
{
	// Make a dynamic array of int. Put at least three values in it.
	// Then call printThree with it.

	int *p = new int[10];
	p[0] = 11;
	p[1] = 22;
	p[2] = 33;
	p[3] = 44;

	int *n = nullptr;

	printThree(p);
	cout << endl;

	// Call printThree with a null pointer.
	printThree(n);
	cout << endl;

	// Deallocate the dynamic array.
	delete[] p;

	// Quit when user hits Enter
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	cout << endl;
}

