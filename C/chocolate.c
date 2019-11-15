//This program counts how many chocalate bars can be made out of a given amount of kilos. It will make as many large bars(5 kilos each) before making small bars (1 kilo each).
#include <stdio.h>
#include <cs50.h>

int main(void) 
{
    //asking user for the amount of kilos
    int kilos = get_int("how many kilos?\n");
    
    //handling distribution of kilos
    int remainder = kilos % 5;
        
    //if the kilos have a remainder after making large bars it will return the amount of large and small bars
    if (remainder > 0)
    {        
        printf("We have %i big bar(s).\n", kilos / 5);
        printf("We have %i small bar(s).\n", remainder);
        
    }
    
    //if an even amount of large bars can be made with no kilos remaining then it will return the amount of large bars
    if (remainder == 0)
    {
        printf("We have %i big bar(s).\n", kilos / 5);
        printf("We have %i small bar(s).\n", remainder);
    }

}
