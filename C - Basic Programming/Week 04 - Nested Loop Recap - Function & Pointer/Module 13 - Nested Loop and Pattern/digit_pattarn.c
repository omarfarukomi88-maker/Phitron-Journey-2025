#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int space = n-1;
    int value = 1;
    for (int i = 1; i <= n; i++)//for line 
    {
        for (int j = space; j >=1; j--) //for space
        {
            printf(" ");
        }
        for (int k = 1; k <= value; k++)
        {
            printf("%d", k);
        }

        printf("\n");
        space--;
        value++;
    }
    return 0;
}