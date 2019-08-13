// Dangerously gets a string from user using scanf

#include <stdio.h>

int main(void)
{
    //no need to use char * because we are telling the computer how much memory to use when we use "char s[5]"
    char s[5];
    printf("s: ");
    scanf("%s", s);
    printf("s: %s\n", s);
}
