#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
//Asking user for a string
    string s = get_string("String: ");
    for(int i = 0; i < strlen(s); i++)
    {
    //storing the value of each letter and  it's ASCII translation in the variable and then printing them
        int c = (int) s[i];
        printf("%c %i\n", s[i], c);
    }
}
