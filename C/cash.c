#include <cs50.h>
#include <stdio.h>

float get_positive_float(string prompt);

int main(void)
{
    float change = get_positive_float("Change Due: $"); 
    float quarter = 0.25;
    int quarters = (change/quarter);
    float qremainder = (change-quarters*quarter);
    float dime = 0.10;
    int dimes = (qremainder/dime);
    float dremainder = (qremainder-dimes*dime);
    float nickel = 0.05;
    int nickels = (dremainder/nickel);
    float nremainder = (dremainder-nickels*nickel);
    float penny = 0.01;
    int pennies = (nremainder/penny);
    float premainder = (nremainder-pennies*penny);

    
    {

        printf("Amount of Quarters Due: %i\n", quarters);
        if(qremainder != .24 && qremainder < .24) {
            printf("Amount of Dimes Due: %.0f\n", qremainder/dime);
        }
        if(dremainder > 1 ) { 
            printf("Amount of Nickels Due: %.1f\n", dremainder/nickel);
        }

        if(nremainder != 0 ) { 
            printf("Amount of Pennies Due: %.0f\n", nremainder/penny);
        }


    }

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
