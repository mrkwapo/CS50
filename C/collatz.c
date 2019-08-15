#include <stdio.h>
#include <cs50.h>

int collatz(int n);
int main(void)
{
    int n = get_int("Starting number: ");

    while (n == 1)
    {
        printf("no steps\n");
        return 0;
    }
    
    while ((n % 2) == 0)
    {
        printf(" %i took %i steps\n", n, 1 + collatz(n / 2));
        return 1;
    }
    
    while ((n % 2) != 0)
    {
        printf("%i took %i steps\n", n, 1 + collatz(3 * n + 1));
        return 1;
    }
}

int collatz(int n)
{
    //base case
    if (n == 1)
        
            return 0;

    //even numbers
    else if ((n % 2) == 0)
            
            return 1 + collatz(n/2);
    
    //odd numbers  
    else
     
        
            return 1 + collatz(3 * n + 1); 
    }



