#include <stdio.h>
#include <cs50.h>
#include <math.h>

void set_array(int array[4]);
void set_int(int x);

int main(void)
{
    int a = 10;
    int b[4]= { 0, 1, 2, 3 };
    //passing by value
    set_int(a);
    //passing by referrence
    set_array(b);
    //printing out the new value
    printf("%d %d\n", a, b[0]);
}
//setting up a function to pass by value
void set_int(int x)
{
    x = 22;
}

//setting up a function to pass by referrence
void set_array(int  array[4])
{
    array[0]=22;
}


