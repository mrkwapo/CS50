#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    //Validating that there is exactly 2 arguments
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    //Validating each character in the key is a number
    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if (isalpha(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    //getting the plain text and returning the ciphertext
    string p = get_string("plaintext: ");
    printf("ciphertext: ");

    //iterating through each character in the plaintext
    for (int i = 0, n = strlen(p); i < n; i++)
    {
        //handling lowercase letters
        if (islower(p[i]))
        {
            //handling the wrap around of z
            if (p[i] + atoi(argv[1]) > 122)
            {
                printf("%c", p[i] + atoi(argv[1]) - 26);
            }
            else
            {
                //if no wrap around just print ASCII letter plus argument
                printf("%c", p[i] + atoi(argv[1]));
            }
        }

        //handling uppercase letters
        if (isupper(p[i]))
        {
            //handling the wrap around of z
            if (p[i] + atoi(argv[1]) > 90)
            {
                printf("%c", p[i] + atoi(argv[1]) - 26);
            }
            else
            {
                //if no wrap around just print ASCII letter plus argument
                printf("%c", p[i] + atoi(argv[1]));
            }
        }

        // if character is not an alphabet just print it
        if (!isalpha(p[i]))
        {
            printf("%c", p[i]);
        }
    }
    printf("\n");
}
