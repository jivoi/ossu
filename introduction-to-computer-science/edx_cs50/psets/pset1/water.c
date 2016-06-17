// check50 2015.fall.pset1.water water.c
// :) water.c exists
// :) water.c compiles
// :) 1 minute equals 12 bottles
// :) 2 minutes equals 24 bottles
// :) 5 minutes equals 60 bottles
// :) 10 minutes equals 120 bottles
// :) rejects "foo" minutes
// :) rejects "" minutes
// :) rejects "123abc" minute

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int i;
    int btls;

    printf("minutes: ");
    i = GetInt();
    btls = 1.5 * i * 128 / 16;
    printf("bottles: %d\n", btls);
    return (0);
}