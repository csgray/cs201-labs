// lab14a.cpp
// Corey Gray
// a modified/completed lookup.cpp by Glenn G. Chappell
// 03 Oct 2016
//
// For CS 201 Fall 2016
// Look-up by Key

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


// linearSearch
// Given a vector<int> holding keys, and a vector<string> holding the
// associated values, and a key to search for (thekey). Does Sequential
// Search in an attempt to find the given key. If it is not found,
// returns false. If it is found, sets thevalue to the associated value
// and returns true.
bool linearSearch(vector<int> keys,
	vector<string> values,
	int thekey,
	string & thevalue)
{
	for (int i = 0; i < keys.size(); ++i)
	{
		if (thekey == keys[i])
		{
			thevalue = values[i];
			return true;
		}

	}
	
	return false;  // DUMMY
				   // TODO: Write this!
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

	// Print opening message
	cout << "Sequential search in a key-value dataset" << endl;
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
		bool found = linearSearch(keys, values, thekey, thevalue);
		if (found)
		{
			cout << "KEY found; VALUE = " << thevalue << endl;
		}
		else
		{
			cout << "KEY not found" << endl;
			cout << "Enter a value to add this key-value pair to the dataset: ";
			string input;
			getline(cin, input);

			if (!cin)
			{
				cout << "Error in input" << endl;
				return 0;
			}

			keys.push_back(thekey);
			values.push_back(input);
		}
		cout << endl;
	}
	cout << endl;

	// Quit when user hits Enter
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
}

