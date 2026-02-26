#include<stdio.h>
#include<limits.h>
int rec(int ar[],int n,int i,int max)
{  if(i==n)
    {
        return max;
    }
    if(ar[i]>max)
    {
        max=ar[i];
    }
   int val= rec(ar,n,i+1,max);
}
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
   int ans= rec(ar,n,0,INT_MIN);
   printf("%d",ans);
    return 0;
}