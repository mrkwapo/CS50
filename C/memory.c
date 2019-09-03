// this program was created for the purpose of checking for memory leaks using valgrind or help50 valgrind

#include <stdio.h>
#include <stdlib.h>

void f(void);

int main(void)
{
  f();
}

void f(void)
{
int *x = malloc(10 * sizeof(int));
x[10]=50;
printf("You inputted %i\n", x[10]);
}
