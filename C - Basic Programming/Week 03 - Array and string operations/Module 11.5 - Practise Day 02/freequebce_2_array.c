#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int fre[6] = {0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (ar[i] == j)
            {
                fre[ar[i]]++;
            }
        }
    }

    for (int i = 0; i < 6; i++)
    {
        printf("%d->%d\n", i, fre[i]);
    }
    return 0;
}