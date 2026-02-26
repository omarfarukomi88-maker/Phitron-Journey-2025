#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    //staright pattern
   // int star =1;
    // for(int i=1;i<=n;i++)   //koyta line print korte hobe tarjonno ai loop
    // {   
    //     for(int j=1;j<=star;j++) //j 1 star 1 so print 1* then star ++ hobe avabe * print hobe.. 
    //     {
    //         printf("*");    //proti line a star print korbe
    //     }
    //     printf("\n");   //print korar por new line 
    //     star++;
    // }

    //reverse pattern 
    int rvp=n;
    for(int i=1;i<=n;i++)
    {   
        for(int i=1;i<=rvp;i++)
        {
            printf("*");
        }
        printf("\n");
        rvp--;
    }

    return 0;
}