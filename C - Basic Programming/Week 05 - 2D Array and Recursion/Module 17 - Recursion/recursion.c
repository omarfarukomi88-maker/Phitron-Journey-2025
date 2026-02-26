#include <stdio.h>
// func er vitore theke oi func ke call korake recursion bole
void hello()
{
    printf("hello\n");
    hello(); // cal hello   stack overflow and loop are creat
} // return hello
int main()
{
    printf("Hi\n");
    hello(); // call hello
}