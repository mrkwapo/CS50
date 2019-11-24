//This program simply converts all characters to uppercase
#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>


int main(void)
{
    //getting the string from a user
    string s = get_string("Before: ");
    printf("After: ");
    //iterating through each character and converting it to uppercase
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", toupper(s[i]));
    }
    printf("\n");
}
