#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[])
{
// if there are 2 arguements print the second arguement(index 1) within the string 
 if(argc == 2)
{
     printf("Hello, %s\n",argv[1]);     
 }
else
//otherewise print just Hello, world!
{
    printf("Hello, world!\n");
}

}
