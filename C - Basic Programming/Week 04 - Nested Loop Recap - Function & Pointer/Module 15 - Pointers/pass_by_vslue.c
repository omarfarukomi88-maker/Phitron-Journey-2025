#include <stdio.h>
void fun(int x)
{
     x = 30;
    printf("%d\n", x);
   printf("fun function x varriable addresse - %p\n", &x); // varriable address are difrent
}

int main()
{
    int x = 10;
   fun(x); // pass only value
     printf("%d\n", x);
    printf("main function x varriable addresse - %p\n", &x); // varriable address are difrent
    return 0;
}