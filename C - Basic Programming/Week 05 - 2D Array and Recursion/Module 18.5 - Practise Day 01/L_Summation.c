#include<stdio.h>
void recr(int arr[],int n,int i,long long int sum)
{
    if(i==n)
    {
        printf("%lld",sum);
        return;
    }
    sum+=arr[i];
    recr(arr,n,i+1,sum);
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    recr(arr,n,0,0);
    return 0;
}