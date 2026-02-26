#include <stdio.h>
int main()
{
    int ar[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &ar[i]);
    }

    int cp[3];
    for (int i = 0; i < 3; i++)
    {
        cp[i] = ar[i];
    }

    int swp = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (ar[i] > ar[j])
            {
                swp = ar[i];
                ar[i] = ar[j];
                ar[j] = swp;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", ar[i]);
    }
    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", cp[i]);
    }
    return 0;
}