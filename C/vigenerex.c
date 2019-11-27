//incomplete
//When complete, this program will use a keyword to encrypt a message provided by a user in plain text. Each letter in the keyword will be used to shift the value of each letter in the given plain text
#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
   //Validating that there is exactly 2 arguments
    if (argc != 2)
    {
        printf("Usage: ./caesar keyword\n");
        return 1;
    }
    //Validating each character in the key is a letter
    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if (isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar keyword\n");
            return 1;
        }
    }

    //getting the plain text and returning the ciphertext
    string p = get_string("plaintext: ");
    printf("ciphertext: ");
    
    
//         for (int i = 0, n = strlen(p); i < n; i++)
//     {
//             string keyword = argv[1];
//         for (int j = 0, m = strlen(keyword); j < m; j++){
//             printf("%c", (p[i] + keyword[j]) % 26);
//         }
//     }
    
    
        string keyword = argv[1];
    
    
    //iterating through the length of the keyword
    for (int i = 0; i < strlen(keyword); i++)
    {
        int KEY[keyword[i]];
//         printf("%i ", keyword[i]);
        printf("%i ", KEY[i]);
    }
    
    
    
//     // if character is not an alphabet just print it
//         if (!isalpha(p[i]))
//         {
//             printf("%c", p[i]);
//         }
}
