#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("What is your name?\n");
    printf("hello, %s\n", name);
    string status = get_string("\n");
    printf("%s, same here. \n", status);
}
