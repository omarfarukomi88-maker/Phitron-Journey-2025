#include <stdio.h>
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int p_sum = 0;
    int s_sum = 0;
    int a_sum = 0;
    int flag = 0;
    if (m == n)
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                {
                    p_sum += arr[i][j];
                }
                if (i + j == m - 1)
                {
                    s_sum += arr[i][j];
                }
                if (i != j && i + j != m - 1)
                {
                    a_sum += arr[i][j];
                }
            }
        }
        // printf("%d %d %d", p_sum, s_sum, a_sum);
        if (p_sum == m && s_sum == m && a_sum == 0)
        {
            printf("YES\n");
            flag = 1;
        }
    }
    if (flag == 0)
    {
        printf("NO\n");
    }
    return 0;
}