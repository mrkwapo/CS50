#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
//Asking user for thier name
    string s = get_string("Name: ");
    int n = 0;
    while (s[n] != '\0')
    {
        n++;
    }
    //printing out each letter in the given name
    printf("The length of your name is: %i\n", n);
    
}
