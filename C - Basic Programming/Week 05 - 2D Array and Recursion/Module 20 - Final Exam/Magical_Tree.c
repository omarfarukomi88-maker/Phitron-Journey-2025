#include <stdio.h>
int main()
{
    int x; //user input
    int n = 5; //n value 5 fixd
    scanf("%d", &x); //user x input
    for (int i = 1; i <= x; i += 2) // add 1 with 5,, every odd value counting
    {
        n = n + 1;
    }

    int sp = n; //spcae with counting update n
    int str = 1; //print star
    for (int i = 0; i < n; i++) // for new line update n
    {
        for (int j = sp; j > 1; j--) //print space with from n-1
        {
            printf(" ");
        }
        sp--; //space -- for shape

        for (int k = 1; k <= str; k++) //print star by piramid shape
        {
            printf("*");
        }
        str += 2; //add 2 for shaping 
        printf("\n"); //new line;
    }
    int fxn = 5; //fixd 5 for under the peramid print and space
    for (int o = 0; o < fxn; o++) //for 5 line
    {
        for (int l = 0; l < fxn; l++) //print evry line 5 space
        {
            printf(" ");
        }
        for (int m = 0; m < x; m++) //print star what user input
        {
            printf("*");
        }
        printf("\n"); //new line
    }

    return 0;
}