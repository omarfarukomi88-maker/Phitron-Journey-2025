#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);             //input array
    }

    int i=0;
    int j=n-1;                  //decalare two varriable for the fist index and last index
                                //for the changing value first to last
    while(i<j)
    {
        int tmp=ar[i];
        ar[i]=ar[j];            // here we swap first index with last index
        ar[j]=tmp;
        i++;
        j--;
    }

     for(int i=0;i<n;i++)
    {
        printf("%d ",ar[i]);         //print the exat array
    }
    return 0;
}