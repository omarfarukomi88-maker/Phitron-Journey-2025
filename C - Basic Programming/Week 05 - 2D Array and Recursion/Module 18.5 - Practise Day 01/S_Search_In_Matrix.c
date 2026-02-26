#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int ar[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    int x;
    scanf("%d",&x);
    int flug=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           if(ar[i][j]==x)
           {
            flug=1;
                printf("will not take number\n");
                return 0;
           }
        }
    }
    if(flug==0)
    {
        printf("will take number\n");
    }
 
    return 0;
}