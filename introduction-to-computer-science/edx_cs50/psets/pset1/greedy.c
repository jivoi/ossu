// check50 2015.fall.pset1.greedy greedy.c
// :) greedy.c exists
// :) greedy.c compiles
// :) input of 0.41 yields output of 4
// :) input of 0.01 yields output of 1
// :) input of 0.15 yields output of 2
// :) input of 1.6 yields output of 7
// :) input of 23 yields output of 92
// :) input of 4.2 yields output of 18
// :) rejects a negative input like -.1
// :) rejects a non-numeric input of "foo"
// :) rejects a non-numeric input of ""

#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void)
{
    double change;
    printf("Oh hai! How much change is owed?\n");
    change = GetFloat();

    while (change < 0)
    {
        printf("How much change is owed?\n");
        change = GetFloat();
    }

    double d = round(change * 100);
    int i = d;
    int quarters = i / 25;
    int dimes = (i % 25) / 10;
    int nickels = ((i % 25) % 10) / 5;
    int pennies = (((i % 25) % 10) % 5);
    int coins = quarters + dimes + nickels + pennies;

    printf("%d\n", coins);
}