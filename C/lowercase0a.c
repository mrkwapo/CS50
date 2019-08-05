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
        //If the ith character is un uppercase letter between A and Z print it loowercased
     if(s[i] >= 'A' && s[i] <= 'Z')   
     {
         //print the ith character plus the difference between the character a and A on the ASCII table( which is 32)
         printf("%c", s[i] + ('a'-'A'));
     }
     else
     {
         // if the ith charater is already lowercased then print it
         printf("%c", s[i]);
     }
    }
    printf("\n");
}
