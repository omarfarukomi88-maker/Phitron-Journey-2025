#include <stdio.h>
int main()
{
    int a = 10;
    int b = 20;

    // int tmp;

    // tmp=b;
    // b=a;
    // a=tmp;
    // printf("A=%d\nB=%d",a,b);

    a = a + b;
    b = a - b;
    a = a - b;
    printf("A=%d\nB=%d", a, b);

    return 0;
}