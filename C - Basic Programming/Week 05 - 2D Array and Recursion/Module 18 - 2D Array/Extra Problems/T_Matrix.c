#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
              scanf("%d",&ar[i][j]);
        }
    }
    int prim_digonal=0;
    int sec_digonal=0;

      for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
              if(i==j)
              {
                prim_digonal+= ar[i][j];
              }
              else if(i+j==n-1)
              {
                sec_digonal +=ar[i][j];
              }
        }
       
    }
   int value=abs(prim_digonal-sec_digonal);
printf("%d\n",value);
    return 0;
}