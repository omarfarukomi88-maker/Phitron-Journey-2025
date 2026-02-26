#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sp=n-1;
    int val=1;
 int rev=n+n-1;
 int  ch ='A';
    for(int i=0;i<n;i++)
    {
//     * 
//    * * 
//   * * * 
//  * * * * 
// * * * * * 
        // for(int j=1;j<=sp;j++)
        // {
        //     printf(" ");
        // }
        // for(int k=1;k<=val;k++)
        // {
        //     printf("* ");
        // }
        // printf("\n");
        // sp--;
        // val++;

//     1 
//    1 2 
//   1 2 3 
//  1 2 3 4 
// 1 2 3 4 5 
        //  for(int j=1;j<=sp;j++)
        // {
        //     printf(" ");
        // }
        // for(int k=1;k<=val;k++)
        // {
        //     printf("%d ",k);
        // }
        // printf("\n");
        // sp--;
        // val++;

// *****
//  ****
//   ***
//    **
//     *
        // for(int k=n;k>=val;k--)
        // {
        //     printf("*");
        // }
        // printf("\n");
        //  for(int j=1;j<=val;j++)
        // {
        //     printf(" ");
        // }
        // sp--;
        // val++;
// *********
//  *******
//   *****
//    ***
//     *
        // for(int i=1;i<=rev;i++)
        // {
        //     printf("*");
        // }
        // printf("\n");
        // for(int j=1;j<=val;j++)
        // {
        //     printf(" ");
        // }
        // rev-=2;
        // val++;
// A 
// A B 
// A B C 
// A B C D 
// A B C D E 

        for(int i='A';i<=ch;i++)
        {
            printf("%c ",i);
        }
        printf("\n");
        ch++;
    }
    return 0;
}