#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    // for(int i=0;i<r;i++)
    // {
    //     for(int j=0;j<c;j++)
    //     {
    //         if(arr[i][j]!=0)
    //         {
    //             printf("this is not zero matrix\n");
    //             return 0;
    //         }
    //     }
    // }
    // printf("This is a zero matrix");

    int total_val=r*c;
    int zero=0;
       for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(arr[i][j]==0)
            {
                zero ++;
            }
        }
    }
    if(total_val==zero)
    {
        printf("this is zero matrix");
    }
    else
    {
        printf("this not a zero matrix");
    }
    return 0;
}