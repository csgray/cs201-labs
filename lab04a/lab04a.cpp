// Source: lab04a/lab04a.cpp
// Author: Corey Gray
// Date: 20160909
// Purpose: Asks the user for an integer then counts to it.

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
	cout << "Please enter an integer to count to." << endl;
	int num;
	cin >> num;
	if (!cin)
	{
		cout << "No, really, you need to enter an integer." << endl;
		return 0;
	}
	for (int count = 1; count <= num; ++count)
	{
		cout << count << endl;
	}
}