// pointerfun2.cpp  INCOMPLETE
// Glenn G. Chappell
// 26 Oct 2016
//
// For CS 201 Fall 2016
// More Fun with Pointers

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
	if (p != nullptr)
	{
		cout << *p << *(p+1) << *(p+2) << endl;
	}

	else
		cout << "NULL POINTER" << endl;
}

// Main Program
// Call printThree multiple times.
int main()
{
	// Make an array and stick stuff in it
	int arr[10] = { 5, 3, 8, 9, 2, 7, 1, 9, 4, 2 };

	// Call with (int *)
	cout << "Call printThree with pointer to values"
		<< " " << arr[0] << " " << arr[1] << " " << arr[2] << ":"
		<< endl;
	printThree(arr);
	cout << endl;

	// Call with (const int *)
	cout << "Call printThree with pointer to values"
		<< " " << arr[7] << " " << arr[8] << " " << arr[9] << ":"
		<< endl;
	printThree(static_cast<const int *>(arr + 7));
	cout << endl;

	// Call with nullptr
	cout << "Call printThree with null pointer:" << endl;
	printThree(nullptr);
	cout << endl;

	// Quit when user hits Enter
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	cout << endl;
}

