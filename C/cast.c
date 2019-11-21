//this program was created to demonstrate 'cast' which is a verb that describes converting one data type to another.
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char score1 = 'H';
    char score2 = 'I';
    char score3 = '!';

    printf("%i %i %i\n", (int) score1, (int) score2, (int) score3);
}
