#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int shift(char c);

int main(int argc, string argv[1])
{
       //Validating that there is exactly 2 arguments
    if (argc != 2)
    {
        printf("Usage: ./vigenere keyword\n");
        return 1;
    }
    //Validating each character in the key is a letter
    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if (isdigit(argv[1][i]))
        {
            printf("Usage: ./vigenere keyword\n");
            return 1;
        }
    }
    
    int key = shift(argv[1][0]);
    
    string p = get_string("plaintext: ");
    printf("ciphertext: ");
    
    for (int i = 0; i < strlen(p); i++)
    {
        
        if(isalpha(p[i] + key))
        {
             printf("%c", p[i] + key);
        }
        
        if(!isalpha(p[i] + key))
        {
             printf("%c",  p[i] - (26 - key));   
        }     
        
        // if character is not an alphabet just print it
        if (!isalpha(p[i]))
        {
            printf("%c", p[i]);
        }

    }
    
    printf("\n");
    
}

int shift(char c)
{
    if (islower(c))
    {
        int shifter = (c- 97) %26;
        return shifter;
    }
    if (isupper(c))
    {
        int shifter = (c- 65) %26;
        return shifter;
    }
    
    return true;
    
}
