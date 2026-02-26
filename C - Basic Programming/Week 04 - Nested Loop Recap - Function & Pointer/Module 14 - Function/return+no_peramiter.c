#include<stdio.h>

int sum() //no parameter 
{   
    int a,b;
    scanf("%d %d",&a,&b);
    int ans=a+b;
    return ans;
}

int main()
{
    int res=sum();
    printf("%d",res);
    return 0;
}