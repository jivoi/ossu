// check50 2015.fall.pset2.initials initials.c
// :) initials.c exists
// :) initials.c compiles
// :) outputs "MB" for "Milo Banana"
// :) outputs "MB" for "milo banana"
// :) outputs "RTB" for "Robert Thomas Bowden"
// :) outputs "R" for "ROB"
// :) outputs "RTB" for "Robert thomas Bowden

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string name = GetString();
    if (name != NULL)
    {
        printf("%c", toupper(name[0]));
        int name_len = strlen(name);
        int i;
        for (i = 0; i < name_len; i++)
        {
            if (name[i] == ' ' && name[i] != '\0')
                printf("%c", toupper(name[i + 1]));
        }
        printf("\n");
        return 0;
    }
    return 0;
}
