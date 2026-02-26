#include <stdio.h>
#include <math.h>
int main()
{
    int matrix[5][5];
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    int x2 = 0;
    int y2 = 0;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (matrix[i][j] == 1)
            {
                x2 = i;
                y2 = j;
            }
        }
    }
    int x1 = 3;
    int y1 = 3;
    int step = abs(x2 - x1) + abs(y2 - y1);
    printf("%d", step);

    return 0;
}