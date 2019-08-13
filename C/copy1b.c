// Capitalizes a copy of a string while checking for errors

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

    // Allocate memory for another string that is the length of the string s (plus one more space for Null)
    char *t = malloc(strlen(s) + 1);
    //if is NULL return a number 1 through 9 ot indicate something is wrong
    if (!t)
    {
        return 1;
    }

    // Copy the ith character of the s string into new allocated memory for the string t
    for (int i = 0, n = strlen(s); i <= n; i++)
    {
        t[i] = s[i];
    }

    // Capitalize first letter in copy
    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    // Print strings
    printf("s: %s\n", s);
    printf("t: %s\n", t);

    // Free memory
    free(t);
    return 0;
}
