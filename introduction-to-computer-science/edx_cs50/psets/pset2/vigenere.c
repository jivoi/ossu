// check50 2015.fall.pset2.vigenere vigenere.c
// :) vigenere.c exists
// :) vigenere.c compiles
// :) encrypts "a" as "a" using "a" as keyword
// :) encrypts "world, say hello!" as "xoqmd, rby gflkp!" using "baz" as keyword
// :) encrypts "BaRFoo" as "CaQGon" using "BaZ" as keyword
// :) encrypts "BARFOO" as "CAQGON" using "BAZ" as keyword
// :) handles lack of argv[1]
// :) handles argc > 2
// :) rejects "Hax0r2" as keyword

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Enter letter key?\n");
        return 1;
    }

    string k = argv[1];
    int key_len = strlen(k);

    for (int i = 0; i < key_len; i++)
    {
        if (!isalpha(k[i]))
        {
            printf("There is a non-alphabetic character at %i\n", i);
            return 1;
        }
        else
        {
            if (isalpha(k[i]))
            {
                if (isupper(k[i]))
                {
                    k[i] = k[i] - 65;
                }
                else
                {
                    k[i] = k[i] - 97;
                }
            }
        }
    }

    string text = GetString();
    int text_len = strlen(text);
    int c = 0;

    for (int i = 0; i < text_len; i++)
    {
        if (isalpha(text[i]))
        {
            if (isupper(text[i]))
            {
                printf("%c", (((text[i] - 65) + (k[c % key_len])) % 26) + 65);
                c++;
            }
            else
            {
                printf("%c", (((text[i] - 97) + (k[c % key_len])) % 26) + 97);
                c++;
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