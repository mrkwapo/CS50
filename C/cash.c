#include <cs50.h>
#include <stdio.h>
#include <math.h>

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
   while (convertedchange >=10)
 {
     count += (convertedchange/10);
     convertedchange %= 10;
 }
   while (convertedchange >=5)
 {
     count += (convertedchange/5);
     convertedchange %= 5;
 }
   while (convertedchange >=1)
 {
     count += (convertedchange/1);
     convertedchange %= 1;
 }
  printf("%i\n", count);
    
}


float get_positive_float(string prompt)
{
    float n;
    do
    {
        n = get_float("%s", prompt);
    }
//     
    while (n <= 0);
    return n;
}
