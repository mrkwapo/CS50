//must complete
#include <cs50.h>
#include <stdio.h>

int get_positive_int(string prompt);

int main(void)
{
    int height = get_positive_int("Height: ");
    
    for(int i= 0; i < height; i++)
    {
        for (int j = 0; j <= i; j++)
        {     
        printf("#");
        }
        printf("\n");
    }
}

// Prompt user for positive integer
int get_positive_int(string prompt)
{
    int n;
    do
    {
        n = get_int("%s", prompt);
    }
//     
    while (n > 8 || n < 1);
    return n;
}
