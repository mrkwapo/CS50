//This program is the Greedy Algorithm. When a user inputs an amount of change owed in USD, the program returns the smallest amount of coins that can be used to pay in increments of .25, .10, .05 and .01 cents.
#include <cs50.h>
#include <stdio.h>
#include <math.h>

//Declares that this function exists
float get_positive_float(string prompt);

int main(void)
{
float change = get_positive_float("Change owed: $");
int convertedchange = round(change * 100);
int count = 0;
    
 while (convertedchange >=25)
 {
     count += (convertedchange/25);
     convertedchange %= 25;
 }
 while (convertedchange >=10 && convertedchange < 25)
 {
     count += (convertedchange/10);
     convertedchange %= 10;
 }
 while (convertedchange >=5 && convertedchange < 10)
 {
     count += (convertedchange/5);
     convertedchange %= 5;
 }
 while (convertedchange >=1 && convertedchange < 5)
 {
     count += (convertedchange/1);
     convertedchange %= 1;
}
    
printf("%i\n", count);
    
}

//Prompts user to submit a positive float
float get_positive_float(string prompt)
{
    float n;
    do
    {
        n = get_float("%s", prompt);
    }
    
    while (n <= 0);
    return n;
}
