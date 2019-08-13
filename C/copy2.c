// Capitalizes a copy of a string using strcpy while checking for errors

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Get a string
    char *s = get_string("s: ");
    if (!s)
    {
        return 1;
    }

    // Allocate memory for another string
    char *t = malloc((strlen(s) + 1) * sizeof(char));
    if (!t)
    {
        return 1;
    }

    // A succinct method of copying a string into memory(eliminates having to use a for loop); 
    strcpy(t, s);

    // Capitalize first letter in copy
    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    // Print strings
    printf("s: %s\n", s);
    printf("t: %s\n", t);

    // Free memory (gives back unused memory to the ram to avoid a "memory leak" which may cause the computer to act slower or even freeze
    free(t);
    return 0;
}
