// CS50 IDE crashed so I copied what I had so far. This is incomplete

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int get_positive_int(string second);

int main(int argc, string argv[])
{
    if (!(argc == 4 && validate_arguement(argv[1])))
    {
        printf("incorrect usage\n");
     return 1;
    }


}


//User must enter a positive integer between 1 and 100 as the second argument
int get_positive_int(string second)
{
    string second = argv[1];
    do
    {
         printf("incorrect usage\n");
     return 1;
    }
    // reprompts user if they do not input a positive integer
    while (second < 1 && second > 100);
    return n;
}
