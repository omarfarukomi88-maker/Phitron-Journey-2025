#include <stdio.h>
void mello()
{
    printf("mello\n");
} // return gello
void gello()
{
    printf("gello\n");
    mello(); // call mello
} // return hello
void hello()
{
    printf("hello\n");
    gello(); // call gello
} // return main
int main()
{
    printf("Hi\n");
    hello(); // call hello
    return 0;
}