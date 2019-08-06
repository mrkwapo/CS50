#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
int foo[8] = {1,2,3,4,5,6,7,8};
int bar[8] = {8,7,6,5,4,3,2,1};
    //changes the elements in bar by copying the value of foo to bar using a for loop
    for( int j = 0; j < 8; j++)
    {
        bar[j] = foo[j];
        //printing out the new value of each index in bar 
        printf("index: %i = %i\n", j, bar[j]);
    }
    
}
