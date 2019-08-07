#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    //Ask the user for a word in plaint text
    string s = get_string("plaintext: ");
    
    //Ask the user for a key number
    int k = get_int("key: ");
    
    //Print the ciphertext here 
    printf("ciphertext: ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
    //if it is a lowercase character between a and m print the ith character plus k(which is the key)( based on the ASCII table)     
     if (s[i] >= 'a' && s[i] <= 'm')   
     {         
         printf("%c", s[i] + k);
     }
     //if it is a lowercase character between n and z print the ith character minus 13 ( based on the ASCII table)  
     else if (s[i] >= 'n' && s[i] <= 'z' )   
     {         
         printf("%c", s[i] - 13);
     }
     //if it is an uppercase character between A and M print the ith character plus k(which is the key)( based on the ASCII table) 
     else if (s[i] >= 'A' && s[i] <= 'M')   
     {         
         printf("%c", s[i] + k);
     }
     //if it is an uppercase character between N and Z print the ith character minus 13 ( based on the ASCII table) 
     else if (s[i] >= 'N' && s[i] <= 'Z' )   
     {         
         printf("%c", s[i] - 13);
     }
   else
     {
         // print if the ith charater is a space or special character
         printf("%c", s[i]);
     }
    }
    printf("\n");
}
