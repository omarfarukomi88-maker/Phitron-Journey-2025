#include <stdio.h>
void fun(int n)
{
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    //  for(int i=0;i<n;i++)
    // {
    //     printf("%d ",ar[i]);
    // }
    int min = ar[0];
    for (int j = 0; j < n; j++)
    {
        if (ar[j] < min)
        {
            min = ar[j];
        }
    }
    //  printf("%d", min);
    int max = ar[0];
    for (int i = 0; i < n; i++)
    {
        if (ar[i] > max)
        {
            max = ar[i];
        }
    }
    // printf("%d", max);
    printf("%d %d", min, max);
}

int main()
{
    int n;
    scanf("%d", &n);
    fun(n);

    return 0;
}