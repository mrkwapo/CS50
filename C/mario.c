//this program asks for the height of a Nintendo Mario pyramid from the user and then creates it using hashes.
#include <cs50.h>
#include <stdio.h>

int get_positive_int(string prompt);

int main(void)
{
    //asking user for the height
    int height = get_positive_int("Height: ");
    //This is the main loop loop that handle the height of each pyramid
    for (int i = 0; i < height; i++)
    {        
        //As int i increases, it is used to decrement the amount of spaces used on each line of output by subtracting it's value from the static value of height
        for (int j = 1; j < height - i; j++)
        {
            printf(" ");
        }
        //this loop prints the amount of hashes for each row based on the value of int i up to the user given value of height
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }
        //this creates a new line after each iteration of the outer for loop
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
