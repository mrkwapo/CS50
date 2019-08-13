// Incorrectly gets a string from user using scanf

#include <stdio.h>

int main(void)
{
    //the address is designated here (when run it returns null because not enough memory was requested. see scanf2.c)
    char *s = NULL;
    //ask for value of s
    printf("s: ");
    //no need to use the * because the address of s was established above
    scanf("%s", s);
    //print the value of s
    printf("s: %s\n", s);
}
