#include <cs50.h>
#include <stdio.h>

int get_positive_float(string prompt);

int main(void)
{
    float change = get_positive_float("Change Due: ");
    
    {
        printf("%f\n", change);
    }

}

// Prompt user for positive integer
int get_positive_float(string prompt)
{
    int n;
    do
    {
        n = get_float("%s", prompt);
    }
//     
    while (n <= 0);
    return n;
}
