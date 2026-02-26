#include<stdio.h>
int main()
{
    char a[101],b[101];
    scanf("%s %s",&a,&b);

   // printf("%d",strcmp(a,b)); //strcmp value return kore
                                // (1) positive no = porer ta soto
                                // (-1) negative no = agerta soto
                                // (0) zero = dutoi shoman

    int value= strcmp(a,b);

    if(value>0)
    {
        printf("B is smaller");
    }
    else if(value<0)
    {
        printf("A is smaller");
    }
    else if(value==0)
    {
        printf("Equal");
    }
    return 0;
}