// Compares two strings for equality using strcmp

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Get two strings
    char *s = get_string("s: ");
    if (s == NULL)
    {
        return 1;
    }
    char *t = get_string("t: ");
    if (t == NULL)
    {
        return 1;
    }
    
    // Compare strings for equality
    if (strcmp(s, t) == 0)
    {
        printf("same\n");
    }
    else
    {
        printf("different\n");     
    }
    return 0;
}
