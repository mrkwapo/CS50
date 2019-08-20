//use user input to create a box
#include <cs50.h>
#include <stdio.h>


int main (void)
{
    int height = get_int("height: ");
    int width = get_int("width: ");
    
    for( int i = 0; i < height; i++)
    {
        for (int k = 0; k < width; k++)
        {
            printf("# ");
        }
        printf("\n");
    }
    
}
