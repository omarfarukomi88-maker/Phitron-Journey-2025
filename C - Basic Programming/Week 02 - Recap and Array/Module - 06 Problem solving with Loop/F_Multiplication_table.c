#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1;i<=12;i++)
    {
        int line= n*i; 
        printf("%d * %d = %d\n",n,i,line);
    }
    return 0;
}