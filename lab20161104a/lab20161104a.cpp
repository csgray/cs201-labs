// lab20161104a.cpp
// Corey Gray
// 04 Nov 2016
//
// derived from binsearch.cpp by Glenn G. Chappell
// For CS 201 Fall 2016

#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <vector>
using std::vector;
#include <string>
using std::string;
using std::getline;
#include <sstream>
using std::istringstream;
#include <tuple>
using std::tuple;
using std::get;

// binarySearch
// Given a vector<int> holding keys, and a vector<string> holding the
// associated values, and a key to search for (thekey). The vector of
// keys must be sorted. Does Binary Search in an attempt to find the
// given key. If it is not found, returns false. If it is found, sets
// thevalue to the associated value and returns true.
bool binarySearch(const vector<tuple<int, string>> & pairs,
	int thekey,
	string & thevalue)
{
	int first = 0;
	int past_last = pairs.size();

	while (true)
	{
		int size = past_last - first;  // Size of range

									   // Size 0: not found
		if (size == 0)
		{
			return false;
		}

		// Size 1: check if found
		if (size == 1)
		{
			if (pairs[first] == thekey)
			{
				thevalue = pairs[first];
				return true;
			}
			else
			{
				return false;
			}
		}

		// Find middle & compare the key there with our key
		int middle = first + size / 2;

		if (thekey < pairs[middle])
		{
			// Search in 1st half
			past_last = middle;
		}
		else
		{
			// Search in 1st half
			first = middle;
		}
	}
}


// Main program
// Create a dataset, and do searches in it.
int main()
{
	// Make associative (KEY-VALUE) dataset
	vector<int> keys{
		21,
		22,
		23,
		25,
		27,
		31,
		32,
		33,
		36,
		38
	};
	vector<string> values{
		"Alice Smith",
		"Bill Jones",
		"Charles Johnson",
		"Daphne Robertson",
		"Egbert Williams",
		"Fifi Phillips",
		"George Watson",
		"Harriet Baker",
		"Iris Gump",
		"Jake Hawkins"
	};

	vector<tuple<int, string>> pairs{
		{ keys[0], values[0] },
		{ keys[1], values[1] },
		{ keys[2], values[2] },
		{ keys[3], values[3] },
		{ keys[4], values[4] },
		{ keys[5], values[5] },
		{ keys[6], values[6] },
		{ keys[7], values[7] },
		{ keys[8], values[8] },
		{ keys[9], values[9] },
	};

	// Print opening message
	cout << "Binary Search in a key-value dataset" << endl;
	cout << endl;

	// Input & search loop
	while (true)
	{
		// Get a line
		cout << "Type a positive integer KEY (empty line to end): ";
		string line;
		getline(cin, line);
		if (!cin)
			return 0;
		if (line == "")
			break;

		// Get an int from the above line
		istringstream in(line);
		int thekey;
		in >> thekey;
		if (!in)
		{
			cout << "Please type a positive integer" << endl;
			cout << endl;
			continue;
		}
		if (thekey < 1)
		{
			cout << "Please type a positive integer" << endl;
			cout << endl;
			continue;
		}

		string thevalue;
		bool found = binarySearch(pairs, thekey, thevalue);
		if (found)
		{
			cout << "KEY found; VALUE = " << thevalue << endl;
		}
		else
		{
			cout << "KEY not found" << endl;
		}
		cout << endl;
	}
	cout << endl;

	// Quit when user hits Enter
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
}

