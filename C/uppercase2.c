//This program will uppercase the first character in a string and lowercase the rest
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    //getting string from user
    string s = get_string("Before: ");
    printf("After: ");

    //Converting the first character to uppercase if it is lowercase
    for (int i = 0; i == 0; i++)
    {
        if (s[0] >= 'a' && s[0] <= 'z')
        {
            printf("%c", s[0] - 32);
        }
        else
        {
            printf("%c", s[0]);
        }

    }

    //iterating through each characeter in the given string starting at index 1
    for (int i = 1, n = strlen(s); i < n; i++)
    {
        //if character is uppercase convert it to lowercase
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            printf("%c", s[i] + 32);
        }
        else
        {
            //if it is lowercase just print it
            printf("%c", s[i]);
        }
    }
    printf("\n");
}
