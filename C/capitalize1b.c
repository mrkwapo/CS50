#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    //Ask the user for a word
    string s = get_string("Before: ");
    printf("After: ");
    for(int i = 0, n = strlen(s); i < n; i++)
    //the toupper method will capitalize any letter that is not uppercase and will not modify the letter that is capital
     {
         printf("%c", toupper(s[i]));
     }
     
    
    printf("\n");
}
