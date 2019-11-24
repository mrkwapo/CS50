//This program will uppercase all characters in a string
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    //getting string from user
    string s = get_string("Before: ");
    printf("After: ");

    //iterating through each characeter in the given string
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        //if character is lowercase convert it to uppercase
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            printf("%c", s[i] - 32);
        }
        else
        {
            //if it is uppercase just print it
            printf("%c", s[i]);
        }
    }
    printf("\n");
}
