#include<stdio.h>
#include<math.h>
int main()
{
int matrix[5][5];
for(int i=1;i<=5;i++)
{
    for(int j=1;j<=5;j++)
    {
        scanf("%d",&matrix[i][j]);
    }
}
int count =0;
for(int i=1;i<=5;i++)
{
    for(int j=1;j<=5;j++)
    {
        if(matrix[i][j]==1)
        {
            for(int k=i+1,l=j+1;i!=3&&j!=3;k++,j++)
            {
                matrix[k][l]==matrix[i][j];
                count++;
            }
        }
    }
}
printf("%d",count);

    return 0;
}
