#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star1 = 1;
    int space1 = n - 1;

    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= space1; k++) // space1
        {
            printf(" ");
        }
        space1--;
        if (i % 2 != 0)
        {
            for (int j = 1; j <= star1; j++)
            {
                printf("#");
            }
        }
        else
        {
            for (int j = 1; j <= star1; j++)
            {
                printf("-");
            }
        }
        star1 += 2;
        printf("\n");
    }

    int m = n - 1;
    int star2 = m + m - 1;
    int space2 = 1;
    int ns=n+1;

    for (int i = 1; i <= m; i++) // newline
    {
        for (int k = 1; k <= space2; k++) // space2
        {
            printf(" ");
        }
        space2++;

        if (ns%2 != 0) // odd
        {
            for (int i = 1; i <= star2; i++) /// star
            {
                printf("#");
            }
        }
        else
        {
            for (int i = 1; i <= star2; i++) /// star
            {
                printf("-");
            }
        }
        ns++;
        star2 -= 2;
        printf("\n");
    }
    return 0;
}