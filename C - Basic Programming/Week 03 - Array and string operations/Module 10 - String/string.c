#include<stdio.h>
int main()
{
    // int n;
    // scanf("%d",&n);
    char ar[5];
    for(int i=0;i<5;i++)    //string or char array is like array but string is more power full 
    {
        scanf("%c",&ar[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("%c ",ar[i]);
    }
    return 0;
}