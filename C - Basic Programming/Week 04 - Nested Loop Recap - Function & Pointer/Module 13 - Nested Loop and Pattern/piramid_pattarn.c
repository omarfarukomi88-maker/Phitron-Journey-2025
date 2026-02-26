#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);    //koto line print hobe tar input
   int star = 1; //star line a koyta kore print hobe
   // int space = n; //space line akoyta kore print hobe
    for (int i = 1; i <= n; i++)    //ata line print korar loop
    {
        // for (int k = 1; k < space; k++) //space print korar cz apace age print hobe
        // {
        //     printf(" ");
        // }
        // for (int j = 1; j <= star; j++) // printing star
        // {
        //     printf("*");
        // }
        // printf("\n");
        // star += 2;   //adding 2 star cz its peramid style
        // space--; // decresing space for the shape
for(int k=n-1;k>=i;k--)
{
    printf(" ");
}
for(int j=1;j<=star;j++)
{
printf("*");
}
printf("\n");
star+=2;

    }
    return 0;
}