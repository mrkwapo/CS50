#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int shift(char c);
int main(int argc, string argv[])
{       
    //do not run if there is no argument or more than one argument
    if(argc !=2)
    {
        printf("./vigenere keyword \n");
        return 1;
    }
 
    //storing the value of argument index 1 in a variable
     string keyword = argv[1];
    
    //checking each letter in the keyword. If there is a number stop program
    for (int i = 0, len = strlen(keyword); i < len; i++)
    {
        if(isdigit(keyword[i]))
        {
            printf("./vigenere keyword \n");
            return false;
        }
        
        if(ispunct(keyword[i]))
        {
            printf("invalid keyword \n");
            return false;
        }
    }
    
    int key = shift(argv[1][0]);

    //ask the user for a plain text message
    string plaintext = get_string("Plaintext: ");
    printf("Ciphertext: ");

    for( int i = 0, len = strlen(plaintext); i < len; i++)
    {
        printf("%c", key + plaintext[i]);
    }
    
    printf("\n");
}

int shift(char c)
{
    while(isupper(c)) 
    {
        int value = c - 65;
        return value;
    }
    while(islower(c)) 
    {
        int value = c - 97;
        return value;
    }
    return 0;
}

