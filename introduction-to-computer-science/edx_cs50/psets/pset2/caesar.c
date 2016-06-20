// check50 2015.fall.pset2.caesar caesar.c
// :) caesar.c exists
// :) caesar.c compiles
// :) encrypts "a" as "b" using 1 as key
// :) encrypts "barfoo" as "yxocll" using 23 as key
// :) encrypts "BARFOO" as "EDUIRR" using 3 as key
// :) encrypts "BaRFoo" as "FeVJss" using 4 as key
// :) encrypts "barfoo" as "onesbb" using 65 as key
// :) encrypts "world, say hello!" as "iadxp, emk tqxxa!" using 12 as key
// :) handles lack of argv[1]

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc != 2 || atoi(argv[1]) <= 0)
    {
        printf("Enter one positive key?\n");
        return 1;
    }

    int k = atoi(argv[1]);
    string text = GetString();

    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (isalpha(text[i]))
        {
            if (isupper(text[i]))
            {
                int c = text[i];
                int enc = (c - 65 + k) % 26;
                printf("%c", enc + 65);

            }
            else
            {
                int c = text[i];
                int enc = (c - 97 + k) % 26;
                printf("%c", enc + 97);
            }

        }

        else
        {
            printf("%c", text[i]);
        }

    }
    printf("\n");
    return 0;
}