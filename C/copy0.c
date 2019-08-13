// Capitalizes a string

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Get a string from the user
    char *s = get_string("s: ");

    // Copy string's address
    char *t = s;

    // Capitalize first letter in string
    // if the length of the string t is greater than 0 
    // take the 0 index and convert it to uppercase
    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    // Print string twice
    // capitalize the user given string print it twice 
    printf("s: %s\n", s);
    printf("t: %s\n", t);
}
