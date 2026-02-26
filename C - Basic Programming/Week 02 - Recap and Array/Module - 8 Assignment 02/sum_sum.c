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
int psum=0;
int nsum=0;
    for(int i=0;i<n;i++)
    {
        if(ar[i]>0)
        {
            psum=psum+ar[i];
        }
        else if(ar[i]<0)
        {
            nsum=nsum+ar[i];
        }
    }
    printf("%d ",psum);
    printf("%d",nsum);
    

    return 0;
}