#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sp=1;
    int val=n+n-1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=val;j++)
        {
            printf("*");
        }
        
        printf("\n");
        for(int i=0;i<sp;i++)
        {
            printf(" ");
        }
        sp++;
        val-=2;
    }
    return 0;
}