//create a box using arguments
#include <cs50.h>
#include <stdio.h>


void createBox(int h, int w);
int main (void)
{
    createBox(3,4);
}
void createBox(int h, int w)
{
    for( int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            printf("# ");
        }
        printf("\n");
    }
    
}
