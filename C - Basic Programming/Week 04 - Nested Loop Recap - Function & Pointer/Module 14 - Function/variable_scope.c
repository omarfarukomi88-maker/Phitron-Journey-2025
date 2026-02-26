#include<stdio.h>

int global=2025; //its a global verriable 

int usf()
{
    int a=20;
    printf("userdefine a - %d\n",a); //userdefine variable are only accesable in usf scope
    printf("global varriable in usf - %d\n",global);
}

int main()
{
    int a=10;
    printf("main  a - %d\n",a); //main func varriable are accesable in main functoin 
    printf("global varriable in main- %d\n",global);
    usf();
    return 0;
}