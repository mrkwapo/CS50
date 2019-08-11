#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
bool validate_key(string key);

int main(int argc, string argv[])
{
    // Handles the input if the command line arguements do not equal 2 and if the a characters in argv[1] are not alphabets
    if (!(argc == 2 && validate_key(argv[1])))
    {
        printf("Incorrect usage! \nTry: ./filename key \n(hint: key must be a letter )\n");
        return 1;
    }
    //To be clear on what the argument argv[1] is it is being stored into a variable called key
    string key = argv[1];
    
    // The program will continue to ask for the plain text if the user enters nothing to be translated
    string plaintext;
    do
    {
        
        plaintext = get_string("plaintext: ");
    }
    while (plaintext == NULL);
    
    //Iterate through plaintext to generate the ciphertext
    printf("ciphertext: ");
    for (int i = 0, k = 0, len = strlen(plaintext), lengthofkey = strlen(key); i < len; i++)
    {
        //Handling characters that are uppercase
        if (isupper(plaintext[i])) 
        {
            printf("%c", ((plaintext[i] - 'A' + toupper(key[k]) - 'A') % 26 + 'A'));
            
            k = (k + 1) % lengthofkey; 
        }
        else if (islower(plaintext[i]))
        {
            printf("%c", ((plaintext[i] - 'a' + tolower(key[k]) - 'a') % 26 + 'a'));
            k = (k + 1) % lengthofkey; 
       
        }
        else
        {
            printf("%c", plaintext[i]);
            
        }
    }
    printf("\n");
}

// A boolean function created to validate each ith character in argv[1] is an alphabet or not
bool validate_key(string key)
{
    
    for (int i = 0, len = strlen(key); i < len; i++)
    { 
        // if the ith character is not an alphabet return false
        if (!(isalpha(key[i])))
        {
            return false;  
        }
               
    }
    // return true if the letters are alphabet
    return true;
            
}
