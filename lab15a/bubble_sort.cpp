// bubble_sort.cpp
// Glenn G. Chappell
// 7 Oct 2016
//
// For CS 201 Fall 2016
// Source for Bubble Sort

#include "bubble_sort.h"
// For bubbleSort
#include <vector>
using std::vector;


// bubbleSort
// Sort a vector<int>, ascending order, using Bubble Sort.
void bubbleSort(vector<int> & data)
{
    for (int top = data.size(); top >= 2; --top)
    {
        bool didswap = false;

        for (int lo = 0; lo+1 < top; ++lo)
        {
            int hi = lo+1;

            if (data[hi] < data[lo])
            {  // Swap
                int tmp = data[lo];
                data[lo] = data[hi];
                data[hi] = tmp;

                didswap = true;
            }
        }
        if (!didswap)
            break;
    }
}

