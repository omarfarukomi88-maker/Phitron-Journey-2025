#include<stdio.h>
int main()
{   
    int a=10;
    int b=5;
    int a1= a > b;//greater than
    printf("%d\n",a1);

    int a2= a < b;//less then
    printf("%d\n",a2);

    int a3= a >= b;//greater than or equal
    printf("%d\n",a3);

    int a4= a <= b;//less than or equal
    printf("%d\n",a4);

    int a5= a == b;//is equal to
    printf("%d\n",a5);

    int a6= a != b;//not equal to
    printf("%d\n",a6);


    
    return 0;
}