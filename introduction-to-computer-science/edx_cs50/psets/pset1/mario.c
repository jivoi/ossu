// check50 2015.fall.pset1.mario mario.c
// :) mario.c exists
// :) mario.c compiles
// :) rejects a height of -1
// :) handles a height of 0 correctly
// :) handles a height of 1 correctly
// :) handles a height of 2 correctly
// :) handles a height of 23 correctly
// :) rejects a height of 24, and then accepts a height of 2
// :) rejects a non-numeric height of "foo"
// :) rejects a non-numeric height of ""

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h;
    printf("height: ");
    h = GetInt();

    while (h < 0 || h > 23)
    {
        printf("Height: ");
        h = GetInt();
    }

    for (int i = 0; i < h; i++)
    {
        for (int y = 0; y < (h - i - 1); y++)
            printf(" ");
        for (int n = 0; n < (i + 2); n++)
            printf("#");

        printf("\n");
    }
}