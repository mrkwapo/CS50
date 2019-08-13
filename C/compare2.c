#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string s = get_string("s: ");
    string t = get_string("t: ");
    
    //Does not compare strings as we would like. See compare3.c
    if ( s == t)
    {
        printf("same\n");
    }
    else
    {
        printf("different\n");
    }
}
