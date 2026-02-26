#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int sp = n;
    int st = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < sp; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= st; k++)
        {
            printf("*");
        }
        printf("\n");
        sp--;
        st += 2;
    }
    int rsp = 1;
    int rst = n+n-1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < rsp; j++)
        {
            printf(" ");
        }
        for (int k = rst; k >= 1; k--)
        {
            printf("*");
        }
        printf("\n");
        rsp++;
        rst -= 2;
    }

    return 0;
}