#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
//Askign user for their name
    string s = get_string("Name: ");
    int n = strlen(s);
    //Printing out each letter of their name on a new line
    printf("The length of your name is: %i\n", n);
    
}



