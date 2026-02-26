#include <stdio.h>
int main()
{
    int x = 10;
    printf("%d\n", x);  //print value
    printf("%p\n", &x); //print variable address

//  pointer syntex
//  varriable_data_type  * pointer_name ; 
//  assign in pointer with & sign
//  pointer formate spechifire is (p)
//  print any variable address with & sign 

    int *ptr;    //deaclare a pointer variable
    ptr=&x;      //assign variable addrasse in pointer

    printf("%p\n",ptr); //print varriable addrase throgh pointer
    printf("%p\n",&ptr);  //print pointer addrasse

    printf("%d",*ptr);  //printf value using pointer its dereferincing

    return 0;
}