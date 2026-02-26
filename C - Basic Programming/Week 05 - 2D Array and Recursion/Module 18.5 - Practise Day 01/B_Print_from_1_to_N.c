#include<stdio.h>
void print(int n,int i)
{   
   
    printf("%d\n",i);
     if(i==n)
    {
        return;
    }
    print(n,i+1);
}
int main()
{
    int n;
    scanf("%d",&n);

    print(n,1);
    return 0;
}