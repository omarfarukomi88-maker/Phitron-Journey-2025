#include<stdio.h>
int main()
{
    int i=1;
    while(i<=100)
    {
        if(i%2==0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }
        i++;
    }
}