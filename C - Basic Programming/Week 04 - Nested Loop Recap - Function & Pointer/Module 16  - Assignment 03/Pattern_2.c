#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int space=n-1;
    int star=1;
    for (int i = 1; i <= n; i++)
    {
        for(int j=1;j<=space;j++)
        {
            printf(" ");
        }
        space--;
        for (int k = star; k>=1; k--)
        {
            printf("%d", k);
        }
        star++;
        printf("\n");
    }
    return 0;
}