#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
//Asking user for their name
    string s = get_string("Name: ");
    int n = strlen(s);
    //printing out each letter in their name on a new line
    printf("The length of your name is: %i\n", n);
    
}



