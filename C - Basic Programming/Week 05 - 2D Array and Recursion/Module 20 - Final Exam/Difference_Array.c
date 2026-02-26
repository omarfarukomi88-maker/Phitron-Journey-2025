#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int m;
        scanf("%d", &m);
        int a[m];
        for (int i = 0; i < m; i++) // input a
        {
            scanf("%d", &a[i]);
        }
        int b[m];
        for (int i = 0; i < m; i++) // cpy a to b
        {
            b[i] = a[i];
        }

        int swp = 0;
        for (int i = 0; i < m; i++) // sorting b
        {
            for (int j = i + 1; j < m; j++)
            {
                if (b[i] > b[j])
                {
                    swp = b[j];
                    b[j] = b[i];
                    b[i] = swp;
                }
            }
        }

        for (int i = 0; i < m; i++) // print b
        {
            printf("%d ", abs(b[i] - a[i]));
        }

        printf("\n");
    }

    return 0;
}