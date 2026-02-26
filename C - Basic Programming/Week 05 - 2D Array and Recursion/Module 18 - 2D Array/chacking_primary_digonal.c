#include <stdio.h>
#include <stdbool.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    bool is_diagonal = true;
    if (r == c)//chacking is it sqare ot not
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++) //for cahcking value of matrix

            {
                if (i != j) //outside the digonal
                {
                    if (arr[i][j] != 0) //if not zero
                    {
                        is_diagonal = false;
                        printf("Not Diagonal Matrix\n");
                        return ;
                        
                    }
                }
            }
        }
        if (is_diagonal == true) //if true then diagonal
        {
            printf("This is Diagonal\n");
        }
    }
    else
    {
        printf("Not Diagonal Matrix\n");    //if not sqare then not diagonal
    }
    return 0;
}