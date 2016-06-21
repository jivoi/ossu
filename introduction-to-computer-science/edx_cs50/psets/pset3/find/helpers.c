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
    for (int i = 0; i < n; i++)
    {
        if (values[i] == value)
        {
            return true;
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
    return;
}