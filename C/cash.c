#include <cs50.h>
#include <stdio.h>

float get_positive_float(string prompt);

int main(void)
{
    float change = get_positive_float("Change Due: $");
    
    {
        printf("Change owed: $%.2f\n", change);
    }

}

// Prompt user for positive integer
float get_positive_float(string prompt)
{
    float n;
    do
    {
        n = get_float("%s", prompt);
    }
//     
    while (n <= .00);
    return n;
}
