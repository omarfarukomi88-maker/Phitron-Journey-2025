#include <stdio.h>
int main()
{
    int ar[5];
    ar[0] = 10;
    ar[1] = 100;
    ar[2] = 1000;

    scanf("%d", &ar[3]);
    printf("%d", ar[3]);
    return 0;
}