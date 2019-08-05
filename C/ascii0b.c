#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
//Asking the user for a string
    string s = get_string("String: ");
    for(int i = 0; i < strlen(s); i++)
    //Printing out each letter and the number of the letter translated into ASCII
    {
        printf("%c %i\n", s[i], s[i] );
    }
}
