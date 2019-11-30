//This program uses a keyword to encrypt a message. Each character in the keyword shifts a letter in a message in order. And the keyword repeats while the message continues to be encrypted.
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int shift(char c);
int main(int argc, string argv[])
{       
    //do not run if there is no argument or more than one argument
    if (argc != 2)
    {
        printf("./vigenere keyword \n");
        return 1;
    }
 
    //storing the value of argument index 1 in a variable
    string keyword = argv[1];
    
    //checking each letter in the keyword. If there is a number or punctutation, the program will not run
    for (int i = 0, len = strlen(keyword); i < len; i++)
    {
        if (isdigit(keyword[i]))
        {
            printf("./vigenere keyword \n");
            return false;
        }
        
        if (ispunct(keyword[i]))
        {
            printf("invalid keyword \n");
            return false;
        }
    }
    
    //ask the user for a plain text message
    string plaintext = get_string("Plaintext: ");
    printf("Ciphertext: ");
    
    //initializing a counter for the keyword. Note that the counter uses modulo to repeat the order of shifts using the keyword
    int count = 0;
    //creating 2 loops to iterate through the plaintext and keyword
    for (int i = 0, len = strlen(plaintext); i < len; i++)
    {
        for (int j = 0, keyLen = strlen(keyword); j < keyLen; j++)
        {
            count = keyword[j] % keyLen;
            
        }  
        //encrypt according to jth character in the keyword which handles wrap around with modulo
        printf("%c", count + plaintext[i]);
        
    }
    
    printf("\n");
}

int shift(char c)
{
    //if the character is uppercase we minus it by the ASCII value of 'A' so that 'A' = 0, 'B' = 2, etc.
    while (isupper(c)) 
    {
        int value = c - 65;
        return value;
    }
    
    //if the character is lowercase we minus it by the ASCII value of 'a' so that 'a' = 0, 'b'= 2, etc
    while (islower(c)) 
    {
        int value = c - 97;
        return value;
    }
    
    
    return 0;
}

