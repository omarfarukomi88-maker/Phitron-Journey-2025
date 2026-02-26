#include <stdio.h>
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

    // if(r==1)         //chaking row matrix
    // {
    //     printf("This is a row matrix\n");
    // }
    // else
    // {
    //     printf("This is not a  row matrix\n");
    // }

    //     if(c==1)     //chaciking colomn matrix
    // {
    //     printf("This is a column matrix\n");
    // }
    // else
    // {
    //     printf("This is not a  column matrix\n");
    // }

    if (r == c) // chacking sqare matrix
    {
        printf("This is a sqare matrix\n");
    }
    else
    {
        printf("This is not a  sqare matrix\n");
    }

    return 0;
}