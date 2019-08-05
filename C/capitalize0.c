#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    //Ask the user for a word
    string s = get_string("Before: ");
    printf("After: ");
    for(int i = 0, n = strlen(s); i < n; i++)
    {
        //If the ith character is a lowercase letter between a and z print it capitalized
     if(s[i] >= 'a' && s[i] <= 'z')   
     {
         //print the ith character minus the difference between the character a and A (on the ASCII table which is 32)
         printf("%c", s[i] - ('a'-'A'));
     }
     else
     {
         // if the ith charater is already capitalized then print it
         printf("%c", s[i]);
     }
    }
    printf("\n");
}
