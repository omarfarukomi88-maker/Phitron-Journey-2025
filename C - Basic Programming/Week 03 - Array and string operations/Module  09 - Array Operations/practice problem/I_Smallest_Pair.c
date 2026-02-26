#include<stdio.h>
#include<limits.h>
int main()
{
   
   int test;
   scanf("%d",&test);
   
for(int i=0;i<test;i++)     //for test case
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ar[i]); //input array
    }

    long int min=LONG_MAX;     //long max for compare minimum

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(min>ar[i]+ar[j]+j-i)
            {
                min=ar[i]+ar[j]+j-i;
            }
        }
    }

    printf("%d\n",min);
 
    
}
   
    return 0;
}
