#include <stdio.h>
int main()
{
    int x = 10;         // variable declaration and then initiaize

    int ar[5] = {10, 20, 30, 40, 50};        // array delaration and initialaze

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", ar[i]);
    }
    return 0;
}