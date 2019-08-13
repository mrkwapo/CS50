// Gets an int from user using scanf

#include <stdio.h>

int main(void)
{
    //an alternative to get_int
    //create a variable called x
    int x;
    //ask the user for the value of x
    printf("x: ");
    //here is the address of x
    scanf("%i", &x);
    //print the value or address of the integer x
    printf("x: %i\n", x * 2);
}
