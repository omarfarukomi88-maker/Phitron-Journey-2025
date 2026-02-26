#include<stdio.h>
void print(int ar,int n)
{
    
    printf("%d",n);
    if(n==1)
    {
        return;
    }
    printf(" ");
    print(ar,n-1);
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
    print(ar,n);
    return 0;
}