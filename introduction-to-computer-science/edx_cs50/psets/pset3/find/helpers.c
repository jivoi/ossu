// check50 2015.fall.pset3.find helpers.c
// :) helpers.c exists
// :) helpers.c compiles
// :) finds 42 in {42,43,44}
// :) finds 42 in {41,42,43}
// :) finds 42 in {40,41,42}
// :) finds 42 in {41,42,43,44}
// :) finds 42 in {40,41,42,43}
// :) finds 42 in {39,40,41,42}
// :) doesn't find 42 in {39,40,41}
// :) doesn't find 42 in {39,40,41,43}

/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */

#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
    // linear search
    // for (int i = 0; i < n; i++)
    // {
    //     if (values[i] == value)
    //     {
    //         return true;
    //     }
    // }

    // binary search
    int first = 0;
    int last = n - 1;

    while (last >= first)
    {
        int mid = (first + last) / 2;
        if (value == values[mid])
        {
            return true;
        }
        else if (value < values[mid])
        {
            last = mid - 1;
        }
        else if (value > values[mid])
        {
            first = mid + 1;
        }
    }
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement an O(n^2) sorting algorithm
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (values[j] > values[j + 1])
            {
                int tmp = values[j];
                values[j] = values[j + 1];
                values[j + 1] = tmp;
            }
        }
    }
    return;
}