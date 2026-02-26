#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int min = ar[1];
    int p = 1;

    // printf("%d",min);

    for (int i = 1; i <= n; i++)
    {

        if (min > ar[i])
        {
            min = ar[i];
            p = i;
        }
    }
    printf("%d %d", min, p);

    return 0;
}