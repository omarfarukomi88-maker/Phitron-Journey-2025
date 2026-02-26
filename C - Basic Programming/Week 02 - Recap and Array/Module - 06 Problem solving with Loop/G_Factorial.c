#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)

    {
       long long int fact = 1;
        int m;
        scanf("%d", &m);
        if (m != 0)
        {

            for (int j=1;j<=m; j++)
            {

                fact = fact * j;
            }

            printf("%lld\n", fact);
        }
        else
        {
            printf("1\n");
        }
    }

    return 0;
}