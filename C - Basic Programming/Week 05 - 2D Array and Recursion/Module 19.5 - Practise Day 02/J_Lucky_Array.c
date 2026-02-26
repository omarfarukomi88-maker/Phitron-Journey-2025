#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }

    int min=INT_MAX;
    for(int i =0;i<n;i++)
    {
        if(min>ar[i])
        {
            min=ar[i];
        }
    }
   // printf("%d",min);
    int count=0;

    for(int i=0;i<n;i++)
    {
        if(ar[i]==min)
        {
            count++;
        }
    }
    if(count%2==0)
    {
        printf("Unlucky");
    }
    else
    {
        printf("Lucky");
    }
    return 0;
}