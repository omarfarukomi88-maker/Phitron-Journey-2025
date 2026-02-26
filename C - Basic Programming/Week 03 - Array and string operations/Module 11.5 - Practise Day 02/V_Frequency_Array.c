#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n,&m);
    int ar[n];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int cnt [100000]={0};

    for (int i = 1; i <= n; i++)
    {
        cnt[ar[i]]++;
    }

    for (int i = 1; i <= m; i++)
    {
        printf("%d\n",cnt[i]);
    }

    return 0;
}