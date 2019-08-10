#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h> 

int main(int argc, string argv[])
{
    //Validating command-line arguments
    
    if (argc != 2)
    {
        printf("Incorrect usage! \nTry: ./filename key \n(hint: key must be a number)\n");
        return 1;
    }
    //Iterate through each character to calidate if it is a digit
    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        //Validating that argv[1] is a digit
        if (!isdigit(argv[1][i]))
        {
            printf("Incorrect usage! \nTry: ./filename key \n(hint: key must be a number)\n");
            return 0;
        }
    }
    //Because argv[1] is an element in an array of strings we need to convert the type to integer
    int key = atoi(argv[1]);
    
    //Initializing variable
    int c;
    
    //Get plaintext message from user
    string plaintext = get_string("plaintext: ");
    
    printf("ciphertext: ");
    
    //Iterate through every character in plaintext given by user
    for (int i = 0; i < strlen(plaintext); i++)
    {
        //Validate if character is an ASCII alphabet character (a-z orA-Z)
        if (isalpha(plaintext[i]))
        {
            //Uppercase logic
            if (isupper(plaintext[i]))
            {
                // The value of A is 65 on the ASCII table
                c = (plaintext[i] - 'A' + key);
                //Handle wraparound using remainder
                c = c % 26;
                //Convert back to ASCII value
                c = (c + 'A');
                printf("%c", c);
            }
            //Lowercase logic
            else if (islower(plaintext[i]))
            {
                // a = 97
                c = (plaintext[i] - 'a' + key);
                //Handle wraparound using remainder
                c = c % 26;
                //Convert back to ASCII value
                c = (c + 'a');
                
                printf("%c", c);
            }
            
        }
        else
        {
            //Print all characters that are not letters.
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");
}
