#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int ct2=0;
    int ct3=0;
    for(int i=0;i<n;i++)
    {
        if(ar[i]%2==0)
        {
            ct2++;
           // ar[i]=0;
        }
        else if(ar[i]%3==0)
        {
            ct3++;
           // ar[i]=0;
        }
    }
    printf("%d %d",ct2,ct3);
    return 0;
}