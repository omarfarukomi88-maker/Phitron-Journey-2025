#include <stdio.h>
int main()
{
    int n;
    int fact = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int m;
        scanf("%d",&m);
        for (int j = 1; j <= m; j++)
        {
            fact = fact * j;
        }
        printf("%d\n", fact);
        fact=1;
    }
    

    return 0;
}