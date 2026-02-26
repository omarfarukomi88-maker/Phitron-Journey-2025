#include<stdio.h>
int main()
{

   // float a=15;
   int a=13;
    int b=2;

    int sum=a+b;
    printf("summitation = %d\n",sum);
    int sub=a-b;
    printf("subtraction = %d\n",sub);
    int mul=a*b;
    printf("multipication = %d\n",mul);
    float div=(float) a/b;//type casting
    printf("division = %.2f\n",div);

    return 0;
}