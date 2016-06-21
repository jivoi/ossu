/**
 * generate.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Generates pseudorandom numbers in [0,LIMIT), one per line.
 *
 * Usage: generate n [s]
 *
 * where n is number of pseudorandom numbers to print
 * and s is an optional seed
 */

#define _XOPEN_SOURCE

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// constant
#define LIMIT 65536

int main(int argc, string argv[])
{
    // TODO: comment me
    // check number of program agruments, need one or two
    // if it is not true, print usage message and exit with code 1
    if (argc != 2 && argc != 3)
    {
        printf("Usage: generate n [s]\n");
        return 1;
    }

    // TODO: comment me
    // a integer variable to store number from first program agrument
    // using function atoi to convert string to int
    int n = atoi(argv[1]);

    // TODO: comment me
    // check that number of program agruments, if we set 2 argruments
    // we will convert second agrument from string to int and use it as
    // the seed of the sequence of pseudo-random integers in srand48()
    // if we set only one agrument we will use the number of seconds
    // since the start of Jan 1 1970 as a seed for srand48()
    if (argc == 3)
    {
        srand48((long int) atoi(argv[2]));
    }
    else
    {
        srand48((long int) time(NULL));
    }

    // TODO: comment me
    // use for loop to print the sequence of n pseudo-random numbers
    // in range of 0 to LIMIT
    for (int i = 0; i < n; i++)
    {
        printf("%i\n", (int) (drand48() * LIMIT));
    }

    // success
    return 0;
}