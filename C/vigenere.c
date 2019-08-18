//encrypts a message using characters as a key
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
bool validate_key(string key);

int main(int argc, string argv[])
{
    if (!(argc == 2 && validate_key(argv[1])))
    {
        printf("Incorrect usage! \nTry: ./filename key \n(hint: key must be a letter )\n");
        return 1;
    }
    //Because argv[1] is an element in an array of strings we need to convert it to the type to integer
    string key = argv[1];
    
    string plaintext;
    do
    {
        
        plaintext = get_string("plaintext: ");
    }
    while (plaintext == NULL);
    
    //Itereate through plaintext to generate the ciphertext
    printf("ciphertext: ");
    for (int i = 0, k = 0, len = strlen(plaintext), lenk = strlen(key); i < len; i++)
    {
        if (isupper(plaintext[i])) // Z - 'A' + key % 26
        {
            printf("%c", ((plaintext[i] - 'A' + toupper(key[k]) - 'A') % 26 + 'A'));
            // IMP PART
            k = (k + 1) % lenk; 
        }
        else if (islower(plaintext[i]))
        {
            printf("%c", ((plaintext[i] - 'a' + tolower(key[k]) - 'a') % 26 + 'a'));
            k = (k + 1) % lenk; 
       
        }
        else
        {
            printf("%c", plaintext[i]);
            
        }
    }
    printf("\n");
}

bool validate_key(string key)
{
    
    for (int i = 0, len = strlen(key); i < len; i++)
    { 
        // if the ith character is not an alphabet
        if (!(isalpha(key[i])))
        {
            return false;  
        }
               
    }
    return true;
            
}
