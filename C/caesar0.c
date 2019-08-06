#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    //Ask the user for a word in plaint text
    string s = get_string("plaintext: ");
    //Print the ciphertext here 
    printf("ciphertext: ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
//if it is lowercaseprint the ith character plus one( based on the ASCII table)     

     if (s[i] >= 'a' && s[i] <= 'z')   
     {         
         printf("%c", s[i] + 1);
     }
     else if (s[i] >= 'A' && s[i] <= 'Z')   
     {
         //if its capital print the ith character plus one (based on the ASCII table)
         printf("%c", s[i] + 1);
     }

    }
    printf("\n");
}
