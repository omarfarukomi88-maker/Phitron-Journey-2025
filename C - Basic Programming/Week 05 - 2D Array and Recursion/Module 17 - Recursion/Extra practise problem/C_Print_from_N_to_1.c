#include<stdio.h>
void show(int n)
{
   
    printf("%d",n);
     if(n==1)
    {
        return;
    }
    printf(" ");
    show(n-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    show(n);
    return 0;
}