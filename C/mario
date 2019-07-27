#include <cs50.h>
#include <stdio.h>
#include <unistd.h>

int main(void)
{
    string firstname = get_string("What is your first name?\n");
    string lastname = get_string("%s, what is your last name?\n", firstname);
    int y = 8;
 int height = get_int("Ok %s %s, what is the height of your pyramid? (must be between 1 and 8)\n", firstname, lastname);
    if(height <= y && height >= 0)
    {
        for ( int i = 0; i < height; i+=1)
        {
            printf("#\n");
            sleep(1);
         }
    } 
    else {
        printf(" %s %s, %i is not between 1 and 8. Try again, silly!\n", firstname, lastname, height);
    }


}
