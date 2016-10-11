// lab15a.cpp
// Corey Gray
// 07 Oct 2016
//
// For CS 201 Fall 2016
// Write a program that uses provided source and header file to bubble sort a vector

#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <vector>
using std::vector;
#include <string>
using std::string;

#include "bubble_sort.h"

int main()
{
	vector<int> values{
		8,6,8,7,2,1,4,5,0,9,0,9,8,1,7,2,4,5,0,9,8,1,7,4,5,123,234,2134,234,234,656,8,45,989,2345,2345,5,5,67,2654,87324,56,45362,456,254,624,56245,624,562,
		62456,245,6,2,456,7,235,6,27,8,2456
	};

	cout << "Before: ";
	for (auto i : values)
		cout << i << " ";
	cout << endl;
	cout << endl;
	
	bubbleSort(values);

	cout << "After: ";
	for (auto i : values)
		cout << i << " ";
	cout << endl;
	cout << endl;
}

